class CfgPatches
{
	class M_Civ_Hoodie
	{
		units[]=
		{
			"Hoodie_1",
			"Hoodie_2",
			"Hoodie_3",
			"Hoodie_4",
			"Hoodie_5",
			"Hoodie_6",
			"Hoodie_7"
		};
		weapons[]=
		{
			"A3FL_HoodieRB",
			"A3FL_HoodieBT",
			"A3FL_HoodieGDG",
			"A3FL_HoodieBG",
			"A3FL_HoodieP",
			"A3FL_HoodieRG",
			"A3FL_HoodieG"
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
	class Hoodie_1: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_Hoodie\M_Civ_Hoodie.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\Hoodie_H_Bleu_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class Hoodie_2: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_Hoodie\M_Civ_Hoodie.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\Hoodie_H_Brun_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class Hoodie_3: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_Hoodie\M_Civ_Hoodie.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\Hoodie_H_Gris_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class Hoodie_4: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_Hoodie\M_Civ_Hoodie.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\Hoodie_H_Noir_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class Hoodie_5: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_Hoodie\M_Civ_Hoodie.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\Hoodie_H_Rose_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class Hoodie_6: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_Hoodie\M_Civ_Hoodie.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\Hoodie_H_Rouge_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class Hoodie_7: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_Hoodie\M_Civ_Hoodie.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\Hoodie_H_Vert_co.paa"
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
	class A3FL_HoodieRB: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Hoodie Red & Blue";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Hoodie_1";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_HoodieBT: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Hoodie Brown & Tan";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Hoodie_2";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_HoodieGDG: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Hoodie Grey & Dark Grey";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Hoodie_3";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_HoodieBG: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Hoodie Blue & Grey";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Hoodie_4";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_HoodieP: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Hoodie Pink";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Hoodie_5";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_HoodieRG: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Hoodie Red & Grey";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Hoodie_6";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_HoodieG: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Hoodie Green";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Hoodie_7";
			containerClass="Supply140";
			mass=40;
		};
	};
};
