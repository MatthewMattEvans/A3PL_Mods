class CfgPatches
{
	class FYD_UI
	{
		author="Dixon";
		name="FYD - User Interface";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Functions_F",
			"A3_UiFonts_F",
			"A3_Ui_F",
			"A3_Map_Altis",
			"A3_Map_Stratis",
			"A3_Map_Stratis_Scenes",
			"A3_Map_Altis_Scenes",
			"A3_map_tanoa_scenes_f",
			"A3_map_tanoa_scenes_f",
			"A3_map_vr_scenes_f",
			"A3_map_vr",
			"A3_map_enoch",
			"A3_map_enoch_scenes_f"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
		worlds[]={};
	};
};
class CfgFunctions
{
	class UI
	{
		tag="FYD";
		class init
		{
			file="\FYD_UI\Scripts";
			class initDisplay
			{
			};
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
			"Altis_intro1"
		};
	};
	initWorld="altis";
	demoWorld="altis";
};
class CfgMissions
{
	class Cutscenes
	{
		class Altis_intro1
		{
			directory="FYD_UI\introExp.Stratis";
		};
		class Tanoa_intro1
		{
			directory="FYD_UI\introExp.Stratis";
		};
		class Stratis_intro1
		{
			directory="FYD_UI\introExp.Stratis";
		};
		class Map_VR_anim01
		{
			directory="FYD_UI\introExp.Stratis";
		};
		class Malden_intro
		{
			directory="FYD_UI\introExp.Stratis";
		};
		class Enoch_intro1
		{
			directory="FYD_UI\introExp.Stratis";
		};
		class Enoch_intro
		{
			directory="FYD_UI\introExp.Stratis";
		};
		class Livonia_intro1
		{
			directory="FYD_UI\introExp.Stratis";
		};
		class Livonia_intro
		{
			directory="FYD_UI\introExp.Stratis";
		};
	};
};
class RscText;
class RscButtonMenu;
class RscActiveText;
class RscPicture;
class RscListBox;
class RscDisplayInventory_DLCTemplate;
class RscProgress;
class RscCombo;
class RscButton;
class CfgDifficultyPresets
{
	defaultPreset="Veteran";
	class Veteran
	{
		class Options
		{
			thirdPersonView=1;
			stanceIndicator=2;
			staminaBar=0;
			weaponInfo=2;
			waypoints=2;
			commands=0;
			deathMessages=0;
		};
	};
};
class RscPictureKeepAspect;
class VScrollbar;
class HScrollbar;
class RscHTML;
class RscControlsGroupNoScrollbars;
class RscStructuredText;
class RscObject;
class RscListNBox;
class RscCheckBox;
class RscButtonTextOnly;
class Attributes;
class RscStandardDisplay;
class RscControlsGroupNoHScrollbars;
class RscControlsGroup;
class RscVignette;
class RscFrame;
class RscTitle;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscButtonMenuSteam;
class RscDisplayMain: RscStandardDisplay
{
	idd=0;
	movingEnable=0;
	enableSimulation=1;
	onLoad="[_this,'RscDisplayMain','load'] call (uiNamespace getVariable 'FYD_fnc_initDisplay')";
	onUnload="[_this,'RscDisplayMain','unload'] call (uiNamespace getVariable 'FYD_fnc_initDisplay')";
	delete Spotlight;
	class ControlsBackground
	{
		delete MouseArea;
		delete BackgroundLeft;
		delete BackgroundRight;
		delete Picture;
		class FYDBackground_copy1
		{
			type=0;
			idc=-1;
			x="safeZoneX + safeZoneW * -0.00625";
			y="safeZoneY + safeZoneH * -0.02";
			w="safeZoneW * 1.0125";
			h="safeZoneH * 0.10777778";
			style=0;
			text="";
			colorBackground[]={0,0.30599999,1,1};
			colorText[]={1,1,1,1};
			font="PuristaMedium";
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			shadow=0;
		};
		class FYDBackground
		{
			type=0;
			idc=-1;
			x="safeZoneX + safeZoneW * -0.00625";
			y="safeZoneY + safeZoneH * -0.02";
			w="safeZoneW * 1.0125";
			h="safeZoneH * 0.1";
			style=0;
			text="";
			colorBackground[]={0.029999999,0.029999999,0.029999999,1};
			colorText[]={0.20389999,0.2353,0.53729999,1};
			font="PuristaMedium";
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			shadow=0;
		};
	};
	class Controls
	{
		delete GroupTutorials;
		delete Exit;
		delete TitleIconMultiplayer;
		delete TitleIconOptions;
		delete TitleIconTutorials;
		delete AllMissions;
		delete InfoMods;
		delete InfoNews;
		delete Footer;
		delete GroupMultiplayer;
		delete GroupOptions;
		delete GroupSession;
		delete InfoDLCs;
		delete InfoDLCsOwned;
		delete InfoVersion;
		delete Logo;
		delete ProofsOfConcept;
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete SpotlightBase;
		delete TitleMultiplayer;
		delete TitleOptions;
		delete TitleSession;
		delete TitleTutorials;
		delete B_Player;
		delete B_SinglePlayer;
		delete B_SingleMission;
		delete B_MultiPlayer;
		delete B_MissionEditor;
		delete B_Credits;
		delete B_Quit;
		delete B_Campaign;
		delete B_Expansions;
		delete B_Options;
		delete Date;
		delete Version;
		delete Modlist;
		delete CA_ARMA2;
		delete CA_PlayerName;
		delete CA_Version;
		delete CA_SinglePlayer;
		delete CA_Editor;
		delete CA_PlayerProfile;
		delete CA_MP;
		delete CA_Options;
		delete CA_Expansions;
		delete CA_Exit;
		delete CA_MenuBack;
		delete CA_TitleBack;
		delete CA_BottomBack;
		delete Mainback;
		delete GameLogo;
		delete Title;
		delete PlayersName;
		delete ButtonPlay;
		delete ButtonCampaign;
		delete ButtonShowcases;
		delete ButtonChallenges;
		delete ButtonScenarios;
		delete ButtonLearn;
		delete ButtonVRTraining;
		delete ButtonVirtualArsenal;
		delete ButtonTutorialHints;
		delete ButtonCommunityGuide;
		delete ButtonOptions;
		delete ButtonCredits;
		delete ButtonEditor;
		delete ButtonMultiplayer;
		delete ButtonVideo;
		delete ButtonAudio;
		delete ButtonControls;
		delete ButtonGame;
		delete ButtonProfile;
		delete ButtonExpansionsaRSENAL;
		delete ButtonExit;
		delete Button3DEditor;
		delete ButtonAllMissions;
		delete News;
		delete LogoApex;
		delete CopyrightText;
		delete VersionNumber;
		delete VersionText;
		delete MyCityText;
		delete ModIconsBackground;
		delete ModIcons;
		delete OwnedDLCIconsBackground;
		delete OwnedDLCIcons;
		delete DLCIconsBackground;
		delete DLCIcons;
		delete ListSort;
		delete BackgroundCenter;
		delete BackgroundBarRight;
		delete BackgroundBarLeft;
		delete GroupSingleplayer;
		delete TitleIconSingleplayer;
		delete TitleSingleplayer;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
		delete BackgroundBar;
		class WarningText
		{
			idc=-1;
			text="Merci d'avoir lancé FYD! Si vous un problème pour vous connecter au serveur, demandez de l'aide sur notre teamspeak.";
			x="0.7475 * safezoneW + safezoneX";
			y="0.229 * safezoneH + safezoneY";
			w="0.2125 * safezoneW";
			h="0.0611112 * safezoneH";
			type=13;
			style=0;
			size="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			colorText[]={1,1,1,1};
			shadow=1;
			class Attributes
			{
				font="RobotoCondensed";
				color="#ffffff";
				align="left";
				shadow=1;
			};
		};
		class FYDMultiplayer
		{
			type=1;
			idc=105;
			x="safeZoneX + safeZoneW * 0.06875";
			y="safeZoneY + safeZoneH * 0.2";
			w="safeZoneW * 0.2125";
			h="safeZoneH * 0.06111112";
			style=2;
			text="SE CONNECTER";
			onButtonClick="[(findDisplay 0),'FYD_MainMenu','playserver1'] call (uiNamespace getVariable 'FYD_fnc_initDisplay')";
			borderSize=0.02;
			colorBackground[]={0.039999999,0.039999999,0.039999999,1};
			colorBackgroundActive[]={0.50199997,0.50199997,0.50199997,1};
			colorBackgroundDisabled[]={0.30199999,0.30199999,0.30199999,1};
			colorBorder[]={0,0.30599999,1,1};
			colorDisabled[]={0.2,0.2,0.2,1};
			colorFocused[]={0.2,0.2,0.2,1};
			colorShadow[]={0,0,0,1};
			colorText[]={1,1,1,1};
			font="PuristaMedium";
			offsetPressedX=0;
			offsetPressedY=0;
			offsetX=0;
			offsetY=0;
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2.5)";
			soundClick[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundClick",
				0.090000004,
				1
			};
			soundEnter[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundEnter",
				0.090000004,
				1
			};
			soundEscape[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundEscape",
				0.090000004,
				1
			};
			soundPush[]=
			{
				"\A3\ui_f\data\sound\RscButton\soundPush",
				0.090000004,
				1
			};
			shadow=0;
		};
		/*class FYDMultiplayer2: FYDMultiplayer
		{
			x="safeZoneX + safeZoneW * 0.06875";
			y="safeZoneY + safeZoneH * 0.39555556";
			w="safeZoneW * 0.2125";
			h="safeZoneH * 0.06111112";
			text="JOIN SERVER 2";
			onButtonClick="[(findDisplay 0),'FYD_MainMenu','playserver3'] call (uiNamespace getVariable 'FYD_fnc_initDisplay')";
		};*/
		class FYDTitle
		{
			type=0;
			idc=-1;
			//tooltip="Site internet";
			url="https://fydroleplay.fr";
			action="https://fydroleplay.fr";
			x="safeZoneX + safeZoneW * 0.395";
			y="safeZoneY + safeZoneH * -0.13444444";
			w="safeZoneW * 0.2125";
			h="safeZoneH * 0.35444445";
			style="2 + 48";
			text="\FYD_UI\splash.paa";
			colorBackground[]={0.97250003,0.97250003,0.97250003,0};
			colorText[]={1,1,1,1};
			font="PuristaMedium";
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 3)";
		};
		class FYDEditor: FYDMultiplayer
		{
			idc=142;
			x="safeZoneX + safeZoneW * 0.06875";
			y="safeZoneY + safeZoneH * 0.39555556";
			w="safeZoneW * 0.2125";
			h="safeZoneH * 0.06111112";
			text="EDITEUR";
			onButtonClick="";
			// onLoad="if !(profileNamespace getVariable ['9308970472', false]) then {(_this select 0) ctrlShow false;};";
		};
		class LocalServer: FYDMultiplayer
		{
			idc=5604;
			x="safeZoneX + safeZoneW * 0.06875";
			y="safeZoneY + safeZoneH * 0.29777778";
			w="safeZoneW * 0.2125";
			h="safeZoneH * 0.06111112";
			text="SERVEUR DEV";
			onButtonClick="[(findDisplay 0),'FYD_MainMenu','playserver2'] call (uiNamespace getVariable 'FYD_fnc_initDisplay')";
			onLoad="if !(profileNamespace getVariable ['9308970472', false]) then {(_this select 0) ctrlShow false;};";
		};
		class FYDOptions: FYDMultiplayer
		{
			idc=301;
			x="safeZoneX + safeZoneW * 0.06875";
			y="safeZoneY + safeZoneH * 0.49333334";
			w="safeZoneW * 0.2125";
			h="safeZoneH * 0.06111112";
			text="OPTIONS";
			onButtonClick="";
		};
		class FYDProfile: FYDMultiplayer
		{
			idc=109;
			x="safeZoneX + safeZoneW * 0.06875";
			y="safeZoneY + safeZoneH * 0.59111112";
			w="safeZoneW * 0.2125";
			h="safeZoneH * 0.06111112";
			text="JUGADORA";
			onButtonClick="";
		};
		class FYDExit: FYDMultiplayer
		{
			idc=106;
			x="safeZoneX + safeZoneW * 0.06875";
			y="safeZoneY + safeZoneH * 0.68888889";
			w="safeZoneW * 0.2125";
			h="safeZoneH * 0.06111112";
			text="QUITTER";
			onButtonClick="";
		};
	};
	class IconPicture: RscPictureKeepAspect
	{
		spacing="(4 * pixelH)";
		x=0;
		y=0;
		w="2 *  (pixelW * pixelGrid * 2)";
		h="2 *  (pixelH * pixelGrid * 2)";
	};
	class DlcOwnedIconPicture: RscPictureKeepAspect
	{
		spacing="(4 * pixelH)";
		x=0;
		y=0;
		w="2 *  (pixelW * pixelGrid * 2)";
		h="2 *  (pixelH * pixelGrid * 2)";
	};
	class DlcIconPicture: RscPictureKeepAspect
	{
		spacing="(4 * pixelH)";
		x=0;
		y=0;
		w="2 *  (pixelW * pixelGrid * 2)";
		h="2 *  (pixelH * pixelGrid * 2)";
		colorText[]={1,1,1,0.5};
	};
};
class RscDisplayMultiplayerSetup: RscStandardDisplay
{
	onLoad="[""onLoad"",_this,""RscDisplayMultiplayerSetup"",'GUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
	onUnload="[""onUnload"",_this,""RscDisplayMultiplayerSetup"",'GUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
	west="FYD_UI\pd.paa";
	east="FYD_UI\ems.paa";
	guer="FYD_UI\ems.paa";
	Civilian="FYD_UI\civ.paa";
	none="#(argb,8,8,3)color(0,0,0,0)";
	westUnlocked="A3\ui_f\data\map\diary\icons\playerWest_ca.paa";
	westLocked="FYD_UI\pd.paa";
	eastUnlocked="A3\ui_f\data\map\diary\icons\playerEast_ca.paa";
	eastLocked="FYD_UI\ems.paa";
	guerUnlocked="A3\ui_f\data\map\diary\icons\playerGuer_ca.paa";
	guerLocked="FYD_UI\ems.paa";
	civlUnlocked="A3\ui_f\data\map\diary\icons\playerCiv_ca.paa";
	civlLocked="FYD_UI\civ.paa";
	disabledAllAI="$STR_DISP_MULTI_ENABLE_AI";
	enabledAllAI="$STR_DISP_MULTI_DISABLE_AI";
	hostLocked="$STR_DISP_MULTI_UNLOCK";
	hostUnlocked="$STR_DISP_MULTI_LOCK";
	colorNotAssigned[]={1,1,1,0.25};
	colorAssigned[]={1,1,1,1};
	colorConfirmed[]={0,1,0,1};
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
		class Vignette: RscVignette
		{
			idc=114998;
		};
		class TileGroup: RscControlsGroupNoScrollbars
		{
			idc=115099;
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneH";
			disableCustomColors=1;
			class Controls
			{
				class TileFrame: RscFrame
				{
					idc=114999;
					x=0;
					y=0;
					w="safezoneW";
					h="safezoneH";
					colortext[]={0,0,0,1};
				};
				class Tile_0_0: RscText
				{
					idc=115000;
					x="(0 * 1/6) * safezoneW";
					y="(0 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_0_1: RscText
				{
					idc=115001;
					x="(0 * 1/6) * safezoneW";
					y="(1 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_0_2: RscText
				{
					idc=115002;
					x="(0 * 1/6) * safezoneW";
					y="(2 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_0_3: RscText
				{
					idc=115003;
					x="(0 * 1/6) * safezoneW";
					y="(3 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_0_4: RscText
				{
					idc=115004;
					x="(0 * 1/6) * safezoneW";
					y="(4 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_0_5: RscText
				{
					idc=115005;
					x="(0 * 1/6) * safezoneW";
					y="(5 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_1_0: RscText
				{
					idc=115010;
					x="(1 * 1/6) * safezoneW";
					y="(0 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_1_1: RscText
				{
					idc=115011;
					x="(1 * 1/6) * safezoneW";
					y="(1 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_1_2: RscText
				{
					idc=115012;
					x="(1 * 1/6) * safezoneW";
					y="(2 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_1_3: RscText
				{
					idc=115013;
					x="(1 * 1/6) * safezoneW";
					y="(3 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_1_4: RscText
				{
					idc=115014;
					x="(1 * 1/6) * safezoneW";
					y="(4 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_1_5: RscText
				{
					idc=115015;
					x="(1 * 1/6) * safezoneW";
					y="(5 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_2_0: RscText
				{
					idc=115020;
					x="(2 * 1/6) * safezoneW";
					y="(0 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_2_1: RscText
				{
					idc=115021;
					x="(2 * 1/6) * safezoneW";
					y="(1 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_2_2: RscText
				{
					idc=115022;
					x="(2 * 1/6) * safezoneW";
					y="(2 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_2_3: RscText
				{
					idc=115023;
					x="(2 * 1/6) * safezoneW";
					y="(3 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_2_4: RscText
				{
					idc=115024;
					x="(2 * 1/6) * safezoneW";
					y="(4 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_2_5: RscText
				{
					idc=115025;
					x="(2 * 1/6) * safezoneW";
					y="(5 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_3_0: RscText
				{
					idc=115030;
					x="(3 * 1/6) * safezoneW";
					y="(0 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_3_1: RscText
				{
					idc=115031;
					x="(3 * 1/6) * safezoneW";
					y="(1 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_3_2: RscText
				{
					idc=115032;
					x="(3 * 1/6) * safezoneW";
					y="(2 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_3_3: RscText
				{
					idc=115033;
					x="(3 * 1/6) * safezoneW";
					y="(3 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_3_4: RscText
				{
					idc=115034;
					x="(3 * 1/6) * safezoneW";
					y="(4 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_3_5: RscText
				{
					idc=115035;
					x="(3 * 1/6) * safezoneW";
					y="(5 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_4_0: RscText
				{
					idc=115040;
					x="(4 * 1/6) * safezoneW";
					y="(0 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_4_1: RscText
				{
					idc=115041;
					x="(4 * 1/6) * safezoneW";
					y="(1 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_4_2: RscText
				{
					idc=115042;
					x="(4 * 1/6) * safezoneW";
					y="(2 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_4_3: RscText
				{
					idc=115043;
					x="(4 * 1/6) * safezoneW";
					y="(3 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_4_4: RscText
				{
					idc=115044;
					x="(4 * 1/6) * safezoneW";
					y="(4 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_4_5: RscText
				{
					idc=115045;
					x="(4 * 1/6) * safezoneW";
					y="(5 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_5_0: RscText
				{
					idc=115050;
					x="(5 * 1/6) * safezoneW";
					y="(0 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_5_1: RscText
				{
					idc=115051;
					x="(5 * 1/6) * safezoneW";
					y="(1 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_5_2: RscText
				{
					idc=115052;
					x="(5 * 1/6) * safezoneW";
					y="(2 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_5_3: RscText
				{
					idc=115053;
					x="(5 * 1/6) * safezoneW";
					y="(3 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_5_4: RscText
				{
					idc=115054;
					x="(5 * 1/6) * safezoneW";
					y="(4 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
				class Tile_5_5: RscText
				{
					idc=115055;
					x="(5 * 1/6) * safezoneW";
					y="(5 * 1/6) * safezoneH";
					w="1/6 * safezoneW";
					h="1/6 * safezoneH";
					colorBackground[]={0,0,0,0.1};
				};
			};
		};
		class RscTitleBackground: RscText
		{
			colorBackground[]={0,0,0,0.80000001};
			idc=1080;
			x="1 * (((safezoneW / safezoneH) min 1.2) / 40) + (SafezoneX)";
			y="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY)";
			w="SafezoneW - (2 * (((safezoneW / safezoneH) min 1.2) / 40))";
			h="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class FYD_WelcomeBackground: RscText
		{
			idc=1087;
			text="                                                    Bienvenue à FYD! ";
			x="0.334999 * safezoneW + safezoneX";
			y="0.1326 * safezoneH + safezoneY";
			w="0.397031 * safezoneW";
			h="0.033 * safezoneH";
			colorBackground[]={0,0,0,0.80000001};
		};
		class FYD_WhatRoleBackground: RscText
		{
			idc=1091;
			x="0.335 * safezoneW + safezoneX";
			y="0.2206 * safezoneH + safezoneY";
			w="0.397031 * safezoneW";
			h="0.165 * safezoneH";
			colorBackground[]={0,0,0,0.60000002};
		};
		class FYD_WhatRoleTopBackground: RscText
		{
			idc=1090;
			x="0.335 * safezoneW + safezoneX";
			y="0.1986 * safezoneH + safezoneY";
			w="0.397031 * safezoneW";
			h="0.022 * safezoneH";
			colorBackground[]={0,0,0,0.80000001};
		};
		class FYD_PickSlotBackground: RscText
		{
			idc=1089;
			x="0.33552 * safezoneW + safezoneX";
			y="0.451948 * safezoneH + safezoneY";
			w="0.39651 * safezoneW";
			h="0.463852 * safezoneH";
			colorBackground[]={0,0,0,0.60000002};
		};
		class FYD_PickSlotTopBackground: RscText
		{
			idc=1088;
			x="0.335516 * safezoneW + safezoneX";
			y="0.4296 * safezoneH + safezoneY";
			w="0.39651 * safezoneW";
			h="0.022 * safezoneH";
			colorBackground[]={0,0,0,0.80000001};
		};
		class FYD_WhatRoleText: RscText
		{
			idc=1004;
			text="What role would you like to play?";
			x="0.337062 * safezoneW + safezoneX";
			y="0.1986 * safezoneH + safezoneY";
			w="0.103125 * safezoneW";
			h="0.022 * safezoneH";
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85)";
		};
		class FYD_PickSlotText: RscText
		{
			idc=1010;
			text="Sélectionnez un emplacement de jeu";
			x="0.338093 * safezoneW + safezoneX";
			y="0.4296 * safezoneH + safezoneY";
			w="0.103125 * safezoneW";
			h="0.022 * safezoneH";
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85)";
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
			w="15 * (((safezoneW / safezoneH) min 1.2) / 40) + 0.45*(safezoneW - ((safezoneW / safezoneH) min 1.2))";
			idc=1000;
			text="FYD";
			x="1 * (((safezoneW / safezoneH) min 1.2) / 40) + (SafezoneX)";
			y="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY)";
			h="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class PlayersName: RscTitle
		{
			idc=701;
			style=1;
			shadow=0;
			x="(SafezoneX) + (24 * (((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - ((safezoneW / safezoneH) min 1.2))";
			w="(15 * (((safezoneW / safezoneH) min 1.2) / 40)) + 0.55*(safezoneW - ((safezoneW / safezoneH) min 1.2))";
			y="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY)";
			h="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_B_West: RscActiveText
		{
			text=" ";
			idc=104;
			picture="FYD_UI\pd.paa";
			sideToggle="FYD_UI\pd.paa";
			sideDisabled="A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\flag_none_ca.paa";
			pictureHeight=1;
			pictureWidth=1;
			color[]={};
			colorActive[]={0.22,1,0.28,1};
			colorDisabled[]={1,1,1,0};
			colorShade[]={1,1,1,1};
			colorText[]={1,1,1,1};
			textHeight=0.25;
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 25)";
			x="0.355625 * safezoneW + safezoneX";
			y="0.2448 * safezoneH + safezoneY";
			w="0.0721875 * safezoneW";
			h="0.11 * safezoneH";
		};
		class CA_B_Guerrila: CA_B_West
		{
			text=" ";
			idc=106;
			picture="FYD_UI\ems.paa";
			sideToggle="FYD_UI\ems.paa";
			color[]={};
			colorActive[]={0.22,1,0.28,1};
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 25)";
			x="0.489687 * safezoneW + safezoneX";
			y="0.2448 * safezoneH + safezoneY";
			w="0.0721875 * safezoneW";
			h="0.11 * safezoneH";
		};
		class CA_B_Civilian: CA_B_West
		{
			text=" ";
			idc=107;
			picture="FYD_UI\civ.paa";
			sideToggle="FYD_UI\civ.paa";
			color[]={};
			colorActive[]={0.22,1,0.28,1};
			sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 25)";
			x="0.355625 * safezoneW + safezoneX";
			y="0.2448 * safezoneH + safezoneY";
			w="0.0721875 * safezoneW";
			h="0.11 * safezoneH";
		};
		class CA_ValuePool: RscListBox
		{
			idc=114;
			x=1;
			w=1;
			h=-2;
			z=-2;
			drawSideArrows=1;
			idcLeft=500;
			idcRight=500;
		};
		class ButtonPlayers: RscButtonTextOnly
		{
			idc=133;
			style=0;
			x=1;
			w=1;
			h=-2;
			z=-2;
			text="";
		};
		class CA_ValueRoles: RscListBox
		{
			idc=109;
			colorPlayer[]={1,1,0,1};
			colorAI[]={1,0,0,1};
			colorNobody[]={1,1,1,0.25};
			drawSideArrows=1;
			enabledAI="A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\enabledAI_ca.paa";
			disabledAI="A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\disabledAI_ca.paa";
			rowHeight="1.75 * (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			x="0.340156 * safezoneW + safezoneX";
			y="0.4582 * safezoneH + safezoneY";
			w="0.387135 * safezoneW";
			h="0.449629 * safezoneH";
			colorSelectBackground[]={0,0.090000004,0.56999999,0.40000001};
			colorSelectBackground2[]={0,0.090000004,0.56999999,0.40000001};
			colorBackground[]={-1,-1,-1,-1};
		};
		class CA_ButtonContinue: RscButtonMenuOK
		{
			x="0.336031 * safezoneW + safezoneX";
			y="0.929 * safezoneH + safezoneY";
			w="0.397031 * safezoneW";
			h="0.022 * safezoneH";
		};
		class CA_ButtonCancel: RscButtonMenuCancel
		{
			text="$STR_DISP_BACK";
			x="0.336031 * safezoneW + safezoneX";
			y="0.9598 * safezoneH + safezoneY";
			w="0.397031 * safezoneW";
			h="0.022 * safezoneH";
		};
	};
};
class RscBackgroundLogo: RscPictureKeepAspect
{
	text="\FYD_UI\splash.paa";
	x="0.33375 * safezoneW";
	y="0.29 * safezoneH";
	w="0.3325 * safezoneW";
	h="0.39375 * safezoneH";
};
class RscDisplayStart: RscStandardDisplay
{
	class controls
	{
		class LoadingStart: RscControlsGroup
		{
			class controls
			{
				class Logo: RscPictureKeepAspect
				{
					text="\FYD_UI\splash.paa";
					x="0.33375 * safezoneW";
					y="0.29 * safezoneH";
					w="0.3325 * safezoneW";
					h="0.39375 * safezoneH";
					onLoad="";
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
					text="\FYD_UI\splash.paa";
					x="0.33375 * safezoneW";
					y="0.29 * safezoneH";
					w="0.3325 * safezoneW";
					h="0.39375 * safezoneH";
					onLoad="";
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
					text="\FYD_UI\splash.paa";
					x="0.33375 * safezoneW";
					y="0.29 * safezoneH";
					w="0.3325 * safezoneW";
					h="0.39375 * safezoneH";
					onLoad="";
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
			text="\FYD_UI\splash.paa";
			x="0.33375 * safezoneW";
			y="0.29 * safezoneH";
			w="0.3325 * safezoneW";
			h="0.39375 * safezoneH";
		};
	};
};
