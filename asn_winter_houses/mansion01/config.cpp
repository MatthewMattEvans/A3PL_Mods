class CfgPatches {
	class asn_mansion {
		units[] = {"asn_mansion"};
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
	class Building;	// External class reference
	class House;  //
	class House_F;
	
	class asn_mansion : House_F {
		model = "\asn_winter_houses\mansion01\mansion01";
		scope = public;
		displayName = "Mansion 1";
		vehicleclass = "asn_houses";
		destrType = "DestructNo";
		
		class AnimationSources {
			class door1 {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class door2 {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class door3 : door2 {};
			class door4 : door2 {};
			class door5 : door2 {};
			class door6 : door2 {};
			class door7 : door2 {};
			class door8 : door2 {};
		};
		class UserActions {
			class Open_door_1 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "door1_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door1') < 0.5) && ((this getVariable ['bis_disabled_door1',0]) != 1)";
				statement = "this animate [""door1"", 1]";
			};
			
			class Close_door_1 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "door1_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door1') == 1)";
				statement = "this animate [""door1"", 0]";
			};
			
			class Open_door_2 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "door2_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door2') < 0.5) && ((this getVariable ['bis_disabled_door2',0]) != 1)";
				statement = "this animate [""door2"", 1]";
			};
			
			class Close_door_2 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "door2_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door2') == 1)";
				statement = "this animate [""door2"", 0]";
			};
			
			class Open_door_3 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "door3_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door3') < 0.5) && ((this getVariable ['bis_disabled_door3',0]) != 1)";
				statement = "this animate [""door3"", 1]";
			};
			
			class Close_door_3 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "door3_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door3') == 1)";
				statement = "this animate [""door3"", 0]";
			};
			
			class Open_door_4 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "door4_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door4') < 0.5) && ((this getVariable ['bis_disabled_door4',0]) != 1)";
				statement = "this animate [""door4"", 1]";
			};
			
			class Close_door_4 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "door4_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door4') == 1)";
				statement = "this animate [""door4"", 0]";
			};
			
			class Open_door_5 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "door5_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door5') < 0.5) && ((this getVariable ['bis_disabled_door5',0]) != 1)";
				statement = "this animate [""door5"", 1]";
			};
			
			class Close_door_5 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "door5_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door5') == 1)";
				statement = "this animate [""door5"", 0]";
			};
			
			class Open_door_6 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "door6_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door6') < 0.5) && ((this getVariable ['bis_disabled_door6',0]) != 1)";
				statement = "this animate [""door6"", 1]";
			};
			
			class Close_door_6 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "door6_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door6') == 1)";
				statement = "this animate [""door6"", 0]";
			};
			
			class Open_door_7 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "door7_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door7') < 0.5) && ((this getVariable ['bis_disabled_door7',0]) != 1)";
				statement = "this animate [""door7"", 1]";
			};
			
			class Close_door_7 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "door7_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door7') == 1)";
				statement = "this animate [""door7"", 0]";
			};
			
			class Open_door_8 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "door8_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door8') < 0.5) && ((this getVariable ['bis_disabled_door8',0]) != 1)";
				statement = "this animate [""door8"", 1]";
			};
			
			class Close_door_8 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "door8_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door8') == 1)";
				statement = "this animate [""door8"", 0]";
			};
			
			
		};
		class EventHandlers
		{
			init="['asn_winter_houses',_this select 0]call{if(isServer AND isDedicated)then{params['_modname','_object'];if(isNil'BIS_fnc_validateAssets')exitWith{_object spawn{waitUntil{!((netId _this)isEqualTo'0:0')};deleteVehicle _this};};[_modname,_object]call BIS_fnc_validateAssets;};};";	 
		};
	};
	
	
	
};