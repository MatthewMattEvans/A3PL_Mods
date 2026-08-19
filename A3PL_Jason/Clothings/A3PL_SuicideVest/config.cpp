class CfgPatches
{
	class A3PL_SuicideVest
	{
		units[]={};
		weapons[]=
		{
			"A3PL_SuicideVest"
		};
		requiredAddons[]=
		{
			"A3PL_Cars",
			"A3PL_Objects"
		};
		requiredVersion=0.1;
	};
};
class VestItem
{
	type=701;
	hiddenSelections[]={};
	armor="5*0";
	passThrough=1;
	hitpointName="HitBody";
};
class Vest_Camo_Base: VestItem
{
	scope=0;
	allowedSlots[]={901};
	hiddenSelections[]=
	{
		"camo"
	};
	class ItemInfo: VestItem
	{
		hiddenSelections[]=
		{
			"camo"
		};
		maximumLoad=0;
		mass=0;
	};
};
class A3PL_SuicideVest: Vest_Camo_Base
{
	scope=2;
	displayName="Suicide Vest";
	picture="\A3PL_Jason\Clothings\A3PL_SuicideVest\icon.paa";
	model="\A3PL_Jason\Clothings\A3PL_SuicideVest\a3pl_suicidevest.p3d";
	hiddenSelectionsTextures[]=
	{
		"\a3\characters_f\common\data\tacticalvest_black_co.paa"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel="\A3PL_Jason\Clothings\A3PL_SuicideVest\a3pl_suicidevest.p3d";
		maximumLoad=100;
		mass=40;
		armor="5*0.6";
		passThrough=0.40000001;
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class Uniform_Base;
	class UniformItem;
	class Vest_Base;
	class Vest_Camo_Base;
	class A3PL_SuicideVest: Vest_Camo_Base
	{
		scope=2;
		displayName="Suicide Vest";
		picture="\A3PL_Jason\Clothings\A3PL_SuicideVest\icon.paa";
		model="\A3PL_Jason\Clothings\A3PL_SuicideVest\a3pl_suicidevest.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="\A3PL_Jason\Clothings\A3PL_SuicideVest\a3pl_suicidevest.p3d";
			containerClass="Supply100";
			mass=50;
			armor="5*0.5";
			passThrough=0.69999999;
		};
	};
};
