class CfgPatches
{
	class A3FL_Jason2
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Map_Malden","A3_Data_F","A3_Ui_F","A3_Functions_F","A3_UiFonts_F","A3_Map_Stratis","A3_Map_Altis","A3_Map_VR","A3_Map_Stratis_Scenes","A3_Map_VR_Scenes","A3_Map_Altis_Scenes","A3_Ui_F_Data"};
		fileName = "A3FL_Jason2.pbo";
		requiredVersion = 0.01;
		author[] = {"Jason"};
	};
};
/*
class CfgFunctions
{
	class UI
	{
		tag = "A3FL";
		class init
		{
			file = "\A3FL_Jason2\Scripts\UI";
			class initDisplay{};
		};
	};
};
*/
class CfgDiary
{
	class FixedPages
	{
		class Units
		{
			type = "";
		};
		class Players
		{
			type = "";
		};
		class Statistics
		{
			type = "";
		};
	};
};
/*
class RscListNBox;
class RscPicture;
class RscText;
class IGUIBack;
class RscActiveText;
class RscCombo;
class RscListBox;
class RscProgress;
class RscPictureKeepAspect;
class RscDisplayInventory_DLCTemplate;
class RscStructuredText;
class RscTitle;
class RscButtonMenuOK;
class RscControlsGroupNoHScrollbars;
class RscHTML;
class RscStandardDisplay;
class RscVignette;
class RscControlsGroupNoScrollbars;
class RscFrame;
class CA_Title;
class RscDebugConsole;
class RscTrafficLight;
class RscFeedback;
class RscMessageBox;
class ShortcutPos;
class RscButtonMenuCancel;
class RscButtonMenuSteam;
class RscActivePicture;
class RscButtonMenuMain;
class RscControlsGroup;
class RscEdit;
class RscActivePictureKeepAspect;
class RscMapControl;
class RscShortControl;
class RscCheckBox;
class RscShortcutButton;
class ScrollBar;
class RscXListBox;
class RscButtonTextOnly;
class RscVideo;
class RscButton
{
	idc = -1;
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "RobotoCondensed";
	sizeEx = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	url = "";
	colorText[] = {1,1,1,1.0};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {0,0,0,0.5};
	colorBackgroundActive[] = {0,0,0,1};
	colorBackgroundDisabled[] = {0,0,0,0.5};
	colorFocused[] = {0,0,0,1};
	colorShadow[] = {0,0,0,0};
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	colorBorder[] = {0,0,0,1};
	borderSize = 0.0;
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
};
class RscButtonMenu: RscShortcutButton
{
	idc = -1;
	type = 16;
	style = "0x02 + 0xC0";
	default = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	colorBackground[] = {0,0,0,0.8};
	colorBackgroundFocused[] = {1,1,1,1};
	colorBackground2[] = {0.75,0.75,0.75,1};
	color[] = {1,1,1,1};
	colorFocused[] = {0,0,0,1};
	color2[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	textSecondary = "";
	colorSecondary[] = {1,1,1,1};
	colorFocusedSecondary[] = {0,0,0,1};
	color2Secondary[] = {0,0,0,1};
	colorDisabledSecondary[] = {1,1,1,0.25};
	sizeExSecondary = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	fontSecondary = "PuristaLight";
	period = 1.2;
	periodFocus = 1.2;
	periodOver = 1.2;
	size = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	class TextPos
	{
		left = "0.25 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
		top = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) -   (   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0.0;
	};
	class Attributes
	{
		font = "PuristaLight";
		color = "#E5E5E5";
		align = "left";
		shadow = "false";
	};
	class ShortcutPos
	{
		left = "5.25 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
		top = 0;
		w = "1 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
		h = "1 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
};
class A3FL_ctrlDefault
{
	idc = -1;
	style = 0;
	default = 0;
	show = 1;
	fade = 0;
	blinkingPeriod = 0;
	deletable = 0;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	tooltip = "";
	tooltipMaxWidth = 0.5;
	tooltipColorShade[] = {0,0,0,1};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {0,0,0,0};
	class ScrollBar
	{
		width = 0;
		height = 0;
		scrollSpeed = 0.06;
		arrowEmpty = "\a3\3DEN\Data\Controls\ctrlDefault\arrowEmpty_ca.paa";
		arrowFull = "\a3\3DEN\Data\Controls\ctrlDefault\arrowFull_ca.paa";
		border = "\a3\3DEN\Data\Controls\ctrlDefault\border_ca.paa";
		thumb = "\a3\3DEN\Data\Controls\ctrlDefault\thumb_ca.paa";
		color[] = {1,1,1,1};
	};
};
class A3FL_ctrlDefaultText: A3FL_ctrlDefault
{
	sizeEx = "4.32 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
	font = "RobotoCondensedLight";
	shadow = 1;
};
class A3FL_ctrlStatic: A3FL_ctrlDefaultText
{
	idc = -1;
	type = "CT_STATIC";
	colorBackground[] = {0,0,0,0};
	text = "";
	lineSpacing = 1;
	fixedWidth = 0;
	colorText[] = {1,1,1,1};
	colorShadow[] = {0,0,0,1};
	moving = 0;
	autoplay = 0;
	loops = 0;
	tileW = 1;
	tileH = 1;
	onCanDestroy = "";
	onDestroy = "";
	onMouseEnter = "";
	onMouseExit = "";
	onSetFocus = "";
	onKillFocus = "";
	onKeyDown = "";
	onKeyUp = "";
	onMouseButtonDown = "";
	onMouseButtonUp = "";
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";
	onVideoStopped = "";
	shadow = 0;
};
class A3FL_ctrlStaticHeader: A3FL_ctrlStatic
{
	colorText[] = {1,1,1,1};
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	h = "5 * (pixelH * pixelGrid * 0.50)";
};
class A3FL_ctrlStaticBackground: A3FL_ctrlStatic
{
	colorBackground[] = {0.2,0.2,0.2,1};
};
class A3FL_ctrlStaticPicture: A3FL_ctrlStatic
{
	style = "0x00 + 16 + 32";
};
class A3FL_ctrlStaticPictureKeepAspect: A3FL_ctrlStaticPicture
{
	style = "0x30 + 0x800";
};
class A3FL_ctrlDefaultButton0: A3FL_ctrlDefaultText
{
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
};
class A3FL_ctrlDefaultButton: A3FL_ctrlDefaultButton0
{
	type = 1;
	style = 2;
	sizeEx = "0.018 * safezoneH";
	colorBackground[] = {0,0,0,1};
	colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorBackgroundDisabled[] = {0,0,0,0.5};
	font = "PuristaLight";
	h = "0.0198 * safezoneH";
	borderSize = 0;
	colorBorder[] = {0,0,0,0};
	colorShadow[] = {0,0,0,1};
	shadow = 0;
	colorText[] = {0.9,0.9,0.9,1};
	colorDisabled[] = {0.8,0.8,0.8,1};
	colorFocused[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = "pixelW";
	offsetPressedY = "pixelH";
};
class A3FL_ctrlInvisButton: A3FL_ctrlDefaultButton
{
	type = 1;
	style = 2;
	sizeEx = "0.018 * safezoneH";
	colorBackground[] = {0,0,0,0};
	colorBackgroundActive[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	font = "PuristaLight";
	h = "0.0198 * safezoneH";
	borderSize = 0;
	colorBorder[] = {0,0,0,0};
	colorShadow[] = {0,0,0,0};
	shadow = 0;
	colorText[] = {0,0,0,0};
	colorDisabled[] = {0,0,0,0};
	colorFocused[] = {0,0,0,0};
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = "pixelW";
	offsetPressedY = "pixelH";
};
class A3FL_ctrlControlsGroup: A3FL_ctrlDefault
{
	type = 15;
	style = 16;
	x = 0;
	y = 0;
	w = 1;
	h = 1;
	class VScrollBar: ScrollBar
	{
		width = "2 * (pixelW * pixelGrid *  0.50)";
		height = 0;
		autoScrollEnabled = 0;
		autoScrollDelay = 1;
		autoScrollRewind = 1;
		autoScrollSpeed = 1;
	};
	class HScrollBar: ScrollBar
	{
		width = 0;
		height = "2 * (pixelH * pixelGrid *  0.50)";
	};
	onCanDestroy = "";
	onDestroy = "";
	onMouseButtonDown = "";
	onMouseButtonUp = "";
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";
};
class A3FL_ctrlControlsGroupNoScrollbars: A3FL_ctrlControlsGroup
{
	class VScrollbar: VScrollBar
	{
		width = 0;
	};
	class HScrollbar: HScrollBar
	{
		height = 0;
	};
};
class A3FL_ctrlStaticFooter: A3FL_ctrlStatic
{
	colorBackground[] = {0.15,0.15,0.15,1};
	h = "(5 + 2) * (pixelH * pixelGrid * 0.50)";
};
class A3FL_ctrlListbox: A3FL_ctrlDefaultText
{
	type = 5;
	style = "0x00 + 0x10";
	colorBackground[] = {0,0,0,0.5};
	colorSelectBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorSelectBackground2[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorShadow[] = {0,0,0,0.5};
	colorDisabled[] = {1,1,1,0.25};
	colorText[] = {1,1,1,1};
	colorSelect[] = {1,1,1,1};
	colorSelect2[] = {1,1,1,1};
	colorTextRight[] = {1,1,1,1};
	colorSelectRight[] = {1,1,1,1};
	colorSelect2Right[] = {1,1,1,1};
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightSelected[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	period = 1;
	rowHeight = "4.32 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
	itemSpacing = 0;
	maxHistoryDelay = 1;
	canDrag = 0;
	soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
	class ListScrollBar: ScrollBar{};
	onCanDestroy = "";
	onDestroy = "";
	onSetFocus = "";
	onKillFocus = "";
	onKeyDown = "";
	onKeyUp = "";
	onMouseButtonDown = "";
	onMouseButtonUp = "";
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";
	onLBSelChanged = "";
	onLBDblClick = "";
	onLBDrag = "";
	onLBDragging = "";
	onLBDrop = "";
};
class RscDisplaySelectIsland: RscStandardDisplay
{
	class controlsBackground
	{
		delete Vignette;
		delete TileGroup;
		delete TitleBackground;
		delete LeftBackground;
		delete MainBackground;
		class BackPick: A3FL_ctrlStaticPictureKeepAspect
		{
			idc = 1512;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneW * 4/3";
			text = "\A3FL_Jason2\pics\StartupBig.paa";
		};
	};
	class controls
	{
		class ButtonContinue: RscButtonMenuOK
		{
			onButtonClick = "[(findDisplay 51),'RscDisplaySelectIsland','continue'] call (uiNamespace getVariable 'A3FL_fnc_initDisplay')";
		};
		class IslandsBox: RscListBox
		{
			onLBDblClick = "[(findDisplay 51),'RscDisplaySelectIsland','doubleclick'] call (uiNamespace getVariable 'A3FL_fnc_initDisplay')";
		};
	};
};
class RscDisplayPassword: RscStandardDisplay
{
	scriptName = "RscDisplayPassword";
	scriptPath = "GUI";
	onLoad = "[""onLoad"",_this,""RscDisplayPassword"",'GUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayPassword"",'GUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
	movingEnable = 0;
	simulationEnabled = 0;
	class controlsbackground
	{
		class Vignette: RscVignette
		{
			idc = 114998;
		};
		class TileGroup: RscControlsGroupNoScrollbars
		{
			idc = 115099;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TitleBackground: RscText
		{
			idc = 1080;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class MainBackground: RscText
		{
			idc = 1081;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
	};
	class controls
	{
		delete B_OK;
		delete B_Cancel;
		class Title: RscTitle
		{
			idc = 1000;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class PlayersName: Title
		{
			idc = 601;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TextPassword: RscText
		{
			idc = 1002;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class ValuePassword: RscEdit
		{
			idc = 101;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class ButtonOk: RscButtonMenuOK
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
	};
};
class RscDisplayMultiplayerSetup: RscStandardDisplay
{
	onLoad = "[""onLoad"",_this,""RscDisplayMultiplayerSetup"",'GUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
	onUnload = "[""onUnload"",_this,""RscDisplayMultiplayerSetup"",'GUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
	west = "A3FL_Jason2\pics\Police.paa";
	east = "A3FL_Jason2\pics\Medic.paa";
	guer = "A3FL_Jason2\pics\Medic.paa";
	Civilian = "A3FL_Jason2\pics\Civilian.paa";
	none = "#(argb,8,8,3)color(0,0,0,0)";
	westUnlocked = "A3\ui_f\data\map\diary\icons\playerWest_ca.paa";
	westLocked = "A3FL_Jason2\pics\Police.paa";
	eastUnlocked = "A3\ui_f\data\map\diary\icons\playerEast_ca.paa";
	eastLocked = "A3FL_Jason2\pics\Medic.paa";
	guerUnlocked = "A3\ui_f\data\map\diary\icons\playerGuer_ca.paa";
	guerLocked = "A3FL_Jason2\pics\Medic.paa";
	civlUnlocked = "A3\ui_f\data\map\diary\icons\playerCiv_ca.paa";
	civlLocked = "A3FL_Jason2\pics\Civilian.paa";
	disabledAllAI = "$STR_DISP_MULTI_ENABLE_AI";
	enabledAllAI = "$STR_DISP_MULTI_DISABLE_AI";
	hostLocked = "$STR_DISP_MULTI_UNLOCK";
	hostUnlocked = "$STR_DISP_MULTI_LOCK";
	colorNotAssigned[] = {1,1,1,0.25};
	colorAssigned[] = {1,1,1,1};
	colorConfirmed[] = {0,1,0,1};
	class controlsbackground
	{
		delete RolesBackground;
		delete MissionSettingsBackground;
		delete NumOfPlayersBackground;
		delete MainBackground;
		delete PlayersPoolHeaderBackground;
		delete PlayersPoolBackground;
		delete ChatBackground;
		delete SideBackground;
		delete RscTitleBackground;
		class Vignette: RscVignette
		{
			idc = 114998;
		};
		class TileGroup: RscControlsGroupNoScrollbars
		{
			idc = 115099;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneH";
			disableCustomColors = 1;
			class Controls
			{
				class TileFrame: RscFrame
				{
					idc = 114999;
					x = 0;
					y = 0;
					w = "safezoneW";
					h = "safezoneH";
					colortext[] = {0,0,0,1};
				};
				class Tile_0_0: RscText
				{
					idc = 115000;
					x = "(0 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_0_1: RscText
				{
					idc = 115001;
					x = "(0 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_0_2: RscText
				{
					idc = 115002;
					x = "(0 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_0_3: RscText
				{
					idc = 115003;
					x = "(0 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_0_4: RscText
				{
					idc = 115004;
					x = "(0 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_0_5: RscText
				{
					idc = 115005;
					x = "(0 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_1_0: RscText
				{
					idc = 115010;
					x = "(1 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_1_1: RscText
				{
					idc = 115011;
					x = "(1 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_1_2: RscText
				{
					idc = 115012;
					x = "(1 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_1_3: RscText
				{
					idc = 115013;
					x = "(1 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_1_4: RscText
				{
					idc = 115014;
					x = "(1 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_1_5: RscText
				{
					idc = 115015;
					x = "(1 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_2_0: RscText
				{
					idc = 115020;
					x = "(2 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_2_1: RscText
				{
					idc = 115021;
					x = "(2 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_2_2: RscText
				{
					idc = 115022;
					x = "(2 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_2_3: RscText
				{
					idc = 115023;
					x = "(2 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_2_4: RscText
				{
					idc = 115024;
					x = "(2 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_2_5: RscText
				{
					idc = 115025;
					x = "(2 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_3_0: RscText
				{
					idc = 115030;
					x = "(3 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_3_1: RscText
				{
					idc = 115031;
					x = "(3 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_3_2: RscText
				{
					idc = 115032;
					x = "(3 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_3_3: RscText
				{
					idc = 115033;
					x = "(3 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_3_4: RscText
				{
					idc = 115034;
					x = "(3 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_3_5: RscText
				{
					idc = 115035;
					x = "(3 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_4_0: RscText
				{
					idc = 115040;
					x = "(4 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_4_1: RscText
				{
					idc = 115041;
					x = "(4 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_4_2: RscText
				{
					idc = 115042;
					x = "(4 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_4_3: RscText
				{
					idc = 115043;
					x = "(4 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_4_4: RscText
				{
					idc = 115044;
					x = "(4 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_4_5: RscText
				{
					idc = 115045;
					x = "(4 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_5_0: RscText
				{
					idc = 115050;
					x = "(5 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_5_1: RscText
				{
					idc = 115051;
					x = "(5 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_5_2: RscText
				{
					idc = 115052;
					x = "(5 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_5_3: RscText
				{
					idc = 115053;
					x = "(5 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_5_4: RscText
				{
					idc = 115054;
					x = "(5 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
				class Tile_5_5: RscText
				{
					idc = 115055;
					x = "(5 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0,0,0,0.1};
				};
			};
		};
		class BackPick: RscPictureKeepAspect
		{
			idc = 1512;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneW * 4/3";
			text = "\A3FL_Jason2\pics\StartupBig.paa";
		};
		class Header: RscText
		{
			idc = 1086;
			text = "";
			x = "0.0312969 * safezoneW + safezoneX";
			y = "0.12512 * safezoneH + safezoneY";
			w = "0.0625 * safezoneW";
			h = "0.0185185 * safezoneH";
			colorText[] = {1,1,1,1};
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
		};
		class Background: RscText
		{
			idc = 1089;
			text = "";
			x = "0.0312969 * safezoneW + safezoneX";
			y = "0.1436 * safezoneH + safezoneY";
			w = "0.0625 * safezoneW";
			h = "0.77037 * safezoneH";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.2,0.2,0.2,1};
		};
		class BackgroundPlayers: RscText
		{
			idc = 1087;
			text = "";
			x = "0.138547 * safezoneW + safezoneX";
			y = "0.12512 * safezoneH + safezoneY";
			w = "0.477829 * safezoneW";
			h = "0.811111 * safezoneH";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.2,0.2,0.2,1};
		};
		class HeaderPlayers: RscText
		{
			idc = 1088;
			text = "";
			x = "0.138547 * safezoneW + safezoneX";
			y = "0.12512 * safezoneH + safezoneY";
			w = "0.477829 * safezoneW";
			h = "0.0185185 * safezoneH";
			colorText[] = {1,1,1,1};
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
		};
		class Footer: RscText
		{
			idc = 89;
			text = "";
			x = "0.0312969 * safezoneW + safezoneX";
			y = "0.91096 * safezoneH + safezoneY";
			w = "0.0625 * safezoneW";
			h = "0.0259259 * safezoneH";
			colorBackground[] = {0.15,0.15,0.15,1};
		};
		class FooterPlayers: RscText
		{
			idc = 90;
			text = "";
			x = "0.138547 * safezoneW + safezoneX";
			y = "0.91096 * safezoneH + safezoneY";
			w = "0.477829 * safezoneW";
			h = "0.0259259 * safezoneH";
			colorBackground[] = {0.15,0.15,0.15,1};
		};
		class PictureDN: RscPictureKeepAspect
		{
			idc = 6213;
			text = "A3FL_Jason2\pics\A3FL_logo_512.paa";
			x = "0.0468687 * safezoneW + safezoneX";
			y = "0.0435 * safezoneH + safezoneY";
			w = "0.03125 * safezoneW";
			h = "0.0555555 * safezoneH";
		};
		class CopyrightText: RscText
		{
			idc = 1512;
			text = "© ArmA 3 Fishers Life";
			x = "0.0318123 * safezoneW + safezoneX";
			y = "0.1282 * safezoneH + safezoneY";
			w = "0.061875 * safezoneW";
			h = "0.011 * safezoneH";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.6)";
		};
	};
	class controls
	{
		delete B_Civilian;
		delete B_Guerrila;
		delete B_East;
		delete B_West;
		delete B_Side;
		delete B_OK;
		delete B_Cancel;
		delete B_Kick;
		delete B_EnableAll;
		delete B_Lock;
		delete TextDescription;
		delete ValueDescription;
		delete TextMessage;
		delete ValueRoles;
		delete TextParam1;
		delete TextParam2;
		delete ValueParam1;
		delete ValueParam2;
		delete ValuePool;
		delete B_Params;
		delete TextPool;
		delete TextRole;
		delete TextSide;
		delete SortPlayers;
		delete ButtonPing;
		delete SortPing;
		delete TextRoles;
		delete CA_B_Params;
		delete CA_B_Lock;
		delete ButtonSteamWorkshop;
		delete CA_B_EnableAll;
		delete CA_B_Kick;
		delete CA_TextVotingTimeLeft;
		delete TextMission;
		delete ValueMission;
		delete CA_TextDescription;
		delete CA_ValueDescription;
		delete TextIsland;
		delete ValueIsland;
		delete TextListedPlayers;
		delete ValueListedPlayers;
		delete MuteAll;
		class Title: RscTitle
		{
			idc = 1000;
			text = "";
			x = 1;
			w = 1;
			h = -2;
			z = -2;
		};
		class PlayersName: RscTitle
		{
			idc = 701;
			style = 1;
			x = 1;
			w = 1;
			h = -2;
			z = -2;
		};
		class CA_B_West: RscActiveText
		{
			text = " ";
			idc = 104;
			picture = "A3FL_Jason2\pics\Police.paa";
			sideToggle = "A3FL_Jason2\pics\Police.paa";
			sideDisabled = "A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\flag_none_ca.paa";
			pictureHeight = 1;
			pictureWidth = 1;
			color[] = {};
			colorActive[] = {0.22,1,0.28,1};
			colorDisabled[] = {1,1,1,0};
			colorShade[] = {1,1,1,1};
			colorText[] = {1,1,1,1};
			textHeight = 0.25;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 25)";
			x = "0.0468687 * safezoneW + safezoneX";
			y = "0.31036 * safezoneH + safezoneY";
			w = "0.03125 * safezoneW";
			h = "0.0555555 * safezoneH";
		};
		class CA_B_Guerrila: CA_B_West
		{
			text = " ";
			idc = 106;
			picture = "A3FL_Jason2\pics\Medic.paa";
			sideToggle = "A3FL_Jason2\pics\Medic.paa";
			color[] = {};
			colorActive[] = {0.22,1,0.28,1};
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 25)";
			x = "0.0489312 * safezoneW + safezoneX";
			y = "0.43994 * safezoneH + safezoneY";
			w = "0.03125 * safezoneW";
			h = "0.0555555 * safezoneH";
		};
		class CA_B_Civilian: CA_B_West
		{
			text = " ";
			idc = 107;
			picture = "A3FL_Jason2\pics\Civilian.paa";
			sideToggle = "A3FL_Jason2\pics\Civilian.paa";
			color[] = {};
			colorActive[] = {0.22,1,0.28,1};
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 25)";
			x = "0.0468687 * safezoneW + safezoneX";
			y = "0.18078 * safezoneH + safezoneY";
			w = "0.03125 * safezoneW";
			h = "0.0555555 * safezoneH";
		};
		class CA_ValuePool: RscListBox
		{
			idc = 114;
			x = 1;
			w = 1;
			h = -2;
			z = -2;
			drawSideArrows = 1;
			idcLeft = 500;
			idcRight = 500;
		};
		class ButtonPlayers: RscButtonTextOnly
		{
			idc = 133;
			style = 0;
			x = 1;
			w = 1;
			h = -2;
			z = -2;
			text = "";
		};
		class CA_ValueRoles: RscListBox
		{
			idc = 109;
			colorPlayer[] = {1,1,0,1};
			colorAI[] = {1,0,0,1};
			colorNobody[] = {1,1,1,0.25};
			drawSideArrows = 1;
			enabledAI = "A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\enabledAI_ca.paa";
			disabledAI = "A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\disabledAI_ca.paa";
			rowHeight = "1.75 * (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			x = "0.138547 * safezoneW + safezoneX";
			y = "0.14404 * safezoneH + safezoneY";
			w = "0.477829 * safezoneW";
			h = "0.766667 * safezoneH";
			colorSelectBackground[] = {0,0.09,0.57,0.4};
			colorSelectBackground2[] = {0,0.09,0.57,0.4};
			colorBackground[] = {-1,-1,-1,-1};
		};
		class CA_ButtonContinue: RscButtonMenuOK
		{
			text = "ENTER FISHERS ISLAND";
			x = "0.534011 * safezoneW + safezoneX";
			y = "0.911748 * safezoneH + safezoneY";
			w = "0.0803647 * safezoneW";
			h = "0.0210741 * safezoneH";
		};
		class CA_ButtonCancel: RscButtonMenuCancel
		{
			text = "";
			x = "0.140093 * safezoneW + safezoneX";
			y = "0.911748 * safezoneH + safezoneY";
			w = "0.0636458 * safezoneW";
			h = "0.0207406 * safezoneH";
		};
	};
};
class RscDisplayMultiplayer: RscStandardDisplay
{
	scriptName = "RscDisplayMultiplayer";
	scriptPath = "GUI";
	onLoad = "[""onLoad"",_this,""RscDisplayMultiplayer"",'GUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayMultiplayer"",'GUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
	sortUp = "";
	sortDown = "";
	showPassworded = "";
	hidePassworded = "";
	showBattlEye = "";
	showNoBattlEye = "";
	hideBattlEye = "";
	showFull = "";
	hideFull = "";
	showExpansions = "";
	hideExpansions = "";
	modPresent = "";
	modMissing = "";
	colorPingUnknown[] = {0.4,0.4,0.4,1};
	colorPingGood[] = {0,1,0,1};
	colorPingPoor[] = {1,0.6,0,1};
	colorPingBad[] = {1,0,0,1};
	colorVersionGood[] = {1,1,1,1};
	colorVersionBad[] = {1,0,0,1};
	class controlsbackground
	{
		delete MainbackTop;
		delete MainbackBottom;
		delete MainbackMiddle;
		delete CA_ServerDetailLanguage;
		delete CA_ServerDetailMission;
		delete CA_ServerDetailPing;
		delete CA_ServerDetailSlots;
		delete CA_ServerDetailState;
		delete CA_TextDetailState;
		delete CA_TextServerDetailLanguage;
		delete CA_TextServerDetailPing;
		delete CA_TextServerDetailSlots;
		class Vignette: RscVignette
		{
			idc = 114998;
		};
		class TileGroup: RscControlsGroupNoScrollbars
		{
			idc = 115099;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
			class Controls
			{
				class Background: RscText
				{
					idc = 114999;
					w = 1;
					h = 1;
					x = -2;
					y = -2;
				};
			};
		};
		class RscTitleBackground: RscText
		{
			idc = 1080;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class MainBackground: RscText
		{
			idc = 1081;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TabsBackground: RscText
		{
			idc = 1082;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class ServerTabsBackground: RscText
		{
			idc = 1083;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class HeadersBackground: RscText
		{
			idc = 1084;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
	};
	class controls
	{
		delete Title;
		delete ValueSessions;
		delete ColumnPlayers;
		delete ColumnPing;
		delete ColumnType;
		delete ColumnMission;
		delete ColumnState;
		delete ColumnServer;
		delete FilterPlayers;
		delete FilterPing;
		delete FilterMission;
		delete FilterType;
		delete FilterServer;
		delete ServerDetailType;
		delete ServerDetailMission;
		delete ServerDetailState;
		delete ServerDetailSlots;
		delete ServerDetailPing;
		delete ServerDetailLanguage;
		delete ServerDetailCountry;
		delete ServerDetailVersion;
		delete ServerDetailVersionRequired;
		delete ServerDetailMods;
		delete ServerDetailIsland;
		delete ServerDetailDifficulty;
		delete ServerDetailTimeLeft;
		delete ServerDetailPlatform;
		delete ServerDetailPlayers;
		delete ServerDetailPassword;
		delete ServerDetailHost;
		delete FilterBattlEyeServers;
		delete FilterPasswordedServers;
		delete FilterFullServers;
		delete IconPlayers;
		delete IconPing;
		delete IconType;
		delete IconState;
		delete IconMission;
		delete IconServer;
		delete B_DPlay;
		delete B_Internet;
		delete B_Remote;
		delete B_Password;
		delete B_Refresh;
		delete B_Filter;
		delete B_Port;
		delete Progress;
		delete B_Join;
		delete B_New;
		delete B_Cancel;
		delete CA_Internet_Lan;
		class CA_FramePlayers: RscFrame
		{
			idc = 1801;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_FrameExpansions: RscFrame
		{
			idc = 1802;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_FrameMission: RscFrame
		{
			idc = 1803;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_ServerDetailPassword: RscPicture
		{
			idc = 143;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_ServerDetailHost: RscText
		{
			idc = 129;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_TextServerDetailIsland: RscText
		{
			idc = 1019;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_ServerDetailIsland: RscText
		{
			idc = 132;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_TextServerDetailDifficulty: CA_TextServerDetailIsland
		{
			idc = 1021;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_ServerDetailDifficulty: CA_ServerDetailIsland
		{
			idc = 138;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_TextServerDetailPlatform: CA_TextServerDetailIsland
		{
			idc = 1014;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_ServerDetailPlatform: CA_ServerDetailIsland
		{
			idc = 130;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_TextServerDetailCountry: CA_TextServerDetailIsland
		{
			idc = 1012;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_ServerDetailCountry: CA_ServerDetailIsland
		{
			idc = 145;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_TextServerDetailBE: CA_TextServerDetailIsland
		{
			idc = 1010;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_ServerDetailBE: CA_ServerDetailIsland
		{
			idc = 201;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TextServerDetailFilepatching: CA_TextServerDetailIsland
		{
			idc = 1025;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class ServerDetailFilepatching: CA_ServerDetailIsland
		{
			idc = 169;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_TextServerDetailTimeLeft: CA_TextServerDetailIsland
		{
			idc = 1017;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_ServerDetailTimeLeft: CA_ServerDetailIsland
		{
			idc = 134;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TextServerType: CA_TextServerDetailIsland
		{
			idc = 1007;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_ServerDetailVersion: CA_ServerDetailIsland
		{
			idc = 144;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_ServerDetailVersionRequired: CA_ServerDetailIsland
		{
			idc = 147;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_ServerDetailExpansion: RscListBox
		{
			idc = 148;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_ServerDetailPlayers: RscListBox
		{
			idc = 149;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_Cancel: RscButtonMenuCancel
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_Refresh: CA_Cancel
		{
			idc = 123;
			shortcuts[] = {"0x00050000 + 3",63};
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_Join: RscButtonMenuOK
		{
			idc = 105;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_BFilter: CA_Cancel
		{
			idc = 124;
			shortcuts[] = {};
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_Title2: RscTitle
		{
			idc = 1000;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class PlayersName: RscTitle
		{
			idc = 1008;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_FilterPasswordedServers: RscPicture
		{
			idc = 150;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_FilterFullServers: CA_FilterPasswordedServers
		{
			idc = 151;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_ServerBEFilter: CA_FilterPasswordedServers
		{
			idc = 154;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_ServerExpansionsFilter: CA_FilterPasswordedServers
		{
			idc = 155;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TabQuickPlay: CA_Cancel
		{
			idc = 164;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TabServers: CA_Cancel
		{
			idc = 165;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_BRemote: CA_Cancel
		{
			idc = 166;
			shortcuts[] = {};
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_New: CA_Cancel
		{
			idc = 167;
			shortcuts[] = {"0x00050000 + 2"};
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_ServerCount: RscText
		{
			idc = 158;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TabRecent: RscButtonMenu
		{
			idc = 160;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TabFriends: RscButtonMenu
		{
			idc = 162;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TabOfficialServers: RscButtonMenu
		{
			idc = 163;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TabLAN: RscButtonMenu
		{
			idc = 161;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TabInternet: RscButtonMenu
		{
			idc = 159;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_FavoriteColumn: RscShortcutButton
		{
			idc = 156;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_ServerColumn: RscButtonTextOnly
		{
			idc = 112;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_TypeColumn: CA_ServerColumn
		{
			idc = 141;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_MissionColumn: CA_ServerColumn
		{
			idc = 114;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_StateColumn: CA_ServerColumn
		{
			idc = 116;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_PlayersColumn: CA_ServerColumn
		{
			idc = 118;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_PingColumn: CA_ServerColumn
		{
			idc = 120;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_FavoriteIcon: RscPicture
		{
			idc = 157;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_ServerIcon: RscPicture
		{
			idc = 111;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_TypeIcon: CA_ServerIcon
		{
			idc = 140;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_MissionIcon: CA_ServerIcon
		{
			idc = 113;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_StateIcon: CA_ServerIcon
		{
			idc = 115;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_PlayersIcon: CA_ServerIcon
		{
			idc = 117;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_PingIcon: CA_ServerIcon
		{
			idc = 119;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class CA_ValueSessions: RscListBox
		{
			idc = 102;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
			class Columns
			{
				class ColumnFavorite
				{
					w = 1;
					h = 1;
					x = -2;
					y = -2;
				};
				class ColumnServer
				{
					w = 1;
					h = 1;
					x = -2;
					y = -2;
				};
				class ColumnType
				{
					w = 1;
					h = 1;
					x = -2;
					y = -2;
				};
				class ColumnMission
				{
					w = 1;
					h = 1;
					x = -2;
					y = -2;
				};
				class ColumnState
				{
					w = 1;
					h = 1;
					x = -2;
					y = -2;
				};
				class ColumnPlayers
				{
					w = 1;
					h = 1;
					x = -2;
					y = -2;
				};
				class ColumnPing
				{
					w = 1;
					h = 1;
					x = -2;
					y = -2;
				};
			};
		};
		class ButtonLauncherServerBrowser: RscButtonMenu
		{
			idc = 168;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
	};
};
class RscDisplayIPAddress: RscStandardDisplay
{
	scriptName = "RscDisplayIPAddress";
	scriptPath = "GUI";
	onLoad = "[""onLoad"",_this,""RscDisplayIPAddress"",'GUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayIPAddress"",'GUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
	class controlsBackground
	{
		class Vignette: RscVignette
		{
			idc = 114998;
		};
		class TileGroup: RscControlsGroupNoScrollbars
		{
			idc = 115099;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
			class Controls
			{
				class Background: RscText
				{
					idc = 114999;
					w = 1;
					h = 1;
					x = -2;
					y = -2;
				};
			};
		};
		class TitleBackground: RscText
		{
			idc = 1080;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class MainBackground: RscText
		{
			idc = 1081;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TabsBackground: RscText
		{
			idc = 1082;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
	};
	class controls
	{
		delete B_OK;
		delete B_Cancel;
		delete TextPort;
		delete ValuePort;
		delete TextAddress;
		delete ValueAddress;
		class Title: RscTitle
		{
			idc = 1000;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class PlayersName: Title
		{
			idc = 1001;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TabQuickPlay: RscButtonMenu
		{
			idc = 164;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TabServers: RscButtonMenu
		{
			idc = 165;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TabDirectConnect: RscButtonMenu
		{
			idc = 166;
			shortcuts[] = {};
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TabSetupServer: RscButtonMenu
		{
			idc = 167;
			shortcuts[] = {"0x00050000 + 2"};
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class Content: RscControlsGroupNoScrollbars
		{
			idc = 2300;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
			class controls
			{
				class CA_TextAddress: RscText
				{
					idc = 1003;
					w = 1;
					h = 1;
					x = -2;
					y = -2;
				};
				class CA_ValueAddress: RscEdit
				{
					idc = 101;
					w = 1;
					h = 1;
					x = -2;
					y = -2;
				};
				class CA_TextPort: CA_TextAddress
				{
					idc = 1004;
					w = 1;
					h = 1;
					x = -2;
					y = -2;
				};
				class CA_ValuePort: CA_ValueAddress
				{
					idc = 102;
					w = 1;
					h = 1;
					x = -2;
					y = -2;
				};
				class ButtonOk: RscButtonMenuOK
				{
					w = 1;
					h = 1;
					x = -2;
					y = -2;
				};
			};
		};
		class ButtonLauncherServerBrowser: RscButtonMenuOK
		{
			idc = 168;
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class ButtonBack: RscButtonMenuCancel
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
	};
};
class RscDisplayMain: RscStandardDisplay
{
	idd = 0;
	onLoad = "[_this,'RscDisplayMain','load'] call (uiNamespace getVariable 'A3FL_fnc_initDisplay')";
	onUnload = "[_this,'RscDisplayMain','unload'] call (uiNamespace getVariable 'A3FL_fnc_initDisplay')";
	class Spotlight
	{
		class Bootcamp
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class EastWind
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class ApexProtocol
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
	};
	class ControlsBackground
	{
		delete MouseArea;
		delete BackgroundLeft;
		delete BackgroundRight;
		delete Picture;
	};
	class Controls
	{
		class ModIcons;
		class B_Quit;
		class B_Expansions;
		class B_Credits;
		class B_Player;
		class B_Options;
		class B_SinglePlayer;
		class B_MissionEditor;
		class B_MultiPlayer;
		class B_SingleMission;
		class B_Campaign;
		class Date;
		class ModList;
		class TrafficLight;
		class Version;
		class BackgroundSpotlight: RscPicture
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class BackgroundSpotlightLeft: BackgroundSpotlight
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class BackgroundSpotlightRight: BackgroundSpotlightLeft
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class SpotlightBase: RscControlsGroupNoScrollbars
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class Spotlight1: SpotlightBase
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class Spotlight2: SpotlightBase
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class Spotlight3: SpotlightBase
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class BackgroundBar: RscText
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class BackgroundCenter: BackgroundBar
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class BackgroundBarLeft: RscPicture
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class BackgroundBarRight: BackgroundBarLeft
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class Logo: RscActivePicture
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class LogoApex: Logo
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TitleSingleplayer: RscButtonMenu
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TitleIconSingleplayer: RscButton
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class GroupSingleplayer: RscControlsGroupNoScrollbars
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TitleMultiplayer: TitleSingleplayer
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TitleIconMultiplayer: TitleIconSingleplayer
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class GroupMultiplayer: GroupSingleplayer
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TitleTutorials: TitleSingleplayer
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TitleIconTutorials: TitleIconSingleplayer
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class GroupTutorials: GroupSingleplayer
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TitleOptions: TitleSingleplayer
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TitleIconOptions: TitleIconSingleplayer
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class GroupOptions: GroupSingleplayer
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class TitleSession: RscButton
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class GroupSession: GroupSingleplayer
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class Exit: RscButton
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class InfoMods: RscControlsGroupNoHScrollbars
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class InfoDLCsOwned: InfoMods
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class InfoDLCs: InfoDLCsOwned
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class InfoNews: InfoMods
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class InfoVersion: InfoNews
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class Footer: RscText
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class AllMissions: RscButtonMenuMain
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
		class ProofsOfConcept: AllMissions
		{
			w = 1;
			h = 1;
			x = -2;
			y = -2;
		};
	};
	class IconPicture: RscPictureKeepAspect
	{
		w = 1;
		h = 1;
		x = -2;
		y = -2;
	};
	class DlcOwnedIconPicture: RscPictureKeepAspect
	{
		w = 1;
		h = 1;
		x = -2;
		y = -2;
	};
	class DlcIconPicture: RscPictureKeepAspect
	{
		w = 1;
		h = 1;
		x = -2;
		y = -2;
	};
};
class A3FL_MainMenu
{
	idd = 6600;
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "[""onLoad"",_this,""A3FL_MainMenu"",'GUI'] call compile preprocessfilelinenumbers ""\A3FL_Jason2\Scripts\GUI\RscDisplayMain.sqf"";";
	class ControlsBackground
	{
		class BackPick: A3FL_ctrlStaticPictureKeepAspect
		{
			idc = 1412;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneW * 4/3";
			text = "\A3FL_Jason2\pics\StartupBig.paa";
		};
		class MouseArea: RscText
		{
			idc = 999;
			style = 16;
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
		};
	};
	class Controls
	{
		class PictureDiscord: A3FL_ctrlStaticPictureKeepAspect
		{
			x = "safeZoneX + safeZoneW - 80 * pixelW";
			y = "safeZoneY + 530 * pixelH";
			w = "65 * pixelW";
			h = "65 * pixelH";
			text = "\A3FL_Jason2\pics\Discord.paa";
			colorBackground[] = {0,0,0,1};
		};
		class ButtonDiscord: A3FL_ctrlInvisButton
		{
			idc = 2;
			x = "safeZoneX + safeZoneW - 80 * pixelW";
			y = "safeZoneY + 530 * pixelH";
			w = "65 * pixelW";
			h = "65 * pixelH";
			text = "";
			tooltip = "Discord";
			url = "https://discord.com/invite/4p7mtME";
		};
		class PictureTwitter: A3FL_ctrlStaticPictureKeepAspect
		{
			x = "safeZoneX + safeZoneW - 80 * pixelW";
			y = "safeZoneY + 610 * pixelH";
			w = "65 * pixelW";
			h = "65 * pixelH";
			text = "\A3FL_Jason2\pics\Twitter.paa";
			colorBackground[] = {0,0,0,1};
		};
		class ButtonTwitter: A3FL_ctrlInvisButton
		{
			idc = 2;
			x = "safeZoneX + safeZoneW - 80 * pixelW";
			y = "safeZoneY + 610 * pixelH";
			w = "65 * pixelW";
			h = "65 * pixelH";
			text = "";
			tooltip = "Twitter";
			url = "https://twitter.com/A3FLOfficial";
		};
		class Header: A3FL_ctrlStaticHeader
		{
			idc = 1;
			text = "Welcome!";
			x = "0.0312969 * safezoneW + safezoneX";
			y = "0.12512 * safezoneH + safezoneY";
			w = "0.0625 * safezoneW";
			h = "0.0185185 * safezoneH";
		};
		class Background: A3FL_ctrlStaticBackground
		{
			x = "0.0312969 * safezoneW + safezoneX";
			y = "0.1436 * safezoneH + safezoneY";
			w = "0.0625 * safezoneW";
			h = "0.77037 * safezoneH";
		};
		class PictureDN: A3FL_ctrlStaticPictureKeepAspect
		{
			x = "0.0468689 * safezoneW + safezoneX";
			y = "0.0413 * safezoneH + safezoneY";
			w = "0.03125 * safezoneW";
			h = "0.0555555 * safezoneH";
			text = "\A3FL_Jason2\pics\A3FL_logo_512.paa";
			colorBackground[] = {0,0,0,1};
		};
		class PicturePlay: A3FL_ctrlStaticPictureKeepAspect
		{
			x = "0.0489312 * safezoneW + safezoneX";
			y = "0.18078 * safezoneH + safezoneY";
			w = "0.03125 * safezoneW";
			h = "0.0555555 * safezoneH";
			text = "\A3FL_Jason2\pics\PlayButton.paa";
			colorBackground[] = {0,0,0,1};
		};
		class ButtonPlay: A3FL_ctrlInvisButton
		{
			idc = 2;
			x = "0.0489312 * safezoneW + safezoneX";
			y = "0.18078 * safezoneH + safezoneY";
			w = "0.03125 * safezoneW";
			h = "0.0555555 * safezoneH";
			text = "";
			tooltip = "Play ArmA 3 Fishers Life";
			onButtonClick = "[(findDisplay 6600),'A3FL_MainMenu','playserver1'] call (uiNamespace getVariable 'A3FL_fnc_initDisplay')";
		};
		class PictureProfile: A3FL_ctrlStaticPictureKeepAspect
		{
			x = "0.0489312 * safezoneW + safezoneX";
			y = "0.31036 * safezoneH + safezoneY";
			w = "0.03125 * safezoneW";
			h = "0.0555555 * safezoneH";
			text = "\A3FL_Jason2\pics\ProfileButton.paa";
			colorBackground[] = {0,0,0,1};
		};
		class ButtonProfile: A3FL_ctrlInvisButton
		{
			idc = 3;
			x = "0.0489312 * safezoneW + safezoneX";
			y = "0.31036 * safezoneH + safezoneY";
			w = "0.03125 * safezoneW";
			h = "0.0555555 * safezoneH";
			text = "";
			tooltip = "Change your profile!";
			onButtonClick = "[(findDisplay 6600),'A3FL_MainMenu','profiles'] call (uiNamespace getVariable 'A3FL_fnc_initDisplay')";
		};
		class PictureEditor: A3FL_ctrlStaticPictureKeepAspect
		{
			x = "0.0489312 * safezoneW + safezoneX";
			y = "0.43994 * safezoneH + safezoneY";
			w = "0.03125 * safezoneW";
			h = "0.0555555 * safezoneH";
			text = "\A3FL_Jason2\pics\EditorButton.paa";
			colorBackground[] = {0,0,0,1};
		};
		class ButtonEditor: A3FL_ctrlInvisButton
		{
			idc = 4;
			x = "0.0489312 * safezoneW + safezoneX";
			y = "0.43994 * safezoneH + safezoneY";
			w = "0.03125 * safezoneW";
			h = "0.0555555 * safezoneH";
			text = "";
			tooltip = "Editor - This is for developers only!";
			onButtonClick = "if (profileName IN [""Richard Axel"",""Winston"",""John Seagrant"",""Frank Casey"",""Winters Halstead"",""Mancio Sorrento"",""Johnny Rigatoni"",""Jake Ortiz"",""Nick Parker"",""Andrew Axel"",""Mathias West"",""Davis Abrams""]) then {[(findDisplay 6600),'A3FL_MainMenu','freeAction'] call (uiNamespace getVariable 'A3FL_fnc_initDisplay')} else {systemChat ""You are not authorized!""};";
		};
		class PictureArsenal: A3FL_ctrlStaticPictureKeepAspect
		{
			x = "0.0489312 * safezoneW + safezoneX";
			y = "0.56952 * safezoneH + safezoneY";
			w = "0.03125 * safezoneW";
			h = "0.0555555 * safezoneH";
			text = "\A3FL_Jason2\pics\ArsenalButton.paa";
			colorBackground[] = {0,0,0,1};
		};
		class ButtonArsenal: A3FL_ctrlInvisButton
		{
			idc = 5;
			x = "0.0489312 * safezoneW + safezoneX";
			y = "0.56952 * safezoneH + safezoneY";
			w = "0.03125 * safezoneW";
			h = "0.0555555 * safezoneH";
			text = "";
			tooltip = "Development Server - This is for developers only!";
			onButtonClick = "if (profileName IN [""Richard Axel"",""Winston"",""John Seagrant"",""Frank Casey"",""Winters Halstead"",""Mancio Sorrento"",""Johnny Rigatoni"",""Marshall McMullen"",""Jake Ortiz"",""Nick Parker"",""Andrew Axel"",""Mathias West"",""Davis Abrams"",""QA""]) then {[(findDisplay 6600),'A3FL_MainMenu','playserverdev'] call (uiNamespace getVariable 'A3FL_fnc_initDisplay')} else {systemChat ""You are not authorized!""};";
		};
		class PictureSettings: A3FL_ctrlStaticPictureKeepAspect
		{
			x = "0.0489312 * safezoneW + safezoneX";
			y = "0.69932 * safezoneH + safezoneY";
			w = "0.03125 * safezoneW";
			h = "0.0555555 * safezoneH";
			text = "\A3FL_Jason2\pics\SettingsButton.paa";
			colorBackground[] = {0,0,0,1};
		};
		class ButtonSettings: A3FL_ctrlInvisButton
		{
			idc = 6;
			x = "0.0489312 * safezoneW + safezoneX";
			y = "0.69932 * safezoneH + safezoneY";
			w = "0.03125 * safezoneW";
			h = "0.0555555 * safezoneH";
			text = "";
			tooltip = "Change your video settings!";
			onButtonClick = "[(findDisplay 6600),'A3FL_MainMenu_Options','video'] call (uiNamespace getVariable 'A3FL_fnc_initDisplay')";
		};
		class PictureQuit: A3FL_ctrlStaticPictureKeepAspect
		{
			x = "0.0489312 * safezoneW + safezoneX";
			y = "0.82032 * safezoneH + safezoneY";
			w = "0.03125 * safezoneW";
			h = "0.0555555 * safezoneH";
			text = "\A3FL_Jason2\pics\ExitButton.paa";
			colorBackground[] = {0,0,0,1};
		};
		class ButtonQuit: A3FL_ctrlInvisButton
		{
			idc = 7;
			x = "0.0489312 * safezoneW + safezoneX";
			y = "0.82032 * safezoneH + safezoneY";
			w = "0.03125 * safezoneW";
			h = "0.0555555 * safezoneH";
			text = "";
			tooltip = "Exit ArmA 3 Fishers Life!";
			onButtonClick = "[(findDisplay 6600),'A3FL_MainMenu','exit'] call (uiNamespace getVariable 'A3FL_fnc_initDisplay')";
		};
		class Footer: A3FL_ctrlControlsGroupNoScrollbars
		{
			idc = 89;
			x = "0.0312969 * safezoneW + safezoneX";
			y = "0.91096 * safezoneH + safezoneY";
			w = "0.0625 * safezoneW";
			h = "0.0259259 * safezoneH";
			class controls
			{
				class Background: A3FL_ctrlStaticFooter
				{
					x = 0;
					y = 0;
					w = "safezoneW";
					h = "safezoneH";
				};
			};
		};
		class Copyright: A3FL_ctrlStatic
		{
			idc = 9;
			text = "© ArmA 3 Fishers Life";
			x = "0.0333643 * safezoneW + safezoneX";
			y = "0.918 * safezoneH + safezoneY";
			w = "0.0581771 * safezoneW";
			h = "0.011 * safezoneH";
			sizeEx = "0.014 * safezoneH";
		};
	};
};
class RscBackgroundLogo: RscPictureKeepAspect
{
	text = "\A3FL_Jason2\pics\A3FL_logo_512.paa";
	x = "0.33375 * safezoneW";
	y = "0.29 * safezoneH";
	w = "0.3325 * safezoneW";
	h = "0.39375 * safezoneH";
};
class RscDisplayStart: RscStandardDisplay
{
	class controlsBackground
	{
		delete Black;
		delete Map;
		delete CA_Vignette;
		delete Noise;
		delete Line;
	};
	class controls
	{
		delete Text;
		delete Progress;
		delete Progress2;
		class LoadingStart: RscControlsGroupNoScrollbars
		{
			idc = 2310;
			x = "0 * safezoneW + safezoneX";
			y = "0 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "1 * safezoneH";
			class controls
			{
				delete Black;
				delete Noise;
				delete Logo;
				class Background: RscPictureKeepAspect
				{
					idc = 5125;
					text = "\A3FL_Jason2\pics\StartupBig_Loading.paa";
					x = "0 * safezoneW + safezoneX";
					y = "0 * safezoneH + safezoneY";
					w = "1.6 * safezoneW";
					h = "1.9 * safezoneH";
				};
				class StartLogo: RscPictureKeepAspect
				{
					idc = 1541;
					text = "\A3FL_Jason2\pics\StartupLogo.paa";
					x = "0.25 * safezoneW";
					y = "0.3125 * safezoneH";
					w = "0.5 * safezoneW";
					h = "0.25 * safezoneH";
				};
			};
		};
	};
};
class RscDisplayNotFreeze: RscStandardDisplay
{
	class controls
	{
		class LoadingStart: RscControlsGroup
		{
			class controls
			{
				class Logo: RscPictureKeepAspect
				{
					text = "\A3FL_Jason2\pics\A3FL_logo_512.paa";
					x = "0.33375 * safezoneW";
					y = "0.29 * safezoneH";
					w = "0.3325 * safezoneW";
					h = "0.39375 * safezoneH";
					onLoad = "";
				};
			};
		};
	};
};
class RscDisplayLoadMission: RscStandardDisplay
{
	class controls
	{
		class LoadingStart: RscControlsGroup
		{
			class controls
			{
				class Logo: RscPictureKeepAspect
				{
					text = "\A3FL_Jason2\pics\A3FL_logo_512.paa";
					x = "0.33375 * safezoneW";
					y = "0.29 * safezoneH";
					w = "0.3325 * safezoneW";
					h = "0.39375 * safezoneH";
					onLoad = "";
				};
			};
		};
	};
};
class RscTitles
{
	class SplashArma3
	{
		class Picture: RscPictureKeepAspect
		{
			text = "\A3FL_Jason2\pics\A3FL_logo_512.paa";
			x = "0.33375 * safezoneW";
			y = "0.29 * safezoneH";
			w = "0.3325 * safezoneW";
			h = "0.39375 * safezoneH";
		};
	};
};
*/