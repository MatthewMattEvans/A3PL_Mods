class CfgPatches
{
	class A3FL_Andrew_Crackhouse
	{
		author="Andrew Axel";
		name="ArmA 3 Fishers Life Andrew";
		url="https://arma3fisherslife.net";
		units[] = {"Land_A3FL_Crackhouse"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Data_F_Exp",
			"A3_Structures_F",
			"A3FL_Buildings"
		};
	};
};
class CfgVehicles {
	class House_F;
	class A3FL_Buildings: House_F
	{
		model="";
		scope=1;
		//picture="\A3PL_Characters\A3PL_Logo.paa";
		displayName="A3FL Buildings";
		vehicleclass="A3FL_Buildings";
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
            class jailgate: GarageDoor
            {
            	animPeriod=7;
            };
            class gatedoor: GarageDoor
            {
                animPeriod=3;
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
			class jewl_vault
			{
				source="user";
				animPeriod=5;
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
			class HitGlass1
			{
				source="Hit";
				hitpoint="HitGlass1";
				raw=1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint="HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint="HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint="HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint="HitGlass5";
			};
			class HitGlass6: HitGlass1
			{
				hitpoint="HitGlass6";
			};
			class HitGlass7: HitGlass1
			{
				hitpoint="HitGlass7";
			};
			class HitGlass8: HitGlass1
			{
				hitpoint="HitGlass8";
			};
			class HitGlass9: HitGlass1
			{
				hitpoint="HitGlass9";
			};
			class HitGlass10: HitGlass1
			{
				hitpoint="HitGlass10";
			};
			class HitGlass11: HitGlass1
			{
				hitpoint="HitGlass11";
			};
			class HitGlass12: HitGlass1
			{
				hitpoint="HitGlass12";
			};
			class HitGlass13: HitGlass1
			{
				hitpoint="HitGlass13";
			};
			class HitGlass14: HitGlass1
			{
				hitpoint="HitGlass14";
			};
			class HitGlass15: HitGlass1
			{
				hitpoint="HitGlass15";
			};
			class HitGlass16: HitGlass1
			{
				hitpoint="HitGlass16";
			};
			class HitGlass17: HitGlass1
			{
				hitpoint="HitGlass17";
			};
			class HitGlass18: HitGlass1
			{
				hitpoint="HitGlass18";
			};
			class HitGlass19: HitGlass1
			{
				hitpoint="HitGlass19";
			};
			class HitGlass20: HitGlass1
			{
				hitpoint="HitGlass20";
			};
			class HitGlass21: HitGlass1
			{
				hitpoint="HitGlass21";
			};
			class HitGlass22: HitGlass1
			{
				hitpoint="HitGlass22";
			};
			class HitGlass23: HitGlass1
			{
				hitpoint="HitGlass23";
			};
			class HitGlass24: HitGlass1
			{
				hitpoint="HitGlass24";
			};
			class HitGlass25: HitGlass1
			{
				hitpoint="HitGlass25";
			};
			class HitGlass26: HitGlass1
			{
				hitpoint="HitGlass26";
			};
			class HitGlass27: HitGlass1
			{
				hitpoint="HitGlass27";
			};
			class HitGlass28: HitGlass1
			{
				hitpoint="HitGlass28";
			};
			class HitGlass29: HitGlass1
			{
				hitpoint="HitGlass29";
			};
			class HitGlass30: HitGlass1
			{
				hitpoint="HitGlass30";
			};
		};
		class HitPoints
		{
			class HitGlass1
			{
				armor=0.0099999998;
				material=-1;
				name="glass1";
				visual="glass1";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass1";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass1_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass2
			{
				armor=0.0099999998;
				material=-1;
				name="glass2";
				visual="glass2";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass2";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass2_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass3
			{
				armor=0.0099999998;
				material=-1;
				name="glass3";
				visual="glass3";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass3";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass3_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass4
			{
				armor=0.0099999998;
				material=-1;
				name="glass4";
				visual="glass4";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass4";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass4_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass5
			{
				armor=0.0099999998;
				material=-1;
				name="glass5";
				visual="glass5";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass5";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass5_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass6
			{
				armor=0.0099999998;
				material=-1;
				name="glass6";
				visual="glass6";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass6";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass6_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass7
			{
				armor=0.0099999998;
				material=-1;
				name="glass7";
				visual="glass7";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass7";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass7_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass8
			{
				armor=0.0099999998;
				material=-1;
				name="glass8";
				visual="glass8";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass8";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass8_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass9
			{
				armor=0.0099999998;
				material=-1;
				name="glass9";
				visual="glass9";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass9";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass9_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass10
			{
				armor=0.0099999998;
				material=-1;
				name="glass10";
				visual="glass10";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass10";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass10_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass11
			{
				armor=0.0099999998;
				material=-1;
				name="glass11";
				visual="glass11";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass11";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass11_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass12
			{
				armor=0.0099999998;
				material=-1;
				name="glass12";
				visual="glass12";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass12";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass12_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass13
			{
				armor=0.0099999998;
				material=-1;
				name="glass13";
				visual="glass13";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass13";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass13_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass14
			{
				armor=0.0099999998;
				material=-1;
				name="glass14";
				visual="glass14";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass14";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass14_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass15
			{
				armor=0.0099999998;
				material=-1;
				name="glass15";
				visual="glass15";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass15";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass15_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass16
			{
				armor=0.0099999998;
				material=-1;
				name="glass16";
				visual="glass16";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass16";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass16_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass17
			{
				armor=0.0099999998;
				material=-1;
				name="glass17";
				visual="glass17";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass17";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass17_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass18
			{
				armor=0.0099999998;
				material=-1;
				name="glass18";
				visual="glass18";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass18";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass18_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass19
			{
				armor=0.0099999998;
				material=-1;
				name="glass19";
				visual="glass19";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass19";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass19_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass20
			{
				armor=0.0099999998;
				material=-1;
				name="glass20";
				visual="glass20";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass20";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass20_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass21
			{
				armor=0.0099999998;
				material=-1;
				name="glass21";
				visual="glass21";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass21";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass21_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass22
			{
				armor=0.0099999998;
				material=-1;
				name="glass22";
				visual="glass22";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass22";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass22_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass23
			{
				armor=0.0099999998;
				material=-1;
				name="glass23";
				visual="glass23";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass23";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass23_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass24
			{
				armor=0.0099999998;
				material=-1;
				name="glass24";
				visual="glass24";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass24";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass24_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass25
			{
				armor=0.0099999998;
				material=-1;
				name="glass25";
				visual="glass25";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass25";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass25_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass26
			{
				armor=0.0099999998;
				material=-1;
				name="glass26";
				visual="glass26";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass26";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass26_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass27
			{
				armor=0.0099999998;
				material=-1;
				name="glass27";
				visual="glass27";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass27";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass27_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass28
			{
				armor=0.0099999998;
				material=-1;
				name="glass28";
				visual="glass28";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass28";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass28_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass29
			{
				armor=0.0099999998;
				material=-1;
				name="glass29";
				visual="glass29";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass29";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass29_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
			class HitGlass30
			{
				armor=0.0099999998;
				material=-1;
				name="glass30";
				visual="glass30";
				passThrough=0;
				radius=0.69999999;
				convexComponent="glass30";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NB";
						position="glass30_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type="BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type="BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type="BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type="BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type="BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type="BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type="BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type="BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type="BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type="BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type="BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type="BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type="BrokenGlass7SB";
					};
				};
			};
		};
	};
	class Land_A3FL_Crackhouse : A3FL_Buildings {
		model = "\A3FL_Andrew\Crackhouse\A3FL_Crackhouse.p3d";
		displayName = "A3FL Crackhouse";
		scope = 2;
		class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="OldWoodDoorsSound";
				soundPosition="Door_1";
			};
		};
	};
};