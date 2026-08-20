class CfgPatches
{
	class asn_apartments
	{
		units[] = {"asn_apartments", "asn_apartments_black"};
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
	class asn_apartments: House_F
	{	
		mapSize = 35.54;
		author = "Winter";
		_generalMacro = "asn_apartments";
		displayName = "Apartmentos";
		model = "\asn_winter_houses\apartments\apartments.p3d";
        scope = 2;
        scopeCurator = 0;
        keepInEPESceneAfterDeath = 1;
		vehicleClass = "asn_houses";
		
		class DestructionEffects {};
		class AnimationSources
		{
			class Door_1_source
			{
				source = user;
				initPhase = 0;
				animPeriod = 1;
				sound = "GenericDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' >"; 
				displayName = "Open Door";
				position = "Door_1_trigger"; 
				priority = 0.4; 
				radius = 1.5;
				onlyForPlayer = 1;
				condition = "((this animationPhase 'Door_1') < 0.5) && ((this animationPhase 'Door_2') < 0.5) && ((this getVariable ['bis_disabled_Door_1',0]) != 1)";
				statement = "this animate [""Door_1"",1];this animate [""Door_2"",1];";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName = "Close Door";
				position = "Door_1_trigger"; 
				condition = "((this animationPhase 'Door_1') > 0.5) && ((this animationPhase 'Door_2') > 0.5)";
				statement = "this animate [""Door_1"",0];this animate [""Door_2"",0];";
			};
			class OpenDoor_3: OpenDoor_1
			{
				displayName = "Open Door";
				position = "Door_3_trigger"; 
				condition = "((this animationPhase 'Door_3') < 0.5)";
				statement = "this animate [""Door_3"",1];";
			};
			class CloseDoor_3: OpenDoor_1
			{
				displayName = "Close Door";
				position = "Door_3_trigger"; 
				condition = "((this animationPhase 'Door_3') > 0.5)";
				statement = "this animate [""Door_3"",0];";
			};
			class OpenDoor_4: OpenDoor_1
			{
				displayName = "Open Door";
				position = "Door_4_trigger"; 
				condition = "((this animationPhase 'Door_4') < 0.5)";
				statement = "this animate [""Door_4"",1];";
			};
			class CloseDoor_4: OpenDoor_1
			{
				displayName = "Close Door";
				position = "Door_4_trigger"; 
				condition = "((this animationPhase 'Door_4') > 0.5)";
				statement = "this animate [""Door_4"",0];";
			};
			class OpenDoor_5: OpenDoor_1
			{
				displayName = "Open Door";
				position = "Door_5_trigger"; 
				condition = "((this animationPhase 'Door_5') < 0.5)";
				statement = "this animate [""Door_5"",1];";
			};
			class CloseDoor_5: OpenDoor_1
			{
				displayName = "Close Door";
				position = "Door_5_trigger"; 
				condition = "((this animationPhase 'Door_5') > 0.5)";
				statement = "this animate [""Door_5"",0];";
			};
			class OpenDoor_6: OpenDoor_1
			{
				displayName = "Open Door";
				position = "Door_6_trigger"; 
				condition = "((this animationPhase 'Door_6') < 0.5)";
				statement = "this animate [""Door_6"",1];";
			};
			class CloseDoor_6: OpenDoor_1
			{
				displayName = "Close Door";
				position = "Door_6_trigger"; 
				condition = "((this animationPhase 'Door_6') > 0.5)";
				statement = "this animate [""Door_6"",0];";
			};
			class OpenDoor_7: OpenDoor_1
			{
				displayName = "Open Door";
				position = "Door_7_trigger"; 
				condition = "((this animationPhase 'Door_7') < 0.5)";
				statement = "this animate [""Door_7"",1];";
			};
			class CloseDoor_7: OpenDoor_1
			{
				displayName = "Close Door";
				position = "Door_7_trigger"; 
				condition = "((this animationPhase 'Door_7') > 0.5)";
				statement = "this animate [""Door_7"",0];";
			};
			class OpenDoor_8: OpenDoor_1
			{
				displayName = "Open Door";
				position = "Door_8_trigger"; 
				condition = "((this animationPhase 'Door_8') < 0.5)";
				statement = "this animate [""Door_8"",1];";
			};
			class CloseDoor_8: OpenDoor_1
			{
				displayName = "Close Door";
				position = "Door_8_trigger"; 
				condition = "((this animationPhase 'Door_8') > 0.5)";
				statement = "this animate [""Door_8"",0];";
			};
			class OpenDoor_9: OpenDoor_1
			{
				displayName = "Open Door";
				position = "Door_9_trigger"; 
				condition = "((this animationPhase 'Door_9') < 0.5)";
				statement = "this animate [""Door_9"",1];";
			};
			class CloseDoor_9: OpenDoor_1
			{
				displayName = "Close Door";
				position = "Door_9_trigger"; 
				condition = "((this animationPhase 'Door_9') > 0.5)";
				statement = "this animate [""Door_9"",0];";
			};
			class OpenDoor_10: OpenDoor_1
			{
				displayName = "Open Door";
				position = "Door_10_trigger"; 
				condition = "((this animationPhase 'Door_10') < 0.5)";
				statement = "this animate [""Door_10"",1];";
			};
			class CloseDoor_10: OpenDoor_1
			{
				displayName = "Close Door";
				position = "Door_10_trigger"; 
				condition = "((this animationPhase 'Door_10') > 0.5)";
				statement = "this animate [""Door_10"",0];";
			};
			class OpenDoor_11
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_Door_ca.paa' size='2.5' >"; 
				displayName = "Open Door";
				position = "Door_11_trigger"; 
				priority = 0.4; 
				radius = 1.5;
				onlyForPlayer = 1;
				condition = "((this animationPhase 'Door_11') < 0.5)";
				statement = "this animate [""Door_11"",1];";
			};
			class CloseDoor_11: OpenDoor_11
			{
				displayName = "Close Door";
				position = "Door_11_trigger"; 
				condition = "((this animationPhase 'Door_11') > 0.5)";
				statement = "this animate [""Door_11"",0];";
			};
			class OpenDoor_12: OpenDoor_11
			{
				displayName = "Open Door";
				position = "Door_12_trigger"; 
				condition = "((this animationPhase 'Door_12') < 0.5)";
				statement = "this animate [""Door_12"",1];";
			};
			class CloseDoor_12: OpenDoor_11
			{
				displayName = "Close Door";
				position = "Door_12_trigger"; 
				condition = "((this animationPhase 'Door_12') > 0.5)";
				statement = "this animate [""Door_12"",0];";
			};
			class OpenDoor_13: OpenDoor_11
			{
				displayName = "Open Door";
				position = "Door_13_trigger"; 
				condition = "((this animationPhase 'Door_13') < 0.5)";
				statement = "this animate [""Door_13"",1];";
			};
			class CloseDoor_13: OpenDoor_11
			{
				displayName = "Close Door";
				position = "Door_13_trigger"; 
				condition = "((this animationPhase 'Door_13') > 0.5)";
				statement = "this animate [""Door_13"",0];";
			};
			class OpenDoor_14: OpenDoor_11
			{
				displayName = "Open Door";
				position = "Door_14_trigger"; 
				condition = "((this animationPhase 'Door_14') < 0.5)";
				statement = "this animate [""Door_14"",1];";
			};
			class CloseDoor_14: OpenDoor_11
			{
				displayName = "Close Door";
				position = "Door_14_trigger"; 
				condition = "((this animationPhase 'Door_14') > 0.5)";
				statement = "this animate [""Door_14"",0];";
			};
			class OpenDoor_15: OpenDoor_11
			{
				displayName = "Open Door";
				position = "Door_15_trigger"; 
				condition = "((this animationPhase 'Door_15') < 0.5)";
				statement = "this animate [""Door_15"",1];";
			};
			class CloseDoor_15: OpenDoor_11
			{
				displayName = "Close Door";
				position = "Door_15_trigger"; 
				condition = "((this animationPhase 'Door_15') > 0.5)";
				statement = "this animate [""Door_15"",0];";
			};
			class OpenDoor_16: OpenDoor_11
			{
				displayName = "Open Door";
				position = "Door_16_trigger"; 
				condition = "((this animationPhase 'Door_16') < 0.5)";
				statement = "this animate [""Door_16"",1];";
			};
			class CloseDoor_16: OpenDoor_11
			{
				displayName = "Close Door";
				position = "Door_16_trigger"; 
				condition = "((this animationPhase 'Door_16') > 0.5)";
				statement = "this animate [""Door_16"",0];";
			};
			class OpenDoor_17: OpenDoor_11
			{
				displayName = "Open Door";
				position = "Door_17_trigger"; 
				condition = "((this animationPhase 'Door_17') < 0.5)";
				statement = "this animate [""Door_17"",1];";
			};
			class CloseDoor_17: OpenDoor_11
			{
				displayName = "Close Door";
				position = "Door_17_trigger"; 
				condition = "((this animationPhase 'Door_17') > 0.5)";
				statement = "this animate [""Door_17"",0];";
			};
			class OpenDoor_18: OpenDoor_11
			{
				displayName = "Open Door";
				position = "Door_18_trigger"; 
				condition = "((this animationPhase 'Door_18') < 0.5)";
				statement = "this animate [""Door_18"",1];";
			};
			class CloseDoor_18: OpenDoor_11
			{
				displayName = "Close Door";
				position = "Door_18_trigger"; 
				condition = "((this animationPhase 'Door_18') > 0.5)";
				statement = "this animate [""Door_18"",0];";
			};
			class OpenDoor_19: OpenDoor_11
			{
				displayName = "Open Door";
				position = "Door_19_trigger"; 
				condition = "((this animationPhase 'Door_19') < 0.5)";
				statement = "this animate [""Door_19"",1];";
			};
			class CloseDoor_19: OpenDoor_11
			{
				displayName = "Close Door";
				position = "Door_19_trigger"; 
				condition = "((this animationPhase 'Door_19') > 0.5)";
				statement = "this animate [""Door_19"",0];";
			};
			class OpenDoor_20: OpenDoor_11
			{
				displayName = "Open Door";
				position = "Door_20_trigger"; 
				condition = "((this animationPhase 'Door_20') < 0.5)";
				statement = "this animate [""Door_20"",1];";
			};
			class CloseDoor_20: OpenDoor_11
			{
				displayName = "Close Door";
				position = "Door_20_trigger"; 
				condition = "((this animationPhase 'Door_20') > 0.5)";
				statement = "this animate [""Door_20"",0];";
			};
			class OpenDoor_21
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_Door_ca.paa' size='2.5' >"; 
				displayName = "Open Door";
				position = "Door_21_trigger"; 
				priority = 0.4; 
				radius = 1.5;
				onlyForPlayer = 1;
				condition = "((this animationPhase 'Door_21') < 0.5)";
				statement = "this animate [""Door_21"",1];";
			};
			class CloseDoor_21: OpenDoor_21
			{
				displayName = "Close Door";
				position = "Door_21_trigger"; 
				condition = "((this animationPhase 'Door_21') > 0.5)";
				statement = "this animate [""Door_21"",0];";
			};
			class OpenDoor_22: OpenDoor_21
			{
				displayName = "Open Door";
				position = "Door_22_trigger"; 
				condition = "((this animationPhase 'Door_22') < 0.5)";
				statement = "this animate [""Door_22"",1];";
			};
			class CloseDoor_22: OpenDoor_21
			{
				displayName = "Close Door";
				position = "Door_22_trigger"; 
				condition = "((this animationPhase 'Door_22') > 0.5)";
				statement = "this animate [""Door_22"",0];";
			};
			class OpenDoor_23: OpenDoor_21
			{
				displayName = "Open Door";
				position = "Door_23_trigger"; 
				condition = "((this animationPhase 'Door_23') < 0.5)";
				statement = "this animate [""Door_23"",1];";
			};
			class CloseDoor_23: OpenDoor_21
			{
				displayName = "Close Door";
				position = "Door_23_trigger"; 
				condition = "((this animationPhase 'Door_23') > 0.5)";
				statement = "this animate [""Door_23"",0];";
			};
			class OpenDoor_24: OpenDoor_21
			{
				displayName = "Open Door";
				position = "Door_24_trigger"; 
				condition = "((this animationPhase 'Door_24') < 0.5)";
				statement = "this animate [""Door_24"",1];";
			};
			class CloseDoor_24: OpenDoor_21
			{
				displayName = "Close Door";
				position = "Door_24_trigger"; 
				condition = "((this animationPhase 'Door_24') > 0.5)";
				statement = "this animate [""Door_24"",0];";
			};
			class OpenDoor_25: OpenDoor_21
			{
				displayName = "Open Door";
				position = "Door_25_trigger"; 
				condition = "((this animationPhase 'Door_25') < 0.5)";
				statement = "this animate [""Door_25"",1];";
			};
			class CloseDoor_25: OpenDoor_21
			{
				displayName = "Close Door";
				position = "Door_25_trigger"; 
				condition = "((this animationPhase 'Door_25') > 0.5)";
				statement = "this animate [""Door_25"",0];";
			};
			class OpenDoor_26: OpenDoor_21
			{
				displayName = "Open Door";
				position = "Door_26_trigger"; 
				condition = "((this animationPhase 'Door_26') < 0.5)";
				statement = "this animate [""Door_26"",1];";
			};
			class CloseDoor_26: OpenDoor_21
			{
				displayName = "Close Door";
				position = "Door_26_trigger"; 
				condition = "((this animationPhase 'Door_26') > 0.5)";
				statement = "this animate [""Door_26"",0];";
			};
			class OpenDoor_27: OpenDoor_21
			{
				displayName = "Open Door";
				position = "Door_27_trigger"; 
				condition = "((this animationPhase 'Door_27') < 0.5)";
				statement = "this animate [""Door_27"",1];";
			};
			class CloseDoor_27: OpenDoor_21
			{
				displayName = "Close Door";
				position = "Door_27_trigger"; 
				condition = "((this animationPhase 'Door_27') > 0.5)";
				statement = "this animate [""Door_27"",0];";
			};
			class OpenDoor_28: OpenDoor_21
			{
				displayName = "Open Door";
				position = "Door_28_trigger"; 
				condition = "((this animationPhase 'Door_28') < 0.5)";
				statement = "this animate [""Door_28"",1];";
			};
			class CloseDoor_28: OpenDoor_21
			{
				displayName = "Close Door";
				position = "Door_28_trigger"; 
				condition = "((this animationPhase 'Door_28') > 0.5)";
				statement = "this animate [""Door_28"",0];";
			};
			class OpenDoor_29: OpenDoor_21
			{
				displayName = "Open Door";
				position = "Door_29_trigger"; 
				condition = "((this animationPhase 'Door_29') < 0.5)";
				statement = "this animate [""Door_29"",1];";
			};
			class CloseDoor_29: OpenDoor_21
			{
				displayName = "Close Door";
				position = "Door_29_trigger"; 
				condition = "((this animationPhase 'Door_29') > 0.5)";
				statement = "this animate [""Door_29"",0];";
			};
			class OpenDoor_30: OpenDoor_21
			{
				displayName = "Open Door";
				position = "Door_30_trigger"; 
				condition = "((this animationPhase 'Door_30') < 0.5)";
				statement = "this animate [""Door_30"",1];";
			};
			class CloseDoor_30: OpenDoor_21
			{
				displayName = "Close Door";
				position = "Door_30_trigger"; 
				condition = "((this animationPhase 'Door_30') > 0.5)";
				statement = "this animate [""Door_30"",0];";
			};			
			class OpenDoor_31
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_Door_ca.paa' size='2.5' >"; 
				displayName = "Open Door";
				position = "Door_31_trigger"; 
				priority = 0.4; 
				radius = 1.5;
				onlyForPlayer = 1;
				condition = "((this animationPhase 'Door_31') < 0.5)";
				statement = "this animate [""Door_31"",1];";
			};
			class CloseDoor_31: OpenDoor_31
			{
				displayName = "Close Door";
				position = "Door_31_trigger"; 
				condition = "((this animationPhase 'Door_31') > 0.5)";
				statement = "this animate [""Door_31"",0];";
			};
			class OpenDoor_32: OpenDoor_31
			{
				displayName = "Open Door";
				position = "Door_32_trigger"; 
				condition = "((this animationPhase 'Door_32') < 0.5)";
				statement = "this animate [""Door_32"",1];";
			};
			class CloseDoor_32: OpenDoor_31
			{
				displayName = "Close Door";
				position = "Door_32_trigger"; 
				condition = "((this animationPhase 'Door_32') > 0.5)";
				statement = "this animate [""Door_32"",0];";
			};
			class OpenDoor_33: OpenDoor_31
			{
				displayName = "Open Door";
				position = "Door_33_trigger"; 
				condition = "((this animationPhase 'Door_33') < 0.5)";
				statement = "this animate [""Door_33"",1];";
			};
			class CloseDoor_33: OpenDoor_31
			{
				displayName = "Close Door";
				position = "Door_33_trigger"; 
				condition = "((this animationPhase 'Door_33') > 0.5)";
				statement = "this animate [""Door_33"",0];";
			};
			class OpenDoor_34: OpenDoor_31
			{
				displayName = "Open Door";
				position = "Door_34_trigger"; 
				condition = "((this animationPhase 'Door_34') < 0.5)";
				statement = "this animate [""Door_34"",1];";
			};
			class CloseDoor_34: OpenDoor_31
			{
				displayName = "Close Door";
				position = "Door_34_trigger"; 
				condition = "((this animationPhase 'Door_34') > 0.5)";
				statement = "this animate [""Door_34"",0];";
			};
			class OpenDoor_35: OpenDoor_31
			{
				displayName = "Open Door";
				position = "Door_35_trigger"; 
				condition = "((this animationPhase 'Door_35') < 0.5)";
				statement = "this animate [""Door_35"",1];";
			};
			class CloseDoor_35: OpenDoor_31
			{
				displayName = "Close Door";
				position = "Door_35_trigger"; 
				condition = "((this animationPhase 'Door_35') > 0.5)";
				statement = "this animate [""Door_35"",0];";
			};
			class OpenDoor_36: OpenDoor_31
			{
				displayName = "Open Door";
				position = "Door_36_trigger"; 
				condition = "((this animationPhase 'Door_36') < 0.5)";
				statement = "this animate [""Door_36"",1];";
			};
			class CloseDoor_36: OpenDoor_31
			{
				displayName = "Close Door";
				position = "Door_36_trigger"; 
				condition = "((this animationPhase 'Door_36') > 0.5)";
				statement = "this animate [""Door_36"",0];";
			};
			class OpenDoor_37: OpenDoor_31
			{
				displayName = "Open Door";
				position = "Door_37_trigger"; 
				condition = "((this animationPhase 'Door_37') < 0.5)";
				statement = "this animate [""Door_37"",1];";
			};
			class CloseDoor_37: OpenDoor_31
			{
				displayName = "Close Door";
				position = "Door_37_trigger"; 
				condition = "((this animationPhase 'Door_37') > 0.5)";
				statement = "this animate [""Door_37"",0];";
			};
			class OpenDoor_38: OpenDoor_31
			{
				displayName = "Open Door";
				position = "Door_38_trigger"; 
				condition = "((this animationPhase 'Door_38') < 0.5)";
				statement = "this animate [""Door_38"",1];";
			};
			class CloseDoor_38: OpenDoor_31
			{
				displayName = "Close Door";
				position = "Door_38_trigger"; 
				condition = "((this animationPhase 'Door_38') > 0.5)";
				statement = "this animate [""Door_38"",0];";
			};
			class OpenDoor_39: OpenDoor_31
			{
				displayName = "Open Door";
				position = "Door_39_trigger"; 
				condition = "((this animationPhase 'Door_39') < 0.5)";
				statement = "this animate [""Door_39"",1];";
			};
			class CloseDoor_39: OpenDoor_31
			{
				displayName = "Close Door";
				position = "Door_39_trigger"; 
				condition = "((this animationPhase 'Door_39') > 0.5)";
				statement = "this animate [""Door_39"",0];";
			};
			class OpenDoor_40: OpenDoor_31
			{
				displayName = "Open Door";
				position = "Door_30_trigger"; 
				condition = "((this animationPhase 'Door_40') < 0.5)";
				statement = "this animate [""Door_30"",1];";
			};
			class CloseDoor_40: OpenDoor_31
			{
				displayName = "Close Door";
				position = "Door_40_trigger"; 
				condition = "((this animationPhase 'Door_40') > 0.5)";
				statement = "this animate [""Door_30"",0];";
			};			
			class OpenDoor_41
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_Door_ca.paa' size='2.5' >"; 
				displayName = "Open Door";
				position = "Door_41_trigger"; 
				priority = 0.4; 
				radius = 1.5;
				onlyForPlayer = 1;
				condition = "((this animationPhase 'Door_41') < 0.5)";
				statement = "this animate [""Door_41"",1];";
			};
			class CloseDoor_41: OpenDoor_41
			{
				displayName = "Close Door";
				position = "Door_41_trigger"; 
				condition = "((this animationPhase 'Door_41') > 0.5)";
				statement = "this animate [""Door_41"",0];";
			};
			class OpenDoor_42: OpenDoor_41
			{
				displayName = "Open Door";
				position = "Door_42_trigger"; 
				condition = "((this animationPhase 'Door_42') < 0.5)";
				statement = "this animate [""Door_42"",1];";
			};
			class CloseDoor_42: OpenDoor_41
			{
				displayName = "Close Door";
				position = "Door_42_trigger"; 
				condition = "((this animationPhase 'Door_42') > 0.5)";
				statement = "this animate [""Door_42"",0];";
			};
			class OpenDoor_43: OpenDoor_41
			{
				displayName = "Open Door";
				position = "Door_43_trigger"; 
				condition = "((this animationPhase 'Door_43') < 0.5)";
				statement = "this animate [""Door_43"",1];";
			};
			class CloseDoor_43: OpenDoor_41
			{
				displayName = "Close Door";
				position = "Door_43_trigger"; 
				condition = "((this animationPhase 'Door_43') > 0.5)";
				statement = "this animate [""Door_43"",0];";
			};
			class OpenDoor_44: OpenDoor_41
			{
				displayName = "Open Door";
				position = "Door_44_trigger"; 
				condition = "((this animationPhase 'Door_44') < 0.5)";
				statement = "this animate [""Door_44"",1];";
			};
			class CloseDoor_44: OpenDoor_41
			{
				displayName = "Close Door";
				position = "Door_44_trigger"; 
				condition = "((this animationPhase 'Door_44') > 0.5)";
				statement = "this animate [""Door_44"",0];";
			};
			class OpenDoor_45: OpenDoor_41
			{
				displayName = "Open Door";
				position = "Door_45_trigger"; 
				condition = "((this animationPhase 'Door_45') < 0.5)";
				statement = "this animate [""Door_45"",1];";
			};
			class CloseDoor_45: OpenDoor_41
			{
				displayName = "Close Door";
				position = "Door_45_trigger"; 
				condition = "((this animationPhase 'Door_45') > 0.5)";
				statement = "this animate [""Door_45"",0];";
			};
			class OpenDoor_46: OpenDoor_41
			{
				displayName = "Open Door";
				position = "Door_46_trigger"; 
				condition = "((this animationPhase 'Door_46') < 0.5)";
				statement = "this animate [""Door_46"",1];";
			};
			class CloseDoor_46: OpenDoor_41
			{
				displayName = "Close Door";
				position = "Door_46_trigger"; 
				condition = "((this animationPhase 'Door_46') > 0.5)";
				statement = "this animate [""Door_46"",0];";
			};
			class OpenDoor_47: OpenDoor_41
			{
				displayName = "Open Door";
				position = "Door_47_trigger"; 
				condition = "((this animationPhase 'Door_47') < 0.5)";
				statement = "this animate [""Door_47"",1];";
			};
			class CloseDoor_47: OpenDoor_41
			{
				displayName = "Close Door";
				position = "Door_47_trigger"; 
				condition = "((this animationPhase 'Door_47') > 0.5)";
				statement = "this animate [""Door_47"",0];";
			};
			class OpenDoor_48: OpenDoor_41
			{
				displayName = "Open Door";
				position = "Door_48_trigger"; 
				condition = "((this animationPhase 'Door_48') < 0.5)";
				statement = "this animate [""Door_48"",1];";
			};
			class CloseDoor_48: OpenDoor_41
			{
				displayName = "Close Door";
				position = "Door_48_trigger"; 
				condition = "((this animationPhase 'Door_48') > 0.5)";
				statement = "this animate [""Door_48"",0];";
			};
			class OpenDoor_49: OpenDoor_41
			{
				displayName = "Open Door";
				position = "Door_49_trigger"; 
				condition = "((this animationPhase 'Door_49') < 0.5)";
				statement = "this animate [""Door_49"",1];";
			};
			class CloseDoor_49: OpenDoor_41
			{
				displayName = "Close Door";
				position = "Door_49_trigger"; 
				condition = "((this animationPhase 'Door_49') > 0.5)";
				statement = "this animate [""Door_49"",0];";
			};
			class OpenDoor_50: OpenDoor_41
			{
				displayName = "Open Door";
				position = "Door_50_trigger"; 
				condition = "((this animationPhase 'Door_50') < 0.5)";
				statement = "this animate [""Door_50"",1];";
			};
			class CloseDoor_50: OpenDoor_41
			{
				displayName = "Close Door";
				position = "Door_50_trigger"; 
				condition = "((this animationPhase 'Door_50') > 0.5)";
				statement = "this animate [""Door_50"",0];";
			};			
			class OpenDoor_51
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_Door_ca.paa' size='2.5' >"; 
				displayName = "Open Door";
				position = "Door_51_trigger"; 
				priority = 0.4; 
				radius = 1.5;
				onlyForPlayer = 1;
				condition = "((this animationPhase 'Door_51') < 0.5)";
				statement = "this animate [""Door_51"",1];";
			};
			class CloseDoor_51: OpenDoor_51
			{
				displayName = "Close Door";
				position = "Door_51_trigger"; 
				condition = "((this animationPhase 'Door_51') > 0.5)";
				statement = "this animate [""Door_51"",0];";
			};
			class OpenDoor_52: OpenDoor_51
			{
				displayName = "Open Door";
				position = "Door_52_trigger"; 
				condition = "((this animationPhase 'Door_52') < 0.5)";
				statement = "this animate [""Door_52"",1];";
			};
			class CloseDoor_52: OpenDoor_51
			{
				displayName = "Close Door";
				position = "Door_52_trigger"; 
				condition = "((this animationPhase 'Door_52') > 0.5)";
				statement = "this animate [""Door_52"",0];";
			};
			class OpenDoor_53: OpenDoor_51
			{
				displayName = "Open Door";
				position = "Door_53_trigger"; 
				condition = "((this animationPhase 'Door_53') < 0.5)";
				statement = "this animate [""Door_53"",1];";
			};
			class CloseDoor_53: OpenDoor_51
			{
				displayName = "Close Door";
				position = "Door_53_trigger"; 
				condition = "((this animationPhase 'Door_53') > 0.5)";
				statement = "this animate [""Door_53"",0];";
			};
			class OpenDoor_54: OpenDoor_51
			{
				displayName = "Open Door";
				position = "Door_54_trigger"; 
				condition = "((this animationPhase 'Door_54') < 0.5)";
				statement = "this animate [""Door_54"",1];";
			};
			class CloseDoor_54: OpenDoor_51
			{
				displayName = "Close Door";
				position = "Door_54_trigger"; 
				condition = "((this animationPhase 'Door_54') > 0.5)";
				statement = "this animate [""Door_54"",0];";
			};
			class OpenDoor_55: OpenDoor_51
			{
				displayName = "Open Door";
				position = "Door_55_trigger"; 
				condition = "((this animationPhase 'Door_55') < 0.5)";
				statement = "this animate [""Door_55"",1];";
			};
			class CloseDoor_55: OpenDoor_51
			{
				displayName = "Close Door";
				position = "Door_55_trigger"; 
				condition = "((this animationPhase 'Door_55') > 0.5)";
				statement = "this animate [""Door_55"",0];";
			};
			class OpenDoor_56: OpenDoor_51
			{
				displayName = "Open Door";
				position = "Door_56_trigger"; 
				condition = "((this animationPhase 'Door_56') < 0.5)";
				statement = "this animate [""Door_56"",1];";
			};
			class CloseDoor_56: OpenDoor_51
			{
				displayName = "Close Door";
				position = "Door_56_trigger"; 
				condition = "((this animationPhase 'Door_56') > 0.5)";
				statement = "this animate [""Door_56"",0];";
			};
			class OpenDoor_57: OpenDoor_51
			{
				displayName = "Open Door";
				position = "Door_57_trigger"; 
				condition = "((this animationPhase 'Door_57') < 0.5)";
				statement = "this animate [""Door_57"",1];";
			};
			class CloseDoor_57: OpenDoor_51
			{
				displayName = "Close Door";
				position = "Door_57_trigger"; 
				condition = "((this animationPhase 'Door_57') > 0.5)";
				statement = "this animate [""Door_57"",0];";
			};
			class OpenDoor_58: OpenDoor_51
			{
				displayName = "Open Door";
				position = "Door_58_trigger"; 
				condition = "((this animationPhase 'Door_58') < 0.5)";
				statement = "this animate [""Door_58"",1];";
			};
			class CloseDoor_58: OpenDoor_51
			{
				displayName = "Close Door";
				position = "Door_58_trigger"; 
				condition = "((this animationPhase 'Door_58') > 0.5)";
				statement = "this animate [""Door_58"",0];";
			};
			class OpenDoor_59: OpenDoor_51
			{
				displayName = "Open Door";
				position = "Door_59_trigger"; 
				condition = "((this animationPhase 'Door_59') < 0.5)";
				statement = "this animate [""Door_59"",1];";
			};
			class CloseDoor_59: OpenDoor_51
			{
				displayName = "Close Door";
				position = "Door_59_trigger"; 
				condition = "((this animationPhase 'Door_59') > 0.5)";
				statement = "this animate [""Door_59"",0];";
			};
			class OpenDoor_60: OpenDoor_51
			{
				displayName = "Open Door";
				position = "Door_60_trigger"; 
				condition = "((this animationPhase 'Door_60') < 0.5)";
				statement = "this animate [""Door_60"",1];";
			};
			class CloseDoor_60: OpenDoor_51
			{
				displayName = "Close Door";
				position = "Door_60_trigger"; 
				condition = "((this animationPhase 'Door_60') > 0.5)";
				statement = "this animate [""Door_60"",0];";
			};			
			class OpenDoor_61
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_Door_ca.paa' size='2.5' >"; 
				displayName = "Open Door";
				position = "Door_61_trigger"; 
				priority = 0.4; 
				radius = 1.5;
				onlyForPlayer = 1;
				condition = "((this animationPhase 'Door_61') < 0.5)";
				statement = "this animate [""Door_61"",1];";
			};
			class CloseDoor_61: OpenDoor_61
			{
				displayName = "Close Door";
				position = "Door_61_trigger"; 
				condition = "((this animationPhase 'Door_61') > 0.5)";
				statement = "this animate [""Door_61"",0];";
			};
			class OpenDoor_62: OpenDoor_61
			{
				displayName = "Open Door";
				position = "Door_62_trigger"; 
				condition = "((this animationPhase 'Door_62') < 0.5)";
				statement = "this animate [""Door_62"",1];";
			};
			class CloseDoor_62: OpenDoor_61
			{
				displayName = "Close Door";
				position = "Door_62_trigger"; 
				condition = "((this animationPhase 'Door_62') > 0.5)";
				statement = "this animate [""Door_62"",0];";
			};
		};
	class EventHandlers
		{
			init="['asn_winter_houses',_this select 0]call{if(isServer AND isDedicated)then{params['_modname','_object'];if(isNil'BIS_fnc_validateAssets')exitWith{_object spawn{waitUntil{!((netId _this)isEqualTo'0:0')};deleteVehicle _this};};[_modname,_object]call BIS_fnc_validateAssets;};};";	 
		};
		numberOfDoors = 62;
	};

	class asn_apartments_black: asn_apartments
	{
		_generalMacro = "asn_apartments_black";
		displayName = "Apartments (Black)";
		model = "\asn_winter_houses\apartments\apartments_black.p3d";
	};
};