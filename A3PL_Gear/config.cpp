class defaultUserActions;
class DefaultEventhandlers;
class CfgPatches
{
	class A3PL_Gear
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Weapons_F","a3_weapons_f_beta","A3_Weapons_F_gamma","A3_Characters_F","A3_Characters_F_beta","A3_Characters_F_gamma","A3_Soft_F","A3_air_f","A3_Air_F_beta"};
	};
};
class cfgWeapons
{
	class Vest_Camo_Base;
	class VestItem;
	class A3PL_Holster_1: Vest_Camo_Base
	{
		displayName = "Holster";
		author="A3FL Winston";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		allowedslots[]={701,801,901};
		picture="\A3PL_Characters\A3PL_Logo.paa";
		model="A3PL_Gear\Holster\A3PL_Holster";
		hiddenSelections[]={};
		descriptionShort="Holster simple";
		class ItemInfo: VestItem
		{
			uniformModel="A3PL_Gear\Holster\A3PL_Holster";
			containerClass="Supply0";
			mass=2;
			class HitpointsProtectionInfo{};
		};
	};
	class A3PL_Holster_Back: A3PL_Holster_1
	{
		displayName = "Holster (Back)";
		author="A3FL Winston";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		allowedslots[]={701,801,901};
		picture="\A3PL_Characters\A3PL_Logo.paa";
		model="A3PL_Gear\Holster\A3PL_Holster_Back";
		hiddenSelections[]={};
		descriptionShort="Holster simple";
		class ItemInfo: VestItem
		{
			uniformModel="A3PL_Gear\Holster\A3PL_Holster_Back";
			containerClass="Supply0";
			mass=2;
			class HitpointsProtectionInfo{};
		};
	};
	class A3PL_Holster_Detective: Vest_Camo_Base
	{
		displayName = "FISD Detective Holster";
		author="A3FL Winston";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		allowedslots[]={701,801,901};
		picture="\A3PL_Characters\A3PL_Logo.paa";
		model="A3PL_Gear\Holster\A3PL_Holster_Detective";
		hiddenSelections[]={};
		descriptionShort="Detective Holster";
		class ItemInfo: VestItem
		{
			uniformModel="A3PL_Gear\Holster\A3PL_Holster_Detective";
			containerClass="Supply0";
			mass=2;
			class HitpointsProtectionInfo{};
		};
	};
	class A3PL_DutyBelt: Vest_Camo_Base
	{
		displayName = "Duty Belt";
		author="A3FL Development Team";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		allowedslots[]={701,801,901};
		picture="\A3PL_Characters\A3PL_Logo.paa";
		model="A3PL_Gear\DutyBelt\A3PL_DutyBelt";
		hiddenSelections[]={};
		descriptionShort="LEO Duty Belt";
		class ItemInfo: VestItem
		{
			uniformModel="A3PL_Gear\DutyBelt\A3PL_DutyBelt";
			containerClass="Supply0";
			mass=2;
			class HitpointsProtectionInfo{};
		};
	};
};