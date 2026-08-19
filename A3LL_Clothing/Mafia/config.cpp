class CfgPatches
{
	class Andrew_Mafia
	{
		units[]={};
		weapons[]={};
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
	class Andrew_Mafia_Uniform: B_Soldier_base_F
	{
		scope=2;
		model="A3LL_Clothing\Mafia\Andrew_Mafia.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"A3LL_Clothing\Mafia\data\Andrew_MafiaAccs_co.paa",
			"A3LL_Clothing\Mafia\data\Andrew_Mafiafeet_co.paa",
			"A3LL_Clothing\Mafia\data\Andrew_Mafiajbib_co.paa",
			"A3LL_Clothing\Mafia\data\Andrew_Mafialowr_co.paa",
			"A3LL_Clothing\Mafia\data\Andrew_Mafiateef_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3LL_Clothing\Mafia\data\Andrew_MafiaAccs.rvmat",
			"A3LL_Clothing\Mafia\data\Andrew_Mafiafeet.rvmat",
			"A3LL_Clothing\Mafia\data\Andrew_Mafiajbib.rvmat",
			"A3LL_Clothing\Mafia\data\Andrew_Mafialowr.rvmat",
			"A3LL_Clothing\Mafia\data\Andrew_Mafiateef.rvmat"
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
	class Andrew_Mafia_Man: Uniform_Base
	{
		scope=2;
		author="Andrew Harris";
		displayName="Mafia Outfit";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3LL_Clothing\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Andrew_Mafia_Uniform";
			containerClass="Supply140";
			mass=40;
		};
	};
};
