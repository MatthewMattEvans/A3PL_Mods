class CfgPatches
{
	class G506_Windbreaker
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={
			"A3_Characters_F",
			"A3_Weapons_F"
		};
	};
};

class CfgVehicles
{
	class B_Soldier_base_F;
	class Windbreaker1: B_Soldier_base_F
	{
		scope=2;
		model="\A3FL_G506_Characters\Windbreaker\G506_Windbreaker";
		hiddenSelections[]={"camo","camo1","camo2","camo3"};
		hiddenSelectionsTextures[]={
			"A3FL_G506_Characters\Windbreaker\Textures\jbib_diff_022_g_uni.paa",
			"A3FL_G506_Characters\Windbreaker\Textures\lowr_diff_007_b_whi.paa",
			"A3FL_G506_Characters\Windbreaker\Textures\feet_diff_012_g_uni.paa",
			"A3FL_G506_Characters\Windbreaker\Textures\jbib_diff_006_a_uni.paa"
		};
	};
	class Windbreaker2: B_Soldier_base_F
	{
		scope=2;
		model="\A3FL_G506_Characters\Windbreaker\G506_Windbreaker";
		hiddenSelections[]={"camo","camo1","camo2","camo3"};
		hiddenSelectionsTextures[]={
			"A3FL_G506_Characters\Windbreaker\Textures\jbib_diff_022_g_uni.paa",
			"A3FL_G506_Characters\Windbreaker\Textures\lowr_diff_007_b_whi.paa",
			"A3FL_G506_Characters\Windbreaker\Textures\feet_diff_012_g_uni.paa",
			"A3FL_G506_Characters\Windbreaker\Textures\jbib_diff_006_b_uni.paa"
		};
	};
	class Windbreaker3: B_Soldier_base_F
	{
		scope=2;
		model="\A3FL_G506_Characters\Windbreaker\G506_Windbreaker";
		hiddenSelections[]={"camo","camo1","camo2","camo3"};
		hiddenSelectionsTextures[]={
			"A3FL_G506_Characters\Windbreaker\Textures\jbib_diff_022_n_uni.paa",
			"A3FL_G506_Characters\Windbreaker\Textures\lowr_diff_007_d_whi.paa",
			"A3FL_G506_Characters\Windbreaker\Textures\feet_diff_012_g_uni.paa",
			"A3FL_G506_Characters\Windbreaker\Textures\jbib_diff_002_e_uni.paa"
		};
	};
};

class CfgWeapons {
	class U_C_Poloshirt_burgundy;
	class A3PL_Uniform_Base: U_C_Poloshirt_burgundy
	{
		class ItemInfo;
	};
	class G506_Windbreaker_M_Y: A3PL_Uniform_Base
	{
		scope=2;
		author="Gaming / 76561198123473506";
		displayName="FIMS Windbreaker Yellow";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3FL_G506_Characters\G506_Logo.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="Windbreaker1";
			containerClass="Supply140";
			mass=40;
		};
	};
	class G506_Windbreaker_M_W: A3PL_Uniform_Base
	{
		scope=2;
		author="Gaming / 76561198123473506";
		displayName="FIMS Windbreaker White";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3FL_G506_Characters\G506_Logo.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="Windbreaker2";
			containerClass="Supply140";
			mass=40;
		};
	};
	class G506_Windbreaker_S_W: A3PL_Uniform_Base
	{
		scope=2;
		author="Gaming / 76561198123473506";
		displayName="FISD Windbreaker White";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3FL_G506_Characters\G506_Logo.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="Windbreaker3";
			containerClass="Supply140";
			mass=40;
		};
	};
};