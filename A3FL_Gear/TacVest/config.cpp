////////////////////////////////////////////////////////////////////
//DeRap: TacVest\config.bin
//Produced from mikero's Dos Tools Dll version 9.66
//https://mikero.bytex.digital/Downloads
//'now' is Wed Oct 16 03:04:36 2024 : 'file' last modified on Wed Oct 16 03:04:36 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Tac_Vest_config
	{
		units[] = {};
		weapons[] = {"PD_Tac_Vest"};
		requiredAddons[] = {"A3FL_Weapons"};
		requiredVersion = 0.1;
	};
};
class CfgMods
{
	class PD_Tac_Vest;
	class A3FL_Gear: PD_Tac_Vest
	{
		author = "";
		hideName = 1;
		hidePicture = 0;
	};
};
class CfgWeapons
{
	class Default;
	class ItemCore: Default{};
	class UniformItem: ItemCore
	{
		class ItemInfo;
	};
	class InventoryItem_Base_F;
	class HeadgearItem: InventoryItem_Base_F
	{
		class ItemInfo;
		class HeadgearItem;
	};
	class VestItem: ItemCore
	{
		class ItemInfo;
	};
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class A3PL_Vest_Base;
	class PD_Tac_Vest: A3PL_Vest_Base
	{
		author = "";
		scope = 2;
		displayName = "FISD ERT Vest Breacher";
		model = "A3FL_Gear\TacVest\Tac_Vest.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			uniformModel = "A3FL_Gear\TacVest\Tac_Vest.p3d";
			containerClass = "Supply100";
			mass = 50;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
};
