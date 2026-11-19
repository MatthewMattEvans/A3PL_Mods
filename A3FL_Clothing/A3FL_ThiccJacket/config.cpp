class CfgPatches
{
	class A3FL_ThiccJacket
	{
		units[]=
		{
			"ThiccJacket_1",
			"ThiccJacket_2",
			"ThiccJacket_3",
			"ThiccJacket_4",
			"ThiccJacket_5",
			"ThiccJacket_6",
			"ThiccJacket_7",
			"ThiccJacket_8"
		};
		weapons[]=
		{
			"A3FL_HeavyJacketB",
			"A3FL_HeavyJacketG",
			"A3FL_HeavyJacketY",
			"A3FL_HeavyJacketBL",
			"A3FL_HeavyJacketO",
			"A3FL_HeavyJacketR",
			"A3FL_HeavyJacketGR",
			"A3FL_HeavyJacketP"
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
	class ThiccJacket_1: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_ThiccJacket\M_Civ_ThiccJacket.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\QuiltedJacket_Bleu_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class ThiccJacket_2: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_ThiccJacket\M_Civ_ThiccJacket.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\QuiltedJacket_Gris_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class ThiccJacket_3: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_ThiccJacket\M_Civ_ThiccJacket.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\QuiltedJacket_Jaune_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class ThiccJacket_4: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_ThiccJacket\M_Civ_ThiccJacket.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\QuiltedJacket_Noir_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class ThiccJacket_5: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_ThiccJacket\M_Civ_ThiccJacket.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\QuiltedJacket_Orange_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class ThiccJacket_6: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_ThiccJacket\M_Civ_ThiccJacket.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\QuiltedJacket_Rouge_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class ThiccJacket_7: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_ThiccJacket\M_Civ_ThiccJacket.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\QuiltedJacket_Vert_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class ThiccJacket_8: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_ThiccJacket\M_Civ_ThiccJacket.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\QuiltedJacket_Violet_co.paa"
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
	class A3FL_HeavyJacketB: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Heavy Jacket Blue";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ThiccJacket_1";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_HeavyJacketG: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Heavy Jacket Grey";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ThiccJacket_2";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_HeavyJacketY: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Heavy Jacket Yellow";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ThiccJacket_3";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_HeavyJacketBL: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Heavy Jacket Black";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ThiccJacket_4";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_HeavyJacketO: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Heavy Jacket Orange";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ThiccJacket_5";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_HeavyJacketR: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Heavy Jacket Red";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ThiccJacket_6";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_HeavyJacketGR: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Heavy Jacket Green";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ThiccJacket_7";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_HeavyJacketP: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Heavy Jacket Purple";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ThiccJacket_8";
			containerClass="Supply140";
			mass=40;
		};
	};
};
