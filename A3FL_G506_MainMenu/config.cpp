class CfgPatches
{
	class G506_MainMenu
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Functions_F",
			"A3_UiFonts_F",
			"A3_Ui_F",
			"A3_Ui_F_Bootcamp",
			"A3_Ui_F_Curator",
			"A3_Ui_F_Exp",
			"A3_Ui_F_Exp_A",
			"A3_Ui_F_Heli",
			"A3_Ui_F_Jets",
			"A3_Ui_F_Kart",
			"A3_Ui_F_Mark",
			"A3_Ui_F_MP_Mark",
			"A3_Ui_F_Oldman",
			"A3_Ui_F_Orange",
			"A3_Ui_F_Patrol",
			"A3_Ui_F_Data",
			"A3_Map_Altis",
			"A3_Map_Altis_Scenes_F",
			"A3_Map_Malden",
			"A3_Map_Malden_Scenes_F",
			"A3_Map_Stratis",
			"A3_Map_Stratis_Scenes_F",
			"A3_Map_Tanoa_Scenes_F",
			"A3_Map_VR",
			"A3_Map_VR_Scenes_F",
			"FishersIsland",
			"FishersIsland_Data",
			"FishersIsland_Roads",
			"cba_ui",
			"cba_common",
			"cba_arrays",
			"cba_settings"
		};
		worlds[]={};
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class Intro
		{
			directory="A3FL_G506_MainMenu\G506_Menu2021.VR";
		};
	};
};
class CfgWorlds
{
	class CAWorld;
	class Altis: CAWorld
	{
		cutscenes[]=
		{
			"Intro"
		};
	};
	class Stratis: CAWorld
	{
		cutscenes[]=
		{
			"Intro"
		};
	};
	class Tanoa: CAWorld
	{
		cutscenes[]=
		{
			"Intro"
		};
	};
	class Malden: CAWorld
	{
		cutscenes[]=
		{
			"Intro"
		};
	};
	class VR: CAWorld
	{
		cutscenes[]=
		{
			"Intro"
		};
	};
	class Empty: CAWorld
	{
		cutscenes[]=
		{
			"Intro"
		};
	};
	class FishersIsland: CAWorld
	{
		cutscenes[]=
		{
			"Intro"
		};
	};
	initWorld="FishersIsland";
	demoWorld="FishersIsland";
};
class CfgFunctions
{
	class G506_MainMenu
	{
		tag="G506";
		class Code
		{
			file="\A3FL_G506_MainMenu\Code";
			class credits {};
			class creditsMovie {};
		};
	};
};
class Attributes;
class RscStandardDisplay;
class RscProgress;
class RscStructuredText;
class RscPicture;
class RscButton;
class RscShortcutButton;
class RscButtonMenu;
class RscButtonMenuMain;
class A3FL_RscButtonMenuMain: RscButtonMenuMain {
	font="RobotoCondensed";
	class Attributes
	{
		align="Center";
		color="#ffffff";
		font="RobotoCondensed";
	};
};
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscText;
class RscVignette;
class RscDisplayGetReady;
class RscActiveText;
class RscListBox;
class RscListNBox;
class RscCombo;
class RscXListBox;
class RscHTML;
class RscPictureKeepAspect;
class RscActivePicture;
class RscMapControl;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscFrame;
class RscTitle;
class CA_Title;
class RscDebugConsole;
class RscTrafficLight;
class RscFeedback;
class RscMessageBox;
class RscControlsGroup;
class RscTextCheckbox;
class RscDisplayInventory_DLCTemplate;
class RscEdit;
class RscCheckBox;
class RscIGProgress;
class RscHitZones;
class RscVehicleToggles;
class RscIGUIText;
class RscIGUIValue;
class RscOpticsValue;
class RscOpticsText;
class Scrollbar;
class RscIGUIShortcutButton;
class RscActivePictureKeepAspect;
class RscTree;
class RscXSliderH;
class RscBackgroundGUI;
class RscBackgroundGUILeft;
class RscBackgroundGUIRight;
class RscBackgroundGUIBottom;
class RscBackgroundGUITop;
class RscBackgroundGUIDark;
class RscButtonMenuSteam;
class RscButtonTextOnly;
class RscButtonInvisable
{
	type=1;
	text="";
	colorText[]={0,0,0,0};
	colorDisabled[]={0,0,0,0};
	colorBackground[]={0,0,0,0};
	colorBackgroundDisabled[]={0,0,0};
	colorBackgroundActive[]={0,0,0,0};
	colorFocused[]={0,0,0,0};
	colorShadow[]={0,0,0,0};
	colorBorder[]={0,0,0,0};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.090000004,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.090000004,
		1
	};
	style=2;
	x=0;
	y=0;
	w=0.055589002;
	h=0.039216001;
	shadow=0;
	font="TahomaB";
	sizeEx=0.032000002;
	offsetX=0.003;
	offsetY=0.003;
	offsetPressedX=0.0020000001;
	offsetPressedY=0.0020000001;
	borderSize=0;
};
class RscVideo;
class A3FL_RscPicture
{
	text="";
	shadow=0;
	colorText[]={1,1,1,1};
	colorBackground[]={-1,-1,-1,-1};
	style=48;
	x=0;
	y=0;
	w=0.2;
	h=0.15000001;
	type=0;
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
	font="RobotoCondensed";
	sizeEx=-1;
};
class RscDisplayWelcome
{
	idd=999999;
	scriptName="RscDisplayWelcome";
	scriptPath="GUI";
	onLoad="[""onLoad"",_this,""RscDisplayWelcome"",'GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload="[""onUnload"",_this,""RscDisplayWelcome"",'GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
	class controlsBackground
	{
		class BackgroundLeft: RscText
		{
			colorBackground[]={0.1,0.1,0.1,1};
			x="- 10";
			y="- 10";
			w="safezoneX +  10";
			h="2 *  10";
		};
		class BackgroundRight: BackgroundLeft
		{
			x="safezoneX + safezoneW";
			w=10;
		};
		class Picture: RscPicture
		{
			idc=998;
			text="A3FL_G506_MainMenu\data\ingame1.jpg";
			x="0 * safezoneW + safezoneX";
			y="0 * safezoneH + safezoneY";
			w="safezoneW";
			h="safezoneH * 1.01";
		};
		class TitleBackground: RscText
		{
			colorBackground[]=
			{
				"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"
			};
			idc=1080;
			x="1 *      (   ((safezoneW / safezoneH) min 1.2) / 40) +   (safezoneX + (safezoneW -      ((safezoneW / safezoneH) min 1.2))/2)";
			y="1 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +   (safezoneY + (safezoneH -      (   ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w="38 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class RightBackground: RscText
		{
			colorBackground[]={0,0,0,0.69999999};
			idc=1081;
			x="1 *      (   ((safezoneW / safezoneH) min 1.2) / 40) +   (safezoneX + (safezoneW -      ((safezoneW / safezoneH) min 1.2))/2)";
			y="2.1 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +   (safezoneY + (safezoneH -      (   ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w="38 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h="20.8 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
	class controls
	{
		class Title: RscTitle
		{
			style=0;
			idc=1000;
			text="$STR_A3_RscDisplayWelcome_Title";
			x="1 *      (   ((safezoneW / safezoneH) min 1.2) / 40) +   (safezoneX + (safezoneW -      ((safezoneW / safezoneH) min 1.2))/2)";
			y="1 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +   (safezoneY + (safezoneH -      (   ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w="38 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonContinue: RscButtonMenuOK
		{
			text="$STR_A3_RscDisplayWelcome_ButtonContinue";
			x="32.75 *      (   ((safezoneW / safezoneH) min 1.2) / 40) +   (safezoneX + (safezoneW -      ((safezoneW / safezoneH) min 1.2))/2)";
			y="23 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +   (safezoneY + (safezoneH -      (   ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w="6.25 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class MainControlsGroup: RscControlsGroupNoHScrollbars
		{
			idc=2300;
			x="1 *      (   ((safezoneW / safezoneH) min 1.2) / 40) +   (safezoneX + (safezoneW -      ((safezoneW / safezoneH) min 1.2))/2)";
			y="2.1 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +   (safezoneY + (safezoneH -      (   ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w="38 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h="20.8 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class WelcomeStructuredText1: RscStructuredText
				{
					idc=1100;
					x="0.5 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y="0 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w="37 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
					h="7.3 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class WelcomeHTML: RscHTML
				{
					idc=1001;
					x="0.6 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y="0 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w="37 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
					h="6 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonSpoiler: RscButtonMenu
				{
					idc=2400;
					text="$STR_A3_RSCDISPLAYWELCOME_BUTTONSPOILER_SHOW";
					x="0.8 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y="8 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w="6.25 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
					h="1 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class SpoilerText: RscStructuredText
				{
					idc=1101;
					x="0.5 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y="9.1 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w="37 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
					h="4 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class WelcomeStructuredText2: RscStructuredText
				{
					idc=1102;
					x="0.5 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y="14 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w="37 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
					h="6 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
	};
};
class RscDisplayMainMenuBackground
{
	scriptName="RscDisplayMainMenuBackground";
	scriptPath="GUI";
	onLoad="[""onLoad"",_this,""RscDisplayMainMenuBackground"",'GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload="[""onUnload"",_this,""RscDisplayMainMenuBackground"",'GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
	idd=-1;
	fadein=0;
	fadeout=0;
	duration=1e+010;
	class Controls
	{
		class Background: RscText
		{
			idc=101;
			colorBackground[]={0.1,0.1,0.1,1};
			x="safezoneXAbs";
			y="- 10";
			w="safezoneWAbs";
			h="2 *  10";
		};
		class BackgroundLeft: Background
		{
			x="- 10";
			w="safezoneX +  10";
		};
		class BackgroundRight: Background
		{
			x="safezoneX + safezoneW";
			w=10;
		};
		class Picture: RscPicture
		{
			idc=102;
			text="A3FL_G506_MainMenu\data\ingame1.jpg";
			x="0 * safezoneW + safezoneX";
			y="0 * safezoneH + safezoneY";
			w="safezoneW";
			h="safezoneH * 1.01";
		};
	};
};
class RscDisplayMain: RscStandardDisplay
{
	idd=0;
	scriptName="RscDisplayMain";
	scriptPath="GUI";
	onLoad="[""onLoad"",_this,""RscDisplayMain"",'GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload="[""onUnload"",_this,""RscDisplayMain"",'GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
	delete Spotlight;
	class ControlsBackground
	{
		class Vignette: RscVignette
		{
		};
		class MouseArea: RscText
		{
			idc=999;
			style=16;
			x="safezoneXAbs";
			y="safezoneY";
			w="safezoneWAbs";
			h="safezoneH";
		};
		class BackgroundLeft: RscText
		{
			colorBackground[]={0.1,0.1,0.1,1};
			x="- 10";
			y="- 10";
			w="safezoneX +  10";
			h="2 *  10";
			text="";
		};
		class BackgroundRight: BackgroundLeft
		{
			x="safezoneX + safezoneW";
			w=10;
		};
		class Picture: RscPicture
		{
			idc=102;
			text="";
			x="0 * safezoneW + safezoneX";
			y="0 * safezoneH + safezoneY";
			w="safezoneW * 1.1";
			h="safezoneH * 1.1";
		};
	};
	class Controls
	{
		delete ModIcons;
		delete B_Quit;
		delete B_Expansions;
		delete B_Credits;
		delete B_Player;
		delete B_Options;
		delete B_SinglePlayer;
		delete B_MultiPlayer;
		delete B_SingleMission;
		delete B_Campaign;
		delete Date;
		delete ModList;
		delete TrafficLight;
		delete Version;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
		delete SpotlightBase;
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		class SpotlightPrev: RscActivePictureKeepAspect
		{
			idc=1060;
			text="";
			color[]={1,1,1,0};
			fade=1;
			x="0";
			y="0";
			w="0";
			h="0";
		};
		class SpotlightNext: SpotlightPrev
		{
			idc=1061;
			text="";
			y="0";
			angle=180;
		};
		/*class BackgroundBar: RscText
		{
			colorBackground[]={0,0,0,0.75};
			x="safezoneX";
			y="safezoneY + 2 *  (pixelH * pixelGrid * 2)";
			w="safezoneW";
			h="2 * (pixelH * pixelGrid * 2)";
		};
		class BackgroundCenter: BackgroundBar
		{
			colorBackground[]={0,0,0,0};
			x="0.5 - 2 *   2 *  (pixelW * pixelGrid * 2)";
			w="4 *   2 *  (pixelW * pixelGrid * 2)";
		};
		class BackgroundBarLeft: RscPicture
		{
			text="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradientMods_ca.paa";
			colorText[]={0,0,0,0};
			angle=180;
			x="0.5 - 4 *   2 *  (pixelW * pixelGrid * 2)";
			y="safezoneY + 2 *  (pixelH * pixelGrid * 2)";
			w="2 *   2 *  (pixelW * pixelGrid * 2)";
			h="2 *  (pixelH * pixelGrid * 2)";
		};
		class BackgroundBarRight: BackgroundBarLeft
		{
			angle=0;
			x="0.5 + 2 *   2 *  (pixelW * pixelGrid * 2)";
		};*/
		delete LogoApex;
		class News
		{
			x="2.5";
		};
		class Logo: RscActivePicture
		{
			text="A3FL_G506_MainMenu\data\a3fl_shadow.paa";
			tooltip="";
			color[]={1,1,1,1};
			colorActive[]={0.7,0.7,0.7,1};
			shadow=1;
			x="0.5 -  5 *  (pixelW * pixelGrid * 2)";
			y="safezoneY + (3 - 0.5 *  5) *  (pixelH * pixelGrid * 2)";
			w="2 *  5 *  (pixelW * pixelGrid * 2)";
			h="1 *  5 *  (pixelH * pixelGrid * 2)";
			onButtonClick="";
			onSetFocus="(_this select 0) ctrlsettextcolor [1,1,1,1];";
			onKillFocus="(_this select 0) ctrlsettextcolor [0.9,0.9,0.9,1];";
			onLoad="";
		};
		class TitleSingleplayer: RscButtonMenu
		{
			idc=1011;
			text="$STR_A3_RscDisplayMain_TitleSingleplayer_text";
			size="1.25 *  (pixelH * pixelGrid * 2)";
			style="0x02 + 0xC0";
			colorBackground[]={0,0,0,0};
			colorBackground2[]={1,1,1,1};
			class Attributes
			{
				align="center";
				color="#ffffff";
				font="PuristaLight";
				shadow=0;
				size=1;
			};
			class TextPos
			{
				left="0.1 *   2 *  (pixelW * pixelGrid * 2)";
				top="0.18 *   2 *  (pixelH * pixelGrid * 2)";
				right="0.1 *   2 *  (pixelW * pixelGrid * 2)";
				bottom="0.18 *   2 *  (pixelH * pixelGrid * 2)";
			};
			x="2.8";
			y="safezoneY + 2 *  (pixelH * pixelGrid * 2)";
			w="10 *  (pixelW * pixelGrid * 2)";
			h="2 *  (pixelH * pixelGrid * 2)";
		};
		class GroupSingleplayer: RscControlsGroupNoScrollbars
		{
			idc=1001;
			x="2.8";
			y="safezoneY + (2 +   2) *  (pixelH * pixelGrid * 2)";
			w="10 *  (pixelW * pixelGrid * 2)";
			h="(0 *  1.5) *  (pixelH * pixelGrid * 2)";
			class Controls
			{
				class Campaigns: RscButtonMenuMain
				{
					idc=101;
					colorBackground[]={0,0,0,0.75};
					colorBackgroundActive[]={1,1,1,0.5};
					text="$STR_A3_RscDisplayMain_ButtonCampaign";
					tooltip="$STR_TOOLTIP_MAIN_CAMPAIGN";
					x=0;
					y="(0) *  (pixelH * pixelGrid * 2) +  (pixelH)";
					w="10 *  (pixelW * pixelGrid * 2)";
					h="1.5 *  (pixelH * pixelGrid * 2) -  (pixelH)";
					onbuttonclick="uinamespace setvariable ['RscDisplayCampaignLoad_title', toUpper (localize 'STR_A3_RSCDISPLAYMAIN_BUTTONCAMPAIGN')];";
				};
				class Showcases: Campaigns
				{
					idc=150;
					colorBackground[]={0,0,0,0.75};
					colorBackgroundActive[]={1,1,1,0.5};
					text="$STR_A3_RscDisplayMain_ButtonShowcases";
					tooltip="$STR_TOOLTIP_MAIN_SHOWCASES";
					y="(1 *  1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
					onbuttonclick="uinamespace setvariable ['RscDisplaySingleMission_title', toUpper (localize 'STR_A3_RSCDISPLAYMAIN_BUTTONSHOWCASES')];";
				};
				class Challenges: Campaigns
				{
					idc=151;
					colorBackground[]={0,0,0,0.75};
					colorBackgroundActive[]={1,1,1,0.5};
					text="$STR_A3_RscDisplayMain_ButtonChallenges";
					tooltip="$STR_A3_RscDisplayMain_ButtonChallenges_tooltip";
					y="(2 *  1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
					onbuttonclick="uinamespace setvariable ['RscDisplaySingleMission_title', toUpper (localize 'STR_A3_RSCDISPLAYMAIN_BUTTONCHALLENGES')];";
				};
				class Scenarios: Campaigns
				{
					idc=103;
					colorBackground[]={0,0,0,0.75};
					colorBackgroundActive[]={1,1,1,0.5};
					text="$STR_A3_RscDisplayMain_ButtonScenarios";
					tooltip="$STR_TOOLTIP_MAIN_SCENARIOS";
					y="(3 *  1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
					onbuttonclick="uinamespace setvariable ['RscDisplaySingleMission_title', toUpper (localize 'STR_A3_RSCDISPLAYMAIN_BUTTONSCENARIOS')];";
				};
				/*class Editor: Campaigns
				{
					idc=142;
					colorBackground[]={0,0,0,0.75};
					colorBackgroundActive[]={1,1,1,0.5};
					text="$STR_A3_RscDisplayMain_ButtonEditor";
					tooltip="$STR_TOOLTIP_SINGLEPLAYER_EDITOR_A3";
					y="(4 *  1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
					onbuttonclick="";
				};*/
			};
		};
		class TitleMultiplayer: RscButtonMenu
		{
			idc=1012;
			text="Jouer";
			size="1.25 *  (pixelH * pixelGrid * 2)";
			style="0x02 + 0xC0";
			colorBackground[]={0,0,0,0};
			colorBackground2[]={1,1,1,1};
			class Attributes
			{
				align="center";
				color="#ffffff";
				font="RobotoCondensedBold";
				shadow=0;
				size=1;
			};
			class TextPos
			{
				left="0.1 *   2 *  (pixelW * pixelGrid * 2)";
				top="0.18 *   2 *  (pixelH * pixelGrid * 2)";
				right="0.1 *   2 *  (pixelW * pixelGrid * 2)";
				bottom="0.18 *   2 *  (pixelH * pixelGrid * 2)";
			};
			x="0.5 - ( 5 +  10) *  (pixelW * pixelGrid * 2)";
			y="safezoneY + 2 *  (pixelH * pixelGrid * 2)";
			w="10 *  (pixelW * pixelGrid * 2)";
			h="2 *  (pixelH * pixelGrid * 2)";
		};
		class GroupMultiplayer: RscControlsGroupNoScrollbars
		{
			idc=1002;
			x="0.5 - ( 5 +  10) *  (pixelW * pixelGrid * 2)";
			y="safezoneY + (2 +   2) *  (pixelH * pixelGrid * 2)";
			w="10 *  (pixelW * pixelGrid * 2)";
			h="(4 *  1.5) *  (pixelH * pixelGrid * 2)";
			class Controls
			{
				/*class QuickPlay: A3FL_RscButtonMenuMain
				{
					idc=154;
					colorBackground[]={0,0,0,0.75};
					colorBackgroundActive[]={1,1,1,0.5};
					text="Rejoindre FYD";
					tooltip="Rejoindre FYD";
					onbuttonclick="0 = connectToServer ['148.251.195.249', 2302, '99Fish'];";
					x=0;
					y="(0 *  1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
					w="10 *  (pixelW * pixelGrid * 2)";
					h="1.5 *  (pixelH * pixelGrid * 2) -  (pixelH)";
				};
				class ServerBrowser: QuickPlay
				{
					idc=105;
					text="$STR_A3_RscDisplayMain_GroupMultiplayer_ServerBrowser_text";
					tooltip="";
					y="(1 *  1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
					onbuttonclick="";
				};*/
				/*class Arsenal: QuickPlay
				{
					idc=203;
					colorBackground[]={0,0,0,0.75};
					colorBackgroundActive[]={1,1,1,0.5};
					text="$STR_A3_RscDisplayMain_ButtonVirtualArsenal";
					tooltip="$STR_A3_RscDisplayMain_ButtonVirtualArsenal_tooltip";
					y="(2 *  1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
					onbuttonclick="playMission['','\A3\Missions_F_Bootcamp\Scenarios\Arsenal.VR']";
					animTextureNormal="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\buttonMenu_ca.paa";
					animTextureDisabled="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\buttonMenu_ca.paa";
					animTextureOver="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\buttonMenuHover_ca.paa";
					animTextureFocused="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\buttonMenuHover_ca.paa";
					animTexturePressed="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\buttonMenu_ca.paa";
					animTextureDefault="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\buttonMenu_ca.paa";
				};
				class ApexProtocol: QuickPlay
				{
					idc=142;
					colorBackground[]={0,0,0,0.75};
					colorBackgroundActive[]={1,1,1,0.5};
					text="$STR_A3_RscDisplayMain_ButtonEditor";
					tooltip="$STR_TOOLTIP_SINGLEPLAYER_EDITOR_A3";
					y="(3 *  1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
					onbuttonclick="";
				};*/
			};
		};
		delete TitleTutorials;
		delete TitleIconTutorials;
		delete GroupTutorials;
		class TitleOptions: RscButtonMenu
		{
			idc=1014;
			text="$STR_A3_RscDisplayMain_TitleOptions_text";
			size="1.25 *  (pixelH * pixelGrid * 2)";
			style="0x02 + 0xC0";
			colorBackground[]={0,0,0,0};
			colorBackground2[]={1,1,1,1};
			class Attributes
			{
				align="center";
				color="#ffffff";
				font="RobotoCondensedBold";
				shadow=0;
				size=1;
			};
			class TextPos
			{
				left="0.1 *   2 *  (pixelW * pixelGrid * 2)";
				top="0.18 *   2 *  (pixelH * pixelGrid * 2)";
				right="0.1 *   2 *  (pixelW * pixelGrid * 2)";
				bottom="0.18 *   2 *  (pixelH * pixelGrid * 2)";
			};
			x="0.5 + ( 5) *  (pixelW * pixelGrid * 2)";
			y="safezoneY + 2 *  (pixelH * pixelGrid * 2)";
			w="10 *  (pixelW * pixelGrid * 2)";
			h="2 *  (pixelH * pixelGrid * 2)";
		};
		class GroupOptions: RscControlsGroupNoScrollbars
		{
			idc=1004;
			x="0.5 + ( 5) *  (pixelW * pixelGrid * 2)";
			y="safezoneY + (2 +   2) *  (pixelH * pixelGrid * 2)";
			w="10 *  (pixelW * pixelGrid * 2)";
			h="(4 *  1.5) *  (pixelH * pixelGrid * 2)";
			class Controls
			{
				class Video: A3FL_RscButtonMenuMain
				{
					idc=301;
					colorBackground[]={0,0,0,0.75};
					colorBackgroundActive[]={1,1,1,0.5};
					text="$STR_A3_RscDisplayMain_ButtonVideo";
					tooltip="$STR_TOOLTIP_MAIN_VIDEO";
					onbuttonclick="";
					x=0;
					y="(0 *  1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
					w="10 *  (pixelW * pixelGrid * 2)";
					h="1.5 *  (pixelH * pixelGrid * 2) -  (pixelH)";
				};
				class Audio: A3FL_RscButtonMenuMain
				{
					idc=302;
					colorBackground[]={0,0,0,0.75};
					colorBackgroundActive[]={1,1,1,0.5};
					text="$STR_A3_RscDisplayMain_ButtonAudio";
					tooltip="$STR_TOOLTIP_MAIN_AUDIO";
					onbuttonclick="";
					x=0;
					y="(1 *  1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
					w="10 *  (pixelW * pixelGrid * 2)";
					h="1.5 *  (pixelH * pixelGrid * 2) -  (pixelH)";
				};
				class Controls: A3FL_RscButtonMenuMain
				{
					idc=303;
					colorBackground[]={0,0,0,0.75};
					colorBackgroundActive[]={1,1,1,0.5};
					text="$STR_A3_RscDisplayMain_ButtonControls";
					tooltip="$STR_TOOLTIP_MAIN_CONTROLS";
					onbuttonclick="";
					x=0;
					y="(2 *  1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
					w="10 *  (pixelW * pixelGrid * 2)";
					h="1.5 *  (pixelH * pixelGrid * 2) -  (pixelH)";
				};
				class Game: A3FL_RscButtonMenuMain
				{
					idc=307;
					colorBackground[]={0,0,0,0.75};
					colorBackgroundActive[]={1,1,1,0.5};
					text="$STR_A3_RscDisplayMain_ButtonGame";
					tooltip="$STR_TOOLTIP_MAIN_GAME";
					onbuttonclick="";
					x=0;
					y="(3 *  1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
					w="10 *  (pixelW * pixelGrid * 2)";
					h="1.5 *  (pixelH * pixelGrid * 2) -  (pixelH)";
				};
				class Expansions: A3FL_RscButtonMenuMain
				{
					idc=140;
					text="$STR_A3_RscDisplayMain_ButtonExpansions";
					tooltip="$STR_TOOLTIP_MAIN_EXPANSIONS";
					onbuttonclick="";
					x=0;
					y="(15 *  1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
					w="10 *  (pixelW * pixelGrid * 2)";
					h="1.5 *  (pixelH * pixelGrid * 2) -  (pixelH)";
				};
			};
		};
		class GroupSession: RscControlsGroupNoScrollbars
		{
			idc=1005;
			x="safezoneX + safezoneW - ( 10 +   2) *  (pixelW * pixelGrid * 2) -  (pixelW)";
			y="safezoneY + (2 +   2) *  (pixelH * pixelGrid * 2)";
			w="10 *  (pixelW * pixelGrid * 2)";
			h="(4 *  1.5) *  (pixelH * pixelGrid * 2)";
			class Controls
			{
				class Profile: RscButtonMenuMain
				{
					idc=109;
					colorBackground[]={0,0,0,0.75};
					colorBackgroundActive[]={1,1,1,0.5};
					style=0;
					tooltip="$STR_TOOLTIP_MAIN_PLAYER";
					w="10 *  (pixelW * pixelGrid * 2)";
					y="(0 *  1.5) *  (pixelH * pixelGrid * 2) +  (pixelH)";
					onbuttonclick="";
					class Attributes
					{
						align="Center";
						color="#ffffff";
						font="RobotoCondensed";
					};
				};
				delete Unit;
			};
		};
		/*class Exit: RscButton
		{
			idc=106;
			colorBackground[]={0,0,0,0.2};
			text="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\exit_ca.paa";
			tooltip="$STR_TOOLTIP_MAIN_EXIT";
			style=48;
			colorText[]={1,1,1,1};
			colorBackgroundActive[]={0.78431398,0.137255,0.062745102,1};
			colorFocused[]={1,1,1,1};
			x="safezoneX + safezoneW -   2 *  (pixelW * pixelGrid * 2)";
			y="safezoneY + 2 *  (pixelH * pixelGrid * 2)";
			w="2 *  (pixelW * pixelGrid * 2)";
			h="2 *  (pixelH * pixelGrid * 2)";
			onMouseEnter="(_this select 0) ctrlsettextcolor [1,1,1,1];";
			onSetFocus="(_this select 0) ctrlsettextcolor [1,1,1,1];";
			onMouseExit="(_this select 0) ctrlsettextcolor [1,1,1,0.5];";
			onKillFocus="(_this select 0) ctrlsettextcolor [1,1,1,0.5];";
		};*/
		delete InfoVersion;
		delete InfoNews;
		delete InfoDLCs;
		delete InfoDLCsOwned;
		delete InfoMods;
		/*class Footer: RscText
		{
			text="Bienvenue à FYD!";
			style=2;
			sizeEx="1.2 *  (pixelH * pixelGrid * 2)";
			shadow=0;
			font="RobotoCondensedBold";
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0.75};
			x="safezoneX";
			y="safezoneY + safezoneH - 2 *  1 *  (pixelH * pixelGrid * 2)";
			w="safezoneW";
			h="(2) *  (pixelH * pixelGrid * 2)";
		};*/
		delete AllMissions;
		delete ProofsOfConcept;
	};
	class IconPicture {};
	class DlcOwnedIconPicture {};
	class DlcIconPicture {};
};
class A3FL_RscStructuredText
{
	x=0;
	y=0;
	h=0.035;
	w=0.1;
	type=13;
	style=0;
	text="";
	size="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorText[]={1,1,1,1};
	shadow=0;
	class Attributes
	{
		font="RobotoCondensed";
		color="#ffffff";
		colorLink="#D09B43";
		align="left";
		shadow=0;
	};
};
class RscTitles
{
	delete SplashBohemia;
	delete SplashArma3;
	delete SplashArma3Apex;
	delete SplashArma3Lite;
	delete SplashTagline;
	delete SplashESRB;
	class SplashCopyright {class controlsBackground {}; class controls {};};
};
class RscDisplayStart
{
	idd=104;
	scriptName="RscDisplayLoading";
	scriptPath="Loading";
	onLoad="[2] call compile preprocessfilelinenumbers gettext (configfile >> 'CfgFunctions' >> 'init'); ['onLoad',_this,'RscDisplayLoading','Loading'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload="[""onUnload"",_this,""RscDisplayLoading"",'Loading'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
	class controlsBackground
	{
		delete Black;
		delete Map;
		delete CA_Vignette;
		delete Noise;
		delete Line;
		class RscPicture_1200: A3FL_RscPicture
		{
			idc=-1;
			text="A3FL_G506_MainMenu\data\ingame1.jpg";
			x="0 * safezoneW + safezoneX";
			y="0 * safezoneH + safezoneY";
			w="safezoneW";
			h="safezoneH * 1.01";
		};
	};
	class controls
	{
		delete Text;
		delete Progress;
		delete Progress2;
		delete LoadingStart;
		/*
		class Logo: A3FL_RscPicture
		{
			idc=1000;
			text="A3FL_G506_MainMenu\data\spero.paa";
			x="0.01 * safezoneW + safezoneX";
			y="0.02 * safezoneH + safezoneY";
			w="0.0515625 * safezoneW";
			h="0.088 * safezoneH";
		};
		*/
	};
};
/*class CfgCredits
{
	class CreditsOrbat
	{
		text="FYD";
		textShort="FYD";
		texture="A3FL_G506_MainMenu\data\arma3_expansion_ca.paa";
		insignia="A3FL_G506_MainMenu\data\bi_white_ca.paa";
		textureSize=3;
		color[]={0,0,0,1};
		colorInsignia="colorBlack";
		size="";
		class Arma3
		{
			text="FYD";
			textShort=" ";
			texture="A3FL_G506_MainMenu\data\arma3_expansion_ca.paa";
			insignia="A3FL_G506_MainMenu\data\bi_white_ca.paa";
			textureSize=3;
			color[]={0,0,0,1};
			colorInsignia="colorBlack";
			size="";
			tags[]=
			{
				"BI"
			};
			description="$STR_A3_CREDITS_ARMA3TOOLTIP";
			paramsArray[]=
			{
				"profileName"
			};
			delete CEO;
			class Contributors {
				text="<t font='RobotoCondensedBold' color='#FFFFFF' align='center' size='1.01'>Framework / Mod Contributors</t>";
				textShort="Framework / Mod Contributors";
				commander="";
				commanderRank="";
				description="<t align='center' font='RobotoCondensed' size='0.9'>Framework / Mod Contributors</t>";
				type="Assault";
				size="Division";
				side="East";
				tags[]=
				{
					"BIS"
				};
				class Edward
				{
					text="<t font='RobotoCondensedBold' color='#FFFFFF' align='center' size='1.01'>Direction FYD</t>";
					textShort="Directeurs";
					commander="";
					commanderRank="";
					description="<t align='center' font='RobotoCondensed' size='0.9'>Dixon et Parras</t><br/><t align='center' font='RobotoCondensedLight' size='0.8'>Directeurs de la Communauté</t>";
					type="HQ";
					size="Army";
					side="East";
					tags[]=
					{
						"BIS"
					};
					class LeadChef
					{
						text="<t font='RobotoCondensedBold' color='#FFFFFF' align='center' size='1.01'>Lead Chef FYD</t>";
						textShort="Lead Chef";
						commander="";
						commanderRank="";
						description="<t align='center' font='RobotoCondensed' size='0.9'>Matthew</t><br/><t align='center' font='RobotoCondensedLight' size='0.8'>Lead Chef</t>";
						type="Support";
						size="Section";
						side="Resistance";
						tags[]=
						{
							"BIS"
						};
						class LeadDev
						{
							text="<t font='RobotoCondensedBold' color='#FFFFFF' align='center' size='1.01'>Lead Développement</t>";
							textShort="Lead Développement";
							commander="";
							commanderRank="";
							description="<t align='center' font='RobotoCondensed' size='0.9'>Dixon</t>";
							type="Support";
							size="Section";
							side="Resistance";
							tags[]=
							{
								"BIS"
							};
							class Dev
							{
								text="<t font='RobotoCondensedBold' color='#FFFFFF' align='center' size='1.01'>Développeurs</t>";
								textShort="Développeurs";
								commander="";
								commanderRank="";
								description="";
								type="Support";
								size="Section";
								side="Resistance";
								tags[]=
								{
									"BIS"
								};
								class Dev3D
								{
									text="<t font='RobotoCondensedBold' color='#FFFFFF' align='center' size='1.01'>Développeurs 3D</t>";
									textShort="Développeurs 3D";
									commander="";
									commanderRank="";
									description="<t align='center' font='RobotoCondensed' size='0.9'>Parras</t>";
									type="Support";
									size="Section";
									side="Resistance";
									tags[]=
									{
										"BIS"
									};
								};
								class DevSQF
								{
									text="<t font='RobotoCondensedBold' color='#FFFFFF' align='center' size='1.01'>Développeurs SQF</t>";
									textShort="Développeurs SQF";
									commander="";
									commanderRank="";
									description="<t align='center' font='RobotoCondensed' size='0.9'>Dixon</t>";
									type="Support";
									size="Section";
									side="Resistance";
									tags[]=
									{
										"BIS"
									};
								};
								class Graph
								{
									text="<t font='RobotoCondensedBold' color='#FFFFFF' align='center' size='1.01'>Graphistes</t>";
									textShort="Graphistes";
									commander="";
									commanderRank="";
									description="<t align='center' font='RobotoCondensed' size='0.9'>Captain</t>";
									type="Support";
									size="Section";
									side="Resistance";
									tags[]=
									{
										"BIS"
									};
								};
							};
						};
						class ChefSupport
						{
							text="<t font='RobotoCondensedBold' color='#FFFFFF' align='center' size='1.01'>Chef Support FYD</t>";
							textShort="Chef Support";
							commander="";
							commanderRank="";
							description="<t align='center' font='RobotoCondensed' size='0.9'></t><br/>";
							type="Support";
							size="Section";
							side="Resistance";
							tags[]=
							{
								"BIS"
							};
							class SeniorSupport
							{
								text="<t font='RobotoCondensedBold' color='#FFFFFF' align='center' size='1.01'>Seniors Support</t>";
								textShort="Seniors Support";
								commander="";
								commanderRank="";
								description="<t align='center' font='RobotoCondensed' size='0.9'></t><br/>";
								type="Support";
								size="Section";
								side="Resistance";
								tags[]=
								{
									"BIS"
								};
							};
							class Support
							{
								text="<t font='RobotoCondensedBold' color='#FFFFFF' align='center' size='1.01'>Supports</t>";
								textShort="Supports";
								commander="";
								commanderRank="";
								description="<t align='center' font='RobotoCondensed' size='0.9'></t><br/>";
								type="Support";
								size="Section";
								side="Resistance";
								tags[]=
								{
									"BIS"
								};
							};
						};
						class ChefExecutif
						{
							text="<t font='RobotoCondensedBold' color='#FFFFFF' align='center' size='1.01'>Chef Exécutif FYD</t>";
							textShort="Chef Exécutif";
							commander="";
							commanderRank="";
							description="<t align='center' font='RobotoCondensed' size='0.9'></t><br/>";
							type="Support";
							size="Section";
							side="Resistance";
							tags[]=
							{
								"BIS"
							};
							class SupervisorExecutif
							{
								text="<t font='RobotoCondensedBold' color='#FFFFFF' align='center' size='1.01'>Superviseurs Executif</t>";
								textShort="Superviseurs Executif";
								commander="";
								commanderRank="";
								description="<t align='center' font='RobotoCondensed' size='0.9'></t><br/>";
								type="Support";
								size="Section";
								side="Resistance";
								tags[]=
								{
									"BIS"
								};
							};
							class Support
							{
								text="<t font='RobotoCondensedBold' color='#FFFFFF' align='center' size='1.01'>Exécutifs</t>";
								textShort="Exécutifs";
								commander="";
								commanderRank="";
								description="<t align='center' font='RobotoCondensed' size='0.9'></t><br/>";
								type="Support";
								size="Section";
								side="Resistance";
								tags[]=
								{
									"BIS"
								};
							};
						};
					};
				};
			};
		};
	};
	class CreditsMovie
	{
		item1[]=
		{
			
			{
				"<t font='RobotoCondensedBold' color='#EEAC15' size='1.3'>Credits</t>"
			},
			
			{
				"",
				"",
				"",
				"<t font='RobotoCondensedBold' color='#1588EE' size='1.09'>Contribution Staff</t>",
				"<t font='RobotoCondensed' size='1.05'>Dixon</t>",
				"<t font='RobotoCondensed' size='1.05'>Parras</t>",
				"<t font='RobotoCondensed' size='1.05'>Matthew</t>",
				"",

				"",
				"",
				"<t font='RobotoCondensedBold' color='#B3B3B3' size='1.09'>Contribution Développement</t>",
				"<t font='RobotoCondensed' size='1.05'>Kai - Map</t>",
				"<t font='RobotoCondensed' size='1.05'>Jake - Map</t>",
				"<t font='RobotoCondensed' size='1.05'>Kane - Scripts</t>",
				"<t font='RobotoCondensed' size='1.05'>David - Scripts</t>",
				"<t font='RobotoCondensed' size='1.05'>Jason - Scripts / Map / Mods</t>",
				"<t font='RobotoCondensed' size='1.05'>Winston - Scripts / Map / Mods</t>",
				"<t font='RobotoCondensed' size='1.05'>Dixon - Scripts / Map / Mods</t>",
				"<t font='RobotoCondensed' size='1.05'>Parras - Mods</t>",
				"<t font='RobotoCondensed' size='1.05'>CAPTAIN - Graphisme</t>",
				"",

				"",
				"",
				"<t font='RobotoCondensedBold' color='#14BCAF' size='1.09'>Framework / Mod Creators</t>",
				"<t font='RobotoCondensed' size='1.05'>TFAR</t>",
				"<t font='RobotoCondensed' size='1.05'>CBA</t>",
				"<t font='RobotoCondensed' size='1.05'>ArmA 3 Project Life</t>",
				"<t font='RobotoCondensed' size='1.05'>ArmA 3 Fishers Life</t>",
				"<t font='RobotoCondensed' size='1.05'>ArmA 3 Project Life France</t>",
				"<t font='RobotoCondensed' size='1.05'>ArmA 3 Fishers Life France</t>",
				"",
				"",
				"",
				"",
				"",
			}
		};
		delete item2;
		delete item3;
		delete item4;
		delete item5;
		delete item6;
		delete item7;
		delete item8;
		delete item9;
		delete item10;
		delete item11;
		delete item12;
		delete item13;
		delete item14;
		delete item15;
		delete item16;
		delete item17;
		delete item18;
		delete item19;
		delete item20;
		delete item21;
		delete item22;
		delete item23;
		delete item24;
		delete item25;
		delete item26;
		delete item27;
		delete item28;
		delete item29;
		delete item30;
		delete item31;
		delete item32;
		delete item33;
		delete item34;
		delete item35;
		delete item36;
		delete item37;
		delete item38;
		delete item39;
		delete item40;
		delete item41;
		delete item42;
		delete item43;
		delete item44;
		delete item45;
		delete item46;
		delete item47;
		delete item48;
		delete item49;
		delete item50;
		delete item51;
		delete item52;
		delete item53;
		delete item54;
		delete item55;
		delete item56;
		delete item57;
		delete supporters;
	};
};
*/