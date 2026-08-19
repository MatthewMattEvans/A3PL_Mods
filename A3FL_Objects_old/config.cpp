class CfgPatches
{
	class A3FL_Objects
	{
		author="A3FL Development Team";
		name="Arma3FishersLife Objects";
		url="https://arma3fisherslife.net";
		units[]=
		{
			"Land_A3FL_City_Gate",
			"Land_A3FL_NetFence_Gate_1",
			"Land_A3FL_NetFence_Gate_2",
			"Land_A3FL_Fence_Wood_1m",
			"Land_A3FL_Fence_Wood_2m",
			"Land_A3FL_Fence_Wood_4m",
			"Land_A3FL_Fence_Wood_Cap_Quarterm",
			"Land_A3FL_Fence_Wood_Corner_1m",
			"Land_A3FL_Fence_Wood_Doorway_2m",
			"Land_A3FL_Fence_Wood2_1m",
			"Land_A3FL_Fence_Wood2_2m",
			"Land_A3FL_Fence_Wood2_4m",
			"Land_A3FL_Fence_Wood_Post2",
			"Land_A3FL_Fence_Wood_Corner2_1m",
			"Land_A3FL_Fence_Wood_Doorway2_4m",
			"Land_A3FL_Fence_Wood3_1m",
			"Land_A3FL_Fence_Wood3_2m",
			"Land_A3FL_Fence_Wood3_4m",
			"Land_A3FL_Fence_Wood3_Corner_1m",
			"Land_A3FL_Fence_Wood3_Doorway_4m",
			"Land_A3FL_Fence_Wood3_Post",
			"Land_A3FL_Fence_Wood4_1m",
			"Land_A3FL_Fence_Wood4_2m",
			"Land_A3FL_Fence_Wood4_4m",
			"Land_A3FL_Fence_Wood4_Corner_1m",
			"Land_A3FL_Fence_Wood4_Doorway_2m",
			"Land_A3FL_Fence_Wood4_Post",
			"Land_A3FL_Fence_Picket_2m",
			"Land_A3FL_Fence_Picket_Corner_1m",
			"Land_A3FL_Fence_Picket_Post",
			"Land_A3FL_Fence_Picket_Doorway_2m",
			"Land_A3FL_CG_Sign",
			"Land_A3FL_Anton_MailBox",
			"Land_A3FL_FIFR_Sign",
			"Land_A3FL_Anton_RoadWork_Sign",
			"Land_A3FL_Anton_Tesla_Supercharger",
			"Land_A3FL_Anton_Cabinet_01",
			"Land_A3FL_Chair1",
			"Land_A3FL_Desk1",
			"Land_A3FL_Desk2",
			"Land_A3FL_TurnChair",
			"Land_A3FL_Anton_Couch_01",
			"Land_A3FL_Anton_Gate_01",
			"Land_A3FL_Anton_Gate_02",
			"Land_A3FL_Anton_Fence1",
			"Land_A3FL_Anton_Fence2",
			"Land_A3FL_Anton_Storage_Unit",

			//Nick
			"A3FL_FISD_Sign",
			"A3FL_FISD_Sign_Double",
			"A3FL_USB_Stick",
			
			//Winston Stuff
			"A3FL_Table",
			"A3FL_Evidence",
			"A3FL_Evidence_Bag",
			"A3FL_Bullet_Casings",
			
			//Carter
			"A3FL_Christmas_Tree",
			"A3FL_Christmas_TreeFurniture",
			"A3FL_Present",
			"Land_Eclipse_Bollard_1",
			"Land_Eclipse_Bollard_2",
			"Land_Eclipse_Bollard_3",
			"Land_Eclipse_Bollard_4"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Structures_F",
			"A3FL_Houses",
			"FishersIsland"
		};
	};
};
class CfgVehicles
{
	class House_F;
	class A3FL_Houses: House_F
	{
		model="";
		scope=1;
		displayName="A3FL Houses";
		vehicleclass="A3FL_Houses";
		author="A3FL Development Team";
		placement="vertical";
		armor=999999;
		class AnimationSources
		{
			class Common
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class door
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class GarageDoor
			{
				source="user";
				animPeriod=10;
				initPhase=0;
			};
			class garage: GarageDoor
			{
			};
			class garage1: GarageDoor
			{
			};
			class garage2: GarageDoor
			{
			};
			class storagedoor: GarageDoor
			{
			};
			class storagedoor2: GarageDoor
			{
			};
			class GarageDoor1: GarageDoor
			{
			};
			class GarageDoor2: GarageDoor
			{
			};
			class Plant_Growth: Common
			{
				animPeriod=300;
			};
			class Plant_Growth_Marijuana: Common
			{
				animPeriod=900;
			};
			class Tape_Unhide: Common
			{
			};
			class Cone_Hide: Common
			{
			};
			class Part_1_spin: Common
			{
			};
			class Part_2_spin: Common
			{
			};
			class Part_3_spin: Common
			{
			};
			class Part_4_spin: Common
			{
			};
			class Part_5_spin: Common
			{
			};
			class Part_6_spin: Common
			{
			};
			class Part_7_spin: Common
			{
			};
			class Part_8_spin: Common
			{
			};
			class Part_9_spin: Common
			{
			};
			class Part_10_spin: Common
			{
			};
			class Part_11_spin: Common
			{
			};
			class Part_12_spin: Common
			{
			};
			class Part_13_spin: Common
			{
			};
			class Part_14_spin: Common
			{
			};
			class Part_15_spin: Common
			{
			};
			class Part_16_spin: Common
			{
			};
			class Part_17_spin: Common
			{
			};
			class Part_18_spin: Common
			{
			};
			class Part_19_spin: Common
			{
			};
			class Part_20_spin: Common
			{
			};
			class All_Lights: Common
			{
			};
			class Door_1: door
			{
			};
			class Door_2: door
			{
			};
			class Door_3: door
			{
			};
			class Door_4: door
			{
			};
			class Door_5: door
			{
			};
			class Door_6: door
			{
			};
			class Door_7: door
			{
			};
			class Door_8: door
			{
			};
			class Door_9: door
			{
			};
			class Door_10: door
			{
			};
			class Door_11: door
			{
			};
			class Door_12: door
			{
			};
			class Door_13: door
			{
			};
			class Door_14: door
			{
			};
			class Door_15: door
			{
			};
			class Door_16: door
			{
			};
			class Door_17: door
			{
			};
			class Door_18: door
			{
			};
			class Door_19: door
			{
			};
			class Door_20: door
			{
			};
			class Door_21: door
			{
			};
			class Door_22: door
			{
			};
			class Door_23: door
			{
			};
			class Door_24: door
			{
			};
			class Door_25: door
			{
			};
			class Door_26: door
			{
			};
			class Door_27: door
			{
			};
			class Door_28: door
			{
			};
			class Door_29: door
			{
			};
			class Door_30: door
			{
			};
			class Door_31: door
			{
			};
			class Door_32: door
			{
			};
			class Door_33: door
			{
			};
			class Door_34: door
			{
			};
			class Door_35: door
			{
			};
			class Door_36: door
			{
			};
			class Door_37: door
			{
			};
			class Door_38: door
			{
			};
			class Door_39: door
			{
			};
			class Door_40: door
			{
			};
			class Door_41: door
			{
			};
			class Door_42: door
			{
			};
			class Door_43: door
			{
			};
			class Door_44: door
			{
			};
			class Door_45: door
			{
			};
			class Door_46: door
			{
			};
			class Door_47: door
			{
			};
			class Door_48: door
			{
			};
			class Door_49: door
			{
			};
			class Door_50: door
			{
			};
			class Door_1_Source: door
			{
			};
			class Door_2_Source: door
			{
			};
			class Door_3_Source: door
			{
			};
			class Door_4_Source: door
			{
			};
			class Door_5_Source: door
			{
			};
			class Door_6_Source: door
			{
			};
			class Door_7_Source: door
			{
			};
			class Door_8_Source: door
			{
			};
			class Door_9_Source: door
			{
			};
			class Door_10_Source: door
			{
			};
			class Door_11_Source: door
			{
			};
			class Door_12_Source: door
			{
			};
			class Door_13_Source: door
			{
			};
			class Door_14_Source: door
			{
			};
			class Door_15_Source: door
			{
			};
			class Door_16_Source: door
			{
			};
			class Door_17_Source: door
			{
			};
			class Door_18_Source: door
			{
			};
			class Door_19_Source: door
			{
			};
			class Door_20_Source: door
			{
			};
			class Door_21_Source: door
			{
			};
			class Door_22_Source: door
			{
			};
			class Door_23_Source: door
			{
			};
			class Door_24_Source: door
			{
			};
			class Door_25_Source: door
			{
			};
			class Door_26_Source: door
			{
			};
			class Door_27_Source: door
			{
			};
			class Door_28_Source: door
			{
			};
			class Door_29_Source: door
			{
			};
			class Door_30_Source: door
			{
			};
			class Door_31_Source: door
			{
			};
			class Door_32_Source: door
			{
			};
			class Door_33_Source: door
			{
			};
			class Door_34_Source: door
			{
			};
			class Door_35_Source: door
			{
			};
			class Door_36_Source: door
			{
			};
			class Door_37_Source: door
			{
			};
			class Door_38_Source: door
			{
			};
			class Door_39_Source: door
			{
			};
			class Door_40_Source: door
			{
			};
			class Door_41_Source: door
			{
			};
			class Door_42_Source: door
			{
			};
			class Door_43_Source: door
			{
			};
			class Door_44_Source: door
			{
			};
			class Door_45_Source: door
			{
			};
			class Door_46_Source: door
			{
			};
			class Door_47_Source: door
			{
			};
			class Door_48_Source: door
			{
			};
			class Door_49_Source: door
			{
			};
			class Door_50_Source: door
			{
			};
			class GarageDoor_1_Source: door
			{
			};
			class GarageDoor_2_Source: door
			{
			};
			class GarageDoor_3_Source: door
			{
			};
			class GarageDoor_4_Source: door
			{
			};
			class GarageDoor_5_Source: door
			{
			};
			class GarageDoor_6_Source: door
			{
			};
			class GarageDoor_7_Source: door
			{
			};
			class GarageDoor_8_Source: door
			{
			};
			class GarageDoor_9_Source: door
			{
			};
			class GarageDoor_10_Source: door
			{
			};
			class GarageDoor_11_Source: door
			{
			};
			class GarageDoor_12_Source: door
			{
			};
			class GarageDoor_13_Source: door
			{
			};
			class GarageDoor_14_Source: door
			{
			};
			class GarageDoor_15_Source: door
			{
			};
			class GarageDoor_16_Source: door
			{
			};
			class GarageDoor_17_Source: door
			{
			};
			class GarageDoor_18_Source: door
			{
			};
			class GarageDoor_19_Source: door
			{
			};
			class GarageDoor_20_Source: door
			{
			};
			class GarageDoor_21_Source: door
			{
			};
			class GarageDoor_22_Source: door
			{
			};
			class GarageDoor_23_Source: door
			{
			};
			class GarageDoor_24_Source: door
			{
			};
			class GarageDoor_25_Source: door
			{
			};
			class GarageDoor_26_Source: door
			{
			};
			class GarageDoor_27_Source: door
			{
			};
			class GarageDoor_28_Source: door
			{
			};
			class GarageDoor_29_Source: door
			{
			};
			class GarageDoor_30_Source: door
			{
			};
			class GarageDoor_31_Source: door
			{
			};
			class GarageDoor_32_Source: door
			{
			};
			class GarageDoor_33_Source: door
			{
			};
			class GarageDoor_34_Source: door
			{
			};
			class GarageDoor_35_Source: door
			{
			};
			class GarageDoor_36_Source: door
			{
			};
			class GarageDoor_37_Source: door
			{
			};
			class GarageDoor_38_Source: door
			{
			};
			class GarageDoor_39_Source: door
			{
			};
			class GarageDoor_40_Source: door
			{
			};
			class GarageDoor_41_Source: door
			{
			};
			class GarageDoor_42_Source: door
			{
			};
			class GarageDoor_43_Source: door
			{
			};
			class GarageDoor_44_Source: door
			{
			};
			class GarageDoor_45_Source: door
			{
			};
			class GarageDoor_46_Source: door
			{
			};
			class GarageDoor_47_Source: door
			{
			};
			class GarageDoor_48_Source: door
			{
			};
			class GarageDoor_49_Source: door
			{
			};
			class GarageDoor_50_Source: door
			{
			};
			class deposit_1
			{
				source="user";
				animPeriod=1.5;
				initPhase=0;
			};
			class deposit_2: deposit_1
			{
			};
			class deposit_3: deposit_1
			{
			};
			class deposit_4: deposit_1
			{
			};
			class deposit_5: deposit_1
			{
			};
			class deposit_6: deposit_1
			{
			};
			class deposit_7: deposit_1
			{
			};
			class deposit_8: deposit_1
			{
			};
			class deposit_9: deposit_1
			{
			};
			class deposit_10: deposit_1
			{
			};
			class deposit_11: deposit_1
			{
			};
			class deposit_12: deposit_1
			{
			};
			class deposit_13: deposit_1
			{
			};
			class deposit_14: deposit_1
			{
			};
			class deposit_15: deposit_1
			{
			};
			class deposit_16: deposit_1
			{
			};
			class deposit_17: deposit_1
			{
			};
			class deposit_18: deposit_1
			{
			};
			class deposit_19: deposit_1
			{
			};
			class deposit_20: deposit_1
			{
			};
			class door_bankvault
			{
				source="user";
				animPeriod=6;
				initPhase=0;
			};
			class car_lift
			{
				source="user";
				animPeriod=8;
				initPhase=0;
			};
			class hoseSwitch
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class LockedDoor_source: Common
			{
				animPeriod=0.1;
			};
			class Door_1_handle_source: Common
			{
				animPeriod=1;
			};
			class Door_2_handle_source: Common
			{
				animPeriod=1;
			};
			class bargate1: Common
			{
				animPeriod=3;
			};
			class bargate2: bargate1
			{
			};
		};
	};
	class All;
	class ThingX;
	class Static: All {};
	class Building: Static {};
	class A3FL_Objects: ThingX
	{
        displayName = "A3PL_Objects";
        vehicleclass = "A3PL_Objects";
		model = "";
		scope = 2;
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
	class A3PL_AmmoBox_Base: A3FL_Objects
	{
		displayName = "AmmoBox Base";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		typicalCargo[] = {};
		destrType = "DestructNo";
		explosionEffect = "";
		maximumLoad = 1000000;
		transportMaxWeapons = 100;
		transportMaxMagazines = 600;
		transportMaxBackpacks = 500;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.4;
		memoryPointSupply = "SupplyPoint";
		waterLinearDampingCoefY = 1;
		waterAngularDampingCoef = 0.1;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
	};
	class A3FL_Phone: A3FL_Objects
    {
        _generalMacro="A3FL_Phone";
        model="\A3FL_Objects\Phone\A3FL_Phone";
        displayName="Téléphone";
    };
	class Land_A3FL_City_Gate: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\City Gate\A3FL_City_Gate.p3d";
		displayName="A3FL City Gate";

        class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GateDoorsSound";
				soundPosition="Door_1";
			};
		};
	};
	class Land_A3FL_NetFence_Gate_1: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\NetFence Gate\A3FL_NetFence_Gate_1.p3d";
		displayName="A3FL NetFence Gate 1";

		class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="FenceGateDoorsSound";
				soundPosition="Door_1";
			};
		};
	};
	class Land_A3FL_NetFence_Gate_2: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\NetFence Gate\A3FL_NetFence_Gate_2.p3d";
		displayName="A3FL NetFence Gate 2";

		class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="FenceGateDoorsSound";
				soundPosition="Door_1";
			};
			class Door_2: Door_1
			{
				soundPosition="Door_2";
			};
		};
	};
	class Land_A3FL_Fence_Wood_1m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood\A3FL_Fence_Wood_1m.p3d";
		displayName="A3FL Fence Wood 1m";
	};
	class Land_A3FL_Fence_Wood_2m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood\A3FL_Fence_Wood_2m.p3d";
		displayName="A3FL Fence Wood 2m";
	};
	class Land_A3FL_Fence_Wood_4m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood\A3FL_Fence_Wood_4m.p3d";
		displayName="A3FL Fence Wood 4m";
	};
	class Land_A3FL_Fence_Wood_Cap_Quarterm: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood\A3FL_Fence_Wood_Cap_Quarterm.p3d";
		displayName="A3FL Fence Wood Cap Quarterm";
	};
	class Land_A3FL_Fence_Wood_Corner_1m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood\A3FL_Fence_Wood_Corner_1m.p3d";
		displayName="A3FL Fence Wood Corner 1m";
	};
	class Land_A3FL_Fence_Wood_Doorway_2m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood\A3FL_Fence_Wood_Doorway_2m.p3d";
		displayName="A3FL Fence Wood Doorway 2m";

		class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				soundPosition="Door_1";
			};
		};
	};
	class Land_A3FL_Fence_Wood2_1m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood2\A3FL_Fence_Wood2_1m.p3d";
		displayName="A3FL Fence Wood2 1m";
	};
	class Land_A3FL_Fence_Wood2_2m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood2\A3FL_Fence_Wood2_2m.p3d";
		displayName="A3FL Fence Wood2 2m";
	};
	class Land_A3FL_Fence_Wood2_4m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood2\A3FL_Fence_Wood2_4m.p3d";
		displayName="A3FL Fence Wood2 4m";
	};
	class Land_A3FL_Fence_Wood_Post2: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood2\A3FL_Fence_Wood_Post2.p3d";
		displayName="A3FL Fence Wood Post2";
	};
	class Land_A3FL_Fence_Wood_Corner2_1m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood2\A3FL_Fence_Wood_Corner2_1m.p3d";
		displayName="A3FL Fence Wood Corner2 1m";
	};
	class Land_A3FL_Fence_Wood_Doorway2_4m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood2\A3FL_Fence_Wood_Doorway2_4m.p3d";
		displayName="A3FL Fence Wood Doorway2 4m";

		class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				soundPosition="Door_1";
			};
		};
	};
	class Land_A3FL_Fence_Wood3_1m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood3\A3FL_Fence_Wood3_1m.p3d";
		displayName="A3FL Fence Wood3 1m";
	};
	class Land_A3FL_Fence_Wood3_2m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood3\A3FL_Fence_Wood3_2m.p3d";
		displayName="A3FL Fence Wood3 2m";
	};
	class Land_A3FL_Fence_Wood3_4m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood3\A3FL_Fence_Wood3_4m.p3d";
		displayName="A3FL Fence Wood3 4m";
	};
	class Land_A3FL_Fence_Wood3_Corner_1m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood3\A3FL_Fence_Wood3_Corner_1m.p3d";
		displayName="A3FL Fence Wood3 Corner 1m";
	};
	class Land_A3FL_Fence_Wood3_Post: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood3\A3FL_Fence_Wood3_Post.p3d";
		displayName="A3FL Fence Wood3 Post";
	};
	class Land_A3FL_Fence_Wood3_Doorway_4m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood3\A3FL_Fence_Wood3_Doorway_4m.p3d";
		displayName="A3FL Fence Wood3 Doorway 4m";

		class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				soundPosition="Door_1";
			};
		};
	};
	class Land_A3FL_Fence_Wood4_1m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood4\A3FL_Fence_Wood4_1m.p3d";
		displayName="A3FL Fence Wood4 1m";
	};
	class Land_A3FL_Fence_Wood4_2m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood4\A3FL_Fence_Wood4_2m.p3d";
		displayName="A3FL Fence Wood4 2m";
	};
	class Land_A3FL_Fence_Wood4_4m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood4\A3FL_Fence_Wood4_4m.p3d";
		displayName="A3FL Fence Wood4 4m";
	};
	class Land_A3FL_Fence_Wood4_Corner_1m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood4\A3FL_Fence_Wood4_Corner_1m.p3d";
		displayName="A3FL Fence Wood4 Corner 1m";
	};
	class Land_A3FL_Fence_Wood4_Post: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood4\A3FL_Fence_Wood4_Post.p3d";
		displayName="A3FL Fence Wood4 Post";
	};
	class Land_A3FL_Fence_Wood4_Doorway_2m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Wood4\A3FL_Fence_Wood4_Doorway_2m.p3d";
		displayName="A3FL Fence Wood4 Doorway 2m";

		class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				soundPosition="Door_1";
			};
		};
	};
	class Land_A3FL_Fence_Picket_2m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Picket\A3FL_Fence_Picket_2m.p3d";
		displayName="A3FL Fence Picket 2m";
	};
	class Land_A3FL_Fence_Picket_Corner_1m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Picket\A3FL_Fence_Picket_Corner_1m.p3d";
		displayName="A3FL Fence Picket Corner 1m";
	};
	class Land_A3FL_Fence_Picket_Post: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Picket\A3FL_Fence_Picket_Post.p3d";
		displayName="A3FL Fence Picket Post";
	};
	class Land_A3FL_Fence_Picket_Doorway_2m: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Fence Picket\A3FL_Fence_Picket_Doorway_2m.p3d";
		displayName="A3FL Fence Picket Doorway 2m";

		class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				soundPosition="Door_1";
			};
		};
	};
	class Land_A3FL_CG_Sign: A3FL_Houses
	{
		author="Anton Peters";
		model="\A3FL_Objects\CG Sign\A3FL_CG_Sign.p3d";
		displayName="A3FL Coast Guard Station";
	};
	class A3FL_FISD_Sign: A3FL_Houses
	{
		author="Nick Parker";
		model="\A3FL_Objects\FISD Sign\A3FL_FISD_Sign.p3d";
		displayName="A3FL FISD Sign";
	};
	class A3FL_FISD_Sign_Double: A3FL_Houses
	{
		author="Nick Parker";
		model="\A3FL_Objects\FISD Sign\A3FL_FISD_Sign_Double.p3d";
		displayName="A3FL FISD Sign Double Sided";
	};
	class Land_A3FL_FredWeeks_Plaque: A3FL_Houses {
		author="Nick Parker";
        model = "\A3FL_Objects\Fred Weeks Sign\FIFRplaqueFredWeeks.p3d";
        displayName = "Fred Weeks Plaque";
    };
	class Land_A3FL_Anton_MailBox: A3FL_Houses
	{
		author="Anton Peters";
		model="\A3FL_Objects\MailBox\A3FL_Anton_MailBox.p3d";
		displayName="A3FL MailBox";
	};
	class Land_A3FL_FIFR_Sign: A3FL_Houses
	{
		author="Anton Peters";
		model="\A3FL_Objects\FIFR Sign\A3FL_FIFR_Sign.p3d";
		displayName="A3FL FIFR Sign";
	};
	class Land_A3FL_Anton_RoadWork_Sign: A3FL_Houses
	{
		author="Anton Peters";
		model="\A3FL_Objects\RoadWork Sign\A3FL_Anton_RoadWork_Sign.p3d";
		displayName="A3FL RoadWork Sign";
		
		hiddenSelections[]=
		{
			"sign"
			
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Objects\RoadWork Sign\data\RoadSign_Road_Worker.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
	};
	class Land_A3FL_Anton_Tesla_Supercharger: A3FL_Houses
	{
		author="Anton Peters";
		model="\A3FL_Objects\Tesla Supercharger\A3FL_Anton_Tesla_Supercharger.p3d";
		displayName="A3FL Tesla Supercharger";
	};
	class Land_A3FL_Anton_Cabinet_01: A3FL_Houses
	{
		author="Anton Peters";
		model="\A3FL_Objects\Cabinet1\A3FL_Anton_Cabinet_01.p3d";
		displayName="A3FL Cherry Wood Cabinet";
	};
	class Land_A3FL_Chair1: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Chair1\A3FL_Chair1.p3d";
		displayName="A3FL Chair1";
	};
	class Land_A3FL_TurnChair: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\TurnChair\A3FL_TurnChair.p3d";
		displayName="A3FL TurnChair";
	};
	class Land_A3FL_Desk1: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Desk\A3FL_Desk1.p3d";
		displayName="A3FL Desk1";
	};
	class Land_A3FL_Desk2: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Objects\Desk\A3FL_Desk2.p3d";
		displayName="A3FL Desk2";
	};
	class Land_A3FL_Anton_Couch_01: A3FL_Houses
	{
		author="Anton Peters";
		model="\A3FL_Objects\Couch\A3FL_Anton_Couch_01.p3d";
		displayName="A3FL Couch 1";
	};
	class Land_A3FL_Anton_Gate_01: A3FL_Houses
	{
		author="Anton Peters";
		model="\A3FL_Objects\Gate1\A3FL_Anton_Gate_01.p3d";
		displayName="A3FL Gate1";
		
		class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source="user";
				initPhase=0;
				animPeriod=3;
				soundPosition="Door_1";
			};
		};
	};
	class Land_A3FL_Anton_Gate_02: A3FL_Houses
	{
		author="Anton Peters";
		model="\A3FL_Objects\Gate2\A3FL_Anton_Gate_02.p3d";
		displayName="A3FL Gate2";
		
		class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source = user;
				initPhase = 0;
				animPeriod = 4;
				soundPosition="Door_1";
			};
			class Door_2: Door_1
			{
				soundPosition="Door_2";
			};
			class Door_3
			{
				source = user;
				initPhase = 0;
				animPeriod = 2;
				soundPosition="Door_3";
			};
		};
	};
	class Land_A3FL_Anton_Fence1: A3FL_Houses
	{
		author="Anton Peters";
		model="\A3FL_Objects\Fence Wood5\A3FL_Anton_Fence1.p3d";
		displayName="A3FL Anton Fence1";
	};
	class Land_A3FL_Anton_Fence2: A3FL_Houses
	{
		author="Anton Peters";
		model="\A3FL_Objects\Fence Wood5\A3FL_Anton_Fence2.p3d";
		displayName="A3FL Anton Fence2";
	};
	class Land_A3FL_Anton_Storage_Unit: A3FL_Houses
	{
		author="Anton Peters";
		model="\A3FL_Objects\Storage Unit\A3FL_Anton_Storage_Unit.p3d";
		displayName="A3FL Storage Unit";
		
		class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source = user;
				initPhase = 0;
				animPeriod = 4;
				soundPosition="Door_1";
			};
		};
	};
	
	//Winston Stuff
	class A3PL_Objects;
	class A3FL_Table: A3PL_Objects
	{
		_generalMacro="A3FL_Table";
		model="\A3FL_Objects\Furnitures\A3FL_Table";
		displayName="Table";
	};
	class A3FL_Evidence: A3PL_Objects
	{
		_generalMacro="A3FL_Evidence";
		model="\A3FL_Objects\Police\A3FL_Evidence";
		displayName="Evidence Marker";
		hiddenSelections[]=	{"number"};
		hiddenSelectionsTextures[]=	{"A3FL_Objects\Police\data\EM\1.paa"};
	};
	class A3FL_Evidence_Bag: A3PL_Objects
	{
		_generalMacro="A3FL_Evidence_Bag";
		model="\A3FL_Objects\Police\Evidence_Bag\Evidence_Bag";
		displayName="Evidence Bag";
	};
	class A3FL_Bullet_Casings: A3PL_Objects
	{
		_generalMacro="A3FL_Bullet_Casings";
		model="\A3FL_Objects\Police\Bullet_Casings\BulletCasing";
		displayName="Bullet Casing";
	};
	class A3FL_DrugTest: A3PL_Objects
	{
		_generalMacro="A3FL_DrugTest";
		model="\A3FL_Objects\Items\DrugTest\A3FL_DrugTest";
		displayName="Drug Test";
	};
	class A3FL_Breathalyzer: A3PL_Objects
	{
		_generalMacro="A3FL_Breathalyzer";
		model="\A3FL_Objects\Items\Breathalyzer\A3FL_Breathalyzer";
		displayName="Breathalyzer";
	};
	class A3FL_KeyCard: A3PL_Objects
	{
		_generalMacro="A3FL_KeyCard";
		model="\A3FL_Objects\Items\KeyCard\A3FL_KeyCard";
		displayName="Key Card";
	};
	class A3FL_CyanidePills: A3PL_Objects
	{
		_generalMacro="A3FL_CyanidePills";
		model="\A3FL_Objects\Items\CyanidePills\A3FL_CyanidePills";
		displayName="Cyanide Pills";
	};
	class A3FL_LifeAlert: A3PL_Objects
	{
		_generalMacro="A3FL_LifeAlert";
		model="\A3FL_Objects\Items\LifeAlert\A3FL_LifeAlert";
		displayName="Life Alert";
	};
	class A3FL_WeaponBox: A3PL_Objects
    {
        _generalMacro="A3FL_WeaponBox";
        model="\A3FL_Objects\Items\WeaponBox\A3FL_WeaponBox";
        displayName="Weapon Box";
    };
	class A3FL_Stinger: A3PL_Objects
	{
		model = "\A3FL_Objects\Police\Spikes\A3FL_Stinger";
		displayName = "Police Stinger";
		class EventHandlers
		{
			init = "if (!isDedicated) then { [_this] spawn {waituntil{sleep 1; !isNil 'A3PL_Vehicle_Init_A3PL_Stinger'}; [_this] call A3PL_Vehicle_Init_A3PL_Stinger};};";
		};
	};
	class A3FL_Christmas_Tree: Building
	{
		scope=2;
		model="\A3FL_Objects\Christmas_Tree\A3FL_Christmas_Tree";
		displayName="A3FL Christmas Tree";
	};
	class A3FL_Christmas_TreeFurniture: A3FL_Christmas_Tree
	{
		_generalMacro="A3FL_Christmas_TreeFurniture";
		model="\A3FL_Objects\Christmas_Tree\A3FL_Christmas_TreeFurniture";
	};
	class A3FL_Present: A3PL_Objects
	{
		_generalMacro="A3FL_Present";
		model="\A3FL_Objects\Present\A3FL_Present";
		displayName="Present";
	};
	class A3FL_Toolbox: A3FL_Objects
	{
		_generalMacro="A3FL_Toolbox";
		model="\A3FL_Objects\Toolbox\A3FL_Toolbox";
		displayName="A3FL Toolbox";
	};
	class A3FL_USB_Stick: A3PL_Objects
	{
		_generalMacro="A3FL_USB_Stick";
		model="\A3FL_Objects\USB\A3FL_USB";
		displayName="USB Stick";
	};
	class House;
	class Land_Eclipse_Bollard_1: House
	{
		author="Winston";
		scope=2;
		scopeCurator=2;
		displayName="Retractable Bollard (1)";
		model="\A3FL_Objects\RetractableBollard\Eclipse_Bollard_1.p3d";
		armor=10000;
		class AnimationSources
		{
			class ToggleBollard
			{
				source="user";
				initPhase=0;
				animPeriod=2;
			};
		};
	};
	class Land_Eclipse_Bollard_2: Land_Eclipse_Bollard_1
	{
		displayName="Retractable Bollard (2)";
		model="\A3FL_Objects\RetractableBollard\Eclipse_Bollard_2.p3d";
	};
	class Land_Eclipse_Bollard_3: Land_Eclipse_Bollard_1
	{
		displayName="Retractable Bollard (3)";
		model="\A3FL_Objects\RetractableBollard\Eclipse_Bollard_3.p3d";
	};
	class Land_Eclipse_Bollard_4: Land_Eclipse_Bollard_1
	{
		displayName="Retractable Bollard (4)";
		model="\A3FL_Objects\RetractableBollard\Eclipse_Bollard_4.p3d";
	};
};