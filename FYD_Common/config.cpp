#define _ARMA_

class CfgPatches
{
	class fyd_common
	{
		name = "COMPONENT_NAME";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.96;
		requiredAddons[] = {"a3pl_common"};
		author = "Projets Opacity";
		version = "1.3.0.0";
		versionStr = "1.3.0.0";
		versionAr[] = {1,3,0,0};
	};
};
class RscText;
class RscInGameUI
{
	class RscUnitInfo
	{
		class CA_Alt: RscText
		{
			onLoad = "call fyd_common_fnc_onAltLoad";
		};
		class CA_Speed: RscText
		{
			onLoad = "call fyd_common_fnc_onSpeedLoad";
		};
	};
};
class fyd_common_alt: RscText
{
	style = 1;
	colorText[] = {"(profileNamespace getVariable ['IGUI_TEXT_RGB_R',0])","(profileNamespace getVariable ['IGUI_TEXT_RGB_G',1])","(profileNamespace getVariable ['IGUI_TEXT_RGB_B',1])","(profileNamespace getVariable ['IGUI_TEXT_RGB_A',0.8])"};
	text = "9999";
	x = "6.3 * (((safezoneW / safezoneH) min 1.2) / 40) + (profileNamespace getVariable [""IGUI_GRID_VEHICLE_X"", (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
	y = "2.3 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (profileNamespace getVariable [""IGUI_GRID_VEHICLE_Y"", (safezoneY + 0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	w = "2 * (((safezoneW / safezoneH) min 1.2) / 40)";
	h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	sizeEx = "0.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
};
class fyd_common_speed: RscText
{
	style = 1;
	colorText[] = {"(profileNamespace getVariable ['IGUI_TEXT_RGB_R',0])","(profileNamespace getVariable ['IGUI_TEXT_RGB_G',1])","(profileNamespace getVariable ['IGUI_TEXT_RGB_B',1])","(profileNamespace getVariable ['IGUI_TEXT_RGB_A',0.8])"};
	text = "9999";
	x = "6.3 * (((safezoneW / safezoneH) min 1.2) / 40) + (profileNamespace getVariable [""IGUI_GRID_VEHICLE_X"", (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
	y = "1.3 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (profileNamespace getVariable [""IGUI_GRID_VEHICLE_Y"", (safezoneY + 0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	w = "2 * (((safezoneW / safezoneH) min 1.2) / 40)";
	h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	sizeEx = "0.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
};
class Extended_PreStart_EventHandlers
{
	class fyd_common
	{
		init = "call compile preProcessFileLineNumbers '\fyd_common\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class fyd_common
	{
		init = "call compile preProcessFileLineNumbers '\fyd_common\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class fyd_common
	{
		init = "call compile preProcessFileLineNumbers '\fyd_common\XEH_postInit.sqf'";
	};
};
