
private _isExitingMission = _this isEqualTo 0;

// Only use the mission's config
// inside the mission (e.g. in description.ext under CfgDiscordRichPresence).
private _cfgDir = missionConfigFile >> "CfgDiscordRichPresence";
private _cfgDirExists = isClass _cfgDir;

(if _cfgDirExists then {
	// Mission/Mod defined settings
	[
		getText(_cfgDir >> "applicationID"),
		getText(_cfgDir >> "defaultDetails"),
		getText(_cfgDir >> "defaultState"),
		getText(_cfgDir >> "defaultLargeImageKey"),
		getText(_cfgDir >> "defaultLargeImageText"),
		getText(_cfgDir >> "defaultSmallImageKey"),
		getText(_cfgDir >> "defaultSmallImageText"),
		getArray(_cfgDir >> "defaultButtons"),
		if isNumber(_cfgDir >> "useTimeElapsed") then {getNumber(_cfgDir >> "useTimeElapsed") == 1} else {true}
	]
} else {
		private _ownedDLCs = getDLCs 1;
		private _imageLarge = ["a3_1","a3_2"];
		{
			if (_x#1 in _ownedDLCs) then {_imageLarge pushBack (_x#0)};
		} forEach [
			["apex",395180],
			["heli",304380],
			["jets",601670],
			["karts",288520],
			["orange",571710],
			["tacops",744950],
			["tanks",798390],
			["contact",1021790]
		];

		[
			"1397254107080822944",
			"ArmA 3 Project Life",
			"www.arma3projectlife.com",
			"icon-circle",
			"ArmA 3 Project Life",
			"lc",
			"By Northbridge Interactive LLP",
			["Discord","https://discord.gg/arma3projectlife"],
			true
		]
}) params [
	"_applicationID","_defaultDetails","_defaultState",
	"_defaultLargeImageKey","_defaultLargeImageText",
	"_defaultSmallImageKey","_defaultSmallImageText",
	"_defaultButtons","_showTimeElapsed"
];

private _curLoadSuccess = uiNameSpace getVariable ["DiscordRichPresence_LoadSuccess",false];
private _curApplicationID = uiNamespace getVariable ["DiscordRichPresence_ApplicationID",""];
if (!_curLoadSuccess || _applicationID != _curApplicationID) then {
	private _ret = "DiscordRichPresence" callExtension ["init",[text _applicationID]];

	// Set to uiNamespace for persistence between missions
	_curLoadSuccess = _ret#1 == 1;
	uiNameSpace setVariable ["DiscordRichPresence_LoadSuccess",_curLoadSuccess];
};

// Set to missionNamespace for backwards compatibility
missionNamespace setVariable ["DiscordRichPresence_LoadSuccess",_curLoadSuccess];

if _curLoadSuccess then {
	uiNamespace setVariable ["DiscordRichPresence_ApplicationID",_applicationID];

	private _isMainMenu = false;
	if (!_cfgDirExists && !is3DEN) then {
		// Main Menu check (if using default values and not in 3den)
		private _mission = toLower format["%1.%2",missionName,worldName];
		private _mainMenuMissions = "true" configClasses (configFile >> "CfgMissions" >> "CutScenes");
		_isMainMenu = _mainMenuMissions findIf {_mission in toLower getText(_x >> "directory")} > -1;
	};

	// Force "Main Menu" info if exiting a mission
	if (_isMainMenu || _isExitingMission) then {
		_defaultDetails = "Main Menu";
		_defaultState = "";
		_defaultLargeImageText = "";
	};

	private _settings = [
		["UpdateDetails",_defaultDetails],
		["UpdateState",_defaultState],
		["UpdateLargeImageKey",_defaultLargeImageKey],
		["UpdateLargeImageText",_defaultLargeImageText],
		["UpdateSmallImageKey",_defaultSmallImageKey],
		["UpdateSmallImageText",_defaultSmallImageText],
		["UpdateButtons",_defaultButtons]
	];
	if _showTimeElapsed then {_settings pushback ["UpdateStartTimestamp",[0,0]]};

	_settings call A3PL_Matthew_fnc_update;

	if _isMainMenu exitWith {};

	[] spawn {
		private _display = displayNull;
		waitUntil {
			_display = if is3DEN then {findDisplay 313} else {findDisplay 46};
			!isNull _display
		};

		_display displayAddEventHandler ["Unload",{
			//uiNamespace setVariable ["DiscordRichPresence_LoadSuccess",false];
			//missionNamespace setVariable ["DiscordRichPresence_LoadSuccess",false];
			//"DiscordRichPresence" callExtension ["CloseRichPresence",[]];

			0 call A3PL_Matthew_fnc_init;
		}];
	};
};

nil
