class CfgPatches
{
	class Andrew_Business
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
	class Andrew_Business01_Uniform: B_Soldier_base_F
	{
		scope=2;
		model="A3LL_Clothing\Business\Andrew_Business.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3LL_Clothing\Business\data\Andrew_BusinessShirt01_co.paa",
			"A3LL_Clothing\Business\data\Andrew_BusinessAccs01_co.paa",
			"A3LL_Clothing\Business\data\Andrew_BusinessPants02_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3LL_Clothing\Business\data\Andrew_BusinessShirt01.rvmat",
			"A3LL_Clothing\Business\data\Andrew_BusinessAccs01.rvmat",
			"A3LL_Clothing\Business\data\Andrew_BusinessPants02.rvmat"
		};
	};
	class Andrew_Business02_Uniform: B_Soldier_base_F
	{
		scope=2;
		model="A3LL_Clothing\Business\Andrew_Business.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3LL_Clothing\Business\data\Andrew_BusinessShirt02_co.paa",
			"A3LL_Clothing\Business\data\Andrew_BusinessAccs02_co.paa",
			"A3LL_Clothing\Business\data\Andrew_BusinessPants02_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3LL_Clothing\Business\data\Andrew_BusinessShirt02.rvmat",
			"A3LL_Clothing\Business\data\Andrew_BusinessAccs01.rvmat",
			"A3LL_Clothing\Business\data\Andrew_BusinessPants02.rvmat"
		};
	};
	class Andrew_Business03_Uniform: B_Soldier_base_F
	{
		scope=2;
		model="A3LL_Clothing\Business\Andrew_Business.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3LL_Clothing\Business\data\Andrew_BusinessShirt03_co.paa",
			"A3LL_Clothing\Business\data\Andrew_BusinessAccs02_co.paa",
			"A3LL_Clothing\Business\data\Andrew_BusinessPants02_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3LL_Clothing\Business\data\Andrew_BusinessShirt03.rvmat",
			"A3LL_Clothing\Business\data\Andrew_BusinessAccs02.rvmat",
			"A3LL_Clothing\Business\data\Andrew_BusinessPants02.rvmat"
		};
	};
	class Andrew_Business04_Uniform: B_Soldier_base_F
	{
		scope=2;
		model="A3LL_Clothing\Business\Andrew_Business.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3LL_Clothing\Business\data\Andrew_BusinessShirt01_co.paa",
			"A3LL_Clothing\Business\data\Andrew_BusinessAccs03_co.paa",
			"A3LL_Clothing\Business\data\Andrew_BusinessPants02_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3LL_Clothing\Business\data\Andrew_BusinessShirt01.rvmat",
			"A3LL_Clothing\Business\data\Andrew_BusinessAccs03.rvmat",
			"A3LL_Clothing\Business\data\Andrew_BusinessPants02.rvmat"
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
	class Andrew_Business01_Man: Uniform_Base
	{
		scope=2;
		author="Andrew Harris";
		displayName="Business Suit";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3LL_Clothing\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Andrew_Business01_Uniform";
			containerClass="Supply140";
			mass=40;
		};
	};
	class Andrew_Business02_Man: Uniform_Base
	{
		scope=2;
		author="Andrew Harris";
		displayName="Business Suit";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3LL_Clothing\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Andrew_Business02_Uniform";
			containerClass="Supply140";
			mass=40;
		};
	};
	class Andrew_Business03_Man: Uniform_Base
	{
		scope=2;
		author="Andrew Harris";
		displayName="Business Suit";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3LL_Clothing\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Andrew_Business03_Uniform";
			containerClass="Supply140";
			mass=40;
		};
	};
	class Andrew_Business04_Man: Uniform_Base
	{
		scope=2;
		author="Andrew Harris";
		displayName="Business Suit";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3LL_Clothing\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Andrew_Business04_Uniform";
			containerClass="Supply140";
			mass=40;
		};
	};
};
