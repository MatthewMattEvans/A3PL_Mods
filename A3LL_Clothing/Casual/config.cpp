class CfgPatches
{
	class Andrew_Casual
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
	class Andrew_Casual01_Uniform: B_Soldier_base_F
	{
		scope=2;
		model="A3LL_Clothing\Casual\Andrew_Casual.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3LL_Clothing\Casual\data\Andrew_CasualShirt01_co.paa",
			"A3LL_Clothing\Casual\data\Andrew_CasualPants02_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3LL_Clothing\Casual\data\Andrew_CasualShirt01.rvmat",
			"A3LL_Clothing\Casual\data\Andrew_CasualPants02.rvmat"
		};
	};
	class Andrew_Casual02_Uniform: B_Soldier_base_F
	{
		scope=2;
		model="A3LL_Clothing\Casual\Andrew_Casual.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3LL_Clothing\Casual\data\Andrew_CasualShirt02_co.paa",
			"A3LL_Clothing\Casual\data\Andrew_CasualPants02_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3LL_Clothing\Casual\data\Andrew_CasualShirt02.rvmat",
			"A3LL_Clothing\Casual\data\Andrew_CasualPants02.rvmat"
		};
	};
	class Andrew_Casual03_Uniform: B_Soldier_base_F
	{
		scope=2;
		model="A3LL_Clothing\Casual\Andrew_Casual.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3LL_Clothing\Casual\data\Andrew_CasualShirt01_co.paa",
			"A3LL_Clothing\Casual\data\Andrew_CasualPants01_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3LL_Clothing\Casual\data\Andrew_CasualShirt01.rvmat",
			"A3LL_Clothing\Casual\data\Andrew_CasualPants01.rvmat"
		};
	};
	class Andrew_Casual04_Uniform: B_Soldier_base_F
	{
		scope=2;
		model="A3LL_Clothing\Casual\Andrew_Casual.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3LL_Clothing\Casual\data\Andrew_CasualShirt02_co.paa",
			"A3LL_Clothing\Casual\data\Andrew_CasualPants01_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3LL_Clothing\Casual\data\Andrew_CasualShirt02.rvmat",
			"A3LL_Clothing\Casual\data\Andrew_CasualPants01.rvmat"
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
	class Andrew_Casual01_Man: Uniform_Base
	{
		scope=2;
		author="Andrew Harris";
		displayName="Casual Outfit";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3LL_Clothing\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Andrew_Casual01_Uniform";
			containerClass="Supply140";
			mass=40;
		};
	};
	class Andrew_Casual02_Man: Uniform_Base
	{
		scope=2;
		author="Andrew Harris";
		displayName="Casual Outfit";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3LL_Clothing\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Andrew_Casual02_Uniform";
			containerClass="Supply140";
			mass=40;
		};
	};
	class Andrew_Casual03_Man: Uniform_Base
	{
		scope=2;
		author="Andrew Harris";
		displayName="Casual Outfit";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3LL_Clothing\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Andrew_Casual03_Uniform";
			containerClass="Supply140";
			mass=40;
		};
	};
	class Andrew_Casual04_Man: Uniform_Base
	{
		scope=2;
		author="Andrew Harris";
		displayName="Casual Outfit";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3LL_Clothing\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Andrew_Casual04_Uniform";
			containerClass="Supply140";
			mass=40;
		};
	};
};
