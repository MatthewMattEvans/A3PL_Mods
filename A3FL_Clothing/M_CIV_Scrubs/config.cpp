class CfgPatches
{
	class A3FL_Scrubs
	{
		units[]=
		{
			"Scrubs_1",
			"Scrubs_2"
		};
		weapons[]=
		{
			"A3FL_WScrubs",
			"A3FL_BScrubs"
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
	class Scrubs_1: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_Scrubs\M_Civ_Scrubs.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\MedicalScrubs_Shirt_Blanc_co.paa",
			"A3FL_Clothing\Textures\Pantalong\MedicalScrubs_Pants_Blanc_co.paa"	
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class Scrubs_2: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_Scrubs\M_Civ_Scrubs.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\MedicalScrubs_Shirt_Bleu_co.paa",
			"A3FL_Clothing\Textures\Pantalong\MedicalScrubs_Pants_Bleu_co.paa"	
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
	class A3FL_WScrubs: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Scrubs White";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Scrubs_1";
			containerClass="Supply140";
			mass=40;
		};
	};
	class A3FL_BScrubs: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Scrubs Blue";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Scrubs_2";
			containerClass="Supply140";
			mass=40;
		};
	};
};
