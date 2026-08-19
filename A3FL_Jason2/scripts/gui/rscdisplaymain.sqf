#include "\a3\Ui_f\hpp\defineResincl.inc"
#include "\a3\Ui_f\hpp\defineResinclDesign.inc"
#include "\a3\Ui_f\hpp\defineDIKCodes.inc"

#define MENU_TIME		0.2
//--- Delay before another spotlight rolls in
#define SPOTLIGHT_DELAY		10
//--- Commit time of spotlight change animation
#define SPOTLIGHT_MOVE		0.7
//--- Commit time of spotlight change animation when triggered manually
#define SPOTLIGHT_MOVE_USER	0.3
//--- Commit time of spotlight button when appearing
#define SPOTLIGHT_BUTTON_IN	0.1
//--- Commit time of spotlight button when disappearing
#define SPOTLIGHT_BUTTON_OUT	0.3
//--- Spotlight picture zoom on hover (disabled at this moment)
#define SPOTLIGHT_ZOOM		1.2
//--- Commit time of the zoom animation (disabled at this moment)
#define SPOTLIGHT_TIME		0.1

disableserialization;
private _mode = _this select 0;
private _params = _this select 1;
private _class = _this select 2;

switch _mode do
{
	//--- Main menu display is loaded at start of the game and when returning from the profile menu
	case "onLoad":
	{
		_display = _params select 0;

		//--- When pixelGrid command is unavailable, set a replacement variable and redraw. For use with an older EXE.
		if (count supportinfo "n:pixelGrid" == 0) then {
			pixelGrid = 16;
			{
				_ctrl = _x select 0;
				_cfg = _x select 1;
				if !(isnull (_cfg >> "sizeEx")) then {
					_ctrl ctrlsetfontheight (if (isnumber (_cfg >> "sizeEx")) then {getnumber (_cfg >> "sizeEx")} else {call compile gettext (_cfg >> "sizeEx")});
				};
				if (ctrltype _ctrl in [13,16]) then {
					_ctrl ctrlsettooltip toupper gettext (_cfg >> "text")
				};
				_ctrl ctrlsetposition [
					if (isnumber (_cfg >> "x")) then {getnumber (_cfg >> "x")} else {call compile gettext (_cfg >> "x")},
					if (isnumber (_cfg >> "y")) then {getnumber (_cfg >> "y")} else {call compile gettext (_cfg >> "y")},
					if (isnumber (_cfg >> "w")) then {getnumber (_cfg >> "w")} else {call compile gettext (_cfg >> "w")},
					if (isnumber (_cfg >> "h")) then {getnumber (_cfg >> "h")} else {call compile gettext (_cfg >> "h")}
				];
				_ctrl ctrlcommit 0;
			} foreach ([_display,configfile >> "RscDisplayMain"] call bis_fnc_controlConfigs);

			_ctrlWarning = _display ctrlcreate ["RscStructuredText",-1];
			_ctrlWarning ctrlsetposition [0,0.8,1,0.1];
			_ctrlWarning ctrlcommit 0;
			_ctrlWarning ctrlsetstructuredtext parsetext "<t align='center'>MAIN MENU IS NOT DISPLAYED CORRECTLY BECAUSE OLDER EXE IS USED.<br />NAVIGATE BY TOOLTIPS.</t>";
			_ctrlWarning ctrlsettextcolor [1,0.5,0,1];
		};

		//--- Reset grey background when returning from the profile menu (cutscene didn't actually change)
		missionnamespace setvariable ["RscDisplayMain_grey",true];

		//--- System init
		with uinamespace do {

			//--- Get colors and grids
			true call bis_fnc_displayColorGet;
			false call bis_fnc_guiGridToProfile;

			//--- Apply colors to main menu
			[configfile >> _class,_display] call bis_fnc_displayColorSet;
		};

		//--- Menu Bar Init
		{
			_ctrlGroup = _display displayctrl (_x select 0);
			_ctrlGroupPos = ctrlposition _ctrlGroup;
			_ctrlTitle = _display displayctrl (_x select 1);
			_ctrlTitleIcon = _display displayctrl (_x select 2);
			{
				_handler = _x;
				{
					_x ctrladdeventhandler [
						_handler,
						format ["with uinamespace do {['menuEnter',[_this select 0,%1],''] call RscDisplayMain_script;};",_ctrlGroupPos select 3]
					];
				} foreach [_ctrlTitle,_ctrlTitleIcon];
			} foreach ["mouseenter","setfocus"];

			_ctrlGroupPos set [3,0];
			_ctrlGroup ctrlsetposition _ctrlGroupPos;
			_ctrlGroup ctrlcommit 0;
		} foreach [
			[IDC_MAIN_GROUP_SINGLEPLAYER,	IDC_MAIN_TITLE_SINGLEPLAYER,	IDC_MAIN_TITLEICON_SINGLEPLAYER],
			[IDC_MAIN_GROUP_MULTIPLAYER,	IDC_MAIN_TITLE_MULTIPLAYER,	IDC_MAIN_TITLEICON_MULTIPLAYER],
			[IDC_MAIN_GROUP_TUTORIALS,	IDC_MAIN_TITLE_TUTORIALS,	IDC_MAIN_TITLEICON_TUTORIALS],
			[IDC_MAIN_GROUP_OPTIONS,	IDC_MAIN_TITLE_OPTIONS,		IDC_MAIN_TITLEICON_OPTIONS],
			[IDC_MAIN_GROUP_SESSION,	IDC_MAIN_TITLE_SESSION,		IDC_MAIN_TITLEICON_SESSION]
		];

		//--- Info panels
		{
			_ctrlInfo = _display displayctrl _x;
			{
				_ctrlButton = _ctrlInfo controlsGroupCtrl _x;
				_ctrlButton ctrladdeventhandler ["mouseEnter",{with uinamespace do {["infoEnter",_this,""] call RscDisplayMain_script;};}];
				_ctrlButton ctrladdeventhandler ["setfocus",{with uinamespace do {["infoEnter",_this,""] call RscDisplayMain_script;};}];
				_ctrlButton ctrladdeventhandler ["mouseExit",{with uinamespace do {["infoExit",_this,""] call RscDisplayMain_script;};}];
				_ctrlButton ctrladdeventhandler ["killfocus",{with uinamespace do {["infoExit",_this,""] call RscDisplayMain_script;};}];
				_ctrlButton ctrladdeventhandler ["buttonclick",{with uinamespace do {["infoClick",_this,""] call RscDisplayMain_script;};}];
			} foreach [
				IDC_MAIN_INFO_BUTTON,
				IDC_MAIN_INFO_BUTTON_DEV
			];
		} foreach [
			IDC_MAIN_INFO_MODS,
			IDC_MAIN_INFO_DLCS,
			IDC_MAIN_INFO_DLCSOWNED,
			IDC_MAIN_INFO_NEWS,
			IDC_MAIN_INFO_VERSION
		];

		//--- Version
		_ctrlInfoVersion = _display displayctrl IDC_MAIN_INFO_VERSION;
		_ctrlInfoVersionButton = _ctrlInfoVersion controlsGroupCtrl IDC_MAIN_INFO_BUTTON;
		_ctrlInfoVersionButtonDev = _ctrlInfoVersion controlsGroupCtrl IDC_MAIN_INFO_BUTTON_DEV;

		//--- Dev version
		_versionBuild = productVersion select 4;
		_version = productVersion select 2;
		if (_versionBuild == "Development") then {
			_version = productVersion select 3;
			_versionName = if (cheatsenabled) then {localize "STR_A3_RscDisplayMain_Version_Internal"} else {localize "STR_A3_RSCDISPLAY_LOADING_DEV"};

			_ctrlVersion = _display displayCtrl IDC_MAIN_VERSION;
			_ctrlVersion ctrlshow false;

			_ctrlVersionDev = _display displayCtrl IDC_MAIN_VERSION_DEV;
			_ctrlVersionDev ctrlshow true;
			_ctrlVersionDev ctrlsettext format ["%1\n%2",_versionName,ctrltext _ctrlVersion];

			_ctrlInfoVersionButton ctrlshow false;
			_ctrlInfoVersionButtonDev ctrlshow true;
		};

		//--- New version
		if (_version != profilenamespace getvariable ["RscDisplayMain_version" + _versionBuild,0]) then {
			_ctrlInfoVersionNotification = _ctrlInfoVersion controlsGroupCtrl IDC_MAIN_INFO_NOTIFICATION;
			_ctrlInfoVersionNotification ctrlshow true;
			_ctrlInfoVersionButton ctrlsettooltip format ["%1\n%2",localize "STR_A3_RscDisplayMain_InfoVersion_New_tooltip",localize "STR_A3_RscDisplayMain_InfoVersion_tooltip"];
			_ctrlInfoVersionButtonDev ctrlsettooltip format ["%1\n%2",localize "STR_A3_RscDisplayMain_InfoVersion_New_tooltip",localize "STR_A3_RscDisplayMain_InfoVersion_tooltip"];
		};

		//--- Mouse Area Init
		_ctrlMouseArea = _display displayctrl IDC_MAIN_MOUSEAREA;
		//_ctrlMouseArea ctrladdeventhandler ["mouseenter",{with uinamespace do {["menuClear",[ctrlparent (_this select 0),0],""] call RscDisplayMain_script;};}];
		_ctrlMouseArea ctrladdeventhandler ["mousebuttondown",{with uinamespace do {["menuClear",[ctrlparent (_this select 0),0],""] call RscDisplayMain_script;};}];
		//["refresh",[_display],""] call RscDisplayMain_script;

		//--- Close menu when focus is set to any non-menu element apart from the mouse area
		_menuControlIDCs = [
			IDC_MAIN_GROUP_SINGLEPLAYER,
			IDC_MAIN_GROUP_MULTIPLAYER,
			IDC_MAIN_GROUP_TUTORIALS,
			IDC_MAIN_GROUP_OPTIONS,
			IDC_MAIN_GROUP_SESSION,

			IDC_MAIN_TITLE_SINGLEPLAYER,
			IDC_MAIN_TITLE_MULTIPLAYER,
			IDC_MAIN_TITLE_TUTORIALS,
			IDC_MAIN_TITLE_OPTIONS,
			IDC_MAIN_TITLE_SESSION,

			IDC_MAIN_TITLEICON_SINGLEPLAYER,
			IDC_MAIN_TITLEICON_MULTIPLAYER,
			IDC_MAIN_TITLEICON_TUTORIALS,
			IDC_MAIN_TITLEICON_OPTIONS,
			IDC_MAIN_TITLEICON_SESSION
		];
		{
			if (!(ctrlidc _x in _menuControlIDCs) && !(ctrlidc (ctrlParentControlsGroup _x) in _menuControlIDCs)) then {
				_x ctrladdeventhandler ["mouseenter",{with uinamespace do {["menuClear",[ctrlparent (_this select 0),0],""] call RscDisplayMain_script;};}];
				_x ctrladdeventhandler ["setfocus",{with uinamespace do {["menuClear",[ctrlparent (_this select 0),0],""] call RscDisplayMain_script;};}];
			};
		} foreach (allcontrols _display - [_ctrlMouseArea]);

		//--- Init event handlers
		_display displayaddeventhandler ["childdestroyed",{with uinamespace do {["refresh",_this,""] call RscDisplayMain_script;}}];
		//_display displayaddeventhandler ["keydown",{with uinamespace do {["keyDown",_this,""] call RscDisplayMain_script;}}];
		_display displayaddeventhandler ["mousemoving",{with uinamespace do {["mousemoving",_this,""] call RscDisplayMain_script;}}];
		_display displayaddeventhandler ["mouseholding",{with uinamespace do {["mousemoving",_this,""] call RscDisplayMain_script;}}];
		_display displayaddeventhandler ["childdestroyed","with uinamespace do {['childDestroyed',_this,''] call RscDisplayMain_script;};"];
	};

	case "refresh": {
		_display = _params select 0;
		_ctrlGroupSpotlight1 = _display displayctrl IDC_MAIN_SPOTLIGHT_GROUP_1;
		_ctrlGroupSpotlight2 = _display displayctrl IDC_MAIN_SPOTLIGHT_GROUP_2;
		_ctrlGroupSpotlight3 = _display displayctrl IDC_MAIN_SPOTLIGHT_GROUP_3;

		//--- When screen is too small, show menu bar icons, not texts
		_ctrlTitleOptions = _Display displayctrl IDC_MAIN_TITLE_OPTIONS;
		_ctrlTitleSession = _Display displayctrl IDC_MAIN_TITLE_SESSION;
		_showMenuIcons = (((ctrlposition _ctrlTitleOptions select 0) + (ctrlposition _ctrlTitleOptions select 2)) > (ctrlposition _ctrlTitleSession select 0));
		{(_display displayctrl _x) ctrlshow !_showMenuIcons;} foreach [IDC_MAIN_TITLE_SINGLEPLAYER,IDC_MAIN_TITLE_MULTIPLAYER,IDC_MAIN_TITLE_TUTORIALS,IDC_MAIN_TITLE_OPTIONS];
		{(_display displayctrl _x) ctrlshow _showMenuIcons;} foreach [IDC_MAIN_TITLEICON_SINGLEPLAYER,IDC_MAIN_TITLEICON_MULTIPLAYER,IDC_MAIN_TITLEICON_TUTORIALS,IDC_MAIN_TITLEICON_OPTIONS];

		//--- Init editor spotlight
		_ctrlPictureSpotlight3 = _ctrlGroupSpotlight3 controlsGroupCtrl IDC_MAIN_SPOTLIGHT_PICTURE;
		_ctrlVideoSpotlight3 = _ctrlGroupSpotlight3 controlsGroupCtrl IDC_MAIN_SPOTLIGHT_VIDEO;
		if (worldname == "") then {
			//--- Empty world
			_spotlightDefault = uinamespace getvariable ["RscDisplayMain_spotlightDefault",[]];
			_spotlightDefault3 = _spotlightDefault param [2,[]];
			_ctrlPictureSpotlight3 ctrlsettext (_spotlightDefault3 param [0,""]);
			_ctrlVideoSpotlight3 ctrlsettext (_spotlightDefault3 param [1,""]);
		} else {
			//--- Show world picture and video
			_worldPicture = gettext (configfile >> "cfgworlds" >> worldname >> "pictureMap");
			_ctrlPictureSpotlight3 ctrlsettext _worldPicture;
			_previewVideo = gettext (configfile >> "cfgworlds" >> worldname >> "previewVideo");
			_ctrlVideoSpotlight3 ctrlsettext _previewVideo;
		};

		//--- Clear spotlight
		{
			//["playVideo",[_x,false],""] call RscDisplayMain_script;
			ctrlDelete (_x controlsGroupCtrl 222);
		} foreach ([_ctrlGroupSpotlight2,_ctrlGroupSpotlight3] + (_ctrlGroupSpotlight1 getvariable ["spotlights",[]]));

		//--- Clear menus
		["menuClear",[ctrlparent _ctrlGroup,0],""] call RscDisplayMain_script;

		//--- Set neutral focus
		_ctrlMouseArea = _display displayctrl IDC_MAIN_MOUSEAREA;
		ctrlsetfocus _ctrlMouseArea;

		//--- Show Welcome screen
		_showWelcomeScreen = [_display] call (uinamespace getvariable "bis_fnc_showWelcomeScreen");

		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		// PLACE CONTROLS MESSAGE BOXES HERE!
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		if (!_showWelcomeScreen) then {

			//--- Show Jets control preset prompt
			//---- Apex prompt (RscMsgBoxKeysPreset / RscDisplayKeysPresetMsgBox_shown)
			//---- Jets prompt (RscDisplayKeysPresetMsgBoxJets / RscDisplayKeysPresetMsgBoxJets_shown)

			// Todo: Code cleanup
			// Todo: Make this generic in bis_fnc_controlPrompt which can be triggered from anywhere (_controls, _text, _profileVar, _maxPrompts, _parentDisplay)
			private _presetCustomInfoPanel_count = profilenamespace getvariable ["RscMsgBoxKeysPresetCustomInfoPanel_shown",0];
			if (_presetCustomInfoPanel_count < 2) then
			{
				private _listRightVehicleDisplay = actionKeysNamesArray ["ListRightVehicleDisplay", 1];
				private _nextModeRightVehicleDisplay = actionKeysNamesArray ["NextModeRightVehicleDisplay", 1];
				if (count _listRightVehicleDisplay == 0 || count _nextModeRightVehicleDisplay == 0) then
				{
					_display ctrlCreate ["RscMsgBoxKeysPresetCustomInfoPanel",-1];
					profilenamespace setVariable ["RscMsgBoxKeysPresetCustomInfoPanel_shown", (_presetCustomInfoPanel_count + 1)];
					saveprofilenamespace;
				};

				//--- Check if Apex keys are assigned
				/*_match = true;
				{
					_force = false;
					_a = getarray _x;
					{
						if (_x isequaltype "") then {
							_a set [_foreachindex,call compile _x]; //--- Convert macro to single number
						} else {
							if (_x isequaltype []) then {_force = true;}; //--- Force match when format is different (i.e., it's a key combination)
						};
					} foreach _a;
					_b = actionkeys (configname _x);
					_match = _match && (_a isequalto _b || _force);
				} foreach configproperties [configfile >> "CfgDefaultKeysPresets" >> "Arma3Apex" >> "Mappings","isarray _x",false];

				//--- Show prompt when they aren't
				if !(_match) then {_display ctrlcreate ["RscMsgBoxKeysPresetJets",-1];};

				//--- Prevent this int he future (if user is already using Apex controls, he shouldn't get the message after changing it)
				profilenamespace setvariable ["RscDisplayKeysPresetMsgBoxJets_shown",true];
				saveprofilenamespace;*/
			} else {
				//--- Show Hold breath controls preset prompt
				if (
					!(profilenamespace getvariable ["RscDisplayKeyMapMsgBox_shown",false])
					&&
					{
						!(DIK_LSHIFT in actionkeys "holdbreath")
						||
						!((DIK_SPACE in actionkeys "action") || (DIK_F in actionkeys "action"))
						||
						!(65538 in actionkeys "actioncontext")
					}
				) then {
					_display createDisplay "RscDisplayKeyMapMsgBox";
					profilenamespace setvariable ["RscDisplayKeyMapMsgBox_shown", true];
					saveprofilenamespace;
				};
			};
		};
	};
	case "keyDown": {
		_display = _params select 0;
		_key = _params select 1;
		switch _key do {
			case DIK_ESCAPE: {
				[_display] spawn {
					_display = _this select 0;
					_prompt = ["Hm?",nil,true,true,_display,true] call (uinamespace getvariable "bis_fnc_guiMessage");
					if (_prompt) then {
						ctrlactivate (_display displayctrl IDC_MAIN_QUIT);
					};
				};
			};
		};
		false
	};
	case "menuEnter": {
		private _ctrlTitle = _params select 0;
		private _display = ctrlparent _ctrlTitle;
		["menuClear",[_display],""] call RscDisplayMain_script;
		private _ctrlGroup = _display displayctrl (ctrlidc _ctrlTitle - 10);
		if (isnull _ctrlGroup) then {_ctrlGroup = _display displayctrl (ctrlidc _ctrlTitle - 110)};
		private _ctrlGroupPos = ctrlposition _ctrlGroup;
		//--- Move buttons group next to the title button (not for the session group, is too far right)
		if (ctrlidc _ctrlTitle != IDC_MAIN_TITLE_SESSION) then {
			_ctrlGroupPos set [0,ctrlposition _ctrlTitle select 0];
			_ctrlGroup ctrlsetposition _ctrlGroupPos;
			_ctrlGroup ctrlcommit 0;
		};
		_ctrlGroupPos set [3,_params select 1];
		_ctrlGroup ctrlsetposition _ctrlGroupPos;
		_ctrlGroup ctrlcommit MENU_TIME;
	};
	case "menuExit": {
		private _ctrlTitle = _params select 0;
		private _commitTime = _params param [1,MENU_TIME];
		private _ctrlGroup = _display displayctrl (ctrlidc _ctrlTitle - 10);
		if (isnull _ctrlGroup) then {_ctrlGroup = _display displayctrl (ctrlidc _ctrlTitle - 110)};
		private _ctrlGroupPos = ctrlposition _ctrlGroup;
		_ctrlGroupPos set [3,0];
		_ctrlGroup ctrlsetposition _ctrlGroupPos;
		_ctrlGroup ctrlcommit _commitTime;
	};
	case "menuClear": {
		private _display = _params select 0;
		private _commitTime = _params param [1,MENU_TIME];
		{
			["menuExit",[_display displayctrl _x,_commitTime],''] call RscDisplayMain_script;
		} foreach [
			IDC_MAIN_TITLE_SINGLEPLAYER,
			IDC_MAIN_TITLE_MULTIPLAYER,
			IDC_MAIN_TITLE_TUTORIALS,
			IDC_MAIN_TITLE_OPTIONS,
			IDC_MAIN_TITLE_SESSION
		];
	};
	case "spotlightInit": {
		_display = _params select 0;

		//--- Init custom spotlight
		_ctrlGroupSpotlight1 = _display displayctrl IDC_MAIN_SPOTLIGHT_GROUP_1;
		_cfgSpotlights = [];
		{
			_condition = gettext (_x >> "condition");
			if (_condition == "") then {_condifiton = "true";};
			[_condition,_cfgSpotlights,_x] call {
				private ["_display","_ctrlGroupSpotlight1","_ctrlGroupSpotlight2","_ctrlGroupSpotlight3","_condition","_cfgSpotlights","_x"];
				if ([] call compile (_this select 0)) then {(_this select 1) append [_this select 2];};
			};
		} foreach (("isclass _x" configclasses (configfile >> "CfgMainMenuSpotlight")) + ("isclass _x" configclasses (configfile >> "RscDisplayMain" >> "Spotlight")));

		_spotlights = [];
		{
			_cfgSpotlight = _x;
			_idc = IDC_MAIN_SPOTLIGHT_PICTURE + 100 + _foreachindex;
			_ctrlGroupSpotlightX = _display ctrlcreate ["RscMainMenuSpotlight",_idc];
			_ctrlGroupSpotlightX ctrlsetposition ctrlposition _ctrlGroupSpotlight1;
			_ctrlGroupSpotlightX ctrlcommit 0;
			_spotlights pushback _ctrlGroupSpotlightX;

			_ctrlPictureSpotlightX = _ctrlGroupSpotlightX controlsGroupCtrl IDC_MAIN_SPOTLIGHT_PICTURE;
			_ctrlPictureSpotlightX ctrlsettext gettext (_cfgSpotlight >> "picture");

			_ctrlVideoSpotlightX = _ctrlGroupSpotlightX controlsGroupCtrl IDC_MAIN_SPOTLIGHT_VIDEO;
			_ctrlVideoSpotlightX ctrlsettext gettext (_cfgSpotlight >> "video");

			_ctrlActionSpotlightX = _ctrlGroupSpotlightX controlsGroupCtrl IDC_MAIN_SPOTLIGHT_ACTION;
			_ctrlActionSpotlightX ctrlsettext toupper gettext (_cfgSpotlight >> "actionText");

			_ctrlButtonSpotlightX = _ctrlGroupSpotlightX controlsGroupCtrl IDC_MAIN_SPOTLIGHT_BUTTON;
			_ctrlButtonSpotlightX ctrlseteventhandler ["buttonclick",gettext (_cfgSpotlight >> "action")];

			_spotlightText = gettext (_cfgSpotlight >> "text");
			if (getnumber (_cfgSpotlight >> "textIsQuote") > 0) then {_spotlightText = format ["""%1""",_spotlightText];};
			if (getnumber (_cfgSpotlight >> "disableUpperCase") == 0) then {_spotlightText = toupper _spotlightText;};
			_ctrlTextSpotlightX = _ctrlGroupSpotlightX controlsGroupCtrl IDC_MAIN_SPOTLIGHT_TEXT;
			_ctrlTextSpotlightX ctrlsettext _spotlightText;
		} foreach _cfgSpotlights;

		//--- Save spotlights
		_ctrlGroupSpotlight1 setvariable ["spotlights",_spotlights];
		RscDisplayMain_spotlightID = (count _spotlights - 1);
		RscDisplayMain_spotlightTime = time + SPOTLIGHT_DELAY;

		//--- Init hardcoded spotlights
		_ctrlGroupSpotlight2 = _display displayctrl IDC_MAIN_SPOTLIGHT_GROUP_2;
		_ctrlButtonSpotlight2 = _ctrlGroupSpotlight2 controlsGroupCtrl IDC_MAIN_SPOTLIGHT_BUTTON;
		_ctrlButtonSpotlight2 ctrladdeventhandler [
			"buttonclick",
			{
				_display = ctrlparent (_this select 0);
				ctrlactivate (_display displayctrl IDC_MAIN_QUICKPLAY);
			}
		];

		_ctrlGroupSpotlight3 = _display displayctrl IDC_MAIN_SPOTLIGHT_GROUP_3;
		_ctrlButtonSpotlight3 = _ctrlGroupSpotlight3 controlsGroupCtrl IDC_MAIN_SPOTLIGHT_BUTTON;
		_ctrlButtonSpotlight3 ctrladdeventhandler [
			"buttonclick",
			{
				_display = ctrlparent (_this select 0);
				ctrlactivate (_display displayctrl IDC_SP_EDITOR);
			}
		];
		_ctrlPictureSpotlight3 = _ctrlGroupSpotlight3 controlsGroupCtrl IDC_MAIN_SPOTLIGHT_PICTURE;
		_ctrlVideoSpotlight3 = _ctrlGroupSpotlight3 controlsGroupCtrl IDC_MAIN_SPOTLIGHT_VIDEO;
		uinamespace setvariable ["RscDisplayMain_spotlightDefault",[[],[],[ctrltext _ctrlPictureSpotlight3,ctrltext _ctrlVideoSpotlight3]]];
		{
			//--- Adjust spotlight texts
			_ctrlGroup = _x;
			_ctrlGroup ctrlsetfade 0;
			_ctrlGroup ctrlcommit 0.1;
			_ctrlText = _ctrlGroup controlsGroupCtrl IDC_MAIN_SPOTLIGHT_TEXT;
			_text = ctrltext _ctrlText;
			if (_foreachindex < 2) then {_text = toupper _text;}; //--- Uppercase only QUICK PLAY and EDITOR, custom spotlights are already upped
			_ctrlText ctrlsetstructuredtext parsetext _text;
			_ctrlTextHeight = ctrltextheight _ctrlText;
			_ctrlTextPos = ctrlposition _ctrlText;
			_ctrlTextPos set [1,((ctrlposition _ctrlGroup select 3) - _ctrlTextHeight) / 2];
			_ctrlTextPos set [3,_ctrlTextHeight];
			_ctrlText ctrlsetposition _ctrlTextPos;
			_ctrlText ctrlcommit 0;
			_ctrlText ctrlenable false;
			_ctrlText setvariable ["pos",_ctrlTextPos];
			//_ctrlTextBackground = _ctrlGroup controlsGroupCtrl IDC_MAIN_SPOTLIGHT_TEXTBCG;
			//_ctrlTextBackground ctrlsetposition _ctrlTextPos;
			//_ctrlTextBackground ctrlcommit 0;

			//--- Init spotlight functionality
			_ctrlButton = _ctrlGroup controlsGroupCtrl IDC_MAIN_SPOTLIGHT_BUTTON;
			{
				_ctrlButton ctrladdeventhandler [
					_x,
					{with uinamespace do {['spotlightEnter',_this,''] call RscDisplayMain_script;};}
				];
			} foreach ["mouseenter","setfocus"];
			{
				_ctrlButton ctrladdeventhandler [
					_x,
					{with uinamespace do {['spotlightExit',_this,''] call RscDisplayMain_script;};}
				];
			} foreach ["mouseexit","killfocus"];
		} foreach ([_ctrlGroupSpotlight2,_ctrlGroupSpotlight3] + _spotlights);

		//--- Init spotlight buttons
		_ctrlSpotlightPrev = _display displayctrl IDC_MAIN_SPOTLIGHT_PREV;
		_ctrlSpotlightNext = _display displayctrl IDC_MAIN_SPOTLIGHT_NEXT;
		if (count _spotlights > 1) then {
			_ctrlSpotlightPrev ctrladdeventhandler ["buttonClick",{with uinamespace do {["spotlightChangeButton",[_this select 0,-1],""] spawn RscDisplayMain_script;};}];
			_ctrlSpotlightNext ctrladdeventhandler ["buttonClick",{with uinamespace do {["spotlightChangeButton",[_this select 0,+1],""] spawn RscDisplayMain_script;};}];
			{
				_x ctrladdeventhandler ["buttonclick",{with uinamespace do {["spotlightChangeButtonEnter",[ctrlparent (_this select 0)],""] spawn RscDisplayMain_script;};}];
				_x ctrladdeventhandler ["mouseenter",{with uinamespace do {["spotlightChangeButtonEnter",[ctrlparent (_this select 0)],""] spawn RscDisplayMain_script;};}];
				_x ctrladdeventhandler ["setfocus",{with uinamespace do {["spotlightChangeButtonEnter",[ctrlparent (_this select 0)],""] spawn RscDisplayMain_script;};}];
				_x ctrladdeventhandler ["killfocus",{with uinamespace do {["spotlightChangeButtonExit",[ctrlparent (_this select 0)],""] call RscDisplayMain_script;};}];
				_x ctrladdeventhandler ["mouseexit",{with uinamespace do {["spotlightChangeButtonExit",[ctrlparent (_this select 0)],""] call RscDisplayMain_script;};}];
			} foreach [_ctrlSpotlightPrev,_ctrlSpotlightNext];
		} else {
			_ctrlSpotlightPrev ctrlshow false;
			_ctrlSpotlightNext ctrlshow false;
		};
	};
	case "spotlightEnter": {
		private _ctrlButton = _params select 0;
		private _ctrlGroup = ctrlParentControlsGroup _ctrlButton;
		private _ctrlPicture = _ctrlGroup controlsGroupCtrl IDC_MAIN_SPOTLIGHT_PICTURE;
		private _ctrlHover = _ctrlGroup controlsGroupCtrl IDC_MAIN_SPOTLIGHT_HOVER;
		private _ctrlGroupPos = ctrlposition _ctrlGroup;
		//_ctrlPicture ctrlsetposition [
		//	-(_ctrlGroupPos select 2) * (SPOTLIGHT_ZOOM - 1) / 2,
		//	-(_ctrlGroupPos select 3) * (SPOTLIGHT_ZOOM - 1) / 2,
		//	(_ctrlGroupPos select 2) * SPOTLIGHT_ZOOM,
		//	(_ctrlGroupPos select 3) * SPOTLIGHT_ZOOM
		//];
		//_ctrlPicture ctrlcommit SPOTLIGHT_TIME;
		_ctrlHover ctrlsetfade 0;
		_ctrlHover ctrlcommit SPOTLIGHT_TIME;

		//["menuClear",[ctrlparent _ctrlGroup],""] call RscDisplayMain_script;
		["playVideo",[ctrlParentControlsGroup _ctrlPicture,true],""] call RscDisplayMain_script;
		if !(ctrlidc _ctrlGroup in [IDC_MAIN_SPOTLIGHT_GROUP_2,IDC_MAIN_SPOTLIGHT_GROUP_3]) then {
			["spotlightChangeButtonEnter",[ctrlparent _ctrlButton],""] spawn RscDisplayMain_script;
			RscDisplayMain_spotlightTime = -1; //--- Disable animation
		};
	};
	case "spotlightExit": {
		private _ctrlButton = _params select 0;
		private _ctrlGroup = ctrlParentControlsGroup _ctrlButton;
		private _ctrlPicture = _ctrlGroup controlsGroupCtrl IDC_MAIN_SPOTLIGHT_PICTURE;
		private _ctrlHover = _ctrlGroup controlsGroupCtrl IDC_MAIN_SPOTLIGHT_HOVER;
		private _ctrlGroupPos = ctrlposition _ctrlGroup;
		//_ctrlPicture ctrlsetposition [
		//	0,
		//	0,
		//	(_ctrlGroupPos select 2),
		//	(_ctrlGroupPos select 3)
		//];
		//_ctrlPicture ctrlcommit SPOTLIGHT_TIME;
		_ctrlPicture ctrlsettextcolor [1,1,1,1];
		_ctrlHover ctrlsetfade 1;
		_ctrlHover ctrlcommit SPOTLIGHT_TIME;
		["playVideo",[_ctrlGroup,false],""] call RscDisplayMain_script;
		if !(ctrlidc _ctrlGroup in [IDC_MAIN_SPOTLIGHT_GROUP_2,IDC_MAIN_SPOTLIGHT_GROUP_3]) then {
			["spotlightChangeButtonExit",[ctrlparent _ctrlButton],""] spawn RscDisplayMain_script;
			RscDisplayMain_spotlightTime = time + SPOTLIGHT_DELAY;
		};
	};
	case "spotlightChange": {
		disableserialization;

		_display = _params select 0;
		_idDelta = _params select 1;
		_delay = _params select 2;

		_ctrlGroupSpotlight1 = _display displayctrl IDC_MAIN_SPOTLIGHT_GROUP_1;
		if !(ctrlcommitted _ctrlGroupSpotlight1) exitwith {}; //--- Terminate when previous animation is in progress
		_ctrlGroupSpotlight1 ctrlcommit _delay;

		_ctrlGroupSpotlight1Pos = ctrlposition _ctrlGroupSpotlight1;
		_ctrlGroupSpotlight1PosY = _ctrlGroupSpotlight1Pos select 1;
		_ctrlGroupSpotlight1PosH = _ctrlGroupSpotlight1Pos select 3;

		_spotlights = _ctrlGroupSpotlight1 getvariable ["spotlights",[]];
		if (count _spotlights <= 1 || _idDelta == 0) exitwith {};

		_id = uinamespace getvariable ["RscDisplayMain_spotlightID",0];
		_id = (_id + _idDelta + count _spotlights) % count _spotlights;
		uinamespace setvariable ["RscDisplayMain_spotlightID",_id];
		uinamespace setvariable ["RscDisplayMain_spotlightTime",time + SPOTLIGHT_DELAY];
		{
			_ctrlGroup = _x;
			_ctrlGroupPos = ctrlposition _ctrlGroup;
			_ctrlPicture = _ctrlGroup controlsGroupCtrl IDC_MAIN_SPOTLIGHT_PICTURE;
			_ctrlPicturePos = ctrlposition _ctrlPicture;
			_ctrlText = _ctrlGroup controlsGroupCtrl IDC_MAIN_SPOTLIGHT_TEXT;
			_ctrlTextPos = ctrlposition _ctrlText;
			_ctrlTextPosDef = _ctrlText getvariable ["pos",[0,0,0,0]];
			_ctrlTextBackground = _ctrlGroup controlsGroupCtrl IDC_MAIN_SPOTLIGHT_TEXTBCG;
			_ctrlButton = _ctrlGroup controlsGroupCtrl IDC_MAIN_SPOTLIGHT_BUTTON;
			_inCommit = _delay;

			if (_idDelta < 0) then {

				//--- Prev
				if (_foreachindex == _id) then {
					_ctrlButton ctrlenable true;
					_ctrlGroupPos set [1,_ctrlGroupSpotlight1PosY];
					_ctrlGroupPos set [3,0];
					_ctrlGroup ctrlsetposition _ctrlGroupPos;
					_ctrlGroup ctrlcommit 0;
					_ctrlGroupPos set [1,_ctrlGroupSpotlight1PosY];
					_ctrlGroupPos set [3,_ctrlGroupSpotlight1PosH];
					_ctrlPicturePos set [1,-_ctrlGroupSpotlight1PosH];
					_ctrlPicture ctrlsetposition _ctrlPicturePos;
					_ctrlPicture ctrlcommit 0;
					_ctrlPicturePos set [1,0];
					_ctrlTextPos set [1,(_ctrlTextPosDef select 1) - _ctrlGroupSpotlight1PosH];
					_ctrlText ctrlsetposition _ctrlTextPos;
					_ctrlText ctrlcommit 0;
					_ctrlTextBackground ctrlsetposition _ctrlPicturePos;
					_ctrlTextBackground ctrlcommit 0;
					_ctrlTextPos = _ctrlTextPosDef;
				} else {
					_ctrlButton ctrlenable false;
					_ctrlGroupPos set [1,_ctrlGroupSpotlight1PosY + _ctrlGroupSpotlight1PosH];
					_ctrlGroupPos set [3,0];
					_ctrlPicturePos set [1,0];
					_ctrlTextPos = _ctrlTextPosDef;
					_inCommit = 0;
				};
			} else {

				//--- Next
				if (_foreachindex == _id) then {
					_ctrlButton ctrlenable true;
					_ctrlGroupPos set [1,_ctrlGroupSpotlight1PosY + _ctrlGroupSpotlight1PosH];
					_ctrlGroupPos set [3,0];
					_ctrlGroup ctrlsetposition _ctrlGroupPos;
					_ctrlGroup ctrlcommit 0;
					_ctrlGroupPos set [1,_ctrlGroupSpotlight1PosY];
					_ctrlGroupPos set [3,_ctrlGroupSpotlight1PosH];
					_ctrlPicturePos set [1,0];
					_ctrlTextPos = _ctrlTextPosDef;
					_inCommit = 0;
				} else {
					_ctrlButton ctrlenable false;
					//['spotlightExit',[_ctrlGroup],''] call RscDisplayMain_script;
					_ctrlGroupPos set [1,_ctrlGroupSpotlight1PosY];
					_ctrlGroupPos set [3,0];
					_ctrlPicturePos set [1,-_ctrlGroupSpotlight1PosH];
					_ctrlTextPos set [1,(_ctrlTextPos select 1) - _ctrlGroupSpotlight1PosH];
				};
			};

			_ctrlGroup ctrlsetposition _ctrlGroupPos;
			_ctrlGroup ctrlcommit _delay;

			_ctrlPicture ctrlsetposition _ctrlPicturePos;
			_ctrlPicture ctrlcommit _inCommit;

			_ctrlText ctrlsetposition _ctrlTextPos;
			_ctrlText ctrlcommit _inCommit;

			_ctrlTextBackground ctrlsetposition _ctrlPicturePos;
			_ctrlTextBackground ctrlcommit _inCommit;
		} foreach _spotlights;

	};
	case "spotlightChangeButton": {
		_ctrlButton = _params select 0;
		_idDelta = _params select 1;
		["spotlightChange",[ctrlparent _ctrlButton,_idDelta,SPOTLIGHT_MOVE_USER],""] spawn RscDisplayMain_script;
	};
	case "spotlightChangeButtonEnter": {
		_display = _params select 0;
		{
			_ctrlButton = _display displayctrl _x;
			_ctrlButton ctrlsetfade 0;
			_ctrlButton ctrlcommit SPOTLIGHT_BUTTON_IN;
		} foreach [IDC_MAIN_SPOTLIGHT_PREV,IDC_MAIN_SPOTLIGHT_NEXT];
	};
	case "spotlightChangeButtonExit": {
		_display = _params select 0;
		{
			_ctrlButton = _display displayctrl _x;
			_ctrlButton ctrlsetfade 1;
			_ctrlButton ctrlcommit SPOTLIGHT_BUTTON_OUT;
		} foreach [IDC_MAIN_SPOTLIGHT_PREV,IDC_MAIN_SPOTLIGHT_NEXT];
	};
	case "infoEnter": {
		_ctrlButton = _params select 0;
		_ctrlInfo = ctrlParentControlsGroup _ctrlButton;
		_ctrlIconBackground = _ctrlInfo controlsGroupCtrl IDC_MAIN_INFO_BACKGROUND_ICON;
		_ctrlIcon = _ctrlInfo controlsGroupCtrl IDC_MAIN_INFO_ICON;
		_ctrlIconBackground ctrlsettextcolor [1,1,1,1];
		_ctrlIcon ctrlsettextcolor [0,0,0,1];
		if (ctrlclassname _ctrlInfo in ["InfoNews","InfoVersion"]) then {
			_ctrlBackground = _ctrlInfo controlsGroupCtrl IDC_MAIN_INFO_BACKGROUND;
			_ctrlBackground ctrlsettextcolor [1,1,1,1];
		};
		//["menuClear",[ctrlparent _ctrlGroup],""] call RscDisplayMain_script;
	};
	case "infoExit": {
		_ctrlButton = _params select 0;
		_ctrlInfo = ctrlParentControlsGroup _ctrlButton;
		_ctrlIconBackground = _ctrlInfo controlsGroupCtrl IDC_MAIN_INFO_BACKGROUND_ICON;
		_ctrlIcon = _ctrlInfo controlsGroupCtrl IDC_MAIN_INFO_ICON;
		_ctrlIconBackground ctrlsettextcolor [INFO_BACKGROUND_COLOR];
		_ctrlIcon ctrlsettextcolor [INFO_ICON_COLOR];
		if (ctrlclassname _ctrlInfo in ["InfoNews","InfoVersion"]) then {
			_ctrlBackground = _ctrlInfo controlsGroupCtrl IDC_MAIN_INFO_BACKGROUND;
			_ctrlBackground ctrlsettextcolor [INFO_BACKGROUND_COLOR];
		};
	};
	case "infoClick": {
		_ctrlButton = _params select 0;
		_ctrlInfo = ctrlParentControlsGroup _ctrlButton;
		_ctrlInfoVersionNotification = _ctrlInfo controlsGroupCtrl IDC_MAIN_INFO_NOTIFICATION;
		_ctrlInfoVersionNotification ctrlshow false;

		switch (ctrlclassname _ctrlInfo) do {
			case "InfoVersion": {
				//--- Mark the current version as "read"
				_versionBuild = productVersion select 4;
				_version = productVersion select 2;
				if (_versionBuild == "Development") then {_version = productVersion select 3;};
				profilenamespace setvariable ["RscDisplayMain_version" + _versionBuild,_version];
				saveprofilenamespace;

				_ctrlInfoVersionButton = _ctrlInfo controlsGroupCtrl IDC_MAIN_INFO_BUTTON;
				_ctrlInfoVersionButtonDev = _ctrlInfo controlsGroupCtrl IDC_MAIN_INFO_BUTTON_DEV;
				_ctrlInfoVersionButton ctrlsettooltip localize "STR_A3_RscDisplayMain_InfoVersion_tooltip";
				_ctrlInfoVersionButtonDev ctrlsettooltip localize "STR_A3_RscDisplayMain_InfoVersion_tooltip";
			};
		};
		false
	};
	case "playVideo": {
		private _ctrlGroup = _params select 0;
		private _ctrlPicture = _ctrlGroup controlsGroupCtrl IDC_MAIN_SPOTLIGHT_PICTURE;
		private _ctrlVideoSource = _ctrlGroup controlsGroupCtrl IDC_MAIN_SPOTLIGHT_VIDEO;
		private _file = ctrltext _ctrlVideoSource;

		if (_file == "") exitwith {};

		//--- Delete the previous video (do it in spawn, would crash the game when called from videoStopped handler)
		[_ctrlGroup controlsGroupCtrl 222] spawn {
			disableserialization;
			ctrlDelete (_this select 0);
		};
		private _ctrlVideo = controlnull;
		if (_params select 1) then {
			_ctrlVideo = (ctrlparent _ctrlGroup) ctrlcreate ["RscVideo",222,_ctrlGroup];
			_ctrlVideo ctrlsettext _file;
			_ctrlVideo ctrlsetposition ctrlposition _ctrlVideoSource;
			_ctrlVideo ctrlcommit 0;
			_ctrlVideo ctrlenable false;
			_ctrlPicture ctrlsettextcolor [0,0,0,1];
			_ctrlPicture ctrlsetposition ctrlposition _ctrlVideoSource;
			_ctrlPicture ctrlcommit 0;

			_ctrlVideo ctrladdeventhandler [
				"videostopped",
				{with uinamespace do {["playVideo",[ctrlParentControlsGroup (_this select 0),true],""] call RscDisplayMain_script;};}
			];
		};

		//--- Delete all other videos (do it in spawn, would crash the game when called from videoStopped handler)
		//[_ctrlVideo] spawn {
		//	disableserialization;
		//	{_x call bis_fnc_log;ctrlDelete _x;} foreach (((allcontrols ctrlparent (_this select 0)) select {ctrlclassname _x == "RscVideo"}) - [_this select 0]);
		//};
	};
	case "mousemoving": {
		_display = _params select 0;
		if !(_display getvariable ["BIS_init",false]) then {
			_display setvariable ["BIS_init",true];

			"MainMenuDummy" cutRsc ["RscDisplayMainMenuBackground","plain"]; //--- Register empty layer, because layer 0 is the same as no layer (bug?)
			"MainMenu" cutRsc ["RscDisplayMainMenuBackground","plain"];
			(_display displayctrl IDC_MAIN_BACKGROUND_PICTURE) ctrlshow false;

			//--- Init spotlight (cannot be done onLoad, because stats are not available yet)
			["spotlightInit",[_display],""] call RscDisplayMain_script;
		};
		if (missionnamespace getvariable ["RscDisplayMain_grey",true]) then {

			//--- Initial refresh (can't be in onLoad, it's too soon for example for stats evaluation)
			["refresh",[_display],""] call RscDisplayMain_script;
		};
		missionnamespace setvariable ["RscDisplayMain_grey",false];

		//--- Change spotlight
		if (RscDisplayMain_spotlightTime >= 0 && time > RscDisplayMain_spotlightTime) then {
			["spotlightChange",[_display,+1,SPOTLIGHT_MOVE],""] spawn RscDisplayMain_script;
		};
	};

	//--- Launch Arsenal based on RscDisplayDLCContentBrowser request
	case "childDestroyed":
	{
		_display = _params select 0;
		_exit = _params select 2;

		// switch 7 to IDC_EXIT_TO_MAIN, also test there is test request (global variable?) so it doesn't start Arsenal for every exitToMain request.
		if (
			_exit == 7
			&&
			(
				!isnil {uiNameSpace getvariable "BIS_fnc_arsenal_defaultClass"}
				||
				!isnil {uiNameSpace getvariable "BIS_fnc_garage_defaultClass"}
			)
		) then {
			playMission['','\A3\Missions_F_Bootcamp\Scenarios\Arsenal.VR'];
		};

		//--- Reset spotlight changing
		RscDisplayMain_spotlightTime = time + SPOTLIGHT_DELAY;
	};
};