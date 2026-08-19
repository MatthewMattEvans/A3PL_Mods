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
	class Andrew_Casual2_01_Uniform: B_Soldier_base_F
	{
		scope=2;
		model="A3LL_Clothing\Casual2\Andrew_Casual2.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3LL_Clothing\Casual2\data\Andrew_Casual2_Shirt01_co.paa",
			"A3LL_Clothing\Casual2\data\Andrew_Casual2_Pants02_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3LL_Clothing\Casual2\data\Andrew_Casual2_Shirt01.rvmat",
			"A3LL_Clothing\Casual2\data\Andrew_Casual2_Pants02.rvmat"
		};
	};
	class Andrew_Casual2_02_Uniform: B_Soldier_base_F
	{
		scope=2;
		model="A3LL_Clothing\Casual2\Andrew_Casual2.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3LL_Clothing\Casual2\data\Andrew_Casual2_Shirt01_co.paa",
			"A3LL_Clothing\Casual2\data\Andrew_Casual2_Pants01_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3LL_Clothing\Casual2\data\Andrew_Casual2_Shirt01.rvmat",
			"A3LL_Clothing\Casual2\data\Andrew_Casual2_Pants01.rvmat"
		};
	};
	class Andrew_Casual2_03_Uniform: B_Soldier_base_F
	{
		scope=2;
		model="A3LL_Clothing\Casual2\Andrew_Casual2.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3LL_Clothing\Casual2\data\Andrew_Casual2_Shirt02_co.paa",
			"A3LL_Clothing\Casual2\data\Andrew_Casual2_Pants01_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3LL_Clothing\Casual2\data\Andrew_Casual2_Shirt02.rvmat",
			"A3LL_Clothing\Casual2\data\Andrew_Casual2_Pants01.rvmat"
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
	class Andrew_Casual2_01_Man: Uniform_Base
	{
		scope=2;
		author="Andrew Harris";
		displayName="Casual Outfit";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3LL_Clothing\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Andrew_Casual2_01_Uniform";
			containerClass="Supply140";
			mass=40;
		};
	};
	class Andrew_Casual2_02_Man: Uniform_Base
	{
		scope=2;
		author="Andrew Harris";
		displayName="Casual Outfit";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3LL_Clothing\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Andrew_Casual2_02_Uniform";
			containerClass="Supply140";
			mass=40;
		};
	};
	class Andrew_Casual2_03_Man: Uniform_Base
	{
		scope=2;
		author="Andrew Harris";
		displayName="Casual Outfit";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3LL_Clothing\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Andrew_Casual2_03_Uniform";
			containerClass="Supply140";
			mass=40;
		};
	};
};
