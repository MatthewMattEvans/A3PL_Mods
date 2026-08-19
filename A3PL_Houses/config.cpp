////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.66
//https://mikero.bytex.digital/Downloads
//'now' is Thu Oct 31 11:26:33 2024 : 'file' last modified on Tue Jun 27 01:42:26 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class A3PL_Houses
	{
		units[] = {"Land_A3PL_Motel"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3PL_Cars","A3_Data_F","A3_Structures_F","A3_Signs_F","A3_Structures_F_Civ","A3_Structures_F_Civ_Lamps","A3_Structures_F_Walls"};
	};
};
class CfgVehicleClasses
{
	class A3PL_Houses
	{
		displayName = "A3PL Houses";
	};
};
class CfgSFX
{
	class A3PL_GasPump
	{
		Siren[] = {"A3PL_Common\effects\gaspump.ogg",1,1,50,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
		name = "A3PL GasPump Sound";
		sounds[] = {"Siren"};
	};
};
class CfgVehicles
{
	class Building;
	class House_F;
	class House_Small_F;
	class Wall_F;
	class C_Offroad_01_F;
	class Land_CampingChair_V1_F;
	class Sound_Alarm;
	class TargetP_Inf_F;
	class Lamps_base_F;
	class Land_Mil_WallBig_4m_F: Wall_F
	{
		mapSize = 4.05;
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Land_Mil_WallBig_4m_F";
		scope = 1;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgVehicles_Land_Mil_WallBig_4m_F0";
		model = "\A3\Structures_F\Walls\Mil_WallBig_4m_F.p3d";
		icon = "iconObject_4x1";
		editorSubcategory = "EdSubcat_Military";
		vehicleClass = "Fortifications";
		animated = 0;
		armor = 200000;
		coefInside = 0.5;
		coefInsideHeur = 0.8;
		cost = 1000;
		destrType = "DestructNo";
	};
	class Land_Target_Popup_F: TargetP_Inf_F
	{
		scope = 1;
		displayName = "A3PL Target PopUp";
		vehicleclass = "A3PL_Houses";
		destrType = "DestructNo";
	};
	class Land_LampStreet_F: Lamps_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 3.78;
		class SimpleObject
		{
			animate[] = {};
			hide[] = {"light_1_hide"};
			verticalOffset = 0;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_LampStreet_F.jpg";
		_generalMacro = "Land_LampStreet_F";
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 2;
		displayName = "$STR_A3_CfgVehicles_Land_LampStreet_F0";
		model = "\A3\Structures_F\Civ\Lamps\LampStreet_F.p3d";
		icon = "iconObject_circle";
		editorCategory = "EdCat_Structures_Altis";
		armor = 30000;
		class Reflectors
		{
			class Light_1
			{
				color[] = {1200,600,300};
				ambient[] = {12,6,3};
				intensity = 7;
				size = 1;
				innerAngle = 100;
				outerAngle = 180;
				coneFadeCoef = 2;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 2;
				flareMaxDistance = 220;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 0.3;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
		};
	};
	class Land_LampStreet_small_F: Lamps_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 0.7;
		class SimpleObject
		{
			animate[] = {};
			hide[] = {"light_1_hide"};
			verticalOffset = 0;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_LampStreet_small_F.jpg";
		_generalMacro = "Land_LampStreet_small_F";
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 2;
		displayName = "$STR_A3_CfgVehicles_Land_LampStreet_small_F0";
		model = "\A3\Structures_F\Civ\Lamps\LampStreet_small_F.p3d";
		icon = "iconObject_circle";
		editorCategory = "EdCat_Structures_Altis";
		armor = 30000;
		class Reflectors
		{
			class Light_1
			{
				color[] = {1000,1100,1200};
				ambient[] = {10,11,12};
				intensity = 3;
				size = 1;
				innerAngle = 120;
				outerAngle = 170;
				coneFadeCoef = 1;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 1.1;
				flareMaxDistance = 200;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 2;
					quadratic = 0.1;
					hardLimitStart = 35;
					hardLimitEnd = 55;
				};
			};
		};
	};
	class Land_LampHalogen_F: Lamps_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 1.57;
		class SimpleObject
		{
			animate[] = {};
			hide[] = {"light_1_hide","light_2_hide","light_3_hide","light_4_hide"};
			verticalOffset = 0;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_LampHalogen_F.jpg";
		_generalMacro = "Land_LampHalogen_F";
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 2;
		displayName = "$STR_A3_CfgVehicles_Land_LampHalogen_F0";
		model = "\A3\Structures_F\Civ\Lamps\LampHalogen_F.p3d";
		icon = "iconObject_circle";
		editorCategory = "EdCat_Structures_Altis";
		armor = 30000;
		aggregateReflectors[] = {{"Light_1","Light_2","Light_3","Light_4"}};
		class Reflectors
		{
			class Light_1
			{
				color[] = {1000,1000,1200};
				ambient[] = {10,10,12};
				intensity = 5;
				size = 1;
				innerAngle = 60;
				outerAngle = 130;
				coneFadeCoef = 6;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 0.9;
				flareMaxDistance = 250;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 2;
					quadratic = 0.5;
					hardLimitStart = 50;
					hardLimitEnd = 70;
				};
			};
			class Light_2: Light_1
			{
				position = "Light_2_pos";
				direction = "Light_2_dir";
				hitpoint = "Light_2_hitpoint";
				selection = "Light_2_hide";
			};
			class Light_3: Light_1
			{
				position = "Light_3_pos";
				direction = "Light_3_dir";
				hitpoint = "Light_3_hitpoint";
				selection = "Light_3_hide";
			};
			class Light_4: Light_1
			{
				position = "Light_4_pos";
				direction = "Light_4_dir";
				hitpoint = "Light_4_hitpoint";
				selection = "Light_4_hide";
			};
		};
	};
	class A3PL_Houses: House_F
	{
		model = "";
		scope = 1;
		picture = "";
		displayName = "A3PL Houses";
		vehicleclass = "A3PL_Houses";
		author = "A3PL Development Team";
		placement = "vertical";
		armor = 999999;
		class AnimationSources
		{
			class Common
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class door
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class GarageDoor
			{
				source = "user";
				animPeriod = 10;
				initPhase = 0;
			};
			class garage: GarageDoor{};
			class garage1: GarageDoor{};
			class garage2: GarageDoor{};
			class storagedoor: GarageDoor{};
			class storagedoor2: GarageDoor{};
			class GarageDoor1: GarageDoor{};
			class GarageDoor2: GarageDoor{};
			class GarageDoor3: GarageDoor{};
			class Plant_Growth: Common
			{
				animPeriod = 300;
			};
			class Plant_Growth_Marijuana: Common
			{
				animPeriod = 900;
			};
			class Tape_Unhide: Common{};
			class Cone_Hide: Common{};
			class Part_1_spin: Common{};
			class Part_2_spin: Common{};
			class Part_3_spin: Common{};
			class Part_4_spin: Common{};
			class Part_5_spin: Common{};
			class Part_6_spin: Common{};
			class Part_7_spin: Common{};
			class Part_8_spin: Common{};
			class Part_9_spin: Common{};
			class Part_10_spin: Common{};
			class Part_11_spin: Common{};
			class Part_12_spin: Common{};
			class Part_13_spin: Common{};
			class Part_14_spin: Common{};
			class Part_15_spin: Common{};
			class Part_16_spin: Common{};
			class Part_17_spin: Common{};
			class Part_18_spin: Common{};
			class Part_19_spin: Common{};
			class Part_20_spin: Common{};
			class All_Lights: Common{};
			class Door_1: door{};
			class Door_2: door{};
			class Door_3: door{};
			class Door_4: door{};
			class Door_5: door{};
			class Door_6: door{};
			class Door_7: door{};
			class Door_8: door{};
			class Door_9: door{};
			class Door_10: door{};
			class Door_11: door{};
			class Door_12: door{};
			class Door_13: door{};
			class Door_14: door{};
			class Door_15: door{};
			class Door_16: door{};
			class Door_17: door{};
			class Door_18: door{};
			class Door_19: door{};
			class Door_20: door{};
			class Door_21: door{};
			class Door_22: door{};
			class Door_23: door{};
			class Door_24: door{};
			class Door_25: door{};
			class Door_26: door{};
			class Door_27: door{};
			class Door_28: door{};
			class Door_29: door{};
			class Door_30: door{};
			class Door_31: door{};
			class Door_32: door{};
			class Door_33: door{};
			class Door_34: door{};
			class Door_35: door{};
			class Door_36: door{};
			class Door_37: door{};
			class Door_38: door{};
			class Door_39: door{};
			class Door_40: door{};
			class Door_41: door{};
			class Door_42: door{};
			class Door_43: door{};
			class Door_44: door{};
			class Door_45: door{};
			class Door_46: door{};
			class Door_47: door{};
			class Door_48: door{};
			class Door_49: door{};
			class Door_50: door{};
			class Door_1_Source: door{};
			class Door_2_Source: door{};
			class Door_3_Source: door{};
			class Door_4_Source: door{};
			class Door_5_Source: door{};
			class Door_6_Source: door{};
			class Door_7_Source: door{};
			class Door_8_Source: door{};
			class Door_9_Source: door{};
			class Door_10_Source: door{};
			class Door_11_Source: door{};
			class Door_12_Source: door{};
			class Door_13_Source: door{};
			class Door_14_Source: door{};
			class Door_15_Source: door{};
			class Door_16_Source: door{};
			class Door_17_Source: door{};
			class Door_18_Source: door{};
			class Door_19_Source: door{};
			class Door_20_Source: door{};
			class Door_21_Source: door{};
			class Door_22_Source: door{};
			class Door_23_Source: door{};
			class Door_24_Source: door{};
			class Door_25_Source: door{};
			class Door_26_Source: door{};
			class Door_27_Source: door{};
			class Door_28_Source: door{};
			class Door_29_Source: door{};
			class Door_30_Source: door{};
			class Door_31_Source: door{};
			class Door_32_Source: door{};
			class Door_33_Source: door{};
			class Door_34_Source: door{};
			class Door_35_Source: door{};
			class Door_36_Source: door{};
			class Door_37_Source: door{};
			class Door_38_Source: door{};
			class Door_39_Source: door{};
			class Door_40_Source: door{};
			class Door_41_Source: door{};
			class Door_42_Source: door{};
			class Door_43_Source: door{};
			class Door_44_Source: door{};
			class Door_45_Source: door{};
			class Door_46_Source: door{};
			class Door_47_Source: door{};
			class Door_48_Source: door{};
			class Door_49_Source: door{};
			class Door_50_Source: door{};
			class GarageDoor_1_Source: door{};
			class GarageDoor_2_Source: door{};
			class GarageDoor_3_Source: door{};
			class GarageDoor_4_Source: door{};
			class GarageDoor_5_Source: door{};
			class GarageDoor_6_Source: door{};
			class GarageDoor_7_Source: door{};
			class GarageDoor_8_Source: door{};
			class GarageDoor_9_Source: door{};
			class GarageDoor_10_Source: door{};
			class GarageDoor_11_Source: door{};
			class GarageDoor_12_Source: door{};
			class GarageDoor_13_Source: door{};
			class GarageDoor_14_Source: door{};
			class GarageDoor_15_Source: door{};
			class GarageDoor_16_Source: door{};
			class GarageDoor_17_Source: door{};
			class GarageDoor_18_Source: door{};
			class GarageDoor_19_Source: door{};
			class GarageDoor_20_Source: door{};
			class GarageDoor_21_Source: door{};
			class GarageDoor_22_Source: door{};
			class GarageDoor_23_Source: door{};
			class GarageDoor_24_Source: door{};
			class GarageDoor_25_Source: door{};
			class GarageDoor_26_Source: door{};
			class GarageDoor_27_Source: door{};
			class GarageDoor_28_Source: door{};
			class GarageDoor_29_Source: door{};
			class GarageDoor_30_Source: door{};
			class GarageDoor_31_Source: door{};
			class GarageDoor_32_Source: door{};
			class GarageDoor_33_Source: door{};
			class GarageDoor_34_Source: door{};
			class GarageDoor_35_Source: door{};
			class GarageDoor_36_Source: door{};
			class GarageDoor_37_Source: door{};
			class GarageDoor_38_Source: door{};
			class GarageDoor_39_Source: door{};
			class GarageDoor_40_Source: door{};
			class GarageDoor_41_Source: door{};
			class GarageDoor_42_Source: door{};
			class GarageDoor_43_Source: door{};
			class GarageDoor_44_Source: door{};
			class GarageDoor_45_Source: door{};
			class GarageDoor_46_Source: door{};
			class GarageDoor_47_Source: door{};
			class GarageDoor_48_Source: door{};
			class GarageDoor_49_Source: door{};
			class GarageDoor_50_Source: door{};
			class deposit_1
			{
				source = "user";
				animPeriod = 1.5;
				initPhase = 0;
			};
			class deposit_2: deposit_1{};
			class deposit_3: deposit_1{};
			class deposit_4: deposit_1{};
			class deposit_5: deposit_1{};
			class deposit_6: deposit_1{};
			class deposit_7: deposit_1{};
			class deposit_8: deposit_1{};
			class deposit_9: deposit_1{};
			class deposit_10: deposit_1{};
			class deposit_11: deposit_1{};
			class deposit_12: deposit_1{};
			class deposit_13: deposit_1{};
			class deposit_14: deposit_1{};
			class deposit_15: deposit_1{};
			class deposit_16: deposit_1{};
			class deposit_17: deposit_1{};
			class deposit_18: deposit_1{};
			class deposit_19: deposit_1{};
			class deposit_20: deposit_1{};
			class door_bankvault
			{
				source = "user";
				animPeriod = 6;
				initPhase = 0;
			};
			class car_lift
			{
				source = "user";
				animPeriod = 8;
				initPhase = 0;
			};
			class hoseSwitch
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class LockedDoor_source: Common
			{
				animPeriod = 0.1;
			};
			class Door_1_handle_source: Common
			{
				animPeriod = 1;
			};
			class Door_2_handle_source: Common
			{
				animPeriod = 1;
			};
			class bargate1: Common
			{
				animPeriod = 3;
			};
			class bargate2: bargate1{};
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = "HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint = "HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint = "HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint = "HitGlass5";
			};
			class HitGlass6: HitGlass1
			{
				hitpoint = "HitGlass6";
			};
			class HitGlass7: HitGlass1
			{
				hitpoint = "HitGlass7";
			};
			class HitGlass8: HitGlass1
			{
				hitpoint = "HitGlass8";
			};
			class HitGlass9: HitGlass1
			{
				hitpoint = "HitGlass9";
			};
			class HitGlass10: HitGlass1
			{
				hitpoint = "HitGlass10";
			};
			class HitGlass11: HitGlass1
			{
				hitpoint = "HitGlass11";
			};
			class HitGlass12: HitGlass1
			{
				hitpoint = "HitGlass12";
			};
			class HitGlass13: HitGlass1
			{
				hitpoint = "HitGlass13";
			};
			class HitGlass14: HitGlass1
			{
				hitpoint = "HitGlass14";
			};
			class HitGlass15: HitGlass1
			{
				hitpoint = "HitGlass15";
			};
			class HitGlass16: HitGlass1
			{
				hitpoint = "HitGlass16";
			};
			class HitGlass17: HitGlass1
			{
				hitpoint = "HitGlass17";
			};
			class HitGlass18: HitGlass1
			{
				hitpoint = "HitGlass18";
			};
			class HitGlass19: HitGlass1
			{
				hitpoint = "HitGlass19";
			};
			class HitGlass20: HitGlass1
			{
				hitpoint = "HitGlass20";
			};
			class HitGlass21: HitGlass1
			{
				hitpoint = "HitGlass21";
			};
			class HitGlass22: HitGlass1
			{
				hitpoint = "HitGlass22";
			};
			class HitGlass23: HitGlass1
			{
				hitpoint = "HitGlass23";
			};
			class HitGlass24: HitGlass1
			{
				hitpoint = "HitGlass24";
			};
			class HitGlass25: HitGlass1
			{
				hitpoint = "HitGlass25";
			};
			class HitGlass26: HitGlass1
			{
				hitpoint = "HitGlass26";
			};
			class HitGlass27: HitGlass1
			{
				hitpoint = "HitGlass27";
			};
			class HitGlass28: HitGlass1
			{
				hitpoint = "HitGlass28";
			};
			class HitGlass29: HitGlass1
			{
				hitpoint = "HitGlass29";
			};
			class HitGlass30: HitGlass1
			{
				hitpoint = "HitGlass30";
			};
		};
		class HitPoints
		{
			class HitGlass1
			{
				armor = 0.01;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass1";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass1_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass2
			{
				armor = 0.01;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass2";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass2_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass3
			{
				armor = 0.01;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass3";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass3_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass4
			{
				armor = 0.01;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass4";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass4_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass5
			{
				armor = 0.01;
				material = -1;
				name = "glass5";
				visual = "glass5";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass5";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass5_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass6
			{
				armor = 0.01;
				material = -1;
				name = "glass6";
				visual = "glass6";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass6";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass6_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass7
			{
				armor = 0.01;
				material = -1;
				name = "glass7";
				visual = "glass7";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass7";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass7_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass8
			{
				armor = 0.01;
				material = -1;
				name = "glass8";
				visual = "glass8";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass8";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass8_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass9
			{
				armor = 0.01;
				material = -1;
				name = "glass9";
				visual = "glass9";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass9";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass9_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass10
			{
				armor = 0.01;
				material = -1;
				name = "glass10";
				visual = "glass10";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass10";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass10_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass11
			{
				armor = 0.01;
				material = -1;
				name = "glass11";
				visual = "glass11";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass11";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass11_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass12
			{
				armor = 0.01;
				material = -1;
				name = "glass12";
				visual = "glass12";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass12";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass12_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass13
			{
				armor = 0.01;
				material = -1;
				name = "glass13";
				visual = "glass13";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass13";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass13_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass14
			{
				armor = 0.01;
				material = -1;
				name = "glass14";
				visual = "glass14";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass14";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass14_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass15
			{
				armor = 0.01;
				material = -1;
				name = "glass15";
				visual = "glass15";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass15";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass15_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass16
			{
				armor = 0.01;
				material = -1;
				name = "glass16";
				visual = "glass16";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass16";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass16_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass17
			{
				armor = 0.01;
				material = -1;
				name = "glass17";
				visual = "glass17";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass17";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass17_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass18
			{
				armor = 0.01;
				material = -1;
				name = "glass18";
				visual = "glass18";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass18";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass18_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass19
			{
				armor = 0.01;
				material = -1;
				name = "glass19";
				visual = "glass19";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass19";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass19_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass20
			{
				armor = 0.01;
				material = -1;
				name = "glass20";
				visual = "glass20";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass20";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass20_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass21
			{
				armor = 0.01;
				material = -1;
				name = "glass21";
				visual = "glass21";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass21";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass21_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass22
			{
				armor = 0.01;
				material = -1;
				name = "glass22";
				visual = "glass22";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass22";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass22_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass23
			{
				armor = 0.01;
				material = -1;
				name = "glass23";
				visual = "glass23";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass23";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass23_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass24
			{
				armor = 0.01;
				material = -1;
				name = "glass24";
				visual = "glass24";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass24";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass24_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass25
			{
				armor = 0.01;
				material = -1;
				name = "glass25";
				visual = "glass25";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass25";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass25_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass26
			{
				armor = 0.01;
				material = -1;
				name = "glass26";
				visual = "glass26";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass26";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass26_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass27
			{
				armor = 0.01;
				material = -1;
				name = "glass27";
				visual = "glass27";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass27";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass27_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass28
			{
				armor = 0.01;
				material = -1;
				name = "glass28";
				visual = "glass28";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass28";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass28_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass29
			{
				armor = 0.01;
				material = -1;
				name = "glass29";
				visual = "glass29";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass29";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass29_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
			class HitGlass30
			{
				armor = 0.01;
				material = -1;
				name = "glass30";
				visual = "glass30";
				passThrough = 0;
				radius = 0.7;
				convexComponent = "glass30";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "glass30_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NB";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NB";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NB";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NB";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NB";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NB";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SB";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SB";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SB";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SB";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SB";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SB";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SB";
					};
				};
			};
		};
	};
	class Land_A3PL_Barn: A3PL_Houses
	{
		model = "\A3PL_Houses\Barn\A3PL_Barn";
		displayName = "A3PL Barn";
	};
	class A3PL_FireStation: A3PL_Houses
	{
		model = "\A3PL_Houses\FireStation01\FireStation";
		displayName = "A3PL Fire Station";
	};
	class Land_Mansion01: A3PL_Houses
	{
		model = "\A3PL_Houses\Mansion01\Mansion01";
		displayName = "A3PL Mansion 1";
	};
	class Land_A3PL_Impound: A3PL_Houses
	{
		model = "\A3PL_Houses\Impound\A3PL_Impound";
		displayName = "A3PL Impound Lot";
	};
	class Land_A3PL_Garage: A3PL_Houses
	{
		model = "\A3PL_Houses\Garage\A3PL_Garage";
		displayName = "A3PL Garage";
	};
	class land_a3pl_ch: A3PL_Houses
	{
		model = "\A3PL_Houses\CityHall\A3PL_CH";
		displayName = "A3PL City Hall";
		class Reflectors
		{
			class Light_1
			{
				color[] = {50,50,50};
				ambient[] = {10,10,10};
				intensity = 5;
				size = 1;
				innerAngle = 90;
				outerAngle = 360;
				coneFadeCoef = 1;
				position = "Light_1";
				direction = "Light_1_dir";
				selection = "Light_1";
				hitpoint = "Light_1";
				useFlare = 1;
				flareSize = 0.8;
				flareMaxDistance = 250;
				class Attenuation
				{
					start = 0;
					constant = 20;
					linear = 0;
					quadratic = 0.5;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
			class Light_2: Light_1
			{
				position = "Light_2";
				direction = "Light_2_dir";
				hitpoint = "Light_2";
				selection = "Light_2";
			};
			class Light_3: Light_1
			{
				position = "Light_3";
				direction = "Light_3_dir";
				hitpoint = "Light_3";
				selection = "Light_3";
			};
			class Light_4: Light_1
			{
				position = "Light_4";
				direction = "Light_4_dir";
				selection = "Light_4";
				hitpoint = "Light_4";
			};
			class Light_5: Light_1
			{
				position = "Light_5";
				direction = "Light_5_dir";
				selection = "Light_5";
				hitpoint = "Light_5";
			};
			class Light_6: Light_1
			{
				position = "Light_6";
				direction = "Light_6_dir";
				selection = "Light_6";
				hitpoint = "Light_6";
			};
			class Light_7: Light_1
			{
				position = "Light_7";
				direction = "Light_7_dir";
				selection = "Light_7";
				hitpoint = "Light_7";
			};
			class Light_8: Light_1
			{
				position = "Light_8";
				direction = "Light_8_dir";
				selection = "Light_8";
				hitpoint = "Light_8";
			};
			class Light_9: Light_1
			{
				position = "Light_8";
				direction = "Light_8_dir";
				selection = "Light_8";
				hitpoint = "Light_8";
			};
			class Light_10: Light_1
			{
				position = "Light_10";
				direction = "Light_10_dir";
				selection = "Light_10";
				hitpoint = "Light_10";
			};
			class Light_11: Light_1
			{
				position = "Light_11";
				direction = "Light_11_dir";
				selection = "Light_11";
				hitpoint = "Light_11";
			};
			class Light_12: Light_1
			{
				position = "Light_12";
				direction = "Light_12_dir";
				selection = "Light_12";
				hitpoint = "Light_12";
			};
			class Light_13: Light_1
			{
				position = "Light_13";
				direction = "Light_13_dir";
				selection = "Light_13";
				hitpoint = "Light_13";
			};
		};
		aggregateReflectors[] = {{"Light_1"},{"Light_2"},{"Light_3","Light_4","Light_5"},{"Light_6","Light_7","Light_8"},{"Light_9","Light_10"},{"Light_11","Light_12","Light_13"}};
	};
	class Land_A3PL_storage: A3PL_Houses
	{
		model = "\A3PL_Houses\Storage\A3PL_storage";
		displayName = "A3PL Storage";
	};
	class Land_A3PL_ClockTower1: A3PL_Houses
	{
		model = "\A3PL_Houses\ClockTowers\A3PL_ClockTower1";
		displayName = "A3PL Clocktower";
		aggregateReflectors[] = {{"Light_1"},{"Light_2"}};
		class Reflectors
		{
			class Light_1
			{
				color[] = {1000,650,400};
				ambient[] = {10,6.5,4};
				intensity = 2;
				size = 1;
				innerAngle = 60;
				outerAngle = 100;
				coneFadeCoef = 10;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 0;
				dayLight = 1;
				class Attenuation
				{
					start = 0;
					constant = 20;
					linear = 0;
					quadratic = 0.5;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
			class Light_2: Light_1
			{
				position = "Light_2_pos";
				direction = "Light_2_dir";
			};
		};
		class MarkerLights
		{
			class MarkerLight_1
			{
				color[] = {1,0,0};
				ambient[] = {0.01,0,0};
				intensity = 800;
				name = "MarkerLight";
				useFlare = 1;
				flareSize = 1.5;
				flareMaxDistance = 1000;
				activeLight = 1;
				blinking = 0;
				dayLight = 1;
				drawLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 2;
					linear = 10;
					quadratic = 20;
					hardLimitStart = 5;
					hardLimitEnd = 6;
				};
			};
		};
	};
	class Land_appartment: A3PL_Houses
	{
		model = "\A3PL_Houses\apartment\appartment";
		displayName = "A3PL Appartment";
	};
	class Land_A3PL_Motel: A3PL_Houses
	{
		model = "\A3PL_Houses\motel\A3PL_Motel";
		displayName = "A3PL Motel";
		scope = 2;
		class Reflectors
		{
			class Light_1
			{
				color[] = {50,50,50};
				ambient[] = {10,10,10};
				intensity = 5;
				size = 1;
				innerAngle = 90;
				outerAngle = 360;
				coneFadeCoef = 1;
				position = "Light_1";
				direction = "Light_1_dir";
				hitpoint = "Light_1";
				selection = "Light_1";
				useFlare = 1;
				flareSize = 0.8;
				flareMaxDistance = 250;
				class Attenuation
				{
					start = 0;
					constant = 20;
					linear = 0;
					quadratic = 0.5;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
			class Light_2: Light_1
			{
				position = "Light_2";
				direction = "Light_2_dir";
				hitpoint = "Light_2";
				selection = "Light_2";
			};
			class Light_3: Light_1
			{
				position = "Light_3";
				direction = "Light_3_dir";
				hitpoint = "Light_3";
				selection = "Light_3";
			};
			class Light_4: Light_1
			{
				position = "Light_4";
				direction = "Light_4_dir";
				selection = "Light_4";
				hitpoint = "Light_4";
			};
			class Light_5: Light_1
			{
				position = "Light_5";
				direction = "Light_5_dir";
				selection = "Light_5";
				hitpoint = "Light_5";
			};
			class Light_6: Light_1
			{
				position = "Light_6";
				direction = "Light_6_dir";
				selection = "Light_6";
				hitpoint = "Light_6";
			};
			class Light_7: Light_1
			{
				position = "Light_7";
				direction = "Light_7_dir";
				selection = "Light_7";
				hitpoint = "Light_7";
			};
			class Light_8: Light_1
			{
				position = "Light_8";
				direction = "Light_8_dir";
				selection = "Light_8";
				hitpoint = "Light_8";
			};
		};
		aggregateReflectors[] = {{"Light_1"},{"Light_2"},{"Light_3"},{"Light_4"},{"Light_5"},{"Light_6"},{"Light_7"},{"Light_8"}};
	};
	class A3PL_GasPump: Sound_Alarm
	{
		_generalMacro = "A3PL_GasPump";
		scope = 1;
		displayName = "A3PL GasPump Sound";
		sound = "A3PL_GasPump";
	};
	class Land_A3PL_Gasstation: A3PL_Houses
	{
		model = "\A3PL_Houses\GasStation\A3PL_Gasstation";
		displayName = "A3PL Hydrogen Station";
		hiddenSelections[] = {"n1","n2","n3","n4","n5","n6","n7","n8","n9","n10"};
		hiddenSelectionsTextures[] = {"\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa"};
	};
	class Land_A3PL_Gas_Station: A3PL_Houses
	{
		model = "\A3PL_Houses\Gas_Station\A3PL_Gas_Station";
		displayName = "A3PL Gas Station";
		class Reflectors
		{
			class Light_1
			{
				color[] = {50,50,50};
				ambient[] = {10,10,10};
				intensity = 5;
				size = 1;
				innerAngle = 90;
				outerAngle = 360;
				coneFadeCoef = 1;
				position = "Light_1";
				direction = "Light_1_dir";
				hitpoint = "Light_1";
				selection = "Light_1";
				useFlare = 1;
				flareSize = 0.8;
				flareMaxDistance = 250;
				class Attenuation
				{
					start = 0;
					constant = 20;
					linear = 0;
					quadratic = 0.5;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
			class Light_2: Light_1
			{
				position = "Light_2";
				direction = "Light_2_dir";
				hitpoint = "Light_2";
				selection = "Light_2";
			};
			class Light_3: Light_1
			{
				position = "Light_3";
				direction = "Light_3_dir";
				hitpoint = "Light_3";
				selection = "Light_3";
			};
			class Light_4: Light_1
			{
				position = "Light_4";
				direction = "Light_4_dir";
				selection = "Light_4";
				hitpoint = "Light_4";
			};
			class Light_5: Light_1
			{
				position = "Light_5";
				direction = "Light_5_dir";
				selection = "Light_5";
				hitpoint = "Light_5";
			};
			class Light_6: Light_1
			{
				position = "Light_6";
				direction = "Light_6_dir";
				selection = "Light_6";
				hitpoint = "Light_6";
			};
		};
		aggregateReflectors[] = {{"Light_1","Light_2","Light_3","Light_4","Light_5"},{"Light_6"}};
		hiddenSelections[] = {"Logo","logo1","sale_1_1","sale_1_2","sale_1_3","sale_1_4","sale_1_5","sale_1_6","sale_1_7","sale_1_8","gallon_1_1","gallon_1_2","gallon_1_3","gallon_1_4","gallon_1_5","gallon_1_6","gallon_1_7","gallon_1_8","sale_2_1","sale_2_2","sale_2_3","sale_2_4","sale_2_5","sale_2_6","sale_2_7","sale_2_8","gallon_2_1","gallon_2_2","gallon_2_3","gallon_2_4","gallon_2_5","gallon_2_6","gallon_2_7","gallon_2_8","sale_3_1","sale_3_2","sale_3_3","sale_3_4","sale_3_5","sale_3_6","sale_3_7","sale_3_8","gallon_3_1","gallon_3_2","gallon_3_3","gallon_3_4","gallon_3_5","gallon_3_6","gallon_3_7","gallon_3_8","Price_1","Price_2","Price_3"};
		hiddenSelectionsTextures[] = {"\a3pl_houses\gas_station\data\default_logo_co.paa","\a3pl_houses\gas_station\data\default_big_logo_co.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","\A3PL_Common\HydrogenNumbers\0.paa","","",""};
	};
	class A3PL_GasBox: C_Offroad_01_F
	{
		_generalMacro = "A3PL_GasBox";
		driverAction = "driver_offroad01";
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		displayName = "A3PL Gasbox";
		model = "\A3PL_Houses\GasStation\A3PL_GasBox";
		vehicleclass = "A3PL_Objects";
		transportSoldier = 0;
		cargoAction[] = {};
		armor = 999999;
		animated = 1;
		scope = 1;
		hiddenSelections[] = {};
		class animationSources{};
	};
	class A3PL_GasHose: Land_CampingChair_V1_F
	{
		_generalMacro = "A3PL_GasHose";
		model = "\A3PL_Houses\GasStation\A3PL_GasHose";
		scope = 1;
		displayName = "A3PL Gashose";
		vehicleclass = "A3PL_Objects";
		class animationSources
		{
			class gasTurn
			{
				source = "user";
				animPeriod = 1.5;
				initPhase = 0;
			};
			class Handle
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
		};
	};
	class A3PL_Gas_Box: A3PL_GasBox
	{
		model = "\A3PL_Houses\Gas_Station\A3PL_Gas_Tank";
		_generalMacro = "A3PL_Gas_Box";
		displayName = "A3PL New Gasbox";
	};
	class A3PL_Gas_Hose: A3PL_GasHose
	{
		model = "\A3PL_Houses\Gas_Station\A3PL_Pump_Handle";
		_generalMacro = "A3PL_Gas_Hose";
		displayName = "A3PL New Gashose";
	};
	class Land_A3PL_Clinic: A3PL_Houses
	{
		model = "\A3PL_Houses\Clinic\A3PL_Clinic";
		displayName = "A3PL Clinic";
		class Reflectors
		{
			class Light_1
			{
				color[] = {24,22,20};
				ambient[] = {10,10,10};
				intensity = 5;
				size = 1;
				innerAngle = 90;
				outerAngle = 360;
				coneFadeCoef = 1;
				position = "Light_1";
				direction = "Light_1_dir";
				hitpoint = "Light_1";
				selection = "Light_1";
				useFlare = 0;
				flareSize = 0.8;
				flareMaxDistance = 250;
				class Attenuation
				{
					start = 0;
					constant = 20;
					linear = 0;
					quadratic = 0.5;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
			class Light_2: Light_1
			{
				position = "Light_2";
				direction = "Light_2_dir";
				hitpoint = "Light_2";
				selection = "Light_2";
			};
			class Light_3: Light_1
			{
				position = "Light_3";
				direction = "Light_3_dir";
				hitpoint = "Light_3";
				selection = "Light_3";
			};
			class Light_4: Light_1
			{
				position = "Light_4";
				direction = "Light_4_dir";
				selection = "Light_4";
				hitpoint = "Light_4";
			};
			class Light_5: Light_1
			{
				position = "Light_5";
				direction = "Light_5_dir";
				selection = "Light_5";
				hitpoint = "Light_5";
			};
			class Light_6: Light_1
			{
				position = "Light_6";
				direction = "Light_6_dir";
				selection = "Light_6";
				hitpoint = "Light_6";
			};
			class Light_7: Light_1
			{
				position = "Light_7";
				direction = "Light_7_dir";
				selection = "Light_7";
				hitpoint = "Light_7";
			};
			class Light_8: Light_1
			{
				position = "Light_8";
				direction = "Light_8_dir";
				selection = "Light_8";
				hitpoint = "Light_8";
			};
			class Light_9: Light_1
			{
				position = "Light_9";
				direction = "Light_9_dir";
				selection = "Light_9";
				hitpoint = "Light_9";
			};
		};
		aggregateReflectors[] = {{"Light_1"},{"Light_2","Light_3","Light_4"},{"Light_5","Light_6","Light_7","Light_8","Light_9"}};
	};
	class Land_A3PL_Cinema: A3PL_Houses
	{
		model = "\A3PL_Houses\Cinema\A3PL_Cinema";
		displayName = "A3PL Cinema";
		hiddenSelections[] = {"mainscreen","mainscreen2","cachescreen","cachescreen2"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,0,1.0,co)","#(argb,8,8,3)color(0,0,0,1.0,co)","",""};
	};
	class Land_A3PL_Showroom: A3PL_Houses
	{
		model = "\A3PL_Houses\Showroom\A3PL_Showroom";
		displayName = "A3PL Showroom";
		class Reflectors
		{
			class Light_9
			{
				color[] = {50,50,50};
				ambient[] = {10,10,10};
				intensity = 5;
				size = 1;
				innerAngle = 90;
				outerAngle = 360;
				coneFadeCoef = 1;
				position = "Light_9";
				direction = "Light_9_dir";
				hitpoint = "Light_9";
				selection = "Light_9";
				useFlare = 1;
				flareSize = 0.8;
				flareMaxDistance = 250;
				class Attenuation
				{
					start = 0;
					constant = 20;
					linear = 0;
					quadratic = 0.5;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
			class Light_1: Light_9
			{
				color[] = {10,10,10};
				ambient[] = {0,0,0};
				intensity = 0;
				size = 0;
				coneFadeCoef = 0;
				position = "Light_1";
				direction = "Light_1_dir";
				hitpoint = "Light_1";
				selection = "Light_1";
				useFlare = 1;
				flareSize = 0.8;
				flareMaxDistance = 250;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 0;
					hardLimitStart = 0.5;
					hardLimitEnd = 2;
				};
			};
			class Light_2: Light_9
			{
				position = "Light_2";
				direction = "Light_2_dir";
				hitpoint = "Light_2";
				selection = "Light_2";
			};
			class Light_3: Light_1
			{
				position = "Light_3";
				direction = "Light_3_dir";
				hitpoint = "Light_3";
				selection = "Light_3";
			};
			class Light_4: Light_1
			{
				position = "Light_4";
				direction = "Light_4_dir";
				selection = "Light_4";
				hitpoint = "Light_4";
			};
			class Light_5: Light_9
			{
				position = "Light_5";
				direction = "Light_5_dir";
				selection = "Light_5";
				hitpoint = "Light_5";
			};
			class Light_6: Light_1
			{
				position = "Light_6";
				direction = "Light_6_dir";
				selection = "Light_6";
				hitpoint = "Light_6";
			};
			class Light_7: Light_1
			{
				position = "Light_7";
				direction = "Light_7_dir";
				selection = "Light_7";
				hitpoint = "Light_7";
			};
			class Light_8: Light_1
			{
				position = "Light_8";
				direction = "Light_8_dir";
				selection = "Light_8";
				hitpoint = "Light_8";
			};
			class Light_10: Light_1
			{
				position = "Light_10";
				direction = "Light_10_dir";
				selection = "Light_10";
				hitpoint = "Light_10";
			};
			class Light_11: Light_1
			{
				position = "Light_11";
				direction = "Light_11_dir";
				selection = "Light_11";
				hitpoint = "Light_11";
			};
			class Light_12: Light_1
			{
				position = "Light_12";
				direction = "Light_12_dir";
				selection = "Light_12";
				hitpoint = "Light_12";
			};
			class Light_13: Light_9
			{
				position = "Light_13";
				direction = "Light_13_dir";
				selection = "Light_13";
				hitpoint = "Light_13";
			};
			class Light_14: Light_1
			{
				position = "Light_14";
				direction = "Light_14_dir";
				selection = "Light_14";
				hitpoint = "Light_14";
			};
			class Light_15: Light_1
			{
				position = "Light_15";
				direction = "Light_15_dir";
				selection = "Light_15";
				hitpoint = "Light_15";
			};
		};
		aggregateReflectors[] = {{"Light_1","Light_2","Light_3","Light_4","Light_5","Light_6","Light_7","Light_8","Light_9","Light_10","Light_11","Light_12","Light_13","Light_14","Light_15"}};
	};
	class Land_A3PL_Sheriffpd: A3PL_Houses
	{
		model = "\A3PL_Houses\SheriffPD\A3PL_SheriffPD";
		displayName = "A3PL Sheriff PD";
	};
	class Land_A3PL_Firestation: A3PL_Houses
	{
		model = "\A3PL_Houses\FireStation\A3PL_FireStation";
		displayName = "A3PL Fire Station";
		vehicleClass = "A3PL_Houses";
		class Reflectors
		{
			class Light_1
			{
				color[] = {1000,650,400};
				ambient[] = {10,6.5,4};
				intensity = 5;
				size = 1;
				innerAngle = 90;
				outerAngle = 360;
				coneFadeCoef = 1;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1";
				selection = "Light_1";
				useFlare = 1;
				flareSize = 0.8;
				flareMaxDistance = 250;
				class Attenuation
				{
					start = 0;
					constant = 20;
					linear = 0;
					quadratic = 0.5;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
			class Light_2: Light_1
			{
				position = "Light_2_pos";
				direction = "Light_2_dir";
				hitpoint = "Light_2";
				selection = "Light_2";
			};
			class Light_3: Light_1
			{
				position = "Light_3_pos";
				direction = "Light_3_dir";
				hitpoint = "Light_3";
				selection = "Light_3";
			};
			class Light_4: Light_1
			{
				position = "Light_4_pos";
				direction = "Light_4_dir";
				selection = "Light_4";
				hitpoint = "Light_4";
			};
			class Light_5: Light_1
			{
				position = "Light_5_pos";
				direction = "Light_5_dir";
				selection = "Light_5";
				hitpoint = "Light_5";
			};
			class Light_6: Light_1
			{
				position = "Light_6_pos";
				direction = "Light_6_dir";
				selection = "Light_6";
				hitpoint = "Light_6";
			};
			class Light_7: Light_1
			{
				position = "Light_7_pos";
				direction = "Light_7_dir";
				selection = "Light_7";
				hitpoint = "Light_7";
			};
			class Light_8: Light_1
			{
				position = "Light_8_pos";
				direction = "Light_8_dir";
				selection = "Light_8";
				hitpoint = "Light_8";
			};
			class Light_9: Light_1
			{
				position = "Light_9_pos";
				direction = "Light_9_dir";
				selection = "Light_9";
				hitpoint = "Light_9";
			};
			class Light_10: Light_1
			{
				position = "Light_10_pos";
				direction = "Light_10_dir";
				selection = "Light_10";
				hitpoint = "Light_10";
			};
		};
		aggregateReflectors[] = {{"Light_1"},{"Light_2"},{"Light_3"},{"Light_4"},{"Light_5"},{"Light_6"},{"Light_7"},{"Light_8"},{"Light_9"},{"Light_10"}};
		ladders[] = {{"Ladder_1_start","Ladder_1_end"}};
	};
	class Land_A3PL_Trainingyard: A3PL_Houses
	{
		model = "\A3PL_Houses\FireStation\A3PL_TrainingYard";
		displayName = "A3PL Training Yard";
	};
	class Land_A3PL_Prison: A3PL_Houses
	{
		model = "\A3PL_Houses\Prison\A3PL_Prison";
		displayName = "A3PL Prison";
		hiddenSelections[] = {"console_cell1","console_cell2","console_cell3","console_cell4","console_cell5","console_cell6","console_cell7","console_cell8","console_cell9","console_cell10","console_cell11","console_cell12","console_cell13","console_cell14","console_garage","console_maincell1","console_maincell2","console_maincell3"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,0,0,1.0,co)","#(argb,8,8,3)color(1,0,0,1.0,co)","#(argb,8,8,3)color(1,0,0,1.0,co)","#(argb,8,8,3)color(1,0,0,1.0,co)","#(argb,8,8,3)color(1,0,0,1.0,co)","#(argb,8,8,3)color(1,0,0,1.0,co)","#(argb,8,8,3)color(1,0,0,1.0,co)","#(argb,8,8,3)color(1,0,0,1.0,co)","#(argb,8,8,3)color(1,0,0,1.0,co)","#(argb,8,8,3)color(1,0,0,1.0,co)","#(argb,8,8,3)color(1,0,0,1.0,co)","#(argb,8,8,3)color(1,0,0,1.0,co)","#(argb,8,8,3)color(1,0,0,1.0,co)","#(argb,8,8,3)color(1,0,0,1.0,co)","#(argb,8,8,3)color(1,0,0,1.0,co)","#(argb,8,8,3)color(1,0,0,1.0,co)","#(argb,8,8,3)color(1,0,0,1.0,co)","#(argb,8,8,3)color(1,0,0,1.0,co)"};
	};
	class Land_A3PL_Ranch1: A3PL_Houses
	{
		model = "\A3PL_Houses\Ranches\A3PL_Ranch1.p3d";
		displayName = "Ranch";
	};
	class Land_A3PL_Ranch2: A3PL_Houses
	{
		model = "\A3PL_Houses\Ranches\A3PL_Ranch2.p3d";
		displayName = "Ranch";
	};
	class Land_A3PL_Ranch3: A3PL_Houses
	{
		model = "\A3PL_Houses\Ranches\A3PL_Ranch3.p3d";
		displayName = "Ranch";
	};
	class Land_A3PL_BarGate: A3PL_Houses
	{
		model = "\A3PL_Houses\BarGate\A3PL_BarGate";
		displayName = "A3PL Bargate";
	};
	class Land_A3PL_PostOffice: A3PL_Houses
	{
		model = "\A3PL_Houses\Post_Office\A3PL_PostOffice";
		displayName = "A3PL Post Office";
	};
	class Land_A3PL_ATCTower: A3PL_Houses
	{
		model = "\A3PL_Houses\control_tower\A3PL_ATCTower";
		displayName = "A3PL ATC Tower";
		class Reflectors
		{
			class Light_1
			{
				color[] = {10,6.5,4};
				ambient[] = {10,6.5,4};
				intensity = 5;
				size = 1;
				innerAngle = 90;
				outerAngle = 360;
				coneFadeCoef = 1;
				position = "Light_1";
				direction = "Light_1_dir";
				hitpoint = "Light_1";
				selection = "Light_1";
				useFlare = 1;
				flareSize = 0.8;
				flareMaxDistance = 250;
				class Attenuation
				{
					start = 0;
					constant = 20;
					linear = 0;
					quadratic = 0.5;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
			class Light_2: Light_1
			{
				position = "Light_2";
				direction = "Light_2_dir";
				hitpoint = "Light_2";
				selection = "Light_2";
			};
			class Light_3: Light_1
			{
				position = "Light_3";
				direction = "Light_3_dir";
				hitpoint = "Light_3";
				selection = "Light_3";
			};
			class Light_4: Light_1
			{
				position = "Light_4";
				direction = "Light_4_dir";
				selection = "Light_4";
				hitpoint = "Light_4";
			};
			class Light_5: Light_1
			{
				position = "Light_5";
				direction = "Light_5_dir";
				selection = "Light_5";
				hitpoint = "Light_5";
			};
			class Light_6: Light_1
			{
				position = "Light_6";
				direction = "Light_6_dir";
				selection = "Light_6";
				hitpoint = "Light_6";
			};
			class Light_7: Light_1
			{
				position = "Light_7";
				direction = "Light_7_dir";
				selection = "Light_7";
				hitpoint = "Light_7";
			};
			class Light_8: Light_1
			{
				position = "Light_8";
				direction = "Light_8_dir";
				selection = "Light_8";
				hitpoint = "Light_8";
			};
			class Light_9: Light_1
			{
				position = "Light_9";
				direction = "Light_9_dir";
				selection = "Light_9";
				hitpoint = "Light_9";
			};
			class Light_10: Light_1
			{
				position = "Light_10";
				direction = "Light_10_dir";
				selection = "Light_10";
				hitpoint = "Light_10";
			};
			class Light_11: Light_1
			{
				position = "Light_11";
				direction = "Light_11_dir";
				selection = "Light_11";
				hitpoint = "Light_11";
			};
			class Light_12: Light_1
			{
				position = "Light_12";
				direction = "Light_12_dir";
				selection = "Light_12";
				hitpoint = "Light_12";
			};
			class Light_13: Light_1
			{
				position = "Light_13";
				direction = "Light_13_dir";
				selection = "Light_13";
				hitpoint = "Light_13";
			};
		};
		aggregateReflectors[] = {{"Light_1","Light_2","Light_3","Light_4","Light_5","Light_6","Light_7","Light_8","Light_9"},{"Light_10","Light_11","Light_12","Light_13"}};
	};
};
class cfgMods
{
	author = "Marshall";
	timepacked = "1673956682";
};
