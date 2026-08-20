////////////////////////////////////////////////////////////////////
//DeRap: Billboard\config.bin
//Produced from mikero's Dos Tools Dll version 9.89
//https://mikero.bytex.digital/Downloads
//'now' is Tue Jan 21 19:53:04 2025 : 'file' last modified on Sun Jan 21 08:15:46 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Land_EC_Billboard_V_blank
	{
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Structures_F_Civ"};
		units[] = {"Land_EC_Billboard_V_blank"};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class House_F;
	class Land_EC_Billboard_V_blank: House_F
	{
		author = "ToxicRageTv";
		mapSize = 6;
		scope = 2;
		scopeCurator = 2;
		displayName = "EC V Billboard";
		model = "\EC_Buildings2\Billboard\EC_Billboard_V_blank";
		destrType = "DestructNo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"a3\structures_f_argo\commercial\billboards\data\billboard_transparent_co.paa","a3\structures_f_argo\commercial\billboards\data\billboard_transparent_co.paa"};
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName = "$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip = "$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property = "ObjectTextureCustom0";
				control = "Edit";
				expression = "_this setObjectTextureGlobal [0,_value]";
				defaultValue = "(getObjectTextures _this) param [0,'',['']]";
			};
			class ObjectTextureCustom1
			{
				displayName = "$STR_3den_object_attribute_objecttexturecustom1_displayname";
				tooltip = "$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property = "ObjectTextureCustom1";
				control = "Edit";
				expression = "_this setObjectTextureGlobal [1,_value]";
				defaultValue = "(getObjectTextures _this) param [1,'',['']]";
			};
		};
	};
};
