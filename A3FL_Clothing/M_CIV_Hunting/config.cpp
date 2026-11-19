class CfgPatches
{
	class M_Civ_Hunting
	{
		units[]=
		{
			"HuntingOutfit_1",
			"HuntingOutfit_2",
			"HuntingOutfit_3",
			"HuntingOutfit_4",
			"HuntingOutfit_5"
		};
		weapons[]=
		{
			"A3FL_HuntingNC",
			"A3FL_HuntingB",
			"A3FL_HuntingSC",
			"A3FL_HuntingSW",
			"A3FL_HuntingG"
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
	class HuntingOutfit_1: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_Hunting\M_Civ_Hunting.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\Hunting_Jacket_Automne_co.paa",
			"A3FL_Clothing\Textures\Pantalong\HunterPants_Automne_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class HuntingOutfit_2: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_Hunting\M_Civ_Hunting.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\Hunting_Jacket_Brun_co.paa",
			"A3FL_Clothing\Textures\Pantalong\HunterPants_Brun_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class HuntingOutfit_3: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_Hunting\M_Civ_Hunting.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\Hunting_Jacket_Ete_co.paa",
			"A3FL_Clothing\Textures\Pantalong\HunterPants_Ete_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class HuntingOutfit_4: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_Hunting\M_Civ_Hunting.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\Hunting_Jacket_Hiver_co.paa",
			"A3FL_Clothing\Textures\Pantalong\HunterPants_Ete_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class HuntingOutfit_5: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_Hunting\M_Civ_Hunting.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\Hunting_Jacket_Khaki_co.paa",
			"A3FL_Clothing\Textures\Pantalong\HunterPants_Khaki_co.paa"
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
	class A3FL_HuntingNC: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Hunting Clothes Woodland";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HuntingOutfit_1";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_HuntingB: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Hunting Clothes Brown";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HuntingOutfit_2";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_HuntingSC: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Hunting Clothes Swamp";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HuntingOutfit_3";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_HuntingSW: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Hunting Clothes Swamp & Winter";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HuntingOutfit_4";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_HuntingG: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Hunting Clothes Green";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HuntingOutfit_5";
			containerClass="Supply140";
			mass=40;
		};
	};
};
