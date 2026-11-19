////////////////////////////////////////////////////////////////////
//DeRap: CPC\config.bin
//Produced from mikero's Dos Tools Dll version 9.66
//https://mikero.bytex.digital/Downloads
//'now' is Wed Oct 16 03:04:35 2024 : 'file' last modified on Wed Oct 16 03:04:35 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CPC_Base_Vest_config
	{
		units[] = {};
		weapons[] = {"cpc_slick_SS","cpc_slick_SB","cpc_slick_standard"};
		requiredAddons[] = {"A3FL_Weapons"};
		requiredVersion = 0.1;
	};
};
class CfgMods
{
	class CPC_Base;
	class A3FL_Gear: CPC_Base
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
	class cpc_slick_SS: A3PL_Vest_Base
	{
		author = "";
		scope = 2;
		displayName = "CPC South Side Vest";
		model = "A3FL_Gear\CPC\CPC_Base.p3d";
		hiddenSelections[] = {"Camo","Camo2"};
		hiddenSelectionsTextures[] = {"A3FL_Gear\CPC\Tex\Gang\cpc_southside.paa","A3FL_Gear\CPC\Tex\Gang\patchss.paa"};
		class ItemInfo: VestItem
		{
			hiddenSelections[] = {"Camo","Camo2"};
			hiddenSelectionsTextures[] = {"A3FL_Gear\CPC\Tex\Gang\cpc_southside.paa","A3FL_Gear\CPC\Tex\Gang\patchss.paa"};
			uniformModel = "\A3FL_Gear\CPC\CPC_Base.p3d";
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
	class cpc_slick_SB: A3PL_Vest_Base
	{
		author = "";
		scope = 2;
		displayName = "CPC Stay Breezy Vest";
		model = "A3FL_Gear\CPC\CPC_Base.p3d";
		hiddenSelections[] = {"Camo","Camo2"};
		hiddenSelectionsTextures[] = {"A3FL_Gear\CPC\Tex\Gang\cpc_sb.paa","A3FL_Gear\CPC\Tex\Gang\patchsb.paa"};
		class ItemInfo: VestItem
		{
			hiddenSelections[] = {"Camo","Camo2"};
			hiddenSelectionsTextures[] = {"A3FL_Gear\CPC\Tex\Gang\cpc_sb.paa","A3FL_Gear\CPC\Tex\Gang\patchsb.paa"};
			uniformModel = "\A3FL_Gear\CPC\CPC_Base.p3d";
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
	class cpc_slick_standard: A3PL_Vest_Base
	{
		author = "";
		scope = 2;
		displayName = "CPC Black";
		model = "A3FL_Gear\CPC\CPC_Base.p3d";
		hiddenSelections[] = {"Camo","Camo2"};
		hiddenSelectionsTextures[] = {"A3FL_Gear\CPC\Tex\Base\cpc_co.paa","A3FL_Gear\CPC\Tex\Base\FlagPatchA.paa"};
		class ItemInfo: VestItem
		{
			hiddenSelections[] = {"Camo","Camo2"};
			hiddenSelectionsTextures[] = {"A3FL_Gear\CPC\Tex\Base\cpc_co.paa","A3FL_Gear\CPC\Tex\Base\FlagPatchA.paa"};
			uniformModel = "\A3FL_Gear\CPC\CPC_Base.p3d";
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
