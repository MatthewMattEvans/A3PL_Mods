class defaultUserActions;
class DefaultEventhandlers;
class CfgPatches
{
	class A3FL_Gear
	{
		units[]={};
		weapons[]=
		{
			"A3FL_DutyBelt",
			"A3FL_DutyBelt2",
			"A3FL_DutyBelt3",
			"A3FL_DutyBelt4",
			"A3FL_DutyBelt5",
			"A3FL_Holster",
			"A3FL_Holster_Back"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"a3_weapons_f_beta",
			"A3_Weapons_F_gamma",
			"A3_Characters_F",
			"A3_Characters_F_beta",
			"A3_Characters_F_gamma",
			"A3_Soft_F",
			"A3_air_f",
			"A3_Air_F_beta"
		};
	};
};
class cfgWeapons
{
	class Vest_Camo_Base;
	class VestItem;
	class A3PL_Vest_Base;
	class A3PL_PlateCarrier_Lite_Base: A3PL_Vest_Base
	{
		class ItemInfo;
	};
	class A3FL_DutyBelt: Vest_Camo_Base
	{
		displayName="Duty Belt 2";
		author="Andrew Axel";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		allowedslots[]={701,801,901};
		picture="\A3PL_Characters\A3PL_Logo.paa";
		model="A3FL_Gear\DutyBelt\A3FL_DutyBelt";
		hiddenSelections[]={};
		descriptionShort="LEO Duty Belt Varient 2";
		class ItemInfo: VestItem
		{
			uniformModel="A3FL_Gear\DutyBelt\A3FL_DutyBelt";
			containerClass="Supply0";
			mass=0;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class A3FL_DutyBelt2: Vest_Camo_Base
	{
		displayName="Duty Belt 3";
		author="Andrew Axel";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		allowedslots[]={701,801,901};
		picture="\A3PL_Characters\A3PL_Logo.paa";
		model="A3FL_Gear\DutyBelt\A3FL_DutyBelt2";
		hiddenSelections[]={};
		descriptionShort="LEO Duty Belt Varient 3";
		class ItemInfo: VestItem
		{
			uniformModel="A3FL_Gear\DutyBelt\A3FL_DutyBelt2";
			containerClass="Supply0";
			mass=0;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class A3FL_DutyBelt3: Vest_Camo_Base
	{
		displayName="Duty Belt 4";
		author="Andrew Axel";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		allowedslots[]={701,801,901};
		picture="\A3PL_Characters\A3PL_Logo.paa";
		model="A3FL_Gear\DutyBelt\A3FL_DutyBelt3";
		hiddenSelections[]={};
		descriptionShort="LEO Duty Belt Varient 4";
		class ItemInfo: VestItem
		{
			uniformModel="A3FL_Gear\DutyBelt\A3FL_DutyBelt3";
			containerClass="Supply0";
			mass=0;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class A3FL_DutyBelt4: Vest_Camo_Base
	{
		displayName="Belt Radio Combo";
		author="Andrew Axel";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		allowedslots[]={701,801,901};
		picture="\A3PL_Characters\A3PL_Logo.paa";
		model="A3FL_Gear\DutyBelt\A3FL_DutyBelt4";
		hiddenSelections[]={};
		descriptionShort="LEO Duty Belt Varient 5 With Radio";
		class ItemInfo: VestItem
		{
			uniformModel="A3FL_Gear\DutyBelt\A3FL_DutyBelt4";
			containerClass="Supply0";
			mass=0;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class A3FL_DutyBelt5: Vest_Camo_Base
	{
		displayName="Duty Belt 6";
		author="Andrew Axel";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		allowedslots[]={701,801,901};
		picture="\A3PL_Characters\A3PL_Logo.paa";
		model="A3FL_Gear\DutyBelt\A3FL_DutyBelt5";
		hiddenSelections[]={};
		descriptionShort="LEO Duty Belt Varient 6";
		class ItemInfo: VestItem
		{
			uniformModel="A3FL_Gear\DutyBelt\A3FL_DutyBelt5";
			containerClass="Supply0";
			mass=0;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class A3FL_VestBelt: A3PL_PlateCarrier_Lite_Base
	{
		displayName="Vest Belt Combo";
		author="John Luckely, Andrew Axel";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		model="A3FL_Gear\VestBelt\A3FL_VestBelt";
		hiddenSelections[]=
		{
			"camo"
		};
		descriptionShort="LEO Vest Belt Combo";
		class ItemInfo: VestItem
		{
			uniformModel="A3FL_Gear\VestBelt\A3FL_VestBelt";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply50";
			mass=50;
		};
	};
	class A3FL_VestBelt2: A3PL_PlateCarrier_Lite_Base
	{
		displayName="Vest Belt Combo 2";
		author="John Luckely, Andrew Axel";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		model="A3FL_Gear\VestBelt\A3FL_VestBelt2";
		hiddenSelections[]=
		{
			"camo"
		};
		descriptionShort="LEO Vest Belt Combo";
		class ItemInfo: VestItem
		{
			uniformModel="A3FL_Gear\VestBelt\A3FL_VestBelt2";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply50";
			mass=50;
		};
	};
	class A3FL_VestBelt3: A3PL_PlateCarrier_Lite_Base
	{
		displayName="Vest Belt Combo 2";
		author="John Luckely, Andrew Axel";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		model="A3FL_Gear\VestBelt\A3FL_VestBelt3";
		hiddenSelections[]=
		{
			"camo"
		};
		descriptionShort="LEO Vest Belt Combo";
		class ItemInfo: VestItem
		{
			uniformModel="A3FL_Gear\VestBelt\A3FL_VestBelt3";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply50";
			mass=50;
		};
	};
	class A3FL_Holster: Vest_Camo_Base
	{
		displayName="Holster";
		author="A3FL Winston";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		allowedslots[]={701,801,901};
		picture="\A3PL_Characters\A3PL_Logo.paa";
		model="A3FL_Gear\Holster\A3FL_Holster";
		hiddenSelections[]={};
		descriptionShort="Side holster";
		class ItemInfo: VestItem
		{
			uniformModel="A3FL_Gear\Holster\A3FL_Holster";
			containerClass="Supply0";
			mass=2;
			class HitpointsProtectionInfo
			{
			};
		};
	};
	class A3FL_Holster_Back: A3FL_Holster
	{
		displayName="Holster (Back)";
		author="A3FL Winston";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		allowedslots[]={701,801,901};
		picture="\A3PL_Characters\A3PL_Logo.paa";
		model="A3FL_Gear\Holster\A3FL_Holster_Back";
		hiddenSelections[]={};
		descriptionShort="Back holster";
		class ItemInfo: VestItem
		{
			uniformModel="A3FL_Gear\Holster\A3FL_Holster_Back";
			containerClass="Supply0";
			mass=2;
			class HitpointsProtectionInfo
			{
			};
		};
	};
	class A3FL_FISD_VestBelt: A3FL_VestBelt
	{
		displayName="FISD Vest Belt Combo";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo.paa"
			};
		};
	};
	class A3FL_FISD_VestBelt2: A3FL_VestBelt2
	{
		displayName="FISD Vest Belt Combo 2";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo.paa"
			};
		};
	};
	class A3FL_FISD_VestBelt3: A3FL_VestBelt3
	{
		displayName="FISD Vest Belt Combo 3";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo.paa"
			};
		};
	};
	class A3FL_FISD_VestBelt_White: A3FL_VestBelt
	{
		displayName="FISD White Vest Belt Combo";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_White.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_White.paa"
			};
		};
	};
	class A3FL_FISD_VestBelt_White2: A3FL_VestBelt2
	{
		displayName="FISD White Vest Belt Combo 2";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_White.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_White.paa"
			};
		};
	};
	class A3FL_FISD_VestBelt_White3: A3FL_VestBelt3
	{
		displayName="FISD White Vest Belt Combo 3";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_White.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_White.paa"
			};
		};
	};
	class A3FL_FISD_CMD_VestBelt: A3FL_VestBelt
	{
		displayName="FISD Command Vest Belt Combo";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_CMD.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_CMD.paa"
			};
		};
	};
	class A3FL_FISD_CMD_VestBelt2: A3FL_VestBelt2
	{
		displayName="FISD Command Belt Combo 2";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_CMD.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_CMD.paa"
			};
		};
	};
	class A3FL_FISD_CMD_VestBelt3: A3FL_VestBelt3
	{
		displayName="FISD Command Belt Combo 3";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_CMD.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_CMD.paa"
			};
		};
	};
	class A3FL_FISD_DTU_VestBelt: A3FL_VestBelt
	{
		displayName="FISD DTU Vest Belt Combo";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_DTU.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_DTU.paa"
			};
		};
	};
	class A3FL_FISD_DTU_VestBelt2: A3FL_VestBelt2
	{
		displayName="FISD DTU Belt Combo 2";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_DTU.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_DTU.paa"
			};
		};
	};
	class A3FL_FISD_DTU_VestBelt3: A3FL_VestBelt3
	{
		displayName="FISD DTU Belt Combo 3";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_DTU.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_DTU.paa"
			};
		};
	};
	class A3FL_FISD_ERT_VestBelt: A3FL_VestBelt
	{
		displayName="FISD ERT Vest";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_ERT.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_ERT.paa"
			};
		};
	};
	class A3FL_FISD_ERT_VestBelt2: A3FL_VestBelt2
	{
		displayName="FISD ERT Vest 2";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_ERT.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_ERT.paa"
			};
		};
	};
	class A3FL_FISD_HWY_VestBelt: A3FL_VestBelt
	{
		displayName="FISD Highway Vest Belt Combo";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_HWY.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_HWY.paa"
			};
		};
	};
	class A3FL_FISD_HWY_VestBelt2: A3FL_VestBelt2
	{
		displayName="FISD Highway Belt Combo 2";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_HWY.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_HWY.paa"
			};
		};
	};
	class A3FL_FISD_HWY_VestBelt3: A3FL_VestBelt3
	{
		displayName="FISD Highway Belt Combo 3";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_HWY.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_HWY.paa"
			};
		};
	};
	class A3FL_FISD_MRTM_VestBelt: A3FL_VestBelt
	{
		displayName="FISD Maritime Unit Vest Belt Combo";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_Maritime.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_Maritime.paa"
			};
		};
	};
	class A3FL_FISD_MRTM_VestBelt2: A3FL_VestBelt2
	{
		displayName="FISD Maritime Unit Belt Combo 2";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_Maritime.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_Maritime.paa"
			};
		};
	};
	class A3FL_FISD_MRTM_VestBelt3: A3FL_VestBelt3
	{
		displayName="FISD Maritime Unit Belt Combo 3";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_Maritime.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_Maritime.paa"
			};
		};
	};
class A3FL_FISD_Corr_VestBelt: A3FL_VestBelt
	{
		displayName="FISD Corrections Vest Belt Combo";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_Corrections.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_Corrections.paa"
			};
		};
	};
	class A3FL_FISD_Corr_VestBelt2: A3FL_VestBelt2
	{
		displayName="FISD Corrections Belt Combo 2";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_Corrections.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_Corrections.paa"
			};
		};
	};
	class A3FL_FISD_Corr_VestBelt3: A3FL_VestBelt3
	{
		displayName="FISD Corrections Belt Combo 3";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_Corrections.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_Corrections.paa"
			};
		};
	};
	class A3FL_FISD_K9_VestBelt: A3FL_VestBelt
	{
		displayName="FISD K9 Vest Belt Combo";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_K9.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_K9.paa"
			};
		};
	};
	class A3FL_FISD_K9_VestBelt2: A3FL_VestBelt2
	{
		displayName="FISD K9 Belt Combo 2";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_K9.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_K9.paa"
			};
		};
	};
	class A3FL_FISD_K9_VestBelt3: A3FL_VestBelt3
	{
		displayName="FISD K9 Belt Combo 3";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_K9.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_K9.paa"
			};
		};
	};
	class A3FL_FISD_K9_Shep_VestBelt: A3FL_VestBelt
	{
		displayName="FISD K9 (Shepherd) Belt Combo";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_K9_german_shep.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_K9_german_shep.paa"
			};
		};
	};
	class A3FL_FISD_K9_Shep_VestBelt2: A3FL_VestBelt2
	{
		displayName="FISD K9 (Shepherd) Belt Combo 2";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_K9_german_shep.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_K9_german_shep.paa"
			};
		};
	};
	class A3FL_FISD_K9_Shep_VestBelt3: A3FL_VestBelt3
	{
		displayName="FISD K9 (Shepherd) Belt Combo 3";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_K9_german_shep.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_K9_german_shep.paa"
			};
		};
	};
	class V_RebreatherB: Vest_Camo_Base
	{
		class ItemInfo;
	};
	class A3FL_FISD_BreathVestBelt: V_RebreatherB
	{
		_generalMacro="A3FL_FISD_BreathVestBelt";
		displayName="FISD Maritime Unit Vest Rebreather";
		author="Winston";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		model="A3FL_Gear\VestBelt\A3FL_VestBeltBreath";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FISD_VestCombo_Maritime.paa"
		};
		descriptionShort="LEO Vest Belt Combo";
		class ItemInfo: ItemInfo
		{
			uniformModel="A3FL_Gear\VestBelt\A3FL_VestBeltBreath";
			containerClass="Supply50";
			mass=50;
			vestType="Rebreather";
		};
	};
	class A3FL_FIFR_Vest: A3FL_VestBelt
	{
		displayName="FIFR Bulletproof Vest";
		model="A3FL_Gear\VestBelt\A3FL_Vest";
		descriptionShort="FIFR Vest";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\FIFR.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="A3FL_Gear\VestBelt\A3FL_Vest";
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\FIFR.paa"
			};
		};
	};
	class A3FL_DOJ_Vest: A3FL_VestBelt
	{
		displayName="DOJ Bulletproof Vest";
		model="A3FL_Gear\VestBelt\A3FL_VestDOJ";
		descriptionShort="DOJ Vest";
		hiddenSelectionsTextures[]=
		{
			"\a3fl_gear\vestbelt\data\factions\DOJ.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="A3FL_Gear\VestBelt\A3FL_VestDOJ";
			hiddenSelectionsTextures[]=
			{
				"\a3fl_gear\vestbelt\data\factions\DOJ.paa"
			};
		};
	};
};
