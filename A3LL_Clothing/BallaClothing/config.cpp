class CfgPatches
{
	class Andrew_BallaClothing
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
	class Andrew_HoodieJeans01_Uniform: B_Soldier_base_F
	{
		scope=2;
		model="A3LL_Clothing\BallaClothing\Andrew_HoodieJeans.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3LL_Clothing\BallaClothing\data\Andrew_Hoodie01_co.paa",
			"A3LL_Clothing\BallaClothing\data\Andrew_Pants01_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3LL_Clothing\BallaClothing\data\Andrew_Hoodie01.rvmat",
			"A3LL_Clothing\BallaClothing\data\Andrew_Pants01.rvmat"
		};
	};
	class Andrew_HoodieJeans02_Uniform: B_Soldier_base_F
	{
		scope=2;
		model="A3LL_Clothing\BallaClothing\Andrew_HoodieJeans.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3LL_Clothing\BallaClothing\data\Andrew_Hoodie02_co.paa",
			"A3LL_Clothing\BallaClothing\data\Andrew_Pants01_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3LL_Clothing\BallaClothing\data\Andrew_Hoodie02.rvmat",
			"A3LL_Clothing\BallaClothing\data\Andrew_Pants01.rvmat"
		};
	};
	class Andrew_HoodieJeans03_Uniform: B_Soldier_base_F
	{
		scope=2;
		model="A3LL_Clothing\BallaClothing\Andrew_HoodieJeans.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3LL_Clothing\BallaClothing\data\Andrew_Hoodie03_co.paa",
			"A3LL_Clothing\BallaClothing\data\Andrew_Pants01_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3LL_Clothing\BallaClothing\data\Andrew_Hoodie03.rvmat",
			"A3LL_Clothing\BallaClothing\data\Andrew_Pants01.rvmat"
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
	class Andrew_HoodieJeans01_Man: Uniform_Base
	{
		scope=2;
		author="Andrew Harris";
		displayName="Balla Hoodie Grey";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3LL_Clothing\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Andrew_HoodieJeans01_Uniform";
			containerClass="Supply140";
			mass=40;
		};
	};
	class Andrew_HoodieJeans02_Man: Uniform_Base
	{
		scope=2;
		author="Andrew Harris";
		displayName="Balla Hoodie Purple";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3LL_Clothing\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Andrew_HoodieJeans02_Uniform";
			containerClass="Supply140";
			mass=40;
		};
	};
	class Andrew_HoodieJeans03_Man: Uniform_Base
	{
		scope=2;
		author="Andrew Harris";
		displayName="Balla Hoodie White";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3LL_Clothing\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Andrew_HoodieJeans03_Uniform";
			containerClass="Supply140";
			mass=40;
		};
	};
};
