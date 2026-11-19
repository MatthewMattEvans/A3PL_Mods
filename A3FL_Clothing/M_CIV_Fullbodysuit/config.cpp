class CfgPatches
{
	class M_Civ_Fullbodysuit
	{
		units[]=
		{
			"Fullbodysuit_1"
		};
		weapons[]=
		{
			"A3FL_FullProtectiveSuit"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Characters_F_Common",
			"A3_Data_F"
		};
		magazines[]={};
		ammo[]={};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class Fullbodysuit_1: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_Fullbodysuit\M_Civ_Fullbodysuit.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\WoolCoat_Noir_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
};
class cfgWeapons
{
	class HeadgearItem;
	class ItemInfo;
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class A3FL_FullProtectiveSuit: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Full Protective Suit";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Fullbodysuit_1";
			containerClass="Supply140";
			mass=40;
		};
	};
};
