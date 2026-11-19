class CfgPatches
{
	class M_Civ_BJacket
	{
		units[]=
		{
			"BJacket_1",
			"BJacket_2",
			"BJacket_3",
			"BJacket_4",
			"BJacket_5",
			"BJacket_6",
			"BJacket_7",
			"BJacket_8"
		};
		weapons[]=
		{
			"A3FL_BlueBJacket",
			"A3FL_LightBBJacket",
			"A3FL_BrownBJacket",
			"A3FL_GreyBJacket",
			"A3FL_RedBJacket",
			"A3FL_BlackBJacket",
			"A3FL_GreenBJacket",
			"A3FL_BlackLBJacket"
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
	class BJacket_1: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_BJacket\M_Civ_BJacket.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\BomberJacket_Bleu_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class BJacket_2: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_BJacket\M_Civ_BJacket.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\BomberJacket_Bleuciel_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class BJacket_3: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_BJacket\M_Civ_BJacket.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\BomberJacket_Brun_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class BJacket_4: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_BJacket\M_Civ_BJacket.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\BomberJacket_Gris_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class BJacket_5: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_BJacket\M_Civ_BJacket.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\BomberJacket_Maron_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class BJacket_6: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_BJacket\M_Civ_BJacket.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\BomberJacket_Noir_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class BJacket_7: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_BJacket\M_Civ_BJacket.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\BomberJacket_Olive_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
		};
	};
	class BJacket_8: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Clothing\M_Civ_BJacket\M_Civ_BJacket.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Clothing\Textures\Veste\BomberJacket_Noir_co.paa",
			"A3FL_Clothing\Textures\Pantalong\Jeans_H_Gris_co.paa"
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
	class A3FL_BlueBJacket: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Bomber Jacket Blue";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="BJacket_1";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_LightBBJacket: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Bomber Jacket Light Blue";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="BJacket_2";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_BrownBJacket: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Bomber Jacket Brown";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="BJacket_3";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_GreyBJacket: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Bomber Jacket Grey";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="BJacket_4";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_RedBJacket: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Bomber Jacket Red";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="BJacket_5";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_BlackBJacket: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Bomber Jacket Black";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="BJacket_6";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_GreenBJacket: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Bomber Jacket Green";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="BJacket_7";
			containerClass="Supply140";
			mass=40;
		};
	};
	class  A3FL_BlackLBJacket: Uniform_Base
	{
		scope=2;
		author="A3FL Development Team";
		displayName="Bomber Jacket Black Light";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="BJacket_8";
			containerClass="Supply140";
			mass=40;
		};
	};
};
