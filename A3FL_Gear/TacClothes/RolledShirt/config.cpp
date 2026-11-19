class CfgPatches
{
	class A3FL_Gear_RolledShirt
	{
		units[] = {"TacRolled"};
		weapons[] = {"A3FL_FISD_TacRolledClothes"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_Common","A3_Data_F","A3PL_Characters"};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class TacRolled: B_Soldier_base_F
	{
		scope = 2;
		model = "A3FL_Gear\TacClothes\RolledShirt\A3FL_RolledShirt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
	};
};
class cfgWeapons
{
	class U_C_Poloshirt_burgundy;
	class A3PL_Uniform_Base: U_C_Poloshirt_burgundy
	{
		class ItemInfo;
	};
	class A3FL_FISD_TacRolledClothes: A3PL_Uniform_Base
	{
		scope = 2;
		author = "Projets Opacity";
		displayName = "FISD Tactical Clothes Rolled Sleeves";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture = "\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "TacRolled";
			containerClass = "Supply140";
			mass = 40;
		};
	};
};
