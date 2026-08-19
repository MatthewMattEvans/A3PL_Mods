class CfgPatches
{
	class Andrew_Families
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
	class Andrew_FamiliesLong01_Uniform: B_Soldier_base_F
	{
		scope=2;
		model="A3LL_Clothing\Families\Andrew_FamiliesLong.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongShirt01_co.paa",
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongPants01_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongShirt01.rvmat",
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongPants01.rvmat"
		};
	};
	class Andrew_FamiliesLong02_Uniform: B_Soldier_base_F
	{
		scope=2;
		model="A3LL_Clothing\Families\Andrew_FamiliesLong.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongShirt02_co.paa",
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongPants02_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongShirt02.rvmat",
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongPants02.rvmat"
		};
	};
	class Andrew_FamiliesLong03_Uniform: B_Soldier_base_F
	{
		scope=2;
		model="A3LL_Clothing\Families\Andrew_FamiliesLong.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongShirt03_co.paa",
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongPants03_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongShirt03.rvmat",
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongPants03.rvmat"
		};
	};
	class Andrew_FamiliesLong04_Uniform: B_Soldier_base_F
	{
		scope=2;
		model="A3LL_Clothing\Families\Andrew_FamiliesLong.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongShirt01_co.paa",
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongPants02_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongShirt01.rvmat",
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongPants02.rvmat"
		};
	};
	class Andrew_FamiliesLong05_Uniform: B_Soldier_base_F
	{
		scope=2;
		model="A3LL_Clothing\Families\Andrew_FamiliesLong.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongShirt02_co.paa",
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongPants01_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongShirt02.rvmat",
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongPants01.rvmat"
		};
	};
	class Andrew_FamiliesLong06_Uniform: B_Soldier_base_F
	{
		scope=2;
		model="A3LL_Clothing\Families\Andrew_FamiliesLong.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongShirt03_co.paa",
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongPants01_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongShirt03.rvmat",
			"A3LL_Clothing\Families\data\Andrew_FamiliesLongPants01.rvmat"
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
	class Andrew_FamiliesLong01_Man: Uniform_Base
	{
		scope=2;
		author="Andrew Harris";
		displayName="Families Long Sleeve";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3LL_Clothing\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Andrew_FamiliesLong01_Uniform";
			containerClass="Supply140";
			mass=40;
		};
	};
	class Andrew_FamiliesLong02_Man: Uniform_Base
	{
		scope=2;
		author="Andrew Harris";
		displayName="Families Long Sleeve";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3LL_Clothing\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Andrew_FamiliesLong02_Uniform";
			containerClass="Supply140";
			mass=40;
		};
	};
	class Andrew_FamiliesLong03_Man: Uniform_Base
	{
		scope=2;
		author="Andrew Harris";
		displayName="Families Long Sleeve";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3LL_Clothing\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Andrew_FamiliesLong03_Uniform";
			containerClass="Supply140";
			mass=40;
		};
	};
	class Andrew_FamiliesLong04_Man: Uniform_Base
	{
		scope=2;
		author="Andrew Harris";
		displayName="Families Long Sleeve";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3LL_Clothing\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Andrew_FamiliesLong04_Uniform";
			containerClass="Supply140";
			mass=40;
		};
	};
	class Andrew_FamiliesLong05_Man: Uniform_Base
	{
		scope=2;
		author="Andrew Harris";
		displayName="Families Long Sleeve";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3LL_Clothing\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Andrew_FamiliesLong05_Uniform";
			containerClass="Supply140";
			mass=40;
		};
	};
	class Andrew_FamiliesLong06_Man: Uniform_Base
	{
		scope=2;
		author="Andrew Harris";
		displayName="Families Long Sleeve";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3LL_Clothing\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Andrew_FamiliesLong06_Uniform";
			containerClass="Supply140";
			mass=40;
		};
	};
};
