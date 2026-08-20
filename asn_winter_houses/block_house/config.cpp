class CfgPatches
{
	class asn_block_house
	{
		units[] = {"asn_block_house1", "asn_block_house2"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Structures_F"};
	};
};
class CfgVehicleClasses
{
	class asn_houses
	{
		displayName="ASN Houses";
	};
};
class CfgVehicles
{
	class House_F;
	class asn_block_house1: House_F
	{	
		mapSize = 35.54;
		author = "Winter";
		_generalMacro = "asn_block_house1";
		displayName = "Block House 1";
		model = "asn_winter_houses\block_house\block_house1.p3d";
        scope = 2;
		animated = true;
		cost=100;
		vehicleClass = "asn_houses";
		
		class AnimationSources
		{
			class Zeroanimation
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
				sound = "GenericDoorsSound";
			};
			
			class fast_func
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				sound = "GenericDoorsSound";
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
				condition = "((this animationPhase 'Door_36') < 0.5) && ((this getVariable ['bis_disabled_Door_36',0]) != 1)";
				statement = "this animate [""Door_36"", 1]";
			};
			
			class close_door_36
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_36_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_36') == 1)";
				statement = "this animate [""Door_36"", 0]";
			};
			class open_door_37
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_37_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_37') < 0.5) && ((this getVariable ['bis_disabled_Door_37',0]) != 1)";
				statement = "this animate [""Door_37"", 1]";
			};
			
			class close_door_37
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_37_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_37') == 1)";
				statement = "this animate [""Door_37"", 0]";
			};
				class open_door_38
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_38_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_38') < 0.5) && ((this getVariable ['bis_disabled_Door_38',0]) != 1)";
				statement = "this animate [""Door_38"", 1]";
			};
			
			class close_door_38
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_38_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_38') == 1)";
				statement = "this animate [""Door_38"", 0]";
			};
				class open_door_39
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_39_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_39') < 0.5) && ((this getVariable ['bis_disabled_Door_39',0]) != 1)";
				statement = "this animate [""Door_39"", 1]";
			};
			
			class close_door_39
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_39_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_39') == 1)";
				statement = "this animate [""Door_39"", 0]";
			};
				class open_door_40
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_40_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_40') < 0.5) && ((this getVariable ['bis_disabled_Door_40',0]) != 1)";
				statement = "this animate [""Door_40"", 1]";
			};
			
			class close_door_40
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_40_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_40') == 1)";
				statement = "this animate [""Door_40"", 0]";
			};
				class open_door_41
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_41_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_41') < 0.5) && ((this getVariable ['bis_disabled_Door_41',0]) != 1)";
				statement = "this animate [""Door_41"", 1]";
			};
			
			class close_door_41
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_41_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_41') == 1)";
				statement = "this animate [""Door_41"", 0]";
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
				condition = "((this animationPhase 'Door_43') < 0.5) && ((this getVariable ['bis_disabled_Door_43',0]) != 1)";
				statement = "this animate [""Door_43"", 1]";
			};
			
			class close_door_43
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_43_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_43') == 1)";
				statement = "this animate [""Door_43"", 0]";
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
			class open_Door_51
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_51_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_51') < 0.5) && ((this getVariable ['bis_disabled_Door_51',0]) != 1)";
				statement = "this animate [""Door_51"", 1]";
			};
			
			class close_Door_51
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_51_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_51') == 1)";
				statement = "this animate [""Door_51"", 0]";
			};
			class open_Door_52
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_52_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_52') < 0.5) && ((this getVariable ['bis_disabled_Door_52',0]) != 1)";
				statement = "this animate [""Door_52"", 1]";
			};
			
			class close_Door_52
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_52_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_52') == 1)";
				statement = "this animate [""Door_52"", 0]";
			};
			class open_Door_53
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_53_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_53') < 0.5) && ((this getVariable ['bis_disabled_Door_53',0]) != 1)";
				statement = "this animate [""Door_53"", 1]";
			};
			
			class close_Door_53
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_53_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_53') == 1)";
				statement = "this animate [""Door_53"", 0]";
			};
			class open_Door_54
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_54_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_54') < 0.5) && ((this getVariable ['bis_disabled_Door_54',0]) != 1)";
				statement = "this animate [""Door_54"", 1]";
			};
			
			class close_Door_54
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_54_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_54') == 1)";
				statement = "this animate [""Door_54"", 0]";
			};
			class open_Door_55
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_55_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_55') < 0.5) && ((this getVariable ['bis_disabled_Door_55',0]) != 1)";
				statement = "this animate [""Door_55"", 1]";
			};
			
			class close_Door_55
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_55_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_55') == 1)";
				statement = "this animate [""Door_55"", 0]";
			};
			class open_Door_56
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_56_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_56') < 0.5) && ((this getVariable ['bis_disabled_Door_56',0]) != 1)";
				statement = "this animate [""Door_56"", 1]";
			};
			
			class close_Door_56
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_56_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_56') == 1)";
				statement = "this animate [""Door_56"", 0]";
			};
			class open_Door_57
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_57_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_57') < 0.5) && ((this getVariable ['bis_disabled_Door_57',0]) != 1)";
				statement = "this animate [""Door_57"", 1]";
			};
			
			class close_Door_57
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_57_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_57') == 1)";
				statement = "this animate [""Door_57"", 0]";
			};
			class open_Door_58
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_58_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_58') < 0.5) && ((this getVariable ['bis_disabled_Door_58',0]) != 1)";
				statement = "this animate [""Door_58"", 1]";
			};
			
			class close_Door_58
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_58_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_58') == 1)";
				statement = "this animate [""Door_58"", 0]";
			};
			class open_Door_59
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_59_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_59') < 0.5) && ((this getVariable ['bis_disabled_Door_59',0]) != 1)";
				statement = "this animate [""Door_59"", 1]";
			};
			
			class close_Door_59
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_59_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_59') == 1)";
				statement = "this animate [""Door_59"", 0]";
			};
			class open_Door_60
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_60_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_60') < 0.5) && ((this getVariable ['bis_disabled_Door_60',0]) != 1)";
				statement = "this animate [""Door_60"", 1]";
			};
			
			class close_Door_60
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_60_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_60') == 1)";
				statement = "this animate [""Door_60"", 0]";
			};
			class open_Door_61
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_61_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_61') < 0.5) && ((this getVariable ['bis_disabled_Door_61',0]) != 1)";
				statement = "this animate [""Door_61"", 1]";
			};
			
			class close_Door_61
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_61_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_61') == 1)";
				statement = "this animate [""Door_61"", 0]";
			};
			class open_Door_62
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_62_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_62') < 0.5) && ((this getVariable ['bis_disabled_Door_62',0]) != 1)";
				statement = "this animate [""Door_62"", 1]";
			};
			
			class close_Door_62
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_62_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_62') == 1)";
				statement = "this animate [""Door_62"", 0]";
			};
			class open_Door_63
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_63_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_63') < 0.5) && ((this getVariable ['bis_disabled_Door_63',0]) != 1)";
				statement = "this animate [""Door_63"", 1]";
			};
			
			class close_Door_63
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_63_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_63') == 1)";
				statement = "this animate [""Door_63"", 0]";
			};
			class open_Door_64
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_64_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_64') < 0.5) && ((this getVariable ['bis_disabled_Door_64',0]) != 1)";
				statement = "this animate [""Door_64"", 1]";
			};
			
			class close_Door_64
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_64_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_64') == 1)";
				statement = "this animate [""Door_64"", 0]";
			};
			class open_Door_65
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_65_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_65') < 0.5) && ((this getVariable ['bis_disabled_Door_65',0]) != 1)";
				statement = "this animate [""Door_65"", 1]";
			};
			
			class close_Door_65
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_65_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_65') == 1)";
				statement = "this animate [""Door_65"", 0]";
			};
			class open_Door_66
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_66_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_66') < 0.5) && ((this getVariable ['bis_disabled_Door_66',0]) != 1)";
				statement = "this animate [""Door_66"", 1]";
			};
			
			class close_Door_66
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_66_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_66') == 1)";
				statement = "this animate [""Door_66"", 0]";
			};
			class open_Door_67
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_67_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_67') < 0.5) && ((this getVariable ['bis_disabled_Door_67',0]) != 1)";
				statement = "this animate [""Door_67"", 1]";
			};
			
			class close_Door_67
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_67_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_67') == 1)";
				statement = "this animate [""Door_67"", 0]";
			};
			class open_Door_68
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_68_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_68') < 0.5) && ((this getVariable ['bis_disabled_Door_68',0]) != 1)";
				statement = "this animate [""Door_68"", 1]";
			};
			
			class close_Door_68
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_68_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_68') == 1)";
				statement = "this animate [""Door_68"", 0]";
			};
			class open_Door_69
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_69_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_69') < 0.5) && ((this getVariable ['bis_disabled_Door_69',0]) != 1)";
				statement = "this animate [""Door_69"", 1]";
			};
			
			class close_Door_69
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_69_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_69') == 1)";
				statement = "this animate [""Door_69"", 0]";
			};
			class open_Door_70
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_70_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_70') < 0.5) && ((this getVariable ['bis_disabled_Door_70',0]) != 1)";
				statement = "this animate [""Door_70"", 1]";
			};
			
			class close_Door_70
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_70_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_70') == 1)";
				statement = "this animate [""Door_70"", 0]";
			};
			class open_Door_71
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_71_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_71') < 0.5) && ((this getVariable ['bis_disabled_Door_71',0]) != 1)";
				statement = "this animate [""Door_71"", 1]";
			};
			
			class close_Door_71
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_71_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_71') == 1)";
				statement = "this animate [""Door_71"", 0]";
			};
			class open_Door_72
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_72_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_72') < 0.5) && ((this getVariable ['bis_disabled_Door_72',0]) != 1)";
				statement = "this animate [""Door_72"", 1]";
			};
			
			class close_Door_72
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_72_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_72') == 1)";
				statement = "this animate [""Door_72"", 0]";
			};
			class open_Door_73
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_73_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_73') < 0.5) && ((this getVariable ['bis_disabled_Door_73',0]) != 1)";
				statement = "this animate [""Door_73"", 1]";
			};
			
			class close_Door_73
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_73_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_73') == 1)";
				statement = "this animate [""Door_73"", 0]";
			};
			class open_Door_74
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_74_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_74') < 0.5) && ((this getVariable ['bis_disabled_Door_74',0]) != 1)";
				statement = "this animate [""Door_74"", 1]";
			};
			
			class close_Door_74
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_74_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_74') == 1)";
				statement = "this animate [""Door_74"", 0]";
			};
			class open_Door_75
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_75_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_75') < 0.5) && ((this getVariable ['bis_disabled_Door_75',0]) != 1)";
				statement = "this animate [""Door_75"", 1]";
			};
			
			class close_Door_75
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_75_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_75') == 1)";
				statement = "this animate [""Door_75"", 0]";
			};
			class open_Door_76
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_76_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_76') < 0.5) && ((this getVariable ['bis_disabled_Door_76',0]) != 1)";
				statement = "this animate [""Door_76"", 1]";
			};
			
			class close_Door_76
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_76_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_76') == 1)";
				statement = "this animate [""Door_76"", 0]";
			};
			class open_Door_77
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_77_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_77') < 0.5) && ((this getVariable ['bis_disabled_Door_77',0]) != 1)";
				statement = "this animate [""Door_77"", 1]";
			};
			
			class close_Door_77
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_77_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_77') == 1)";
				statement = "this animate [""Door_77"", 0]";
			};
			class open_Door_78
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_78_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_78') < 0.5) && ((this getVariable ['bis_disabled_Door_78',0]) != 1)";
				statement = "this animate [""Door_78"", 1]";
			};
			
			class close_Door_78
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_78_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_78') == 1)";
				statement = "this animate [""Door_78"", 0]";
			};
			class open_Door_79
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_79_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_79') < 0.5) && ((this getVariable ['bis_disabled_Door_79',0]) != 1)";
				statement = "this animate [""Door_79"", 1]";
			};
			
			class close_Door_79
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_79_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_79') == 1)";
				statement = "this animate [""Door_79"", 0]";
			};
			class open_Door_80
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_80_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_80') < 0.5) && ((this getVariable ['bis_disabled_Door_80',0]) != 1)";
				statement = "this animate [""Door_80"", 1]";
			};
			
			class close_Door_80
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_80_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_80') == 1)";
				statement = "this animate [""Door_80"", 0]";
			};
			class open_Door_82
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_82_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_82') < 0.5) && ((this getVariable ['bis_disabled_Door_82',0]) != 1)";
				statement = "this animate [""Door_82"", 1]";
			};
			
			class close_Door_82
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_82_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_82') == 1)";
				statement = "this animate [""Door_82"", 0]";
			};
			class open_Door_83
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_83_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_83') < 0.5) && ((this getVariable ['bis_disabled_Door_83',0]) != 1)";
				statement = "this animate [""Door_83"", 1]";
			};
			
			class close_Door_83
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_83_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_83') == 1)";
				statement = "this animate [""Door_83"", 0]";
			};
			class open_Door_84
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_84_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_84') < 0.5) && ((this getVariable ['bis_disabled_Door_84',0]) != 1)";
				statement = "this animate [""Door_84"", 1]";
			};
			
			class close_Door_84
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_84_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_84') == 1)";
				statement = "this animate [""Door_84"", 0]";
			};
			class open_Door_85
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_85_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_85') < 0.5) && ((this getVariable ['bis_disabled_Door_85',0]) != 1)";
				statement = "this animate [""Door_85"", 1]";
			};
			
			class close_Door_85
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_85_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_85') == 1)";
				statement = "this animate [""Door_85"", 0]";
			};
			class open_Door_86
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_86_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_86') < 0.5) && ((this getVariable ['bis_disabled_Door_86',0]) != 1)";
				statement = "this animate [""Door_86"", 1]";
			};
			
			class close_Door_86
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_86_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_86') == 1)";
				statement = "this animate [""Door_86"", 0]";
			};
			class open_Door_87
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_87_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_87') < 0.5) && ((this getVariable ['bis_disabled_Door_87',0]) != 1)";
				statement = "this animate [""Door_87"", 1]";
			};
			
			class close_Door_87
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_87_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_87') == 1)";
				statement = "this animate [""Door_87"", 0]";
			};
			class open_Door_88
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_88_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_88') < 0.5) && ((this getVariable ['bis_disabled_Door_88',0]) != 1)";
				statement = "this animate [""Door_88"", 1]";
			};
			
			class close_Door_88
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_88_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_88') == 1)";
				statement = "this animate [""Door_88"", 0]";
			};
			class open_Door_89
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "Door_89_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_89') < 0.5) && ((this getVariable ['bis_disabled_Door_89',0]) != 1)";
				statement = "this animate [""Door_89"", 1]";
			};
			
			class close_Door_89
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "Door_89_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_89') == 1)";
				statement = "this animate [""Door_89"", 0]";
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
		actionBegin51 = "open_door_51";
		actionEnd51 = "open_door_51";
		actionBegin52 = "open_door_52";
		actionEnd52 = "open_door_52";
		actionBegin53 = "open_door_53";
		actionEnd53 = "open_door_53";
		actionBegin54 = "open_door_54";
		actionEnd54 = "open_door_54";
		actionBegin55 = "open_door_55";
		actionEnd55 = "open_door_55";
		actionBegin56 = "open_door_56";
		actionEnd56 = "open_door_56";
		actionBegin57 = "open_door_57";
		actionEnd57 = "open_door_57";
		actionBegin58 = "open_door_58";
		actionEnd58 = "open_door_58";
		actionBegin59 = "open_door_59";
		actionEnd59 = "open_door_59";
		actionBegin60 = "open_door_60";
		actionEnd60 = "open_door_60";
		actionBegin61 = "open_door_61";
		actionEnd61 = "open_door_61";
		actionBegin62 = "open_door_62";
		actionEnd62 = "open_door_62";
		actionBegin63 = "open_door_63";
		actionEnd63 = "open_door_63";
		actionBegin64 = "open_door_64";
		actionEnd64 = "open_door_64";
		actionBegin65 = "open_door_65";
		actionEnd65 = "open_door_65";
		actionBegin66 = "open_door_66";
		actionEnd66 = "open_door_66";
		actionBegin67 = "open_door_67";
		actionEnd67 = "open_door_67";
		actionBegin68 = "open_door_68";
		actionEnd68 = "open_door_68";
		actionBegin69 = "open_door_69";
		actionEnd69 = "open_door_69";
		actionBegin70 = "open_door_70";
		actionEnd70 = "open_door_70";
		actionBegin71 = "open_door_71";
		actionEnd71 = "open_door_71";
		actionBegin72 = "open_door_72";
		actionEnd72 = "open_door_72";
		actionBegin73 = "open_door_73";
		actionEnd73 = "open_door_73";
		actionBegin74 = "open_door_74";
		actionEnd74 = "open_door_74";
		actionBegin75 = "open_door_75";
		actionEnd75 = "open_door_75";
		actionBegin76 = "open_door_76";
		actionEnd76 = "open_door_76";
		actionBegin77 = "open_door_77";
		actionEnd77 = "open_door_77";
		actionBegin78 = "open_door_78";
		actionEnd78 = "open_door_78";
		actionBegin79 = "open_door_79";
		actionEnd79 = "open_door_79";
		actionBegin80 = "open_door_80";
		actionEnd80 = "open_door_80";
		actionBegin82 = "open_door_82";
		actionEnd82 = "open_door_82";
		actionBegin83 = "open_door_83";
		actionEnd83 = "open_door_83";
		actionBegin84 = "open_door_84";
		actionEnd84 = "open_door_84";
		actionBegin85 = "open_door_85";
		actionEnd85 = "open_door_85";
		actionBegin86 = "open_door_86";
		actionEnd86 = "open_door_86";
		actionBegin87 = "open_door_87";
		actionEnd87 = "open_door_87";
		actionBegin88 = "open_door_88";
		actionEnd88 = "open_door_88";
		actionBegin89 = "open_door_89";
		
		numberOfDoors = 88;
	};
	class asn_block_house2: asn_block_house1
	{	
		mapSize = 35.54;
		author = "Winter";
		_generalMacro = "asn_block_house2";
		displayName = "Block House 2";
		model = "asn_winter_houses\block_house\block_house2.p3d";
		};
};
