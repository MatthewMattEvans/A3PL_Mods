class defaultUserActions;
class DefaultEventhandlers;
class CfgPatches
{
	class A3FL_LeFishe
	{
		author="Andrew Axel Ft. LeFishe";
		units[]=
		{
			"LeFishe"
		};
		weapons[]={};
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
class CfgVehicles
{
	class All;
	class ThingX;
	class Static: All {};
	class Building: Static {};
	class A3FL_Objects: ThingX
	{
        displayName = "A3PL_Objects";
        vehicleclass = "A3PL_Objects";
		model = "";
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 2;
		author="A3PL Development Team";
		placement = "vertical";
		armor = 999999;
		picture = "\A3PL_Characters\A3PL_Logo.paa";
		class AnimationSources
		{
			class Common {source = "user";animPeriod = 0.001;initPhase = 0;};
			class Fuse: Common{animPeriod = 4;sound = "RocketFuse";};
			class door1: Common{animPeriod = 1.5;};
			class door2: door1{};
			class WrenchRotation: Common{animPeriod = 2;};
			class Switch1: Common{animPeriod = 1;};
			class Switch2:Switch1{};
			class pump: Common{animPeriod = 5;};
			class Spin: Common{animPeriod = 5;};
			class Plant_Growth: Common{animPeriod = 300;};
			class Plant_Growth_Marijuana: Common{animPeriod = 900;};
			class LockedDoor_source: Common {animPeriod = 0.1;};
			class Deploy_Stinger: Common {animPeriod = 1;};
			class Door_1_handle_source: Common{animPeriod = 1;};
			class Door_2_handle_source: Common{animPeriod = 1;};
			class Tape_Unhide: Common {};class Cone_Hide: Common {};class Part_1_spin: Common {};class Part_2_spin: Common {};class Part_3_spin: Common {};class Part_4_spin: Common {};class Part_5_spin: Common {};class Part_6_spin: Common {};class Part_7_spin: Common {};class Part_8_spin: Common {};class Part_9_spin: Common {};class Part_10_spin: Common {};class Part_11_spin: Common {};class Part_12_spin: Common {};class Part_13_spin: Common {};class Part_14_spin: Common {};class Part_15_spin: Common {};class Part_16_spin: Common {};class Part_17_spin: Common {};class Part_18_spin: Common {};class Part_19_spin: Common {};class Part_20_spin: Common {};
			class door{source = "user";animPeriod = 2;initPhase = 0;};
			class GarageDoor {source = "user";animPeriod = 10;initPhase = 0;};
			class garage: GarageDoor{};
			class garage1: GarageDoor{};
			class garage2: GarageDoor{};
			class storagedoor: GarageDoor{};
			class storagedoor2: GarageDoor{};
			class GarageDoor1: GarageDoor{};
			class GarageDoor2: GarageDoor{};
			class All_Lights: Common{};
			class Door_1:door{};class Door_2:door{};class Door_3:door{};class Door_4:door{};class Door_5:door{};class Door_6:door{};class Door_7:door{};class Door_8:door{};class Door_9:door{};class Door_10:door{};class Door_11:door{};class Door_12:door{};class Door_13:door{};class Door_14:door{};class Door_15:door{};class Door_16:door{};class Door_17:door{};class Door_18:door{};class Door_19:door{};class Door_20:door{};class Door_21:door{};class Door_22:door{};class Door_23:door{};class Door_24:door{};class Door_25:door{};class Door_26:door{};class Door_27:door{};class Door_28:door{};class Door_29:door{};class Door_30:door{};class Door_31:door{};class Door_32:door{};class Door_33:door{};class Door_34:door{};class Door_35:door{};class Door_36:door{};class Door_37:door{};class Door_38:door{};class Door_39:door{};class Door_40:door{};class Door_41:door{};class Door_42:door{};class Door_43:door{};class Door_44:door{};class Door_45:door{};class Door_46:door{};class Door_47:door{};class Door_48:door{};class Door_49:door{};class Door_50:door{};
			class Door_1_Source:door{};class Door_2_Source:door{};class Door_3_Source:door{};class Door_4_Source:door{};class Door_5_Source:door{};class Door_6_Source:door{};class Door_7_Source:door{};class Door_8_Source:door{};class Door_9_Source:door{};class Door_10_Source:door{};class Door_11_Source:door{};class Door_12_Source:door{};class Door_13_Source:door{};class Door_14_Source:door{};class Door_15_Source:door{};class Door_16_Source:door{};class Door_17_Source:door{};class Door_18_Source:door{};class Door_19_Source:door{};class Door_20_Source:door{};class Door_21_Source:door{};class Door_22_Source:door{};class Door_23_Source:door{};class Door_24_Source:door{};class Door_25_Source:door{};class Door_26_Source:door{};class Door_27_Source:door{};class Door_28_Source:door{};class Door_29_Source:door{};class Door_30_Source:door{};class Door_31_Source:door{};class Door_32_Source:door{};class Door_33_Source:door{};class Door_34_Source:door{};class Door_35_Source:door{};class Door_36_Source:door{};class Door_37_Source:door{};class Door_38_Source:door{};class Door_39_Source:door{};class Door_40_Source:door{};class Door_41_Source:door{};class Door_42_Source:door{};class Door_43_Source:door{};class Door_44_Source:door{};class Door_45_Source:door{};class Door_46_Source:door{};class Door_47_Source:door{};class Door_48_Source:door{};class Door_49_Source:door{};class Door_50_Source:door{};
			class GarageDoor_1_Source:door{};class GarageDoor_2_Source:door{};class GarageDoor_3_Source:door{};class GarageDoor_4_Source:door{};class GarageDoor_5_Source:door{};class GarageDoor_6_Source:door{};class GarageDoor_7_Source:door{};class GarageDoor_8_Source:door{};class GarageDoor_9_Source:door{};class GarageDoor_10_Source:door{};class GarageDoor_11_Source:door{};class GarageDoor_12_Source:door{};class GarageDoor_13_Source:door{};class GarageDoor_14_Source:door{};class GarageDoor_15_Source:door{};class GarageDoor_16_Source:door{};class GarageDoor_17_Source:door{};class GarageDoor_18_Source:door{};class GarageDoor_19_Source:door{};class GarageDoor_20_Source:door{};class GarageDoor_21_Source:door{};class GarageDoor_22_Source:door{};class GarageDoor_23_Source:door{};class GarageDoor_24_Source:door{};class GarageDoor_25_Source:door{};class GarageDoor_26_Source:door{};class GarageDoor_27_Source:door{};class GarageDoor_28_Source:door{};class GarageDoor_29_Source:door{};class GarageDoor_30_Source:door{};class GarageDoor_31_Source:door{};class GarageDoor_32_Source:door{};class GarageDoor_33_Source:door{};class GarageDoor_34_Source:door{};class GarageDoor_35_Source:door{};class GarageDoor_36_Source:door{};class GarageDoor_37_Source:door{};class GarageDoor_38_Source:door{};class GarageDoor_39_Source:door{};class GarageDoor_40_Source:door{};class GarageDoor_41_Source:door{};class GarageDoor_42_Source:door{};class GarageDoor_43_Source:door{};class GarageDoor_44_Source:door{};class GarageDoor_45_Source:door{};class GarageDoor_46_Source:door{};class GarageDoor_47_Source:door{};class GarageDoor_48_Source:door{};class GarageDoor_49_Source:door{};class GarageDoor_50_Source:door{};
			class deposit_1 { source = "user"; animPeriod = 1.5; initPhase = 0; }; class deposit_2:deposit_1{};class deposit_3:deposit_1{};class deposit_4:deposit_1{};class deposit_5:deposit_1{};class deposit_6:deposit_1{};class deposit_7:deposit_1{};class deposit_8:deposit_1{};class deposit_9:deposit_1{};class deposit_10:deposit_1{};class deposit_11:deposit_1{};class deposit_12:deposit_1{};class deposit_13:deposit_1{};class deposit_14:deposit_1{};class deposit_15:deposit_1{};class deposit_16:deposit_1{};class deposit_17:deposit_1{};class deposit_18:deposit_1{};class deposit_19:deposit_1{};class deposit_20:deposit_1{};
			class door_bankvault { source = "user"; animPeriod = 6; initPhase = 0; };			
			class car_lift {source = "user";animPeriod = 8;initPhase = 0;};
			class hoseSwitch{source = "user";animPeriod = 1;initPhase = 0;};
			class bargate1: Common {animPeriod = 3;};
			class bargate2:bargate1 {};
		};
	};
	class LeFishe: A3FL_Objects
	{
		scope=2;
		_generalMacro="LeFishe";
		model="\A3FL_Gear\SOGVest\data\proxy\LeFishe\A3FL_LeFishe";
		displayName="LeFishe";
	};
};	