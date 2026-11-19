class CfgPatches
{
	class A3FL_Jacket1
	{
		units[]=
		{
			"Jacket1_1",
			"Jacket1_2",
			"Jacket1_3"
		};
		weapons[]=
		{
			"A3FL_DressJacketBC",
			"A3FL_DressJacketBD",
			"A3FL_DressJacketRD"
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
	class Jacket1_1: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_Jacket1\M_Civ_Jacket1.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\WoolCoat_Noir_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class Jacket1_2: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_Jacket1\M_Civ_Jacket1.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\WoolCoat_Beige_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class Jacket1_3: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_Jacket1\M_Civ_Jacket1.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\WoolCoat_Rouge_co.paa"
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
	class A3FL_DressJacketBC: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Dress Jacket Black";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Jacket1_1";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_DressJacketBD: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Dress Jacket Brown";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Jacket1_2";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_DressJacketRD: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Dress Jacket Red";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Jacket1_3";
			containerClass="Supply140";
			mass=40;
		};
	};
};
