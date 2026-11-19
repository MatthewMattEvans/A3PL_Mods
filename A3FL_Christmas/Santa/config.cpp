class CfgPatches
{
	class A3FL_Santa
	{
		units[]={"Santa1"};
		weapons[]={"A3FL_Santa"};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Characters_F","A3_Characters_F_Common","A3_Data_F","A3PL_Characters"};
		magazines[]={};
		ammo[]={};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class Santa1: B_Soldier_base_F
	{
		scope=2;
		model="A3FL_Christmas\Santa\A3FL_Santa";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"A3FL_Christmas\Santa\data\Santa_co.paa"};
		hiddenSelectionsMaterials[]={};
	};
};
class cfgWeapons
{
	class U_C_Poloshirt_burgundy;
	class A3PL_Uniform_Base: U_C_Poloshirt_burgundy
	{
		class ItemInfo;
	};
	class A3FL_Santa: A3PL_Uniform_Base
	{
		scope=2;
		author="Andrew Axel";
		displayName="Santa Suit";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="Santa1";
			containerClass="Supply140";
			mass=40;
		};
	};
};