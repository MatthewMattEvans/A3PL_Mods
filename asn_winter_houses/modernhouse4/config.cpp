class CfgPatches {
	class asn_modernhouse4 {
		units[] = {"asn_modernhouse4"};
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
	
	class asn_modernhouse4 : House_F {
		model = "\asn_winter_houses\modernhouse4\4";
		scope = 2;
		displayName = "Modern House";
		vehicleclass = "asn_houses";
		destrType = "DestructNo";
		
		class AnimationSources {
			class door_01 {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class door_02 {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class door_03 : door_02 {};
			class door_04 : door_02 {};
			class door_05 : door_02 {};
			class door_06 : door_02 {};
			class door_07 : door_02 {};
			class door_08 : door_02 {};
			class door_09 : door_02 {};
			class door_10 : door_02 {};
			class door_11 : door_02 {};
		};
			class UserActions {
			class Open_door_1 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "door_01_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door_01') < 0.5) && ((this getVariable ['bis_disabled_door_01',0]) != 1)";
				statement = "this animate [""door_01"", 1]";
			};
			
			class Close_door_1 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "door_01_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door_01') == 1)";
				statement = "this animate [""door_01"", 0]";
			};
			
			class Open_door_2 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "door_02_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door_02') < 0.5) && ((this getVariable ['bis_disabled_door_02',0]) != 1)";
				statement = "this animate [""door_02"", 1]";
			};
			
			class Close_door_2 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "door_02_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door_02') == 1)";
				statement = "this animate [""door_02"", 0]";
			};
			
			class Open_door_3 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "door_03_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door_03') < 0.5) && ((this getVariable ['bis_disabled_door_03',0]) != 1)";
				statement = "this animate [""door_03"", 1]";
			};
			
			class Close_door_3 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "door_03_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door_03') == 1)";
				statement = "this animate [""door_03"", 0]";
			};
			
			class Open_door_4 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "door_04_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door_04') < 0.5) && ((this getVariable ['bis_disabled_door_04',0]) != 1)";
				statement = "this animate [""door_04"", 1]";
			};
			
			class Close_door_4 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "door_04_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door_04') == 1)";
				statement = "this animate [""door_04"", 0]";
			};
			
			class Open_door_5 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "door_05_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door_05') < 0.5) && ((this getVariable ['bis_disabled_door_05',0]) != 1)";
				statement = "this animate [""door_05"", 1]";
			};
			
			class Close_door_5 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "door_05_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door_05') == 1)";
				statement = "this animate [""door_05"", 0]";
			};
			
			class Open_door_6 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "door_06_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door_06') < 0.5) && ((this getVariable ['bis_disabled_door_06',0]) != 1)";
				statement = "this animate [""door_06"", 1]";
			};
			
			class Close_door_6 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "door_06_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door_06') == 1)";
				statement = "this animate [""door_06"", 0]";
			};
			
			class Open_door_7 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "door_07_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door_07') < 0.5) && ((this getVariable ['bis_disabled_door_07',0]) != 1)";
				statement = "this animate [""door_07"", 1]";
			};
			
			class Close_door_7 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "door_07_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door_07') == 1)";
				statement = "this animate [""door_07"", 0]";
			};
			
			class Open_door_8 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "door_08_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door_08') < 0.5) && ((this getVariable ['bis_disabled_door_08',0]) != 1)";
				statement = "this animate [""door_08"", 1]";
			};
			
			class Close_door_8 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "door_08_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door_08') == 1)";
				statement = "this animate [""door_08"", 0]";
			};
			
			class Open_door_9 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "door_09_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door_09') < 0.5) && ((this getVariable ['bis_disabled_door_09',0]) != 1)";
				statement = "this animate [""door_09"", 1]";
			};
			
			class Close_door_9 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "door_09_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door_09') == 1)";
				statement = "this animate [""door_09"", 0]";
			};
			
			class Open_door_10 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "door_10_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door_10') < 0.5) && ((this getVariable ['bis_disabled_door_10',0]) != 1)";
				statement = "this animate [""door_10"", 1]";
			};
			
			class Close_door_10 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "door_10_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door_10') == 1)";
				statement = "this animate [""door_10"", 0]";
			};
			
			class Open_door_11 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "door_11_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door_11') < 0.5) && ((this getVariable ['bis_disabled_door_11',0]) != 1)";
				statement = "this animate [""door_11"", 1]";
			};
			
			class Close_door_11 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Door";
				position = "door_11_pos";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationPhase 'door_11') == 1)";
				statement = "this animate [""door_11"", 0]";
			};
			
			
		};
		class EventHandlers
		{
			init="['asn_winter_houses',_this select 0]call{if(isServer AND isDedicated)then{params['_modname','_object'];if(isNil'BIS_fnc_validateAssets')exitWith{_object spawn{waitUntil{!((netId _this)isEqualTo'0:0')};deleteVehicle _this};};[_modname,_object]call BIS_fnc_validateAssets;};};";	 
		};
	};
	
	
	
};