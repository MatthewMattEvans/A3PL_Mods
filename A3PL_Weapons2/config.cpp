class CfgPatches
{
	class A3PL_Weapons2
	{
		units[]={};
		weapons[]={};
		requiredAddons[]={"A3PL_Weapons","A3_Data_F"};
		requiredVersion=0.1;
		magazines[]={};
		ammo[]=	{};
	};
};

class CfgWeapons {
	class Rifle_Base_F;
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class SMG_05_base_F: Rifle_Short_Base_F {
		class WeaponSlotsInfo;
	};
	class SMG_05_F: SMG_05_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={801,701,901};
		};
	};
	class SMG_01_Base: Rifle_Short_Base_F {
		class WeaponSlotsInfo;
	};
	class SMG_01_F: SMG_01_Base
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={801,701,901};
		};
	};
	class SMG_02_Base: Rifle_Short_Base_F {
		class WeaponSlotsInfo;
	};
	class SMG_02_F: SMG_02_Base
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={801,701,901};
		};
	};
};