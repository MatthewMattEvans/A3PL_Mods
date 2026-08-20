#define _ARMA_
#include "config_macros_glass.hpp"

enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	destructno = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches {
	class mansion_4 {
		units[] = {"asn_mansion_4"};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F"};
	};
};


class CfgVehicleClasses
{
	class asn_houses
	{
		displayName="ASN Houses";
	};
};

class CfgVehicles {	
	class House;	
	class House_F;
	class asn_mansion_4: House_F
	{
		model = "\asn_winter_houses\mansion4\mansion_4.p3d";
		scope = 2;
		displayName = "Mansion Big";
		vehicleClass = "asn_houses";
		mapSize = 0.1;
		author = "Winter";
		cost = 100;
		armor = 100000;
		animated = true;
		class DestructionEffects
		{
		};
		class HitPoints // Entities representing destructible subparts of the house
		{
			BIG_GLASS_HITPOINT(1,0.00001,0.175)
			BIG_GLASS_HITPOINT(2,0.00001,0.175)
			BIG_GLASS_HITPOINT(3,0.00001,0.175)
			BIG_GLASS_HITPOINT(4,0.00001,0.175)
			BIG_GLASS_HITPOINT(5,0.00001,0.175)
			BIG_GLASS_HITPOINT(6,0.00001,0.175)
			BIG_GLASS_HITPOINT(7,0.00001,0.175)
			BIG_GLASS_HITPOINT(8,0.00001,0.175)
			BIG_GLASS_HITPOINT(9,0.00001,0.175)
			BIG_GLASS_HITPOINT(10,0.00001,0.175)
			BIG_GLASS_HITPOINT(11,0.00001,0.175)
			BIG_GLASS_HITPOINT(12,0.00001,0.175)
			BIG_GLASS_HITPOINT(13,0.00001,0.175)
			BIG_GLASS_HITPOINT(14,0.00001,0.175)
			BIG_GLASS_HITPOINT(15,0.00001,0.175)
			BIG_GLASS_HITPOINT(16,0.00001,0.175)
		};
		
		class AnimationSources
		{
			class Zeroanimation
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
				sound = "GenericDoorsSound";
			};
			
			class Oneanimation
			{
					source = "user";
					animPeriod = 1;
					initPhase = 0;
					sound = "RollDoorsSound";
			};
			class Glass_1_source
			{
				source = Hit; // "Hit" = value of this source is the health of an entity
				hitpoint = Glass_1_hitpoint; // Specifies health of what is the control value of this animation; "Glass_1_hitpoint" being the class defined in class Hitpoints
				raw = 1;
			};
			class Glass_2_source: Glass_1_source
			{
				hitpoint = Glass_2_hitpoint;
			};
			class Glass_3_source: Glass_1_source
			{
				hitpoint = Glass_3_hitpoint;
			};
			class Glass_4_source: Glass_1_source
			{
				hitpoint = Glass_4_hitpoint;
			};
			class Glass_5_source: Glass_1_source
			{
				hitpoint = Glass_5_hitpoint;
			};
			class Glass_6_source: Glass_1_source
			{
				hitpoint = Glass_6_hitpoint;
			};
			class Glass_7_source: Glass_1_source
			{
				hitpoint = Glass_7_hitpoint;
			};
			class Glass_8_source: Glass_1_source
			{
				hitpoint = Glass_8_hitpoint;
			};
			class Glass_9_source: Glass_1_source
			{
				hitpoint = Glass_9_hitpoint;
			};
			class Glass_10_source: Glass_1_source
			{
				hitpoint = Glass_10_hitpoint;
			};
			class Glass_11_source: Glass_1_source
			{
				hitpoint = Glass_11_hitpoint;
			};
			class Glass_12_source: Glass_1_source
			{
				hitpoint = Glass_12_hitpoint;
			};
		};
		
		
		class UserActions {
			
			
			class open_door_1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_1_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_1') < 0.5) && ((this getVariable ['bis_disabled_Door_1',0]) != 1)";
				statement = "this animate [""Door_1"", 1]";
			};
			class close_door_1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_1_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_1') == 1)";
				statement = "this animate [""Door_1"", 0]";
			};
			
			class open_door_2
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_2_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_2') < 0.5) && ((this getVariable ['bis_disabled_Door_2',0]) != 1)";
				statement = "this animate [""Door_2"", 1]";
			};
			
			class close_door_2
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_2_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_2') == 1)";
				statement = "this animate [""Door_2"", 0]";
			};

			class open_door_3
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_3_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_3') < 0.5) && ((this getVariable ['bis_disabled_Door_3',0]) != 1)"; 
				statement = "this animate [""Door_3"", 1]";
			};
			
			class close_door_3
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_3_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_3') == 1)";
				statement = "this animate [""Door_3"", 0]";
			};
			
			class open_door_4
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_4_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_4') < 0.5) && ((this getVariable ['bis_disabled_Door_4',0]) != 1)";
				statement = "this animate [""Door_4"", 1]";
			};
			
			class close_door_4
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_4_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_4') == 1)";
				statement = "this animate [""Door_4"", 0]";
			};
			
			class open_door_5
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_5_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_5') < 0.5) && ((this getVariable ['bis_disabled_Door_5',0]) != 1)";
				statement = "this animate [""Door_5"", 1]";
			};
			
			class close_door_5
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_5_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_5') == 1)";
				statement = "this animate [""Door_5"", 0]";
			};
			
			class open_door_6
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_6_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_6') < 0.5) && ((this getVariable ['bis_disabled_Door_6',0]) != 1)";
				statement = "this animate [""Door_6"", 1]";
			};
			
			class close_door_6
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_6_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_6') == 1)";
				statement = "this animate [""Door_6"", 0]";
			};
			
			class open_door_7
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_7_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_7') < 0.5) && ((this getVariable ['bis_disabled_Door_7',0]) != 1)";
				statement = "this animate [""Door_7"", 1]";
			};
			
			class close_door_7
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_7_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_7') == 1)";
				statement = "this animate [""Door_7"", 0]";
			};
			
			class open_door_8
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_8_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_8') < 0.5) && ((this getVariable ['bis_disabled_Door_8',0]) != 1)";
				statement = "this animate [""Door_8"", 1]";
			};
			
			class close_door_8
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_8_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_8') == 1)";
				statement = "this animate [""Door_8"", 0]";
			};
			
			class open_door_9
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_9_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_9') < 0.5) && ((this getVariable ['bis_disabled_Door_9',0]) != 1)";
				statement = "this animate [""Door_9"", 1]";
			};
			
			class close_door_9
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_9_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_9') == 1)";
				statement = "this animate [""Door_9"", 0]";
			};
			
			class open_door_10
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_10_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_10') < 0.5) && ((this getVariable ['bis_disabled_Door_10',0]) != 1)";
				statement = "this animate [""Door_10"", 1]";
			};
			
			class close_door_10
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_10_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_10') == 1)";
				statement = "this animate [""Door_10"", 0]";
			};
			class open_door_11
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_11_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_11') < 0.5) && ((this getVariable ['bis_disabled_Door_11',0]) != 1)";
				statement = "this animate [""Door_11"", 1]";
			};
			class close_door_11
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_11_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_11') == 1)";
				statement = "this animate [""Door_11"", 0]";
			};
			
			class open_door_12
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_12_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_12') < 0.5) && ((this getVariable ['bis_disabled_Door_12',0]) != 1)";
				statement = "this animate [""Door_12"", 1]";
			};
			
			class close_door_12
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_12_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_12') == 1)";
				statement = "this animate [""Door_12"", 0]";
			};

			class open_door_13
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_13_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_13') < 0.5) && ((this getVariable ['bis_disabled_Door_13',0]) != 1)"; 
				statement = "this animate [""Door_13"", 1]";
			};
			
			class close_door_13
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_13_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_13') == 1)";
				statement = "this animate [""Door_13"", 0]";
			};
			
			class open_door_14
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_14_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_14') < 0.5) && ((this getVariable ['bis_disabled_Door_14',0]) != 1)";
				statement = "this animate [""Door_14"", 1]";
			};
			
			class close_door_14
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_14_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_14') == 1)";
				statement = "this animate [""Door_14"", 0]";
			};
			
			class open_door_15
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_15_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_15') < 0.5) && ((this getVariable ['bis_disabled_Door_15',0]) != 1)";
				statement = "this animate [""Door_15"", 1]";
			};
			
			class close_door_15
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_15_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_15') == 1)";
				statement = "this animate [""Door_15"", 0]";
			};
			
			class open_door_16
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_16_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_16') < 0.5) && ((this getVariable ['bis_disabled_Door_16',0]) != 1)";
				statement = "this animate [""Door_16"", 1]";
			};
			
			class close_door_16
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_16_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_16') == 1)";
				statement = "this animate [""Door_16"", 0]";
			};
			
			class open_door_17
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_17_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_17') < 0.5) && ((this getVariable ['bis_disabled_Door_17',0]) != 1)";
				statement = "this animate [""Door_17"", 1]";
			};
			
			class close_door_17
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_17_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_17') == 1)";
				statement = "this animate [""Door_17"", 0]";
			};
			
			class open_door_18
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_18_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_18') < 0.5) && ((this getVariable ['bis_disabled_Door_18',0]) != 1)";
				statement = "this animate [""Door_18"", 1]";
			};
			
			class close_door_18
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_18_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_18') == 1)";
				statement = "this animate [""Door_18"", 0]";
			};
			
			class open_door_19
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_19_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_19') < 0.5) && ((this getVariable ['bis_disabled_Door_19',0]) != 1)";
				statement = "this animate [""Door_19"", 1]";
			};
			
			class close_door_19
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_19_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_19') == 1)";
				statement = "this animate [""Door_19"", 0]";
			};
			
			class open_door_20
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_20_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_20') < 0.5) && ((this getVariable ['bis_disabled_Door_20',0]) != 1)";
				statement = "this animate [""Door_20"", 1]";
			};
			
			class close_door_20
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_20_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_20') == 1)";
				statement = "this animate [""Door_20"", 0]";
			};
			class open_door_21
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_21_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_21') < 0.5) && ((this getVariable ['bis_disabled_Door_21',0]) != 1)";
				statement = "this animate [""Door_21"", 1]";
			};
			
			class close_door_21
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_21_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_21') == 1)";
				statement = "this animate [""Door_21"", 0]";
			};
			class open_door_22
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_22_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_22') < 0.5) && ((this getVariable ['bis_disabled_Door_22',0]) != 1)";
				statement = "this animate [""Door_22"", 1]";
			};
			
			class close_door_22
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_22_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_22') == 1)";
				statement = "this animate [""Door_22"", 0]";
			};
			class open_door_23
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_23_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_23') < 0.5) && ((this getVariable ['bis_disabled_Door_23',0]) != 1)";
				statement = "this animate [""Door_23"", 1]";
			};
			
			class close_door_23
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_23_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_23') == 1)";
				statement = "this animate [""Door_23"", 0]";
			};
			class open_door_24
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_24_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_24') < 0.5) && ((this getVariable ['bis_disabled_Door_24',0]) != 1)";
				statement = "this animate [""Door_24"", 1]";
			};
			
			class close_door_24
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_24_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_24') == 1)";
				statement = "this animate [""Door_24"", 0]";
			};
			class open_door_25
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_25_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_25') < 0.5) && ((this getVariable ['bis_disabled_Door_25',0]) != 1)";
				statement = "this animate [""Door_25"", 1]";
			};
			
			class close_door_25
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_25_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_25') == 1)";
				statement = "this animate [""Door_25"", 0]";
			};
			class open_door_26
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_26_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_26') < 0.5) && ((this getVariable ['bis_disabled_Door_26',0]) != 1)";
				statement = "this animate [""Door_26"", 1]";
			};
			
			class close_door_26
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_26_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_26') == 1)";
				statement = "this animate [""Door_26"", 0]";
			};
			class open_door_27
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_27_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_27') < 0.5) && ((this getVariable ['bis_disabled_Door_27',0]) != 1)";
				statement = "this animate [""Door_27"", 1]";
			};
			
			class close_door_27
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_27_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_27') == 1)";
				statement = "this animate [""Door_27"", 0]";
			};
			class open_door_28
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_28_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_28') < 0.5) && ((this getVariable ['bis_disabled_Door_28',0]) != 1)";
				statement = "this animate [""Door_28"", 1]";
			};
			
			class close_door_28
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_28_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_28') == 1)";
				statement = "this animate [""Door_28"", 0]";
			};
			class open_door_29
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_29_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_29') < 0.5) && ((this getVariable ['bis_disabled_Door_29',0]) != 1)";
				statement = "this animate [""Door_29"", 1]";
			};
			
			class close_door_29
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_29_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_29') == 1)";
				statement = "this animate [""Door_29"", 0]";
			};
			class open_door_30
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_30_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_30') < 0.5) && ((this getVariable ['bis_disabled_Door_30',0]) != 1)";
				statement = "this animate [""Door_30"", 1]";
			};
			
			class close_door_30
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_30_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_30') == 1)";
				statement = "this animate [""Door_30"", 0]";
			};
			class open_door_31
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_31_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_31') < 0.5) && ((this getVariable ['bis_disabled_Door_31',0]) != 1)";
				statement = "this animate [""Door_31"", 1]";
			};
			
			class close_door_31
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_31_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_31') == 1)";
				statement = "this animate [""Door_31"", 0]";
			};
			class open_door_32
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_32_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_32') < 0.5) && ((this getVariable ['bis_disabled_Door_32',0]) != 1)";
				statement = "this animate [""Door_32"", 1]";
			};
			
			class close_door_32
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_32_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_32') == 1)";
				statement = "this animate [""Door_32"", 0]";
			};
			class open_door_33
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_33_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_33') < 0.5) && ((this getVariable ['bis_disabled_Door_33',0]) != 1)";
				statement = "this animate [""Door_33"", 1]";
			};
			
			class close_door_33
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_33_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_33') == 1)";
				statement = "this animate [""Door_33"", 0]";
			};
			class open_door_34
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_34_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_34') < 0.5) && ((this getVariable ['bis_disabled_Door_34',0]) != 1)";
				statement = "this animate [""Door_34"", 1]";
			};
			
			class close_door_34
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_34_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_34') == 1)";
				statement = "this animate [""Door_34"", 0]";
			};
			class open_door_35
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_35_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_35') < 0.5) && ((this getVariable ['bis_disabled_Door_35',0]) != 1)";
				statement = "this animate [""Door_35"", 1]";
			};
			
			class close_door_35
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_35_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_35') == 1)";
				statement = "this animate [""Door_35"", 0]";
			};
			class open_door_36
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_36_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "this animationPhase ""door_36"" == 0  && ((this getVariable ['bis_disabled_Door_36',0]) != 1)";
				statement = "this animate [""door_36"", 1.3]";
			};
			
			class close_door_36
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_36_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "this animationPhase ""door_36"" > 0";
				statement = "this animate [""door_36"", 0]";
			};
			class open_door_37
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_37_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "this animationPhase ""door_37"" == 0  && ((this getVariable ['bis_disabled_Door_37',0]) != 1)";
				statement = "this animate [""door_37"", 1.3]";
			};
			
			class close_door_37
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_37_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "this animationPhase ""door_37"" > 0";
				statement = "this animate [""door_37"", 0]";
			};
				class open_door_38
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_38_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "this animationPhase ""door_38"" == 0  && ((this getVariable ['bis_disabled_Door_38',0]) != 1)";
				statement = "this animate [""door_38"", 1.3]";
			};
			
			class close_door_38
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_38_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "this animationPhase ""door_38"" > 0";
				statement = "this animate [""door_38"", 0]";
			};
				class open_door_39
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_39_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "this animationPhase ""door_39"" == 0  && ((this getVariable ['bis_disabled_Door_39',0]) != 1)";
				statement = "this animate [""door_39"", 1.3]";
			};
			
			class close_door_39
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_39_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "this animationPhase ""door_39"" > 0";
				statement = "this animate [""door_39"", 0]";
			};
				class open_door_40
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_40_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "this animationPhase ""door_40"" == 0  && ((this getVariable ['bis_disabled_Door_40',0]) != 1)";
				statement = "this animate [""door_40"", 1.3]";
			};
			
			class close_door_40
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_40_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "this animationPhase ""door_40"" > 0";
				statement = "this animate [""door_40"", 0]";
			};
				class open_door_41
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_41_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "this animationPhase ""door_41"" == 0  && ((this getVariable ['bis_disabled_Door_41',0]) != 1)";
				statement = "this animate [""door_41"", 1.3]";
			};
			
			class close_door_41
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_41_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "this animationPhase ""door_41"" > 0";
				statement = "this animate [""door_41"", 0]";
			};
				class open_door_42
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_42_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_42') < 0.5) && ((this getVariable ['bis_disabled_Door_42',0]) != 1)";
				statement = "this animate [""Door_42"", 1]";
			};
			
			class close_door_42
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_42_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_42') == 1)";
				statement = "this animate [""Door_42"", 0]";
			};
				class open_door_43
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_43_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "this animationPhase ""door_43"" == 0  && ((this getVariable ['bis_disabled_Door_43',0]) != 1)";
				statement = "this animate [""door_43"", 1.3]";
			};
			
			class close_door_43
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_43_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "this animationPhase ""door_43"" > 0";
				statement = "this animate [""door_43"", 0]";
			};
				class open_door_44
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_44_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_44') < 0.5) && ((this getVariable ['bis_disabled_Door_44',0]) != 1)";
				statement = "this animate [""Door_44"", 1]";
			};
			
			class close_door_44
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_44_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_44') == 1)";
				statement = "this animate [""Door_44"", 0]";
			};
				class open_door_45
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_45_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_45') < 0.5) && ((this getVariable ['bis_disabled_Door_45',0]) != 1)";
				statement = "this animate [""Door_45"", 1]";
			};
			
			class close_door_45
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_45_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_45') == 1)";
				statement = "this animate [""Door_45"", 0]";
			};
				class open_door_46
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_46_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_46') < 0.5) && ((this getVariable ['bis_disabled_Door_46',0]) != 1)";
				statement = "this animate [""Door_46"", 1]";
			};
			
			class close_door_46
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_46_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_46') == 1)";
				statement = "this animate [""Door_46"", 0]";
			};
				class open_door_47
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_47_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_47') < 0.5) && ((this getVariable ['bis_disabled_Door_47',0]) != 1)";
				statement = "this animate [""Door_47"", 1]";
			};
			
			class close_door_47
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_47_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_47') == 1)";
				statement = "this animate [""Door_47"", 0]";
			};
				class open_door_48
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_48_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_48') < 0.5) && ((this getVariable ['bis_disabled_Door_48',0]) != 1)";
				statement = "this animate [""Door_48"", 1]";
			};
			
			class close_door_48
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_48_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_48') == 1)";
				statement = "this animate [""Door_48"", 0]";
			};
				class open_door_49
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_49_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_49') < 0.5) && ((this getVariable ['bis_disabled_Door_49',0]) != 1)";
				statement = "this animate [""Door_49"", 1]";
			};
			
			class close_door_49
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_49_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_49') == 1)";
				statement = "this animate [""Door_49"", 0]";
			};
				class open_door_50
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_50_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_50') < 0.5) && ((this getVariable ['bis_disabled_Door_50',0]) != 1)";
				statement = "this animate [""Door_50"", 1]";
			};
			
			class close_door_50
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_50_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_50') == 1)";
				statement = "this animate [""Door_50"", 0]";
			};
			
		};
		class EventHandlers
		{
			init="['asn_winter_houses',_this select 0]call{if(isServer AND isDedicated)then{params['_modname','_object'];if(isNil'BIS_fnc_validateAssets')exitWith{_object spawn{waitUntil{!((netId _this)isEqualTo'0:0')};deleteVehicle _this};};[_modname,_object]call BIS_fnc_validateAssets;};};";	 
		};
		actionBegin1 = "open_door_1";
		actionEnd1 = "open_door_1";
		actionBegin2 = "open_door_2";
		actionEnd2 = "open_door_2";
		actionBegin3 = "open_door_3";
		actionEnd3 = "open_door_3";
		actionBegin4 = "open_door_4";
		actionEnd4 = "open_door_4";
		actionBegin5 = "open_door_5";
		actionEnd5 = "open_door_5";
		actionBegin6 = "open_door_6";
		actionEnd6 = "open_door_6";
		actionBegin7 = "open_door_7";
		actionEnd7 = "open_door_7";
		actionBegin8 = "open_door_8";
		actionEnd8 = "open_door_8";
		actionBegin9 = "open_door_9";
		actionEnd9 = "open_door_9";
		actionBegin10 = "open_door_10";
		actionEnd10 = "open_door_10";
		actionBegin11 = "open_door_11";
		actionEnd11 = "open_door_11";
		actionBegin12 = "open_door_12";
		actionEnd12 = "open_door_12";
		actionBegin13 = "open_door_13";
		actionEnd13 = "open_door_13";
		actionBegin14 = "open_door_14";
		actionEnd14 = "open_door_14";
		actionBegin15 = "open_door_15";
		actionEnd15 = "open_door_15";
		actionBegin16 = "open_door_16";
		actionEnd16 = "open_door_16";
		actionBegin17 = "open_door_17";
		actionEnd17 = "open_door_17";
		actionBegin18 = "open_door_18";
		actionEnd18 = "open_door_18";
		actionBegin19 = "open_door_19";
		actionEnd19 = "open_door_19";
		actionBegin20 = "open_door_20";
		actionEnd20 = "open_door_20";
		actionBegin21 = "open_door_21";
		actionEnd21 = "open_door_21";
		actionBegin22 = "open_door_22";
		actionEnd22 = "open_door_22";
		actionBegin23 = "open_door_23";
		actionEnd23 = "open_door_23";
		actionBegin24 = "open_door_24";
		actionEnd24 = "open_door_24";
		actionBegin25 = "open_door_25";
		actionEnd25 = "open_door_25";
		actionBegin26 = "open_door_26";
		actionEnd26 = "open_door_26";
		actionBegin27 = "open_door_27";
		actionEnd27 = "open_door_27";
		actionBegin28 = "open_door_28";
		actionEnd28 = "open_door_28";
		actionBegin29 = "open_door_29";
		actionEnd29 = "open_door_29";
		actionBegin30 = "open_door_30";
		actionEnd30 = "open_door_30";
		actionBegin31 = "open_door_31";
		actionEnd31 = "open_door_31";
		actionBegin32 = "open_door_32";
		actionEnd32 = "open_door_32";
		actionBegin33 = "open_door_33";
		actionEnd33 = "open_door_33";
		actionBegin34 = "open_door_34";
		actionEnd34 = "open_door_34";
		actionBegin35 = "open_door_35";
		actionEnd35 = "open_door_35";
		actionBegin36 = "open_door_36";
		actionEnd36 = "open_door_36";
		actionBegin37 = "open_door_37";
		actionEnd37 = "open_door_37";
		actionBegin38 = "open_door_38";
		actionEnd38 = "open_door_38";
		actionBegin39 = "open_door_39";
		actionEnd39 = "open_door_39";
		actionBegin40 = "open_door_40";
		actionEnd40 = "open_door_40";
		actionBegin41 = "open_door_41";
		actionEnd41 = "open_door_41";
		actionBegin42 = "open_door_42";
		actionEnd42 = "open_door_42";
		actionBegin43 = "open_door_43";
		actionEnd43 = "open_door_43";
		actionBegin44 = "open_door_44";
		actionEnd44 = "open_door_44";
		actionBegin45 = "open_door_45";
		actionEnd45 = "open_door_45";
		actionBegin46 = "open_door_46";
		actionEnd46 = "open_door_46";
		actionBegin47 = "open_door_47";
		actionEnd47 = "open_door_47";
		actionBegin48 = "open_door_48";
		actionEnd48 = "open_door_48";
		actionBegin49 = "open_door_49";
		actionEnd49 = "open_door_49";
		actionBegin50 = "open_door_50";
		actionEnd50 = "open_door_50";
		numberOfDoors = 50;
	};
	
};
