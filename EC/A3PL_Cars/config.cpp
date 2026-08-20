class CfgPatches
{
	class A3PL_Cars
	{
		units[]=
		{
			"A3PL_Rear_Ladder"
		};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Soft_F"
		};
		requiredVersion=0.30000001;
	};
};

class CopilotTurret;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
		class NewTurret;
	};
	class Car_F: Car
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitFuel;
			class HitEngine;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};

		class EventHandlers;
		class Sounds;
		class AnimationSources;
	};

	class I_APC_tracked_03_base_F;
	class I_APC_tracked_03_cannon_F: I_APC_tracked_03_base_F
	{
		class AnimationSources;
		class HitPoints;
		class Sounds;
		class MainTurret;
		class Turrets;
	};

	class Truck_F: Car_F
	{
	};
	class Truck_02_base_F: Truck_F
	{
		class HitPoints
		{
			class HitFuel;
			class HitEngine;
			class HitBody;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class EventHandlers;
		class AnimationSources;
		class Sounds;
	};

	class Plane_Base_F;
	class Plane_Civil_01_base_F: Plane_Base_F
	{
		class AnimationSources;
		class EventHandlers;
		class ViewPilot;
		class Turrets;
		class CopilotTurret;
		class Sounds;
	};

	class Heli_Transport_01_base_F;
	class B_Heli_Transport_01_F: Heli_Transport_01_base_F
	{
		class Turrets;
		class AnimationSources;
		class Eventhandlers;
		class ViewOptics;
		class ViewPilot;
		class Sounds;
		class HitPoints;
		class ViewGunner;
		class CopilotTurret;
	};

	class A3PL_Car_Base: Car_F
	{
		photo="\A3PL_Cars\A3FL.paa";
		picture="\A3PL_Cars\A3FL.paa";
		icon="\A3PL_Cars\A3FL.paa";

		hiddenSelections[]={"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","glass1","glass2","glass3","glass4","glass5","glass6"};
		hiddenSelectionsTextures[]={"#(argb,8,8,3)color(0,0,0,1.0,CO)","","","","","","","","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)"};
		

		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3PL_Cars\Common\rvmats\car_paint_old.rvmat",
				"A3PL_Cars\Common\rvmats\Body_damage.rvmat",
				"A3PL_Cars\Common\rvmats\Body_destruct.rvmat",
				"A3PL_Cars\Common\rvmats\Car_paint.rvmat",
				"A3PL_Cars\Common\rvmats\Body_damage.rvmat",
				"A3PL_Cars\Common\rvmats\Body_destruct.rvmat",
				"A3PL_Cars\Common\rvmats\Car_paint_mat.rvmat",
				"A3PL_Cars\Common\rvmats\Body_damage.rvmat",
				"A3PL_Cars\Common\rvmats\Body_destruct.rvmat"
			};
		};

		class Sounds
		{
			delete Engine;
			delete Engine_ext;
			delete Engine_int;
			delete Idle_ext;
			delete Idle_int;
			delete IdleThrust;
			delete IdleThrust_int;
			delete Engine1_ext;
			delete Engine1_int;
			delete Engine1_Thrust_ext;
			delete Engine1_Thrust_int;
			delete Engine2_ext;
			delete Engine2_int;
			delete Engine2_Thrust_ext;
			delete Engine2_Thrust_int;
			delete Engine3_ext;
			delete Engine3_int;
			delete Engine3_Thrust_ext;
			delete Engine3_Thrust_int;
			delete Engine4_ext;
			delete Engine4_int;
			delete Engine4_Thrust_ext;
			delete Engine4_Thrust_int;
			delete Engine5_ext;
			delete Engine5_int;
			delete Engine5_Thrust_ext;
			delete Engine5_Thrust_int;
			class Movement
			{
				sound="soundEnviron";
				frequency="1";
				volume="0";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					0.39810717,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.25118864,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		collisionEffect="EmptyEffect";
		Crash0[]=
		{
			"",
			1,
			1,
			100
		};
		Crash1[]=
		{
			"",
			1,
			1,
			100
		};
		Crash2[]=
		{
			"",
			1,
			1,
			100
		};
		Crash3[]=
		{
			"",
			1,
			1,
			100
		};
		Crash4[]=
		{
			"",
			1,
			1,
			100
		};
		ArmorCrash0[]=
		{
			"",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"",
			1,
			1,
			200
		};
		buildCrash0[]=
		{
			"",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"",
			1,
			1,
			200
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		WoodCrash0[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash4[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash5[]=
		{
			"",
			1,
			1,
			200
		};

		displayName="A3PL_Car_Base";
		class Library
		{
			libTextDesc="";
		};

		class UserActions {};

		author="Jonzie / Gaming";

		crew="C_man_1";
		side=3;
		faction="CIV_F";

		class Turrets {};

		class EventHandlers
		{
			init="[_this] spawn A3PL_HandleVehicleInit";
		};

		nameSound="veh_vehicle_car_s";

		class AnimationSources: AnimationSources
		{
			class Light
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class Proxy
			{
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class Common
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Head_Lights: Common {};
			class High_Beam: Common {};
			class Spotlight: Common {};
			class Spotlight_Rotate: Common {};
			class Lightbar: Common {};
			class Directional_R: Common {};
			class Directional_S: Common {};
			class Directional_F: Common {};
			class Lightbar1
			{
				source="MarkerLight";
				markerLight="Lightbar1";
			};
			class Lightbar2: Lightbar1
			{
				markerLight="Lightbar2";
			};
			class DirectL1: Lightbar1
			{
				markerLight="DirectL1";
			};
			class DirectL2: Lightbar1
			{
				markerLight="DirectL2";
			};
			class DirectL3: Lightbar1
			{
				markerLight="DirectL3";
			};
			class DirectL4: Lightbar1
			{
				markerLight="DirectL4";
			};
			class DirectL5: Lightbar1
			{
				markerLight="DirectL5";
			};
			class DirectL6: Lightbar1
			{
				markerLight="DirectL6";
			};
			class DirectL7: Lightbar1
			{
				markerLight="DirectL7";
			};
			class DirectL8: Lightbar1
			{
				markerLight="DirectL8";
			};
			class DirectR1: Lightbar1
			{
				markerLight="DirectR1";
			};
			class DirectR2: Lightbar1
			{
				markerLight="DirectR2";
			};
			class DirectR3: Lightbar1
			{
				markerLight="DirectR3";
			};
			class DirectR4: Lightbar1
			{
				markerLight="DirectR4";
			};
			class DirectR5: Lightbar1
			{
				markerLight="DirectR5";
			};
			class DirectR6: Lightbar1
			{
				markerLight="DirectR6";
			};
			class DirectR7: Lightbar1
			{
				markerLight="DirectR7";
			};
			class DirectR8: Lightbar1
			{
				markerLight="DirectR8";
			};
			class DirectS1: Lightbar1
			{
				markerLight="DirectS1";
			};
			class DirectS2: Lightbar1
			{
				markerLight="DirectS2";
			};
			class DirectS3: Lightbar1
			{
				markerLight="DirectS3";
			};
			class DirectS4: Lightbar1
			{
				markerLight="DirectS4";
			};
			class DirectS5: Lightbar1
			{
				markerLight="DirectS5";
			};
			class DirectS6: Lightbar1
			{
				markerLight="DirectS6";
			};
			class DirectS7: Lightbar1
			{
				markerLight="DirectS7";
			};
			class DirectS8: Lightbar1
			{
				markerLight="DirectS8";
			};
			class DirectF1: Lightbar1
			{
				markerLight="DirectF1";
			};
			class DirectF2: Lightbar1
			{
				markerLight="DirectF2";
			};
			class DirectF3: Lightbar1
			{
				markerLight="DirectF3";
			};
			class DirectF4: Lightbar1
			{
				markerLight="DirectF4";
			};
			class DirectF5: Lightbar1
			{
				markerLight="DirectF5";
			};
			class DirectF6: Lightbar1
			{
				markerLight="DirectF6";
			};
			class DirectF7: Lightbar1
			{
				markerLight="DirectF7";
			};
			class DirectF8: Lightbar1
			{
				markerLight="DirectF8";
			};
			class Fair_Available: Common {};
			class Hitched: Common
			{
				animPeriod=1;
			};
			class Turntable: Common
			{
				initPhase=0.25;
			};
			class Boom: Common {};
			class Collision_Lights: Common {};
			class Mods
			{
				initPhase=0;
				displayName="Mods";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
			class Towbar_Addon: Mods
			{
				displayName="Towbar Addon";
				forceAnimate[]=
				{
					"Turntable",
					0
				};
			};
			class Doors
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class AUX
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class Siren_Control_Noob
			{
				source="user";
				animPeriod=0.050000001;
				initPhase=5.5999999;
			};
			class Laptop
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class Laptop_Top
			{
				source="user";
				animPeriod=1.5;
				initPhase=0;
			};
			class LPlate
			{
				source="user";
				animPeriod=1.5;
				initPhase=0;
			};
			class HitLFWheel
			{
				source="Hit";
				hitpoint="HitLFWheel";
				raw=1;
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint="HitRFWheel";
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint="HitLF2Wheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint="HitRF2Wheel";
			};
			class HitLF2Wheel: HitLFWheel
			{
				hitpoint="HitLBWheel";
			};
			class HitRF2Wheel: HitLFWheel
			{
				hitpoint="HitRBWheel";
			};
			class HitLMWheel: HitLFWheel
			{
				hitpoint="HitLMWheel";
			};
			class HitRMWheel: HitLFWheel
			{
				hitpoint="HitRMWheel";
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
			class HitRGlass: HitGlass1
			{
				hitpoint="HitRGlass";
			};
			class HitLGlass: HitGlass1
			{
				hitpoint="HitLGlass";
			};
			class DoorL
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class DoorR
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Door_LF
			{
				source="door";
				animPeriod=0.40000001;
				sound="A3PL_Open_Close";
				soundPosition="Door_LF_axis";
			};
			class Door_RF: Door_LF
			{
				soundPosition="Door_RF_axis";
			};
			class Door_LB: Door_LF
			{
				soundPosition="Door_LB_axis";
			};
			class Door_LB2: Door_LF
			{
				soundPosition="Door_LB2_axis";
			};
			class Door_LB3: Door_LF
			{
				soundPosition="Door_LB3_axis";
			};
			class Door_LB4: Door_LF
			{
				soundPosition="Door_LB4_axis";
			};
			class Door_LB5: Door_LF
			{
				soundPosition="Door_LB5_axis";
			};
			class Door_LB6: Door_LF
			{
				soundPosition="Door_LB6_axis";
			};
			class Door_RB: Door_LF
			{
				soundPosition="Door_RB_axis";
			};
			class Door_RB2: Door_LF
			{
				soundPosition="Door_RB2_axis";
			};
			class Door_RB3: Door_LF
			{
				soundPosition="Door_RB3_axis";
			};
			class Door_RB4: Door_LF
			{
				soundPosition="Door_RB4_axis";
			};
			class Door_RB5: Door_LF
			{
				soundPosition="Door_RB5_axis";
			};
			class Door_RB6: Door_LF
			{
				soundPosition="Door_RB6_axis";
			};
			class Trunk: Door_LF
			{
				soundPosition="Trunk_axis";
				animPeriod=1;
				source="user";
			};
			class Hood: Door_LF
			{
				soundPosition="Bonnet_axis";
				animPeriod=1;
				source="user";
			};
			class Cargo_Door
			{
				source="user";
				animPeriod=1;
				sound="A3PL_Cargo_Open_Close";
				soundPosition="";
			};
			class Cargo_Door_1: Cargo_Door
			{
				soundPosition="Cargo_Door_1_axis";
			};
			class Cargo_Door_2: Cargo_Door
			{
				soundPosition="Cargo_Door_2_axis";
			};
			class Cargo_Door_3: Cargo_Door
			{
				soundPosition="Cargo_Door_3_axis";
			};
			class Cargo_Door_4: Cargo_Door
			{
				soundPosition="Cargo_Door_4_axis";
			};
			class Cargo_Door_5: Cargo_Door
			{
				soundPosition="Cargo_Door_5_axis";
			};
			class Cargo_Door_6: Cargo_Door
			{
				soundPosition="Cargo_Door_6_axis";
			};
			class Cargo_Door_7: Cargo_Door
			{
				soundPosition="Cargo_Door_7_axis";
			};
			class Cargo_Door_8: Cargo_Door
			{
				soundPosition="Cargo_Door_8_axis";
			};
			class Cargo_Door_9: Cargo_Door
			{
				soundPosition="Cargo_Door_9_axis";
			};
			class Cargo_Door_10: Cargo_Door
			{
				soundPosition="Cargo_Door_10_axis";
			};
			class Cargo_Door_11: Cargo_Door
			{
				soundPosition="Cargo_Door_11_axis";
			};
			class Cargo_Door_12: Cargo_Door
			{
				soundPosition="Cargo_Door_12_axis";
			};
			class Cargo_Door_13: Cargo_Door
			{
				soundPosition="Cargo_Door_13_axis";
			};
			class Cargo_Door_14: Cargo_Door
			{
				soundPosition="Cargo_Door_14_axis";
			};
			class Cargo_Door_15: Cargo_Door
			{
				soundPosition="Cargo_Door_15_axis";
			};
			class Cargo_Door_16: Cargo_Door
			{
				soundPosition="Cargo_Door_16_axis";
			};
			class Cargo_Door_17: Cargo_Door
			{
				soundPosition="Cargo_Door_17_axis";
			};
			class Cargo_Door_18: Cargo_Door
			{
				soundPosition="Cargo_Door_18_axis";
			};
			class Cargo_Door_19: Cargo_Door
			{
				soundPosition="Cargo_Door_19_axis";
			};
			class Cargo_Door_20: Cargo_Door
			{
				soundPosition="Cargo_Door_20_axis";
			};
			class Outriggers
			{
				source="user";
				animPeriod=5;
				sound="A3PL_Hydraulic";
				soundPosition="";
			};
			class Extension
			{
				source="user";
				animPeriod=5;
			};
			class Solid_Red1
			{
				source="MarkerLight";
				markerLight="Solid_Red1";
			};
			class Solid_White1: Solid_Red1
			{
				markerLight="Solid_White1";
			};
		};
		class HitPoints: HitPoints
		{
			class HitFuel: HitFuel
			{
				armor=2;
				passThrough=1;
				minimalHit=0.1;
				explosionShielding=1.5;
				radius=0.25;
				name="palivo";
			};
			class HitEngine: HitEngine
			{
				armor=0.5;
				passThrough=1;
				minimalHit=0.1;
				explosionShielding=0.5;
				radius=0.44999999;
				name="engine";
			};
			class HitBody: HitBody
			{
				armor=1;
				passThrough=1;
				minimalHit=0;
				explosionShielding=1.5;
				radius=0.33000001;
				name="Body";
				visual="Body";
			};
			class HitLFWheel: HitLFWheel
			{
				name="wheel_1_1_steering";
				armor=0.125;
				material=-1;
				passThrough=0;
				explosionShielding=4;
				radius=0.25;
				visual="";
			};
			class HitLF2Wheel: HitLFWheel
			{
				name="wheel_1_2_steering";
			};
			class HitLMWheel: HitLFWheel
			{
				name="wheel_1_3_steering";
			};
			class HitLBWheel: HitLFWheel
			{
				name="wheel_1_4_steering";
			};
			class HitRFWheel: HitLFWheel
			{
				name="wheel_2_1_steering";
			};
			class HitRF2Wheel: HitLFWheel
			{
				name="wheel_2_2_steering";
			};
			class HitRMWheel: HitLFWheel
			{
				name="wheel_2_3_steering";
			};
			class HitRBWheel: HitLFWheel
			{
				name="wheel_2_4_steering";
			};
			class HitGlass1
			{
				armor=0.050000001;
				material=-1;
				name="glass1";
				visual="glass1";
				passThrough=0;
				radius=0.40000001;
			};
			class HitGlass2: HitGlass1
			{
				name="glass2";
				visual="glass2";
			};
			class HitGlass3: HitGlass1
			{
				name="glass3";
				visual="glass3";
			};
			class HitGlass4: HitGlass1
			{
				name="glass4";
				visual="glass4";
			};
			class HitGlass5: HitGlass1
			{
				name="glass5";
				visual="glass5";
			};
			class HitGlass6: HitGlass1
			{
				name="glass6";
				visual="glass6";
			};
			class HitGlass7: HitGlass1
			{
				name="glass7";
				visual="glass7";
			};
			class HitGlass8: HitGlass1
			{
				name="glass8";
				visual="glass8";
			};
			class HitGlass9: HitGlass1
			{
				name="glass9";
				visual="glass9";
			};
			class HitGlass10: HitGlass1
			{
				name="glass10";
				visual="glass10";
			};
			class HitRGlass: HitGlass1
			{
				name="RGlass";
				visual="RGlass";
			};
			class HitLGlass: HitGlass1
			{
				name="LGlass";
				visual="LGlass";
			};
		};

		class textureSources {};
		textureList[]={};

		vehicleClass="A3PL_Vehicles";
		model="";

		transportSoldier=3;
		armor=100;
		getInProxyOrder[]={1,2,3};

		driverDoor="Door_LF";
		cargoDoors[]=
		{
			"Door_RF",
			"Door_LB",
			"Door_RB"
		};

		weapons[]=
		{
			"A3PL_CarHorn"
		};

		class TransportItems {};
		class TransportMagazines {};
		class TransportWeapons {};

		driverAction="A3PL_Driver1";
		cargoAction[]=
		{
			"passenger_low01"
		};
		cargoIsCoDriver[]={1,0};
		driverLeftHandAnimName="steering_wheel";
		driverRightHandAnimName="steering_wheel";
		differentialType="rear_open";
		dustBackLeftPos="wheel_1_2_bound";
		dustBackRightPos="wheel_2_2_bound";
		dustFrontLeftPos="wheel_1_1_bound";
		dustFrontRightPos="wheel_2_1_bound";
		secondaryExplosion=0;
		supplyRadius=1;
		simulation="carx";
		crewCrashProtection=2;
		ejectDeadGunner="true";
		ejectDeadCargo="true";
		ejectDeadDriver="true";
		ejectDeadCommander="true";
		extCameraPosition[]={0,0.5,-5};

		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1_pos";
				direction="exhaust1_dir";
				effect="ExhaustEffectOffroad";
			};
			class Exhaust2: Exhaust1
			{
				position="exhaust2_pos";
				direction="exhaust2_dir";
			};
		};

		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		forceInGarage=0;

		terrainCoef=5;
		turnCoef=2.5;
		fireResistance=5;
		transportMaxBackpacks=4;

		attenuationEffectType="OpenCarAttenuation";
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_start",
			0.39810717,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_start",
			0.44668359,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_stop",
			0.39810717,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_stop",
			0.44668359,
			1,
			200
		};

		insideSoundCoef=1;
		outsideSoundFilter=1;
		occludeSoundsWhenIn=1;
		obstructSoundsWhenIn=1;
		obstructSoundLFRatio=1;
		occludeSoundLFRatio=1;

		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
			class CenterMirror
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
			class RightMirror
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
			class Reversing_Camera
			{
				renderTarget="rendertarget3";
				class Camera
				{
					pointPosition="PIP3_pos";
					pointDirection="PIP3_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
		};

		slowSpeedForwardCoef=1;
		normalSpeedForwardCoef=1;
		brakeIdleSpeed=0.5;
		frontRearSplit=0.25;
		frontBias=2.5;
		rearBias=2;
		centreBias=1.5;
		clutchStrength=5;
		torqueCurve[]=
		{
			{0.11,0.6},
			{0.185,0.713},
			{0.35,0.975},
			{0.5,1},
			{0.75,0.975},
			{0.85,0.755},
			{1,0.62}
		};
		changeGearMinEffectivity[]={0.55,0.15,0.95,0.95,0.95,0.95,0.95};
		switchTime=0.14;
		latency=1;
		dampersBumpCoef=0.05;
		dampingRateFullThrottle=0.1;
		dampingRateZeroThrottleClutchDisengaged=0.16;
		dampingRateZeroThrottleClutchEngaged=0.05;
		wheelDamageRadiusCoef=0.9;
		wheelDestroyRadiusCoef=0.6;
		wheelDamageThreshold=0.025;
		wheelCircumference=2;
		antiRollbarForceCoef=1.3;
		antiRollbarForceLimit=1.3;
		antiRollbarSpeedMin=1.3;
		antiRollbarSpeedMax=4;
		maxFordingDepth=0.5;
		waterResistance=1;
		maxSpeed=450;
		idleRpm=900;
		redRpm=11900;
		enginePower=350;
		maxOmega=1247;
		peakTorque=400;
		engineLosses=8;
		thrustDelay=0.05;
		fuelCapacity=16.6;
		accelAidForceCoef=2;
		accelAidForceYOffset=-1;
		accelAidForceSpd=2;
		engineMOI=0.6;

		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-5,
				"N",
				0,
				"D1",
				4,
				"D2",
				3.75,
				"D3",
				2.5,
				"D4",
				1.5,
				"D5",
				2,
				"D6",
				1.8
			};
			TransmissionRatios[]=
			{
				"High",
				3.25
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.01;
		};

		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width=0.3;
				mass=30;
				MOI=5.3;
				dampingRate=0.25;
				dampingRateDamaged=0.25;
				dampingRateDestroyed=5000;
				maxCompression=0.1;
				mMaxDroop=0.1;
				sprungMass=450;
				springStrength=60000;
				springDamperRate=8500;
				longitudinalStiffnessPerUnitGravity=2000;
				suspTravelDirection[]={0,-1.5,0};
				frictionVsSlipGraph[]={{0.75,1},{1,1},{1,1}};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxHandBrakeTorque=0;
				maxBrakeTorque=5000;
				latStiffX=18;
				latStiffY=180;
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				sprungMass=450*1.5;
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=15000;
				latStiffX=18;
				latStiffY=180;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				steering=1;
				side="right";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				sprungMass=450;
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				maxHandBrakeTorque=0;
				maxBrakeTorque=5000;
				latStiffX=18;
				latStiffY=180;
			};
			class RR: LF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				sprungMass=450*1.5;
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=15000;
				latStiffX=18;
				latStiffY=18000;
			};
		};
		memoryPointTrackFLL="stopa pll";
		memoryPointTrackFLR="stopa plp";
		memoryPointTrackBLL="stopa zll";
		memoryPointTrackBLR="stopa zlp";
		memoryPointTrackFRL="stopa ppl";
		memoryPointTrackFRR="stopa ppp";
		memoryPointTrackBRL="stopa zpl";
		memoryPointTrackBRR="stopa zpp";
		class PlayerSteeringCoefficients /// steering sensitivity configuration
		{
			turnIncreaseConst	= 0.95; // basic sensitivity value, higher value = faster steering
			turnIncreaseLinear	= 0.5; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
			turnIncreaseTime	= 0.5; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle

			turnDecreaseConst	= 6.5; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
			turnDecreaseLinear	= 2; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
			turnDecreaseTime	= 0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position

			maxTurnHundred		= 1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
		};

		class Reflectors
		{
			class LightCarHeadL01
			{
				color[]={1000,1000,1200};
				ambient[]={15,15,15};
				position="LightCarHeadL01";
				direction="LightCarHeadL01_end";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class LightCarHeadR01: LightCarHeadL01
			{
				position="LightCarHeadR01";
				direction="LightCarHeadR01_end";
				hitpoint="P svetlo";
				selection="P svetlo";
			};
			class LightCarHeadL02: LightCarHeadL01
			{
				position="LightCarHeadL02";
				direction="LightCarHeadL02_end";
				hitpoint="HighBeamL";
				color[]={1300,1300,2200};
				innerAngle=60;
				outerAngle=100;
				coneFadeCoef=10;
				intensity=2;
				class Attenuation
				{
					start=2;
					constant=0;
					linear=0.1;
					quadratic=0.0099999998;
					hardLimitStart=390;
					hardLimitEnd=450;
				};
			};
			class LightCarHeadR02: LightCarHeadR01
			{
				position="LightCarHeadR02";
				direction="LightCarHeadR02_end";
				hitpoint="HighBeamR";
				color[]={1300,1300,2200};
				innerAngle=60;
				outerAngle=100;
				coneFadeCoef=10;
				intensity=2;
				class Attenuation
				{
					start=2;
					constant=0;
					linear=0.1;
					quadratic=0.0099999998;
					hardLimitStart=390;
					hardLimitEnd=450;
				};
			};
		};

		aggregateReflectors[]=
		{
			
			{
				"LightCarHeadL01",
				"LightCarHeadR01"
			},
			
			{
				"LightCarHeadL02",
				"LightCarHeadR02"
			}
		};

	};
	class A3PL_Truck_Base: Truck_02_base_F
	{
		photo="\A3PL_Cars\A3FL.paa";
		picture="\A3PL_Cars\A3FL.paa";
		icon="\A3PL_Cars\A3FL.paa";

		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3PL_Cars\Common\rvmats\car_paint_old.rvmat",
				"A3PL_Cars\Common\rvmats\Body_damage.rvmat",
				"A3PL_Cars\Common\rvmats\Body_destruct.rvmat",
				"A3PL_Cars\Common\rvmats\Car_paint.rvmat",
				"A3PL_Cars\Common\rvmats\Body_damage.rvmat",
				"A3PL_Cars\Common\rvmats\Body_destruct.rvmat",
				"A3PL_Cars\Common\rvmats\Car_paint_mat.rvmat",
				"A3PL_Cars\Common\rvmats\Body_damage.rvmat",
				"A3PL_Cars\Common\rvmats\Body_destruct.rvmat"
			};
		};

		class EventHandlers
		{
			init="[_this] spawn A3PL_HandleVehicleInit";
		};

		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3PL_FD\Sounds\Idle.ogg",
					0.22387211,
					1,
					150
				};
				frequency="0.9 + ((rpm/ 6900) factor[(400/ 6900),(1150/ 6900)])*0.2";
				volume="engineOn*camPos*(((rpm/ 6900) factor[(400/ 6900),(700/ 6900)]) * ((rpm/ 6900) factor[(1100/ 6900),(900/ 6900)]))* 2";
			};
			class Engine
			{
				sound[]=
				{
					"A3PL_FD\Sounds\1000.ogg",
					0.2818383,
					1,
					200
				};
				frequency="0.8 + ((rpm/ 6900) factor[(900/ 6900),(2100/ 6900)])*0.2";
				volume="engineOn*camPos*(((rpm/ 6900) factor[(870/ 6900),(1100/ 6900)]) * ((rpm/ 6900) factor[(2100/ 6900),(1300/ 6900)]))* 2";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3PL_FD\Sounds\1500.ogg",
					0.3548134,
					1,
					240
				};
				frequency="0.8 +  ((rpm/ 6900) factor[(1300/ 6900),(3100/ 6900)])*0.2";
				volume="engineOn*camPos*(((rpm/ 6900) factor[(1250/ 6900),(2050/ 6900)]) * ((rpm/ 6900) factor[(3100/ 6900),(2300/ 6900)]))* 2";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3PL_FD\Sounds\2000.ogg",
					0.39810717,
					1,
					280
				};
				frequency="0.8 + ((rpm/ 6900) factor[(2200/ 6900),(4100/ 6900)])*0.2";
				volume="engineOn*camPos*(((rpm/ 6900) factor[(2250/ 6900),(3050/ 6900)]) * ((rpm/ 6900) factor[(4100/ 6900),(3300/ 6900)]))* 2";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3PL_FD\Sounds\2500.ogg",
					0.44668359,
					1,
					320
				};
				frequency="0.8 + ((rpm/ 6900) factor[(3300/ 6900),(4900/ 6900)])*0.2";
				volume="engineOn*camPos*(((rpm/ 6900) factor[(3250/ 6900),(4050/ 6900)]) * ((rpm/ 6900) factor[(4870/ 6900),(4200/ 6900)]))* 2";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3PL_FD\Sounds\3000.ogg",
					0.50118721,
					1,
					360
				};
				frequency="0.8 + ((rpm/ 6900) factor[(4200/ 6900),(6200/ 6900)])*0.2";
				volume="engineOn*camPos*(((rpm/ 6900) factor[(4150/ 6900),(4800/ 6900)]) * ((rpm/ 6900) factor[(6150/ 6900),(5150/ 6900)]))* 2";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"A3PL_FD\Sounds\3500.ogg",
					0.56234133,
					1,
					420
				};
				frequency="0.95 + ((rpm/ 6900) factor[(5100/ 6900),(6900/ 6900)])*0.15";
				volume="engineOn*camPos*((rpm/ 6900) factor[(5100/ 6900),(6100/ 6900)])* 2";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3PL_FD\Sounds\Idle.ogg",
					0.17782794,
					1
				};
				frequency="0.9 + ((rpm/ 6900) factor[(400/ 6900),(1150/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 6900) factor[(400/ 6900),(700/ 6900)]) * ((rpm/ 6900) factor[(1100/ 6900),(900/ 6900)]))* 2";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3PL_FD\Sounds\1000.ogg",
					0.19952622,
					1
				};
				frequency="0.8 + ((rpm/ 6900) factor[(900/ 6900),(2100/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 6900) factor[(870/ 6900),(1100/ 6900)]) * ((rpm/ 6900) factor[(2100/ 6900),(1300/ 6900)]))* 2";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3PL_FD\Sounds\1500.ogg",
					0.25118864,
					1
				};
				frequency="0.8 +  ((rpm/ 6900) factor[(1300/ 6900),(3100/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 6900) factor[(1250/ 6900),(2050/ 6900)]) * ((rpm/ 6900) factor[(3100/ 6900),(2300/ 6900)]))* 2";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3PL_FD\Sounds\2000.ogg",
					0.2818383,
					1
				};
				frequency="0.8 + ((rpm/ 6900) factor[(2200/ 6900),(4100/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 6900) factor[(2250/ 6900),(3050/ 6900)]) * ((rpm/ 6900) factor[(4100/ 6900),(3300/ 6900)]))* 2";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3PL_FD\Sounds\2500.ogg",
					0.31622776,
					1
				};
				frequency="0.8 + ((rpm/ 6900) factor[(3300/ 6900),(4900/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 6900) factor[(3250/ 6900),(4050/ 6900)]) * ((rpm/ 6900) factor[(4870/ 6900),(4200/ 6900)]))* 2";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3PL_FD\Sounds\3000.ogg",
					0.3548134,
					1
				};
				frequency="0.8 + ((rpm/ 6900) factor[(4200/ 6900),(6200/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 6900) factor[(4150/ 6900),(4800/ 6900)]) * ((rpm/ 6900) factor[(6150/ 6900),(5150/ 6900)]))* 2";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3PL_FD\Sounds\3500.ogg",
					0.50118721,
					1
				};
				frequency="0.95 + ((rpm/ 6900) factor[(5100/ 6900),(6900/ 6900)])*0.15";
				volume="engineOn*(1-camPos)*((rpm/ 6900) factor[(5100/ 6900),(6100/ 6900)])* 2";
			};
			class Engine1_turbo_ext
			{
				sound[]=
				{
					"A3PL_FD\Sounds\turbo_ext.ogg",
					0.44668359,
					1,
					320
				};
				frequency="0.8 + ((rpm/ 6900) factor[(3300/ 6900),(4900/ 6900)])*0.2";
				volume="engineOn*camPos*(((rpm/ 6900) factor[(3250/ 6900),(4050/ 6900)]) * ((rpm/ 6900) factor[(4870/ 6900),(4200/ 6900)]))";
			};
			class Engine2_turbo_ext
			{
				sound[]=
				{
					"A3PL_FD\Sounds\turbo_ext.ogg",
					0.50118721,
					1,
					360
				};
				frequency="0.8 + ((rpm/ 6900) factor[(4200/ 6900),(6200/ 6900)])*0.2";
				volume="engineOn*camPos*(((rpm/ 6900) factor[(4150/ 6900),(4800/ 6900)]) * ((rpm/ 6900) factor[(6150/ 6900),(5150/ 6900)]))* 1";
			};
			class Engine3_turbo_ext
			{
				sound[]=
				{
					"A3PL_FD\Sounds\turbo_ext.ogg",
					0.56234133,
					1,
					420
				};
				frequency="0.95 + ((rpm/ 6900) factor[(5100/ 6900),(6900/ 6900)])*0.15";
				volume="engineOn*camPos*((rpm/ 6900) factor[(5100/ 6900),(6100/ 6900)])* 2";
			};
			class Engine1_turbo_int
			{
				sound[]=
				{
					"A3PL_FD\Sounds\turbo_ext.ogg",
					0.31622776,
					1
				};
				frequency="0.8 + ((rpm/ 6900) factor[(3300/ 6900),(4900/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 6900) factor[(3250/ 6900),(4050/ 6900)]) * ((rpm/ 6900) factor[(4870/ 6900),(4200/ 6900)]))";
			};
			class Engine2_turbo_int
			{
				sound[]=
				{
					"A3PL_FD\Sounds\turbo_ext.ogg",
					0.3548134,
					1
				};
				frequency="0.8 + ((rpm/ 6900) factor[(4200/ 6900),(6200/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 6900) factor[(4150/ 6900),(4800/ 6900)]) * ((rpm/ 6900) factor[(6150/ 6900),(5150/ 6900)]))* 1";
			};
			class Engine3_turbo_int
			{
				sound[]=
				{
					"A3PL_FD\Sounds\turbo_ext.ogg",
					0.50118721,
					1
				};
				frequency="0.95 + ((rpm/ 6900) factor[(5100/ 6900),(6900/ 6900)])*0.15";
				volume="engineOn*(1-camPos)*((rpm/ 6900) factor[(5100/ 6900),(6100/ 6900)])* 2";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_rock_final_2",
					0.79432821,
					1,
					120
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					0.70794576,
					1,
					120
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_road_final_1",
					0.70794576,
					1,
					120
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					0.70794576,
					1,
					120
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_rock_final_2",
					0.70794576,
					1,
					120
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_road_final_1",
					0.70794576,
					1,
					120
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					1.2589254,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_rock_final_2",
					0.39810717,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.39810717,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_road_final_1",
					0.39810717,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.39810717,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_rock_final_2",
					0.39810717,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_road_final_1",
					0.39810717,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.50118721,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810717,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
		};

		author="Jonzie / Gaming";
		mapSize=12.29;

		_generalMacro="Truck_01_base_F";
		class Library
		{
			libTextDesc="";
		};

		editorSubcategory="EdSubcat_Cars";
		transportSoldier=1;
		memoryPointTaskMarker="TaskMarker_1_pos";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		vehicleClass="A3PL_Vehicles";
		model="";
		cost=50000;
		scope=1;
		access=1;
		scopeCurator=1;
		scopeArsenal=1;
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		armor=100;
		secondaryExplosion=0;
		maxFordingDepth=0.5;
		wheelDamageThreshold=0.94999999;
		wheelDestroyThreshold=0.99000001;
		wheelDamageRadiusCoef=0.69999999;
		wheelDestroyRadiusCoef=0.69999999;

		class HitPoints: HitPoints
		{
			class HitFuel: HitFuel
			{
				armor=2;
				passThrough=1;
				minimalHit=0.1;
				explosionShielding=1.5;
				radius=0.25;
			};
			class HitEngine: HitEngine
			{
				armor=0.5;
				passThrough=1;
				minimalHit=0.1;
				explosionShielding=0.5;
				radius=0.44999999;
			};
			class HitBody: HitBody
			{
				armor=1;
				passThrough=1;
				minimalHit=0;
				explosionShielding=1.5;
				radius=0.33000001;
				name="Body";
				visual="Body";
			};
			class HitLFWheel: HitLFWheel
			{
				name="wheel_1_1_steering";
				armor=1;
				minimalHit=0.02;
				passThrough=0.30000001;
				explosionShielding=4;
				radius=0.25;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				name="wheel_1_2_steering";
				armor=1;
				minimalHit=0.02;
				passThrough=0.30000001;
				explosionShielding=4;
				radius=0.25;
			};
			class HitLMWheel: HitLMWheel
			{
				name="wheel_1_3_steering";
				armor=1;
				minimalHit=0.02;
				passThrough=0.30000001;
				explosionShielding=4;
				radius=0.25;
			};
			class HitLBWheel: HitLBWheel
			{
				name="wheel_1_4_steering";
				armor=1;
				minimalHit=0.02;
				passThrough=0.30000001;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRFWheel: HitRFWheel
			{
				name="wheel_2_1_steering";
				armor=1;
				minimalHit=0.02;
				passThrough=0.30000001;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				name="wheel_2_2_steering";
				armor=1;
				minimalHit=0.02;
				passThrough=0.30000001;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRMWheel: HitRMWheel
			{
				name="wheel_2_3_steering";
				armor=1;
				minimalHit=0.02;
				passThrough=0.30000001;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRBWheel: HitRBWheel
			{
				name="wheel_2_4_steering";
				armor=1;
				minimalHit=0.02;
				passThrough=0.30000001;
				explosionShielding=4;
				radius=0.25;
			};
			class HitGlass1
			{
				armor=0.050000001;
				material=-1;
				name="glass1";
				visual="glass1";
				passThrough=0;
				radius=0.40000001;
			};
			class HitGlass2: HitGlass1
			{
				name="glass2";
				visual="glass2";
			};
			class HitGlass3: HitGlass1
			{
				name="glass3";
				visual="glass3";
			};
			class HitGlass4: HitGlass1
			{
				name="glass4";
				visual="glass4";
			};
			class HitGlass5: HitGlass1
			{
				name="glass5";
				visual="glass5";
			};
			class HitGlass6: HitGlass1
			{
				name="glass6";
				visual="glass6";
			};
			class HitGlass7: HitGlass1
			{
				name="glass7";
				visual="glass7";
			};
			class HitGlass8: HitGlass1
			{
				name="glass8";
				visual="glass8";
			};
			class HitGlass9: HitGlass1
			{
				name="glass9";
				visual="glass9";
			};
			class HitGlass10: HitGlass1
			{
				name="glass10";
				visual="glass10";
			};
			class HitRGlass: HitGlass1
			{
				name="RGlass";
				visual="RGlass";
			};
			class HitLGlass: HitGlass1
			{
				name="LGlass";
				visual="LGlass";
			};
		};

		class AnimationSources: AnimationSources
		{
			class Light
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class Proxy
			{
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class Common
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Head_Lights: Common {};
			class High_Beam: Common {};
			class Spotlight: Common {};
			class Lightbar: Common {};
			class Collision_Lights: Common {};
			class Doors
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class AUX
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class Siren_Control_Noob
			{
				source="user";
				animPeriod=0.050000001;
				initPhase=5.5999999;
			};
			class Laptop
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class Laptop_Top
			{
				source="user";
				animPeriod=1.5;
				initPhase=0;
			};
			class HitLFWheel
			{
				source="Hit";
				hitpoint="HitLFWheel";
				raw=1;
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint="HitRFWheel";
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint="HitLF2Wheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint="HitRF2Wheel";
			};
			class HitLF2Wheel: HitLFWheel
			{
				hitpoint="HitLBWheel";
			};
			class HitRF2Wheel: HitLFWheel
			{
				hitpoint="HitRBWheel";
			};
			class HitLMWheel: HitLFWheel
			{
				hitpoint="HitLMWheel";
			};
			class HitRMWheel: HitLFWheel
			{
				hitpoint="HitRMWheel";
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
			class DoorL
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class DoorR
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Door_LF
			{
				source="door";
				animPeriod=0.40000001;
				sound="A3PL_Truck_Open_Close";
				soundPosition="Door_LF_axis";
			};
			class Door_RF: Door_LF
			{
				soundPosition="Door_RF_axis";
			};
			class Door_LB: Door_LF
			{
				soundPosition="Door_LB_axis";
			};
			class Door_LB2: Door_LF
			{
				soundPosition="Door_LB2_axis";
			};
			class Door_LB3: Door_LF
			{
				soundPosition="Door_LB3_axis";
			};
			class Door_LB4: Door_LF
			{
				soundPosition="Door_LB4_axis";
			};
			class Door_LB5: Door_LF
			{
				soundPosition="Door_LB5_axis";
			};
			class Door_LB6: Door_LF
			{
				soundPosition="Door_LB6_axis";
			};
			class Door_RB: Door_LF
			{
				soundPosition="Door_RB_axis";
			};
			class Door_RB2: Door_LF
			{
				soundPosition="Door_RB2_axis";
			};
			class Door_RB3: Door_LF
			{
				soundPosition="Door_RB3_axis";
			};
			class Door_RB4: Door_LF
			{
				soundPosition="Door_RB4_axis";
			};
			class Door_RB5: Door_LF
			{
				soundPosition="Door_RB5_axis";
			};
			class Door_RB6: Door_LF
			{
				soundPosition="Door_RB6_axis";
			};
			class Cargo_Door
			{
				source="user";
				animPeriod=1;
				sound="A3PL_Cargo_Open_Close";
				soundPosition="";
			};
			class Cargo_Door_1: Cargo_Door
			{
				soundPosition="Cargo_Door_1_axis";
			};
			class Cargo_Door_2: Cargo_Door
			{
				soundPosition="Cargo_Door_2_axis";
			};
			class Cargo_Door_3: Cargo_Door
			{
				soundPosition="Cargo_Door_3_axis";
			};
			class Cargo_Door_4: Cargo_Door
			{
				soundPosition="Cargo_Door_4_axis";
			};
			class Cargo_Door_5: Cargo_Door
			{
				soundPosition="Cargo_Door_5_axis";
			};
			class Cargo_Door_6: Cargo_Door
			{
				soundPosition="Cargo_Door_6_axis";
			};
			class Cargo_Door_7: Cargo_Door
			{
				soundPosition="Cargo_Door_7_axis";
			};
			class Cargo_Door_8: Cargo_Door
			{
				soundPosition="Cargo_Door_8_axis";
			};
			class Cargo_Door_9: Cargo_Door
			{
				soundPosition="Cargo_Door_9_axis";
			};
			class Cargo_Door_10: Cargo_Door
			{
				soundPosition="Cargo_Door_10_axis";
			};
			class Cargo_Door_11: Cargo_Door
			{
				soundPosition="Cargo_Door_11_axis";
			};
			class Cargo_Door_12: Cargo_Door
			{
				soundPosition="Cargo_Door_12_axis";
			};
			class Cargo_Door_13: Cargo_Door
			{
				soundPosition="Cargo_Door_13_axis";
			};
			class Cargo_Door_14: Cargo_Door
			{
				soundPosition="Cargo_Door_14_axis";
			};
			class Cargo_Door_15: Cargo_Door
			{
				soundPosition="Cargo_Door_15_axis";
			};
			class Cargo_Door_16: Cargo_Door
			{
				soundPosition="Cargo_Door_16_axis";
			};
			class Cargo_Door_17: Cargo_Door
			{
				soundPosition="Cargo_Door_17_axis";
			};
			class Cargo_Door_18: Cargo_Door
			{
				soundPosition="Cargo_Door_18_axis";
			};
			class Cargo_Door_19: Cargo_Door
			{
				soundPosition="Cargo_Door_19_axis";
			};
			class Cargo_Door_20: Cargo_Door
			{
				soundPosition="Cargo_Door_20_axis";
			};
			class Outriggers
			{
				source="user";
				animPeriod=5;
				sound="A3PL_Hydraulic";
				soundPosition="";
			};
			class truck_flatbed
			{
				source="user";
				animPeriod=20;
				initPhase=0;
				sound="A3PL_Hydraulic";
				soundPosition="flatbed_axis";
			};
			class Fire_Nozzle
			{
				source="user";
				animPeriod=0.1;
				initPhase=0;
			};
			class Ladder_Extend
			{
				source="user";
				animPeriod=0.1;
				sound="A3PL_Hydraulic";
				soundPosition="";
				initPhase=0;
			};
			class Turntable_Spin
			{
				source="user";
				animPeriod=0.1;
				sound="A3PL_Hydraulic";
				soundPosition="";
				initPhase=0;
			};
			class Ladder_Lift
			{
				source="user";
				animPeriod=0.1;
				sound="A3PL_Hydraulic";
				soundPosition="";
				initPhase=0;
			};
			class Ladder_Holder
			{
				source="user";
				animPeriod=6;
			};
			class Trunk: Door_LF
			{
				soundPosition="Trunk_axis";
				animPeriod=1;
				source="user";
			};
			class truck_flatbed_rope
			{
				source="user";
				animPeriod=6;
			};
			class truck_flatbed_hook
			{
				source="user";
				animPeriod=6;
			};
			class Bin1: Common
			{
				animPeriod=4;
				sound="A3PL_Hydraulic";
				soundPosition="";
			};
			class Bin2: Bin1 {};
			class Mods
			{
				initPhase=0;
				displayName="Mods";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
		};

		class TransportItems {};
		class TransportMagazines {};
		class TransportWeapons {};

		weapons[]=
		{
			"A3PL_Truck_Horn"
		};

		driverAction="driver_hemtt";
		cargoAction[]=
		{
			"passenger_generic01_foldhands",
			"passenger_apc_generic02",
			"passenger_apc_generic04",
			"passenger_apc_generic03",
			"passenger_apc_generic01",
			"passenger_apc_narrow_generic01",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanleft",
			"passenger_generic01_leanright",
			"passenger_apc_generic01",
			"passenger_generic01_leanleft",
			"passenger_generic01_foldhands",
			"passenger_apc_generic02",
			"passenger_apc_generic03",
			"passenger_apc_narrow_generic01",
			"passenger_apc_narrow_generic03",
			"passenger_generic01_foldhands"
		};
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetInLow"
		};
		cargoIsCoDriver[]={1,0};
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		driverLeftHandAnimName="steering_wheel";
		driverRightHandAnimName="steering_wheel";
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;
		destrType="DestructDefault";
		collisionEffect="EmptyEffect";
		terrainCoef=5;
		showNVGCargo[]={0,1};
		soundAttenuationCargo[]={1,0};
		attenuationEffectType="OpenCarAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\getin",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\getout",
			0.56234133,
			1,
			20
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\int_start",
			0.70794576,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\ext_start",
			0.70794576,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\int_stop",
			0.70794576,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\ext_stop",
			0.70794576,
			1,
			200
		};
		Crash0[]=
		{
			"",
			1,
			1,
			100
		};
		Crash1[]=
		{
			"",
			1,
			1,
			100
		};
		Crash2[]=
		{
			"",
			1,
			1,
			100
		};
		Crash3[]=
		{
			"",
			1,
			1,
			100
		};
		Crash4[]=
		{
			"",
			1,
			1,
			100
		};
		ArmorCrash0[]=
		{
			"",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"",
			1,
			1,
			200
		};
		buildCrash0[]=
		{
			"",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"",
			1,
			1,
			200
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		WoodCrash0[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash4[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash5[]=
		{
			"",
			1,
			1,
			200
		};
		insideSoundCoef=1;
		outsideSoundFilter=1;
		occludeSoundsWhenIn=1;
		obstructSoundsWhenIn=1;
		obstructSoundLFRatio=1;
		occludeSoundLFRatio=1;
		thrustDelay=0.5;
		brakeIdleSpeed=1.78;
		maxSpeed=80;
		fuelCapacity=45;
		antiRollbarForceCoef=1.3;
		antiRollbarForceLimit=1.3;
		antiRollbarSpeedMin=1.3;
		antiRollbarSpeedMax=4;
		idleRpm=900;
		redRpm=6900;

		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-10,
				"N",
				0,
				"D1",
				5.56,
				"D2",
				3.46,
				"D3",
				2.62,
				"D4",
				1.68,
				"D5",
				1.08
			};
			TransmissionRatios[]=
			{
				"High",
				8
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			gearUpMaxCoef=0.95;
			gearDownMaxCoef=0.5;
			gearUpMinCoef=0.9;
			gearDownMinCoef=0.15;
			transmissionDelay=2;
		};

		simulation="CarX";
		dampersBumpCoef=0.05;
		differentialType="rear_open";
		frontRearSplit=0.25;
		frontBias=2.5;
		rearBias=2;
		centreBias=1.5;
		clutchStrength=5;
		enginePower=244;
		maxOmega=722;
		peakTorque=1200;
		dampingRateFullThrottle=0.1;
		dampingRateZeroThrottleClutchDisengaged=0.16;
		dampingRateZeroThrottleClutchEngaged=0.05;
		torqueCurve[]=
		{
			{0,0},
			{0.185,0.713},
			{0.35,0.975},
			{0.5,1},
			{0.75,0.975},
			{0.85,0.75},
			{1,0.62}
		};
		changeGearMinEffectivity[]={0.95,0.15,0.81,0.81,0.82,0.95,0.95};
		switchTime=0.5;

		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1_pos";
				direction="exhaust1_dir";
				effect="ExhaustsEffect";
			};
		};

		class Wheels
		{
			class L1
			{
				boneName="wheel_1_1";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.2";
				mass=80;
				MOI=40;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=30000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.15000001;
				mMaxDroop=0.15000001;
				sprungMass=1500;
				springStrength=51338;
				springDamperRate=5000;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class L2: L1
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=300000;
			};
			class L3: L1
			{
				boneName="wheel_1_3_damper";
				steering=0;
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_axis";
				tireForceAppPointOffset="wheel_1_3_axis";
				maxHandBrakeTorque=300000;
			};
			class R1: L1
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class R2: R1
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=300000;
			};
			class R3: R1
			{
				boneName="wheel_2_3_damper";
				steering=0;
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_axis";
				tireForceAppPointOffset="wheel_2_3_axis";
				maxHandBrakeTorque=300000;
			};
		};

		class RenderTargets
		{
			class Left_mirror
			{
				renderTarget="rendertarget1";
				class mirror
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.5;
				};
			};
			class Right_mirror
			{
				renderTarget="rendertarget2";
				class mirror
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.5;
				};
			};
			class Left_Small_mirror
			{
				renderTarget="rendertarget3";
				class mirror
				{
					pointPosition="PIP3_pos";
					pointDirection="PIP3_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=1;
				};
			};
			class Right_Small_mirror
			{
				renderTarget="rendertarget4";
				class mirror
				{
					pointPosition="PIP4_pos";
					pointDirection="PIP4_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=1;
				};
			};
			class Reversing_Camera
			{
				renderTarget="rendertarget5";
				class Camera
				{
					pointPosition="PIP5_pos";
					pointDirection="PIP5_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
		};

		extCameraPosition[]={0,0.75,-10};

		class Turrets {};

		class Reflectors
		{
			class Left
			{
				color[]={1900,1300,950};
				ambient[]={5,5,5};
				position="LightCarHeadL01";
				direction="LightCarHeadL01_end";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="LightCarHeadR01";
				direction="LightCarHeadR01_end";
				hitpoint="P svetlo";
				selection="P svetlo";
			};
			class Right2: Right
			{
				position="LightCarHeadR02";
				direction="LightCarHeadR02_end";
				hitpoint="HighBeamR";
				innerAngle=60;
				outerAngle=100;
				coneFadeCoef=10;
				intensity=2;
				class Attenuation
				{
					start=2;
					constant=0;
					linear=0.1;
					quadratic=0.0099999998;
					hardLimitStart=390;
					hardLimitEnd=450;
				};
			};
			class Left2: Left
			{
				position="LightCarHeadL02";
				direction="LightCarHeadL02_end";
				hitpoint="HighBeamL";
				innerAngle=60;
				outerAngle=100;
				coneFadeCoef=10;
				intensity=2;
				class Attenuation
				{
					start=2;
					constant=0;
					linear=0.1;
					quadratic=0.0099999998;
					hardLimitStart=390;
					hardLimitEnd=450;
				};
			};
		};

		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right"
			},
			
			{
				"Right2",
				"Left2"
			}
		};

		hiddenSelections[]=
		{
			"Body",
			"Lett_1",
			"Lett_2",
			"Lett_3",
			"num_1",
			"num_2",
			"num_3",
			"num_4"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(1,1,1,1.0,CO)",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		numberPhysicalWheels=6;

	};
	class A3PL_Prime_Mover_Base: A3PL_Truck_Base
	{
		author="Jonzie / Gaming";
		displayName="Jonzie_Prime_Mover";
		wheelCircumference=6.27;
		driverLeftHandAnimName="steering_wheel";
		driverLeftLegAnimName="Brake";
		driverRightLegAnimName="Accelerator";
		clutchStrength=5;
		class Wheels: Wheels {};
		maxSpeed=300;
		maxOmega=560;
		changeGearMinEffectivity[]={0.95,0.15,0.95,0.95,0.95,0.95,0.95,0.95};

		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-4.5,
				"N",
				0,
				"D1",
				3.1,
				"D2",
				1.9,
				"D3",
				1.4,
				"D4",
				1,
				"D5",
				0.71,
				"D6",
				0.5
			};
			TransmissionRatios[]=
			{
				"High",
				10
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			gearUpMaxCoef=0.95;
			gearDownMaxCoef=0.5;
			gearUpMinCoef=0.9;
			gearDownMinCoef=0.15;
			transmissionDelay=2;
		};

		class AnimationSources: AnimationSources
		{
			class Hitched
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class ASC
			{
				source="user";
				animPeriod=8;
				initPhase=0;
			};
		};

		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1_pos";
				direction="exhaust1_dir";
				effect="ExhaustsEffectBig";
			};
			class Exhaust2
			{
				position="exhaust2_pos";
				direction="exhaust2_dir";
				effect="ExhaustsEffectBig";
			};
		};
		numberPhysicalWheels=6;

	};
	class Jonzie_Public_Prime_Mover: A3PL_Prime_Mover_Base {};

	class A3PL_Trailer_Base: Truck_02_base_F
	{
		armor=320;
		wheelCircumference=4; //3.776
		collisionEffect="EmptyEffect";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;

		class HitPoints: HitPoints
		{
			class HitWheel_1_1: HitLFWheel
			{
				name="wheel_1_1_steering";
			};
			class HitWheel_1_2: HitLBWheel
			{
				name="wheel_1_2_steering";
			};
			class HitWheel_1_3: HitLMWheel
			{
				name="wheel_1_3_steering";
			};
			class HitWheel_1_4: HitLF2Wheel
			{
				name="wheel_1_4_steering";
			};
			class HitWheel_1_5: HitLF2Wheel
			{
				name="wheel_1_5_steering";
			};
			class HitWheel_1_6: HitLF2Wheel
			{
				name="wheel_1_6_steering";
			};
			class HitWheel_1_7: HitLF2Wheel
			{
				name="wheel_1_7_steering";
			};
			class HitWheel_1_8: HitLF2Wheel
			{
				name="wheel_1_8_steering";
			};
			class HitWheel_1_9: HitLF2Wheel
			{
				name="wheel_1_9_steering";
			};
			class HitWheel_1_10: HitLF2Wheel
			{
				name="wheel_1_10_steering";
			};
			class HitWheel_1_11: HitLF2Wheel
			{
				name="wheel_1_11_steering";
			};
			class HitWheel_1_12: HitLF2Wheel
			{
				name="wheel_1_12_steering";
			};
			class HitWheel_2_1: HitRFWheel
			{
				name="wheel_2_1_steering";
			};
			class HitWheel_2_2: HitRBWheel
			{
				name="wheel_2_2_steering";
			};
			class HitWheel_2_3: HitRMWheel
			{
				name="wheel_2_3_steering";
			};
			class HitWheel_2_4: HitRF2Wheel
			{
				name="wheel_2_4_steering";
			};
			class HitWheel_2_5: HitRF2Wheel
			{
				name="wheel_2_5_steering";
			};
			class HitWheel_2_6: HitRF2Wheel
			{
				name="wheel_2_6_steering";
			};
			class HitWheel_2_7: HitRF2Wheel
			{
				name="wheel_2_7_steering";
			};
			class HitWheel_2_8: HitRF2Wheel
			{
				name="wheel_2_8_steering";
			};
			class HitWheel_2_9: HitRF2Wheel
			{
				name="wheel_2_9_steering";
			};
			class HitWheel_2_10: HitRF2Wheel
			{
				name="wheel_2_10_steering";
			};
			class HitWheel_2_11: HitRF2Wheel
			{
				name="wheel_2_11_steering";
			};
			class HitWheel_2_12: HitRF2Wheel
			{
				name="wheel_2_12_steering";
			};
		};

		class AnimationSources: AnimationSources
		{
			class Hitched
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Light
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class Proxy
			{
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class Common
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Head_Lights: Common {};
			class High_Beam: Common {};
			class Spotlight: Common {};
			class Lightbar: Common {};
			class Gooseneck_Hide: Common {};
			class Collision_Lights: Common {};
			class drill_arm_position: Common
			{
				animPeriod=12;
				sound="A3PL_Hydraulic";
				soundPosition="Ramp_axis";
			};
			class drill: Common
			{
				animPeriod=100;
				sound="A3PL_Drill";
				soundPosition="drill_axis";
			};
			class Mods
			{
				initPhase=0;
				displayName="Mods";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
			class Extension
			{
				source="user";
				animPeriod=5;
			};
			class Doors
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class Ramp
			{
				source="user";
				animPeriod=8;
				initPhase=0;
				sound="A3PL_Hydraulic";
				soundPosition="Ramp_axis";
			};
			class Hitch_Fold
			{
				source="user";
				animPeriod=4;
				initPhase=1;
				sound="A3PL_Hydraulic";
				soundPosition="Hitch_Fold_axis";
			};
			class AUX
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class Siren_Control_Noob
			{
				source="user";
				animPeriod=0.050000001;
				initPhase=5.5999999;
			};
			class Laptop
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class Laptop_Top
			{
				source="user";
				animPeriod=1.5;
				initPhase=0;
			};
			class HitWheel_1_1
			{
				source="Hit";
				hitpoint="HitWheel_1_1";
				raw=1;
			};
			class HitWheel_1_2: HitWheel_1_1
			{
				hitpoint="HitWheel_1_2";
			};
			class HitWheel_1_3: HitWheel_1_1
			{
				hitpoint="HitWheel_1_3";
			};
			class HitWheel_1_4: HitWheel_1_1
			{
				hitpoint="HitWheel_1_4";
			};
			class HitWheel_1_5: HitWheel_1_1
			{
				hitpoint="HitWheel_1_5";
			};
			class HitWheel_1_6: HitWheel_1_1
			{
				hitpoint="HitWheel_1_6";
			};
			class HitWheel_1_7: HitWheel_1_1
			{
				hitpoint="HitWheel_1_7";
			};
			class HitWheel_1_8: HitWheel_1_1
			{
				hitpoint="HitWheel_1_8";
			};
			class HitWheel_1_9: HitWheel_1_1
			{
				hitpoint="HitWheel_1_9";
			};
			class HitWheel_1_10: HitWheel_1_1
			{
				hitpoint="HitWheel_1_10";
			};
			class HitWheel_1_11: HitWheel_1_1
			{
				hitpoint="HitWheel_1_11";
			};
			class HitWheel_1_12: HitWheel_1_1
			{
				hitpoint="HitWheel_1_12";
			};
			class HitWheel_2_1: HitWheel_1_1
			{
				hitpoint="HitWheel_2_1";
			};
			class HitWheel_2_2: HitWheel_1_1
			{
				hitpoint="HitWheel_2_2";
			};
			class HitWheel_2_3: HitWheel_1_1
			{
				hitpoint="HitWheel_2_3";
			};
			class HitWheel_2_4: HitWheel_1_1
			{
				hitpoint="HitWheel_2_4";
			};
			class HitWheel_2_5: HitWheel_1_1
			{
				hitpoint="HitWheel_2_5";
			};
			class HitWheel_2_6: HitWheel_1_1
			{
				hitpoint="HitWheel_2_6";
			};
			class HitWheel_2_7: HitWheel_1_1
			{
				hitpoint="HitWheel_2_7";
			};
			class HitWheel_2_8: HitWheel_1_1
			{
				hitpoint="HitWheel_2_8";
			};
			class HitWheel_2_9: HitWheel_1_1
			{
				hitpoint="HitWheel_2_9";
			};
			class HitWheel_2_10: HitWheel_1_1
			{
				hitpoint="HitWheel_2_10";
			};
			class HitWheel_2_11: HitWheel_1_1
			{
				hitpoint="HitWheel_2_11";
			};
			class HitWheel_2_12: HitWheel_1_1
			{
				hitpoint="HitWheel_2_12";
			};
			class DoorL
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class DoorR
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Door_LF
			{
				source="door";
				animPeriod=0.40000001;
				sound="A3PL_Open_Close";
				soundPosition="Door_LF_axis";
			};
			class Door_RF: Door_LF
			{
				soundPosition="Door_RF_axis";
			};
			class Door_LB: Door_LF
			{
				soundPosition="Door_LB_axis";
			};
			class Door_LB2: Door_LF
			{
				soundPosition="Door_LB2_axis";
			};
			class Door_LB3: Door_LF
			{
				soundPosition="Door_LB3_axis";
			};
			class Door_LB4: Door_LF
			{
				soundPosition="Door_LB4_axis";
			};
			class Door_LB5: Door_LF
			{
				soundPosition="Door_LB5_axis";
			};
			class Door_LB6: Door_LF
			{
				soundPosition="Door_LB6_axis";
			};
			class Door_RB: Door_LF
			{
				soundPosition="Door_RB_axis";
			};
			class Door_RB2: Door_LF
			{
				soundPosition="Door_RB2_axis";
			};
			class Door_RB3: Door_LF
			{
				soundPosition="Door_RB3_axis";
			};
			class Door_RB4: Door_LF
			{
				soundPosition="Door_RB4_axis";
			};
			class Door_RB5: Door_LF
			{
				soundPosition="Door_RB5_axis";
			};
			class Door_RB6: Door_LF
			{
				soundPosition="Door_RB6_axis";
			};
			class Trunk: Door_LF
			{
				soundPosition="Trunk_axis";
				animPeriod=1;
				source="user";
			};
			class Cargo_Door
			{
				source="user";
				animPeriod=1;
				sound="A3PL_Cargo_Open_Close";
				soundPosition="";
			};
			class Cargo_Door_1: Cargo_Door
			{
				soundPosition="Cargo_Door_1_axis";
			};
			class Cargo_Door_2: Cargo_Door
			{
				soundPosition="Cargo_Door_2_axis";
			};
			class Cargo_Door_3: Cargo_Door
			{
				soundPosition="Cargo_Door_3_axis";
			};
			class Cargo_Door_4: Cargo_Door
			{
				soundPosition="Cargo_Door_4_axis";
			};
			class Cargo_Door_5: Cargo_Door
			{
				soundPosition="Cargo_Door_5_axis";
			};
			class Cargo_Door_6: Cargo_Door
			{
				soundPosition="Cargo_Door_6_axis";
			};
			class Cargo_Door_7: Cargo_Door
			{
				soundPosition="Cargo_Door_7_axis";
			};
			class Cargo_Door_8: Cargo_Door
			{
				soundPosition="Cargo_Door_8_axis";
			};
			class Cargo_Door_9: Cargo_Door
			{
				soundPosition="Cargo_Door_9_axis";
			};
			class Cargo_Door_10: Cargo_Door
			{
				soundPosition="Cargo_Door_10_axis";
			};
			class Cargo_Door_11: Cargo_Door
			{
				soundPosition="Cargo_Door_11_axis";
			};
			class Cargo_Door_12: Cargo_Door
			{
				soundPosition="Cargo_Door_12_axis";
			};
			class Cargo_Door_13: Cargo_Door
			{
				soundPosition="Cargo_Door_13_axis";
			};
			class Cargo_Door_14: Cargo_Door
			{
				soundPosition="Cargo_Door_14_axis";
			};
			class Cargo_Door_15: Cargo_Door
			{
				soundPosition="Cargo_Door_15_axis";
			};
			class Cargo_Door_16: Cargo_Door
			{
				soundPosition="Cargo_Door_16_axis";
			};
			class Cargo_Door_17: Cargo_Door
			{
				soundPosition="Cargo_Door_17_axis";
			};
			class Cargo_Door_18: Cargo_Door
			{
				soundPosition="Cargo_Door_18_axis";
			};
			class Cargo_Door_19: Cargo_Door
			{
				soundPosition="Cargo_Door_19_axis";
			};
			class Cargo_Door_20: Cargo_Door
			{
				soundPosition="Cargo_Door_20_axis";
			};
		};

		class Sounds
		{
			delete Engine;
			delete Engine_ext;
			delete Engine_int;
			delete Idle_ext;
			delete Idle_int;
			delete IdleThrust;
			delete IdleThrust_int;
			delete Engine1_ext;
			delete Engine1_int;
			delete Engine1_Thrust_ext;
			delete Engine1_Thrust_int;
			delete Engine2_ext;
			delete Engine2_int;
			delete Engine2_Thrust_ext;
			delete Engine2_Thrust_int;
			delete Engine3_ext;
			delete Engine3_int;
			delete Engine3_Thrust_ext;
			delete Engine3_Thrust_int;
			delete Engine4_ext;
			delete Engine4_int;
			delete Engine4_Thrust_ext;
			delete Engine4_Thrust_int;
			delete Engine5_ext;
			delete Engine5_int;
			delete Engine5_Thrust_ext;
			delete Engine5_Thrust_int;
			class Movement
			{
				sound="soundEnviron";
				frequency="1";
				volume="0";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					0.39810717,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.25118864,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		wheelDamageRadiusCoef=0.95;
		wheelDestroyRadiusCoef=0.7;
		brakeIdleSpeed=1;
		fuelCapacity=0;
		secondaryExplosion=0;
		picture="\A3PL_Cars\A3FL.paa";
		differentialType="rear_open";

		hiddenSelections[]=
		{
			"Body",
			"Lett_1",
			"Lett_2",
			"Lett_3",
			"num_1",
			"num_2",
			"num_3",
			"num_4"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0,0,0,1.0,CO)",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};

		displayName="A3PL_Trailer_Base";
		author="Jonzie / Gaming";
		getInRadius=0.001;
		aggregateReflectors[]={};
		weapons[]={};
		magazines[]={};
		class Exhausts {};

		class EventHandlers
		{
			init="[_this] spawn A3PL_HandleVehicleInit";
		};

		class RenderTargets {};
		class Reflectors {};
		class Turrets {};
		class TransportItems {};
		class TransportMagazines {};
		class TransportWeapons {};

		Crash0[]=
		{
			"",
			1,
			1,
			100
		};
		Crash1[]=
		{
			"",
			1,
			1,
			100
		};
		Crash2[]=
		{
			"",
			1,
			1,
			100
		};
		Crash3[]=
		{
			"",
			1,
			1,
			100
		};
		Crash4[]=
		{
			"",
			1,
			1,
			100
		};
		ArmorCrash0[]=
		{
			"",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"",
			1,
			1,
			200
		};
		buildCrash0[]=
		{
			"",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"",
			1,
			1,
			200
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		WoodCrash0[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash4[]=
		{
			"",
			1,
			1,
			200
		};
		WoodCrash5[]=
		{
			"",
			1,
			1,
			200
		};

		class Library
		{
			libTextDesc="Trailers for Semi Trucks";
		};

		class Wheels
		{
			class L1
			{
				boneName="wheel_1_1";
				steering=0;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.2";
				mass=80;
				MOI=40;
				dampingRate=0.079999998;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=0;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.15000001;
				mMaxDroop=0.15000001;
				sprungMass=583;
				springStrength=83333;
				springDamperRate=13333;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class L2: L1
			{
				boneName="wheel_1_2";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
			};
			class L3: L1
			{
				boneName="wheel_1_3";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_axis";
				tireForceAppPointOffset="wheel_1_3_axis";
			};
			class R1: L1
			{
				boneName="wheel_2_1";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				side="right";
			};
			class R2: L1
			{
				boneName="wheel_2_2";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				side="right";
			};
			class R3: L1
			{
				boneName="wheel_2_3";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_axis";
				tireForceAppPointOffset="wheel_2_3_axis";
				side="right";
			};
		};

	};
	class Jonzie_Public_Trailer_Base: A3PL_Trailer_Base {};

	class Boat_F;
	class Boat_Transport_02_base_F: Boat_F
	{
		class AnimationSources;
		class HitPoints;
		class Eventhandlers;
		class Sounds;
	};
	class A3PL_Ship_Base: Boat_Transport_02_base_F
	{
		displayName="A3PL_Ship_Base";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		model="";
		DLC="";
		picture="\A3PL_Cars\A3FL.paa";
		class Library
		{
			libTextDesc="";
		};
		driverAction="driver_boat01";
		driverLeftHandAnimName="steering_wheel";
		driverRightHandAnimName="steering_wheel";
		cargoAction[]=
		{
			"passenger_low01"
		};
		weapons[]=
		{
			"A3PL_Truck_Horn"
		};

		class TransportItems {};
		class TransportMagazines {};
		class TransportWeapons {};

		attenuationEffectType="OpenCarAttenuation";
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";

		class Eventhandlers: Eventhandlers
		{
			init="[_this] spawn A3PL_HandleVehicleInit";
		};

		class HitPoints: HitPoints
		{
			class HitFuel
			{
				armor=2;
				explosionShielding=1.5;
				material=-1;
				minimalHit=0.1;
				name="fuel";
				passThrough=1;
				radius=0.25;
				visual="";
			};
			class HitEngine
			{
				armor=0.5;
				explosionShielding=0.5;
				material=-1;
				minimalHit=0.1;
				name="engine";
				passThrough=1;
				radius=0.44999999;
				visual="";
			};
			class HitBody
			{
				armor=1;
				passThrough=1;
				minimalHit=0;
				material=-1;
				explosionShielding=1.5;
				radius=0.33000001;
				name="Body";
				visual="Body";
			};
			class HitGlass1
			{
				armor=0.050000001;
				material=-1;
				name="glass1";
				visual="glass1";
				passThrough=0;
				radius=0.40000001;
			};
			class HitGlass2: HitGlass1
			{
				name="glass2";
				visual="glass2";
			};
			class HitGlass3: HitGlass1
			{
				name="glass3";
				visual="glass3";
			};
			class HitGlass4: HitGlass1
			{
				name="glass4";
				visual="glass4";
			};
			class HitGlass5: HitGlass1
			{
				name="glass5";
				visual="glass5";
			};
			class HitGlass6: HitGlass1
			{
				name="glass6";
				visual="glass6";
			};
			class HitGlass7: HitGlass1
			{
				name="glass7";
				visual="glass7";
			};
			class HitGlass8: HitGlass1
			{
				name="glass8";
				visual="glass8";
			};
			class HitGlass9: HitGlass1
			{
				name="glass9";
				visual="glass9";
			};
			class HitGlass10: HitGlass1
			{
				name="glass10";
				visual="glass10";
			};
			class HitGlass11: HitGlass1
			{
				name="glass11";
				visual="glass11";
			};
			class HitGlass12: HitGlass1
			{
				name="glass12";
				visual="glass12";
			};
			class HitGlass13: HitGlass1
			{
				name="glass13";
				visual="glass13";
			};
			class HitGlass14: HitGlass1
			{
				name="glass14";
				visual="glass14";
			};
			class HitGlass15: HitGlass1
			{
				name="glass15";
				visual="glass15";
			};
			class HitGlass16: HitGlass1
			{
				name="glass16";
				visual="glass16";
			};
			class HitGlass17: HitGlass1
			{
				name="glass17";
				visual="glass17";
			};
			class HitGlass18: HitGlass1
			{
				name="glass18";
				visual="glass18";
			};
			class HitGlass19: HitGlass1
			{
				name="glass19";
				visual="glass19";
			};
			class HitGlass20: HitGlass1
			{
				name="glass20";
				visual="glass20";
			};
			class HitRGlass: HitGlass1
			{
				name="RGlass";
				visual="RGlass";
			};
			class HitLGlass: HitGlass1
			{
				name="LGlass";
				visual="LGlass";
			};
		};

		class AnimationSources: AnimationSources
		{
			class Platform
			{
				source="user";
				animPeriod=5;
				initPhase=0;
			};
			class Light
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class Proxy
			{
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class Common
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Head_Lights: Common {};
			class High_Beam: Common {};
			class Spotlight: Common {};
			class Lightbar: Common {};
			class Fair_Available: Common {};
			class All_Lights: Common {};
			class Hitched: Common
			{
				animPeriod=1;
			};
			class Collision_Lights: Common {};
			class C1: Common {};
			class C2: Common {};
			class C3: Common {};
			class C4: Common {};
			class C5: Common {};
			class C6: Common {};
			class C7: Common {};
			class C8: Common {};
			class C9: Common {};
			class C10: Common {};
			class C11: Common {};
			class C12: Common {};
			class C13: Common {};
			class C14: Common {};
			class C15: Common {};
			class C16: Common {};
			class C17: Common {};
			class C18: Common {};
			class C19: Common {};
			class C20: Common {};
			class C21: Common {};
			class C22: Common {};
			class C23: Common {};
			class C24: Common {};
			class C25: Common {};
			class C26: Common {};
			class C27: Common {};
			class C28: Common {};
			class C29: Common {};
			class C30: Common {};
			class C31: Common {};
			class C32: Common {};
			class C33: Common {};
			class C34: Common {};
			class C35: Common {};
			class C36: Common {};
			class C37: Common {};
			class C38: Common {};
			class C39: Common {};
			class C40: Common {};
			class C41: Common {};
			class C42: Common {};
			class C43: Common {};
			class C44: Common {};
			class C45: Common {};
			class C46: Common {};
			class C47: Common {};
			class C48: Common {};
			class C49: Common {};
			class C50: Common {};
			class C51: Common {};
			class C52: Common {};
			class C53: Common {};
			class C54: Common {};
			class C55: Common {};
			class C56: Common {};
			class C57: Common {};
			class C58: Common {};
			class C59: Common {};
			class C60: Common {};
			class C61: Common {};
			class C62: Common {};
			class C63: Common {};
			class C64: Common {};
			class C65: Common {};
			class C66: Common {};
			class C67: Common {};
			class C68: Common {};
			class C69: Common {};
			class C70: Common {};
			class C71: Common {};
			class C72: Common {};
			class C73: Common {};
			class C74: Common {};
			class C75: Common {};
			class C76: Common {};
			class C77: Common {};
			class C78: Common {};
			class C79: Common {};
			class C80: Common {};
			class Mods
			{
				initPhase=0;
				displayName="Mods";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
			class Doors
			{
				source="user";
				animPeriod=0.40000001;
				initPhase=0;
			};
			class AUX
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class Siren_Control_Noob
			{
				source="user";
				animPeriod=0.050000001;
				initPhase=5.5999999;
			};
			class Laptop
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class Laptop_Top
			{
				source="user";
				animPeriod=1.5;
				initPhase=0;
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
			class HitRGlass: HitGlass1
			{
				hitpoint="HitRGlass";
			};
			class HitLGlass: HitGlass1
			{
				hitpoint="HitLGlass";
			};
			class Solid_Red1
			{
				source="MarkerLight";
				markerLight="Solid_Red1";
			};
			class Solid_White1: Solid_Red1
			{
				markerLight="Solid_White1";
			};
			class Solid_White2: Solid_Red1
			{
				markerLight="Solid_White2";
			};
			class Solid_Green1: Solid_Red1
			{
				markerLight="Solid_Green1";
			};
			class Solid_Green2: Solid_Red1
			{
				markerLight="Solid_Green2";
			};
			class Solid_Green3: Solid_Red1
			{
				markerLight="Solid_Green3";
			};
			class Solid_Green4: Solid_Red1
			{
				markerLight="Solid_Green4";
			};
			class Solid_Green5: Solid_Red1
			{
				markerLight="Solid_Green5";
			};
			class Solid_Green6: Solid_Red1
			{
				markerLight="Solid_Green6";
			};
			class Solid_Green7: Solid_Red1
			{
				markerLight="Solid_Green7";
			};
			class Solid_Green8: Solid_Red1
			{
				markerLight="Solid_Green8";
			};
			class Solid_Green9: Solid_Red1
			{
				markerLight="Solid_Green9";
			};
			class Solid_Green10: Solid_Red1
			{
				markerLight="Solid_Green10";
			};
			class door1
			{
				source="user";
				animPeriod=1.5;
				initPhase=0;
			};
			class door2: door1 {};
			class door3: door1 {};
			class door4: door1 {};
			class door
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class DoorL
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class DoorR
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Door_LF
			{
				source="door";
				animPeriod=0.40000001;
				sound="A3PL_Open_Close";
				soundPosition="Door_LF_axis";
			};
			class Door_RF: Door_LF
			{
				soundPosition="Door_RF_axis";
			};
			class Door_LB: Door_LF
			{
				soundPosition="Door_LB_axis";
			};
			class Door_LB2: Door_LF
			{
				soundPosition="Door_LB2_axis";
			};
			class Door_LB3: Door_LF
			{
				soundPosition="Door_LB3_axis";
			};
			class Door_LB4: Door_LF
			{
				soundPosition="Door_LB4_axis";
			};
			class Door_LB5: Door_LF
			{
				soundPosition="Door_LB5_axis";
			};
			class Door_LB6: Door_LF
			{
				soundPosition="Door_LB6_axis";
			};
			class Door_RB: Door_LF
			{
				soundPosition="Door_RB_axis";
			};
			class Door_RB2: Door_LF
			{
				soundPosition="Door_RB2_axis";
			};
			class Door_RB3: Door_LF
			{
				soundPosition="Door_RB3_axis";
			};
			class Door_RB4: Door_LF
			{
				soundPosition="Door_RB4_axis";
			};
			class Door_RB5: Door_LF
			{
				soundPosition="Door_RB5_axis";
			};
			class Door_RB6: Door_LF
			{
				soundPosition="Door_RB6_axis";
			};
			class Trunk: Door_LF
			{
				soundPosition="Trunk_axis";
				animPeriod=1;
				source="user";
			};
			class Cargo_Door
			{
				source="user";
				animPeriod=1;
				sound="A3PL_Cargo_Open_Close";
				soundPosition="";
			};
			class Cargo_Door_1: Cargo_Door
			{
				soundPosition="Cargo_Door_1_axis";
			};
			class Cargo_Door_2: Cargo_Door
			{
				soundPosition="Cargo_Door_2_axis";
			};
			class Cargo_Door_3: Cargo_Door
			{
				soundPosition="Cargo_Door_3_axis";
			};
			class Cargo_Door_4: Cargo_Door
			{
				soundPosition="Cargo_Door_4_axis";
			};
			class Cargo_Door_5: Cargo_Door
			{
				soundPosition="Cargo_Door_5_axis";
			};
			class Cargo_Door_6: Cargo_Door
			{
				soundPosition="Cargo_Door_6_axis";
			};
			class Cargo_Door_7: Cargo_Door
			{
				soundPosition="Cargo_Door_7_axis";
			};
			class Cargo_Door_8: Cargo_Door
			{
				soundPosition="Cargo_Door_8_axis";
			};
			class Cargo_Door_9: Cargo_Door
			{
				soundPosition="Cargo_Door_9_axis";
			};
			class Cargo_Door_10: Cargo_Door
			{
				soundPosition="Cargo_Door_10_axis";
			};
			class Cargo_Door_11: Cargo_Door
			{
				soundPosition="Cargo_Door_11_axis";
			};
			class Cargo_Door_12: Cargo_Door
			{
				soundPosition="Cargo_Door_12_axis";
			};
			class Cargo_Door_13: Cargo_Door
			{
				soundPosition="Cargo_Door_13_axis";
			};
			class Cargo_Door_14: Cargo_Door
			{
				soundPosition="Cargo_Door_14_axis";
			};
			class Cargo_Door_15: Cargo_Door
			{
				soundPosition="Cargo_Door_15_axis";
			};
			class Cargo_Door_16: Cargo_Door
			{
				soundPosition="Cargo_Door_16_axis";
			};
			class Cargo_Door_17: Cargo_Door
			{
				soundPosition="Cargo_Door_17_axis";
			};
			class Cargo_Door_18: Cargo_Door
			{
				soundPosition="Cargo_Door_18_axis";
			};
			class Cargo_Door_19: Cargo_Door
			{
				soundPosition="Cargo_Door_19_axis";
			};
			class Cargo_Door_20: Cargo_Door
			{
				soundPosition="Cargo_Door_20_axis";
			};
			class GunBack
			{
				source="revolving";
				weapon="cannon_105mm";
				animPeriod=0.5;
			};
			class GunFront
			{
				source="revolving";
				weapon="cannon_105mm";
				animPeriod=0.5;
			};
			class boatDoor
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class extPressure
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class extPump
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class Door_1: door {};
			class Door_2: door {};
			class Door_3: door {};
			class Door_4: door {};
			class Door_5: door {};
			class Door_6: door {};
			class Door_7: door {};
			class Door_8: door {};
			class Door_9: door {};
			class Door_10: door {};
			class Door_11: door {};
			class Door_12: door {};
			class Door_13: door {};
			class Door_14: door {};
			class Door_15: door {};
			class Door_16: door {};
			class Door_17: door {};
			class Door_18: door {};
			class Door_19: door {};
			class Door_20: door {};
			class Door_21: door {};
			class Door_22: door {};
			class Door_23: door {};
			class Door_24: door {};
			class Door_25: door {};
			class Door_26: door {};
			class Door_27: door {};
			class Door_28: door {};
			class Door_29: door {};
			class Door_30: door {};
			class Door_31: door {};
			class Door_32: door {};
			class Door_33: door {};
			class Door_34: door {};
			class Door_35: door {};
			class Door_36: door {};
			class Door_37: door {};
			class Door_38: door {};
			class Door_39: door {};
			class Door_40: door {};
			class Door_41: door {};
			class Door_42: door {};
			class Door_43: door {};
			class Door_44: door {};
			class Door_45: door {};
			class Door_46: door {};
			class Door_47: door {};
			class Door_48: door {};
			class Door_49: door {};
			class Door_50: door {};
			class LockedDoor_source: Common
			{
				animPeriod=0.1;
			};
			class Door_1_source: Common
			{
				animPeriod=1;
				sound="MetalBigDoorsSound";
				soundPosition="Door_1_trigger";
			};
			class Door_1_handle_source: Common
			{
				animPeriod=1;
			};
			class Door_2_source: Common
			{
				animPeriod=1;
				sound="MetalBigDoorsSound";
				soundPosition="Door_2_trigger";
			};
			class Door_2_handle_source: Common
			{
				animPeriod=1;
			};
		};

		class Sounds
		{
			class IdleOut
			{
				sound[]=
				{
					"A3PL_FD\Sounds\Idle.ogg",
					0.44668359,
					1,
					300
				};
				frequency="0.95 + ((rpm/ 1000) factor[(100/ 1000),(250/ 1000)])*0.15";
				volume="engineOn*(((rpm/ 1000) factor[(100/ 1000),(150/ 1000)]) * ((rpm/ 1000) factor[(270/ 1000),(200/ 1000)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3PL_FD\Sounds\1000.ogg",
					0.63095737,
					1,
					350
				};
				frequency="0.85 + ((rpm/ 1000) factor[(200/ 1000),(370/ 1000)])*0.2";
				volume="engineOn*(((rpm/ 1000) factor[(190/ 1000),(250/ 1000)]) * ((rpm/ 1000) factor[(380/ 1000),(280/ 1000)]))";
			};
			class EngineMidOut
			{
				sound[]=
				{
					"A3PL_FD\Sounds\1500.ogg",
					0.79432821,
					1,
					380
				};
				frequency="0.85 + ((rpm/ 1000) factor[(280/ 1000),(480/ 1000)])*0.2";
				volume="engineOn*(((rpm/ 1000) factor[(250/ 1000),(350/ 1000)]) * ((rpm/ 1000) factor[(480/ 1000),(390/ 1000)]))";
			};
			class EngineMaxOut
			{
				sound[]=
				{
					"A3PL_FD\Sounds\2000.ogg",
					0.89125091,
					1,
					440
				};
				frequency="0.86 + ((rpm/ 1000) factor[(380/ 1000),(580/ 1000)])*0.2";
				volume="engineOn*(((rpm/ 1000) factor[(370/ 1000),(440/ 1000)]) * ((rpm/ 1000) factor[(585/ 1000),(495/ 1000)]))";
			};
			class EngineMaxOut1
			{
				sound[]=
				{
					"A3PL_FD\Sounds\2500.ogg",
					1,
					1,
					500
				};
				frequency="0.85 + ((rpm/ 1000) factor[(490/ 1000),(800/ 1000)])*0.2";
				volume="engineOn*(((rpm/ 1000) factor[(460/ 1000),(550/ 1000)]) * ((rpm/ 1000) factor[(780/ 1000),(620/ 1000)]))";
			};
			class EngineMaxOut2
			{
				sound[]=
				{
					"A3PL_FD\Sounds\3000.ogg",
					1.2589254,
					1,
					550
				};
				frequency="0.85 + ((rpm/ 1000) factor[(650/ 1000),(1000/ 1000)])*0.2";
				volume="engineOn*((rpm/ 1000) factor[(600/ 1000),(800/ 1000)])";
			};
			class EngineMaxOut1_Turbo
			{
				sound[]=
				{
					"A3PL_FD\Sounds\turbo_ext.ogg",
					0.44668359,
					1,
					320
				};
				frequency="0.86 + ((rpm/ 1000) factor[(380/ 1000),(580/ 1000)])*0.2";
				volume="engineOn*(((rpm/ 1000) factor[(370/ 1000),(440/ 1000)]) * ((rpm/ 1000) factor[(585/ 1000),(495/ 1000)]))";
			};
			class EngineMaxOut2_Turbo
			{
				sound[]=
				{
					"A3PL_FD\Sounds\turbo_ext.ogg",
					0.50118721,
					1,
					360
				};
				frequency="0.85 + ((rpm/ 1000) factor[(490/ 1000),(800/ 1000)])*0.2";
				volume="engineOn*(((rpm/ 1000) factor[(460/ 1000),(550/ 1000)]) * ((rpm/ 1000) factor[(780/ 1000),(620/ 1000)]))";
			};
			class EngineMaxOut3_Turbo
			{
				sound[]=
				{
					"A3PL_FD\Sounds\turbo_ext.ogg",
					0.56234133,
					1,
					420
				};
				frequency="0.85 + ((rpm/ 1000) factor[(650/ 1000),(1000/ 1000)])*0.2";
				volume="engineOn*((rpm/ 1000) factor[(600/ 1000),(800/ 1000)])";
			};
			class WaternoiseOutW0
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",
					1,
					1,
					100
				};
				frequency="1";
				volume="(speed factor[4, 1]) * water";
			};
			class WaternoiseOutW1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",
					1,
					1,
					150
				};
				frequency="1";
				volume="((speed factor[2, 6]) min (speed factor[6, 4]))";
			};
			class WaternoiseOutW2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",
					1,
					1,
					300
				};
				frequency="1";
				volume="(speed factor[3, 9])";
			};
			class WaternoiseOutW3
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",
					1,
					1,
					100
				};
				frequency="1";
				volume="(speed factor[-4, -1]) * water";
			};
			class WaternoiseOutW4
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",
					1,
					0.89999998,
					150
				};
				frequency="1";
				volume="((speed factor[-2, -6]) min (speed factor[-6, -4]))";
			};
			class WaternoiseOutW5
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",
					1,
					0.89999998,
					300
				};
				frequency="1";
				volume="(speed factor[-3, -9])";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\noises\boat_land_on_shallow",
					1.7782794,
					0.94999999,
					100
				};
				frequency=1;
				volume="(scrubLand factor[0.01, 0.20])";
			};
		};

		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1_pos";
				direction="exhaust1_dir";
				effect="ExhaustsEffect";
			};
			class Exhaust2
			{
				position="exhaust2_pos";
				direction="exhaust2_dir";
				effect="ExhaustsEffect";
			};
		};

		class MarkerLights
		{
			class Solid_Red1
			{
				color[]={1,0,0};
				ambient[]={0.5,0,0};
				intensity=75;
				name="Solid_Red1_pos";
				activeLight=1;
				blinking=0;
				blinkingPattern[]={0.2,1.3};
				blinkingPatternGuarantee=1;
				blinkingStartsOn=1;
				drawLight=1;
				drawLightSize=0.25;
				drawLightCenterSize=0.079999998;
				dayLight=0;
				useFlare=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=25;
					quadratic=50;
					hardLimitStart=0.75;
					hardLimitEnd=1;
				};
			};
			class Solid_White1: Solid_Red1
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="Solid_White1_pos";
			};
			class Solid_White2: Solid_White1
			{
				name="Solid_White2_pos";
			};
			class Solid_Green1: Solid_Red1
			{
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				name="Solid_Green1_pos";
			};
		};
		extCameraPosition[]={0,0.75,-8};
	};

	class A3PL_Plane_Base: Plane_Civil_01_base_F
	{
		displayName="A3PL_Plane_Base";
		model="";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		secondaryExplosion=0;
		DLC="";
		weapons[]={};
		magazines[]={};
		driverDoor="Door_LF";
		cargoDoors[]=
		{
			"Door_RF"
		};
		driverCanEject=1;
		driverLeftHandAnimName="stick_pilot";
		driverRightHandAnimName="stick_pilot";
		driverLeftLegAnimName="rudder_pilot1";
		driverRightLegAnimName="rudder_pilot2";
		incomingMissileDetectionSystem=0;
		weaponLockSystem=8;
		driveOnComponent[]=
		{
			"wheel_1",
			"wheel_2",
			"wheel_3"
		};
		thrustCoef[]={2,1.9,1.7,1.4,1.3,1.2,1,0.9,0.8,0.7,0.4,0.1,0,0};
		cabinOpening=0;
		cargoCanEject=1;
		airBrake=0;
		ejectSpeed[]={0,0,0};
		flaps=1;
		gearDownTime=5;
		gearRetracting=1;
		gearUpTime=5;
		landingAoa=0.1;
		lightOnGear=0;
		stallWarningTreshold=0.2;
		vtol=0;
		wheelSteeringSensitivity=1.5;
		selectionRotorMove="Rotor_Blur";
		selectionRotorStill="Rotor_Static";
		preciseGetInOut=0;
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverPrecise="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointsGetInGunner="pos gunner";
		memoryPointsGetInGunnerPrecise="pos gunner";
		memoryPointsGetInGunnerDir="pos gunner dir";
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		memoryPointsGetInCargoPrecise="pos cargo";
		attenuationEffectType="PlaneAttenuation";

		soundDammage[]=
		{
			"",
			0.56234097,
			1
		};
		soundLocked[]=
		{
			"",
			0.56234097,
			1
		};
		soundIncommingMissile[]=
		{
			"",
			0.56234097,
			1
		};
		soundGearUp[]=
		{
			"A3\Sounds_F_EPC\CAS_01\gear_up",
			0.79432797,
			1,
			150
		};
		soundGearDown[]=
		{
			"A3\Sounds_F_EPC\CAS_01\gear_down",
			0.79432797,
			1,
			150
		};
		soundFlapsUp[]=
		{
			"A3\Sounds_F_EPC\CAS_01\Flaps_Up",
			0.63095701,
			1,
			100
		};
		soundFlapsDown[]=
		{
			"A3\Sounds_F_EPC\CAS_01\Flaps_Down",
			0.63095701,
			1,
			100
		};
		soundGetIn[]=
		{
			"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_door_close",
			0.31622776,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_door_open",
			0.31622776,
			1,
			40
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_engine_start_int",
			1,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_engine_start_ext",
			1,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_engine_stop_int",
			1,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_engine_stop_ext",
			1,
			1,
			600
		};

		class EventHandlers: EventHandlers
		{
			init="[_this] spawn A3PL_HandleVehicleInit";
		};

		class ViewPilot: ViewPilot
		{
			maxFov=0.80000001;
		};

		class Sounds: Sounds {};
		class TransportItems {};
		class TransportMagazines {};
		class TransportWeapons {};
		class RenderTargets {};

		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				aggregateReflectors[]={};
				allowLauncherIn=0;
				allowLauncherOut=0;
				allowTabLock=1;
				animationSourceBody="";
				animationSourceCamElev="camElev";
				animationSourceGun="";
				animationSourceHatch="hatchGunner";
				armorLights=0.40000001;
				body="";
				canEject=1;
				canHideGunner=-1;
				canUseScanners=1;
				castGunnerShadow=0;
				commanding=-1;
				disableSoundAttenuation=0;
				dontCreateAI=0;
				ejectDeadGunner=0;
				ejectSpeed[]={0,0,3};
				forceHideGunner=0;
				forceNVG=0;
				gun="";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				gunnerAction="Copilot_Plane_Civil_01";
				gunnerCompartments="Compartment1";
				gunnerDoor="";
				gunnerFireAlsoInInternalCamera=1;
				gunnerForceOptics=0;
				gunnerGetInAction="Copilot_Plane_Civil_01_Enter";
				gunnerGetOutAction="Copilot_Plane_Civil_01_Exit";
				gunnerInAction="Copilot_Plane_Civil_01";
				gunnerLeftHandAnimName="";
				gunnerLeftLegAnimName="rudder_copilot1";
				gunnerRightLegAnimName="rudder_copilot2";
				gunnerName="Copilot";
				gunnerOpticsColor[]={0,0,0,1};
				gunnerOpticsEffect[]={};
				gunnerOpticsModel="";
				gunnerOpticsShowCursor=0;
				gunnerOutFireAlsoInInternalCamera=1;
				gunnerOutForceOptics=0;
				gunnerOutOpticsColor[]={0,0,0,1};
				gunnerOutOpticsEffect[]={};
				gunnerOutOpticsModel="";
				gunnerOutOpticsShowCursor=0;
				gunnerRightHandAnimName="cabin_stick_copilot";
				gunnerType="";
				gunnerUsesPilotView=0;
				hasGunner=1;
				hideWeaponsGunner=1;
				inGunnerMayFire=0;
				initElev=11;
				initOutElev=0;
				initOutTurn=0;
				initTurn=0;
				isCopilot=1;
				lockWhenDriverOut=0;
				lockWhenVehicleSpeed=-1;
				LODTurnedIn=-1;
				LODTurnedOut=-1;
				magazines[]={};
				maxElev=30;
				maxHorizontalRotSpeed=3;
				maxOutElev=20;
				maxOutTurn=60;
				maxTurn=130;
				maxVerticalRotSpeed=3;
				memoryPointGun="kulas";
				memoryPointGunnerOptics="gunnerview";
				memoryPointGunnerOutOptics="";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				memoryPointsGetInGunnerPrecise="pos gunner";
				minElev=-50;
				minOutElev=-4;
				minOutTurn=-60;
				minTurn=-130;
				missileBeg="spice rakety";
				missileEnd="konec rakety";
				outGunnerMayFire=0;
				playerPosition=0;
				preciseGetInOut=0;
				primary=1;
				primaryGunner=0;
				primaryObserver=0;
				proxyIndex=1;
				proxyType="CPGunner";
				selectionFireAnim="zasleh";
				showAllTargets=0;
				showCrewAim=0;
				showHMD=0;
				slingLoadOperator=0;
				soundElevation[]=
				{
					"",
					1,
					1
				};
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				stabilizedInAxes=3;
				startEngine=0;
				turrentInfoType="";
				turretCanSee=0;
				turretFollowFreeLook=0;
				viewGunnerInExternal=0;
				viewGunnerShadow=1;
				viewGunnerShadowAmb=1;
				viewGunnerShadowDiff=1;
				weapons[]={};
			};
		};

		class AnimationSources: AnimationSources
		{
			class Common
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Light: Common
			{
				animPeriod=0.2;
			};
			class Proxy: Common
			{
				animPeriod=0.001;
				initPhase=1;
			};
			class Head_Lights: Common {};
			class High_Beam: Common {};
			class Spotlight: Common {};
			class Lightbar: Common {};
			class Fair_Available: Common {};
			class Hitched: Common
			{
				animPeriod=1;
			};
			class Doors: Common
			{
				animPeriod=2;
			};
			class AUX: Common
			{
				animPeriod=0.2;
			};
			class Collision_Lights: Common {};
			class HitEngine
			{
				source="hit";
				hitpoint="HitEngine";
				raw=1;
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
			class HitRGlass: HitGlass1
			{
				hitpoint="HitRGlass";
			};
			class HitLGlass: HitGlass1
			{
				hitpoint="HitLGlass";
			};
			class DoorL: Common
			{
				animPeriod=1;
			};
			class DoorR: Common
			{
				animPeriod=1;
			};
			class Door_LF
			{
				source="door";
				animPeriod=0.40000001;
				sound="A3PL_Open_Close";
				soundPosition="Door_LF_axis";
			};
			class Door_RF: Door_LF
			{
				soundPosition="Door_RF_axis";
			};
			class Door_LB: Door_LF
			{
				soundPosition="Door_LB_axis";
			};
			class Door_Pilot: Door_LF
			{
				soundPosition="Door_Pilot_axis";
			};
			class Door_CoPilot: Door_LF
			{
				soundPosition="Door_CoPilot_axis";
			};
			class Door_Cargo1: Door_LF
			{
				soundPosition="Door_Cargo1_axis";
			};
			class Door_Cargo2: Door_LF
			{
				soundPosition="Door_Cargo2_axis";
			};
			class Door_Cargo3: Door_LF
			{
				soundPosition="Door_Cargo3_axis";
			};
			class Door_Cargo4: Door_LF
			{
				soundPosition="Door_Cargo4_axis";
			};
			class Door_Cargo5: Door_LF
			{
				soundPosition="Door_Cargo5_axis";
			};
			class Pilot_Door: Door_LF
			{
				soundPosition="Pilot_Door_axis";
			};
			class CoPilot_Door: Door_LF
			{
				soundPosition="CoPilot_Door_axis";
			};
			class Trunk: Door_LF
			{
				soundPosition="Trunk_axis";
				animPeriod=1;
				source="user";
			};
			class Mods
			{
				initPhase=0;
				displayName="Mods";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
			class Floats
			{
				source="user";
				animPeriod=8;
				initPhase=0;
			};
			class Fuelpump
			{
				source="user";
				animPeriod=1;
				initPhase=0;
				sound="GooseFuelPump";
			};
			class Flaps: Fuelpump {};
			class Generator: Fuelpump
			{
				sound="GooseGen";
			};
			class Ignition: Fuelpump
			{
				initPhase=0;
				sound="GooseStartup";
			};
			class Batteries: Fuelpump {};
			class Solid_Red1
			{
				source="MarkerLight";
				markerLight="Solid_Red1";
			};
			class GreenStill: Solid_Red1
			{
				markerLight="GreenStill";
			};
			class WhiteBlinking: Solid_Red1
			{
				markerLight="WhiteBlinking";
			};
			class WhiteStill: Solid_Red1
			{
				markerLight="WhiteStill";
			};
			class RedBlinking: Solid_Red1
			{
				markerLight="RedBlinking";
			};
			class collisionlightwhite1t_source: Solid_Red1
			{
				markerLight="Collision_Light_hull_White";
			};
		};
		class HitPoints
		{
			class HitHull
			{
				armor=1.5;
				explosionShielding=1;
				material=-1;
				radius=0.30000001;
				passThrough=0.5;
				name="HitHull";
				visual="Camo1";
				depends="Total";
				minimalHit=0;
			};
			class HitRotor: HitHull
			{
				armor=0.25;
				explosionShielding=1;
				name="HitRotor";
				passThrough=0.2;
				radius=0.13;
				visual="";
				depends="0";
				minimalHit=0.1;
			};
			class HitEngine: HitRotor
			{
				armor=0.25;
				explosionShielding=1;
				name="HitEngine";
				passThrough=0.2;
				radius=0.40000001;
				visual="Hit_Engine";
				depends="HitRotor";
				minimalHit=0.1;
				material=-1;
			};
			class HitAvionics: HitHull
			{
				armor=0.1;
				explosionShielding=3;
				name="HitAvionics";
				passThrough=0.2;
				radius=0.2;
				visual="MFD_off_dmg";
				depends="0";
				minimalHit=0.050000001;
				material=-1;
			};
			class HitFuel: HitHull
			{
				armor=1.5;
				explosionShielding=2;
				name="HitFuel";
				passThrough=0.2;
				radius=0.1;
				visual="Hit_AileronL";
				depends="0";
			};
			class HitFuel2: HitHull
			{
				armor=1.5;
				explosionShielding=2;
				name="HitFuel2";
				passThrough=0.2;
				radius=0.1;
				visual="Hit_AileronR";
				depends="0";
			};
			class HitLAileron: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				name="HitLAileron";
				passThrough=0.1;
				radius=0.15000001;
				visual="Hit_AileronL";
				depends="0";
				minimalHit=0.1;
			};
			class HitRAileron: HitLAileron
			{
				armor=1.5;
				explosionShielding=3;
				name="HitRAileron";
				passThrough=0.1;
				radius=0.15000001;
				visual="Hit_AileronR";
				depends="0";
				minimalHit=0.1;
			};
			class HitLCRudder: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				name="HitLCRudder";
				passThrough=0.1;
				radius=0.15000001;
				visual="Hit_RudderC";
				depends="0";
				minimalHit=0.1;
			};
			class HitLCElevator: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				name="HitLCElevator";
				passThrough=0.1;
				radius=0.15000001;
				visual="Hit_ElevatorL";
				depends="0";
				minimalHit=0.1;
			};
			class HitRElevator: HitLCElevator
			{
				armor=1.5;
				explosionShielding=3;
				name="HitRElevator";
				passThrough=0.1;
				radius=0.15000001;
				visual="Hit_ElevatorR";
				depends="0";
				minimalHit=0.1;
			};
			class HitGlass1
			{
				source="Hit";
				hitpoint="glass1";
				raw=1;
				armor=0.5;
				explosionShielding=0.1;
				name="glass1";
				passThrough=0;
				radius=0.1;
				visual="glass1";
				depends="0";
				material=-1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint="glass2";
				name="glass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint="glass3";
				name="glass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint="glass4";
				name="glass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint="glass5";
				name="glass5";
			};
			class HitGlass6: HitGlass1
			{
				hitpoint="glass6";
				name="glass6";
			};
			class HitGlass7: HitGlass1
			{
				hitpoint="glass7";
				name="glass7";
			};
			class HitGlass8: HitGlass1
			{
				hitpoint="glass8";
				name="glass8";
			};
			class HitGlass9: HitGlass1
			{
				hitpoint="glass9";
				name="glass9";
			};
			class HitGlass10: HitGlass1
			{
				hitpoint="glass10";
				name="glass10";
			};
			class HitRGlass: HitGlass1
			{
				hitpoint="HitRGlass";
			};
			class HitLGlass: HitGlass1
			{
				hitpoint="HitLGlass";
			};
		};
		class WingVortices {};
	};

	class A3PL_Tracked_base: I_APC_tracked_03_cannon_F
	{
		simulation="tankX";
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		scope=1;
		airCapacity=0;
		secondaryExplosion=0;
		fuelExplosionPower=0;
		scopeCurator=0;
		scopeArsenal=2;
		enginePower=105;
		maxOmega=262;
		peakTorque=570;
		torqueCurve[]=
		{
			
			{
				"(0/8000)",
				"(2300/2300)"
			},
			
			{
				"(1143/8000)",
				"(2300/2300)"
			},
			
			{
				"(2286/8000)",
				"(2300/2300)"
			},
			
			{
				"(3429/8000)",
				"(2300/2300)"
			},
			
			{
				"(4572/8000)",
				"(2300/2300)"
			},
			
			{
				"(5715/8000)",
				"(2300/2300)"
			},
			
			{
				"(6858/8000)",
				"(2300/2300)"
			},
			
			{
				"(8000/8000)",
				"(2300/2300)"
			}
		};
		fuelCapacity=360;
		tankTurnForce=100000;
		idleRPM=550;
		redRPM=2500;
		thrustDelay=0.75;
		enableManualFire=1;
		memoryPointTrack1L="stopa pll";
		memoryPointTrack1R="stopa ppp";
		memoryPointTrack2L="stopa zll";
		memoryPointTrack2R="stopa zpp";

		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-2,
				"N",
				0,
				"D1",
				2
			};
			TransmissionRatios[]=
			{
				"High",
				9
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.1;
		};

		class Wheels
		{
			class LF
			{
				boneName="podkoloL1";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				maxCompression=0.075000003;
				mMaxDroop=0.075000003;
				steering=0;
				side="left";
				width="0.2";
				mass=80;
				MOI=40;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=30000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				sprungMass=1500;
				springStrength=51338;
				springDamperRate=5000;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName="podkoloL2";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
			};
			class RF: LF
			{
				boneName="podkoloP1";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				side="right";
			};
			class RR: RF
			{
				boneName="podkoloP2";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
			};
		};
		maxSpeed=60;
		transportSoldier=0;
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoAction[]=
		{
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic03",
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic02",
			"passenger_apc_narrow_generic02",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanleft"
		};
		driverAction="driver_apctracked3_out";
		driverInAction="driver_apctracked3_in";
		extCameraPosition[]={0,2,-11};
		forceHideDriver=0;
		hideProxyInCombat=0;
		DriverForceOptics=0;
		hasGunner=0;
		hasCommander=0;
		numberPhysicalWheels=4;
		terrainCoef=0;
		turnCoef=5;
		canFloat=0;
		maxFordingDepth=0.1;
		LODTurnedIn=0;
		LODTurnedOut=0;
		model="";
		picture="\A3\Armor_F_EPB\APC_Tracked_03\Data\UI\APC_Tracked_03_Base_ca.paa";
		icon="\A3\Armor_F_EPB\APC_Tracked_03\Data\UI\map_APC_Tracked_03_CA.paa";

		class TransportItems {};
		class TransportMagazines {};
		class TransportWeapons {};

		class HitPoints: HitPoints
		{
			class HitGlass1
			{
				armor=0.050000001;
				material=-1;
				name="glass1";
				visual="glass1";
				passThrough=0;
				radius=0.40000001;
			};
			class HitGlass2: HitGlass1
			{
				name="glass2";
				visual="glass2";
			};
			class HitGlass3: HitGlass1
			{
				name="glass3";
				visual="glass3";
			};
			class HitGlass4: HitGlass1
			{
				name="glass4";
				visual="glass4";
			};
			class HitGlass5: HitGlass1
			{
				name="glass5";
				visual="glass5";
			};
			class HitGlass6: HitGlass1
			{
				name="glass6";
				visual="glass6";
			};
			class HitGlass7: HitGlass1
			{
				name="glass7";
				visual="glass7";
			};
			class HitGlass8: HitGlass1
			{
				name="glass8";
				visual="glass8";
			};
			class HitGlass9: HitGlass1
			{
				name="glass9";
				visual="glass9";
			};
			class HitGlass10: HitGlass1
			{
				name="glass10";
				visual="glass10";
			};
		};
		selectionFireAnim="";

		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustsEffectBig";
			};
		};

		insideSoundCoef=0;
		selectionLeftOffset="PasOffsetL";
		selectionRightOffset="PasOffsetP";
		attenuationEffectType="OpenCarAttenuation";
		soundEngineOnInt[]=
		{
			"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_int_start",
			0.63095737,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_ext_start",
			0.79432821,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_int_stop",
			0.63095737,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_ext_stop",
			0.79432821,
			1,
			200
		};
		class Sounds: Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_1",
					0.79432821,
					1,
					200
				};
				frequency="0.95 + ((rpm/ 2300) factor[(400/ 2300),(750/ 2300)])*0.15";
				volume="engineOn*camPos*(((rpm/ 2300) factor[(100/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(760/ 2300),(600/ 2300)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_2",
					0.89125091,
					1,
					240
				};
				frequency="0.8 + ((rpm/ 2300) factor[(620/ 2300),(910/ 2300)])*0.2";
				volume="engineOn*camPos*(((rpm/ 2300) factor[(620/ 2300),(750/ 2300)]) * ((rpm/ 2300) factor[(920/ 2300),(800/ 2300)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_3",
					1.1220185,
					1,
					280
				};
				frequency="0.8 + ((rpm/ 2300) factor[(800/ 2300),(1150/ 2300)])*0.2";
				volume="engineOn*camPos*(((rpm/ 2300) factor[(800/ 2300),(900/ 2300)]) * ((rpm/ 2300) factor[(1150/ 2300),(960/ 2300)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_4",
					1.2589254,
					1,
					320
				};
				frequency="0.8 + ((rpm/ 2300) factor[(960/ 2300),(1500/ 2300)])*0.2";
				volume="engineOn*camPos*(((rpm/ 2300) factor[(950/ 2300),(1100/ 2300)]) * ((rpm/ 2300) factor[(1500/ 2300),(1250/ 2300)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_5",
					1.4125376,
					1,
					360
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1200/ 2300),(1700/ 2300)])*0.1";
				volume="engineOn*camPos*(((rpm/ 2300) factor[(1250/ 2300),(1450/ 2300)]) * ((rpm/ 2300) factor[(1700/ 2300),(1560/ 2300)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_6",
					1.5848932,
					1,
					400
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1520/ 2300),(2000/ 2300)])*0.1";
				volume="engineOn*camPos*(((rpm/ 2300) factor[(1570/ 2300),(1670/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1800/ 2300)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_7",
					1.7782794,
					1,
					440
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1800/ 2300),(2300/ 2300)])*0.1";
				volume="engineOn*camPos*((rpm/ 2300) factor[(1850/ 2300),(1950/ 2300)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_1",
					1.1220185,
					1,
					200
				};
				frequency="0.8 + ((rpm/ 2300) factor[(400/ 2300),(750/ 2300)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(100/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(760/ 2300),(600/ 2300)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_2",
					1.4125376,
					1,
					200
				};
				frequency="0.8 + ((rpm/ 2300) factor[(620/ 2300),(910/ 2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(620/ 2300),(750/ 2300)]) * ((rpm/ 2300) factor[(920/ 2300),(800/ 2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_3",
					1.7782794,
					1,
					230
				};
				frequency="0.8 + ((rpm/ 2300) factor[(800/ 2300),(1150/ 2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(800/ 2300),(900/ 2300)]) * ((rpm/ 2300) factor[(1150/ 2300),(960/ 2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_4",
					1.9952624,
					1,
					290
				};
				frequency="0.8 + ((rpm/ 2300) factor[(960/ 2300),(1500/ 2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(950/ 2300),(1100/ 2300)]) * ((rpm/ 2300) factor[(1500/ 2300),(1250/ 2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_5",
					1.7782794,
					1,
					350
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1200/ 2300),(1700/ 2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1250/ 2300),(1450/ 2300)]) * ((rpm/ 2300) factor[(1700/ 2300),(1560/ 2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_6",
					2.2387211,
					1,
					400
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1520/ 2300),(2000/ 2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1570/ 2300),(1670/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1800/ 2300)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_7",
					2.5118864,
					1,
					450
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1800/ 2300),(2300/ 2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2300) factor[(1850/ 2300),(1950/ 2300)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_1",
					0.50118721,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(400/ 2300),(750/ 2300)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/ 2300) factor[(100/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(760/ 2300),(600/ 2300)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_2",
					0.35481337,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(620/ 2300),(910/ 2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 2300) factor[(620/ 2300),(750/ 2300)]) * ((rpm/ 2300) factor[(920/ 2300),(800/ 2300)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_3",
					0.39810717,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(800/ 2300),(1150/ 2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 2300) factor[(800/ 2300),(900/ 2300)]) * ((rpm/ 2300) factor[(1150/ 2300),(960/ 2300)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_4",
					0.44668359,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(960/ 2300),(1500/ 2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 2300) factor[(950/ 2300),(1100/ 2300)]) * ((rpm/ 2300) factor[(1500/ 2300),(1250/ 2300)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_5",
					0.50118721,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1200/ 2300),(1700/ 2300)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/ 2300) factor[(1250/ 2300),(1450/ 2300)]) * ((rpm/ 2300) factor[(1700/ 2300),(1560/ 2300)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_6",
					0.56234133,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1520/ 2300),(2000/ 2300)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/ 2300) factor[(1570/ 2300),(1670/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1800/ 2300)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_7",
					0.63095737,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1800/ 2300),(2300/ 2300)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/ 2300) factor[(1850/ 2300),(1950/ 2300)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_1",
					0.63095737,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(400/ 2300),(750/ 2300)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(100/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(760/ 2300),(600/ 2300)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_2",
					0.39810717,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(620/ 2300),(910/ 2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(620/ 2300),(750/ 2300)]) * ((rpm/ 2300) factor[(920/ 2300),(800/ 2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_3",
					0.44668359,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(800/ 2300),(1150/ 2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(800/ 2300),(900/ 2300)]) * ((rpm/ 2300) factor[(1150/ 2300),(960/ 2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_4",
					0.44668359,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(960/ 2300),(1500/ 2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(950/ 2300),(1100/ 2300)]) * ((rpm/ 2300) factor[(1500/ 2300),(1250/ 2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_5",
					0.50118721,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1200/ 2300),(1700/ 2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1250/ 2300),(1450/ 2300)]) * ((rpm/ 2300) factor[(1700/ 2300),(1560/ 2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_6",
					0.56234133,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1520/ 2300),(2000/ 2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1570/ 2300),(1670/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1800/ 2300)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_7",
					0.63095737,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1800/ 2300),(2300/ 2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2300) factor[(1850/ 2300),(1950/ 2300)])";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=0;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class Right2: Right
			{
				position="light_R_flare";
				useFlare=1;
			};
			class Left2: Left
			{
				position="light_L_flare";
				useFlare=1;
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Left2",
				"Right",
				"Right2"
			}
		};
		class RenderTargets
		{
			class mirror_l
			{
				renderTarget="mirror_l";
				class Camera
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.69999999;
				};
			};
			class mirror_r
			{
				renderTarget="mirror_r";
				class Camera
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.69999999;
				};
			};
		};
		smokeLauncherGrenadeCount=0;
		smokeLauncherVelocity=0;
		smokeLauncherOnTurret=0;
		smokeLauncherAngle=0;
		class ViewPilot
		{
			minFov=0.25;
			maxFov=1.25;
			initFov=0.75;
			initAngleX=0;
			minAngleX=-65;
			maxAngleX=85;
			initAngleY=0;
			maxAngleY=165;
			minAngleY=-165;
		};
		class ViewOptics: ViewPilot {};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3PL_Cars\Common\rvmats\car_paint_old.rvmat",
				"A3PL_Cars\Common\rvmats\Body_damage.rvmat",
				"A3PL_Cars\Common\rvmats\Body_destruct.rvmat",
				"A3PL_Cars\Common\rvmats\Car_paint.rvmat",
				"A3PL_Cars\Common\rvmats\Body_damage.rvmat",
				"A3PL_Cars\Common\rvmats\Body_destruct.rvmat",
				"A3PL_Cars\Common\rvmats\Car_paint_mat.rvmat",
				"A3PL_Cars\Common\rvmats\Body_damage.rvmat",
				"A3PL_Cars\Common\rvmats\Body_destruct.rvmat"
			};
		};
		class AnimationSources: AnimationSources
		{
			class Light
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class Proxy
			{
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class Common
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Head_Lights: Common {};
			class High_Beam: Common {};
			class Spotlight: Common {};
			class Lightbar: Common {};
			class Collision_Lights: Common {};
			class Doors
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class AUX
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class Siren_Control_Noob
			{
				source="user";
				animPeriod=0.050000001;
				initPhase=5.5999999;
			};
			class Laptop
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class Laptop_Top
			{
				source="user";
				animPeriod=1.5;
				initPhase=0;
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
			class DoorL
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class DoorR
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Door_LF
			{
				source="door";
				animPeriod=0.40000001;
				sound="A3PL_Truck_Open_Close";
				soundPosition="Door_LF_axis";
			};
			class Door_RF: Door_LF
			{
				soundPosition="Door_RF_axis";
			};
			class Door_LB: Door_LF
			{
				soundPosition="Door_LB_axis";
			};
			class Door_LB2: Door_LF
			{
				soundPosition="Door_LB2_axis";
			};
			class Door_LB3: Door_LF
			{
				soundPosition="Door_LB3_axis";
			};
			class Door_LB4: Door_LF
			{
				soundPosition="Door_LB4_axis";
			};
			class Door_LB5: Door_LF
			{
				soundPosition="Door_LB5_axis";
			};
			class Door_LB6: Door_LF
			{
				soundPosition="Door_LB6_axis";
			};
			class Door_RB: Door_LF
			{
				soundPosition="Door_RB_axis";
			};
			class Door_RB2: Door_LF
			{
				soundPosition="Door_RB2_axis";
			};
			class Door_RB3: Door_LF
			{
				soundPosition="Door_RB3_axis";
			};
			class Door_RB4: Door_LF
			{
				soundPosition="Door_RB4_axis";
			};
			class Door_RB5: Door_LF
			{
				soundPosition="Door_RB5_axis";
			};
			class Door_RB6: Door_LF
			{
				soundPosition="Door_RB6_axis";
			};
			class Cargo_Door
			{
				source="user";
				animPeriod=1;
				sound="A3PL_Cargo_Open_Close";
				soundPosition="";
			};
			class Cargo_Door_1: Cargo_Door
			{
				soundPosition="Cargo_Door_1_axis";
			};
			class Cargo_Door_2: Cargo_Door
			{
				soundPosition="Cargo_Door_2_axis";
			};
			class Cargo_Door_3: Cargo_Door
			{
				soundPosition="Cargo_Door_3_axis";
			};
			class Cargo_Door_4: Cargo_Door
			{
				soundPosition="Cargo_Door_4_axis";
			};
			class Cargo_Door_5: Cargo_Door
			{
				soundPosition="Cargo_Door_5_axis";
			};
			class Cargo_Door_6: Cargo_Door
			{
				soundPosition="Cargo_Door_6_axis";
			};
			class Cargo_Door_7: Cargo_Door
			{
				soundPosition="Cargo_Door_7_axis";
			};
			class Cargo_Door_8: Cargo_Door
			{
				soundPosition="Cargo_Door_8_axis";
			};
			class Cargo_Door_9: Cargo_Door
			{
				soundPosition="Cargo_Door_9_axis";
			};
			class Cargo_Door_10: Cargo_Door
			{
				soundPosition="Cargo_Door_10_axis";
			};
			class Cargo_Door_11: Cargo_Door
			{
				soundPosition="Cargo_Door_11_axis";
			};
			class Cargo_Door_12: Cargo_Door
			{
				soundPosition="Cargo_Door_12_axis";
			};
			class Cargo_Door_13: Cargo_Door
			{
				soundPosition="Cargo_Door_13_axis";
			};
			class Cargo_Door_14: Cargo_Door
			{
				soundPosition="Cargo_Door_14_axis";
			};
			class Cargo_Door_15: Cargo_Door
			{
				soundPosition="Cargo_Door_15_axis";
			};
			class Cargo_Door_16: Cargo_Door
			{
				soundPosition="Cargo_Door_16_axis";
			};
			class Cargo_Door_17: Cargo_Door
			{
				soundPosition="Cargo_Door_17_axis";
			};
			class Cargo_Door_18: Cargo_Door
			{
				soundPosition="Cargo_Door_18_axis";
			};
			class Cargo_Door_19: Cargo_Door
			{
				soundPosition="Cargo_Door_19_axis";
			};
			class Cargo_Door_20: Cargo_Door
			{
				soundPosition="Cargo_Door_20_axis";
			};
			class Outriggers
			{
				source="user";
				animPeriod=5;
				sound="A3PL_Hydraulic";
				soundPosition="";
			};
			class truck_flatbed
			{
				source="user";
				animPeriod=20;
				initPhase=0;
				sound="A3PL_Hydraulic";
				soundPosition="flatbed_axis";
			};
			class Ladder_Extend
			{
				source="user";
				animPeriod=25;
				sound="A3PL_Hydraulic";
				soundPosition="";
			};
			class Ladder_Holder
			{
				source="user";
				animPeriod=6;
			};
			class Trunk: Door_LF
			{
				soundPosition="Trunk_axis";
				animPeriod=1;
				source="user";
			};
			class Cabin
			{
				source="user";
				animPeriod=0.1;
				initPhase=0;
			};
			class frontArm_Gun
			{
				source="user";
				animPeriod=0.1;
				initPhase=0;
			};
			class groundShov
			{
				source="user";
				animPeriod=5;
				initPhase=-0.5;
			};
			class armHinge
			{
				source="user";
				animPeriod=0.1;
				initPhase=0;
			};
			class arm
			{
				source="user";
				animPeriod=0.1;
				initPhase=0.80000001;
			};
			class frontArm
			{
				source="user";
				animPeriod=0.1;
				initPhase=-0.60000002;
			};
			class Mods
			{
				initPhase=0;
				displayName="Mods";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
			class attachment
			{
				source="user";
				animPeriod=0.1;
				initPhase=0.5;
			};
		};
		class Library
		{
			libTextDesc="";
		};
	};

	class A3PL_Helicopter_Medium_Base: B_Heli_Transport_01_F
	{
		author="A3PL Development Team";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		secondaryExplosion=0;
		displayName="A3PL_Helicopter_Medium_Base";
		model="";
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		class MFD {};
		driverInAction="pilot_Heli_Transport_01";
		driverAction="pilot_Heli_Transport_01";
		cargoAction[]=
		{
			"passenger_flatground_leanleft",
			"passenger_flatground_leanright",
			"passenger_flatground_crosslegs",
			"passenger_flatground_leanleft"
		};
		cargogetinaction[]=
		{
			"bench_mh9_get_in"
		};
		cargogetoutaction[]=
		{
			"bench_mh9_get_out"
		};
		getinaction="ChopperLight_L_In_H";
		getoutaction="GetOutLow";
		incomingMissileDetectionSystem=0;

		class EventHandlers: Eventhandlers
		{
			init="[_this] spawn A3PL_HandleVehicleInit";
		};

		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3PL_Cars\Common\rvmats\car_paint_old.rvmat",
				"A3PL_Cars\Common\rvmats\Body_damage.rvmat",
				"A3PL_Cars\Common\rvmats\Body_destruct.rvmat",
				"A3PL_Cars\Common\rvmats\Car_paint.rvmat",
				"A3PL_Cars\Common\rvmats\Body_damage.rvmat",
				"A3PL_Cars\Common\rvmats\Body_destruct.rvmat",
				"A3PL_Cars\Common\rvmats\Car_paint_mat.rvmat",
				"A3PL_Cars\Common\rvmats\Body_damage.rvmat",
				"A3PL_Cars\Common\rvmats\Body_destruct.rvmat"
			};
		};

		class textureSources {};

		class CargoTurret;
		class AnimationSources: AnimationSources
		{
			class Light
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class Proxy
			{
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class Common
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Head_Lights: Common {};
			class High_Beam: Common {};
			class Spotlight: Common {};
			class Lightbar: Common {};
			class Collision_Lights: Common {};
			class Cockpit_Lights: Common {};
			class Fair_Available: Common {};
			class Hitched: Common
			{
				animPeriod=1;
			};
			class Doors
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class AUX
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class Siren_Control_Noob
			{
				source="user";
				animPeriod=0.050000001;
				initPhase=5.5999999;
			};
			class Laptop
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class Laptop_Top
			{
				source="user";
				animPeriod=1.5;
				initPhase=0;
			};
			class Spotlight_Spin
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Spotlight_Lift: Spotlight_Spin {};
			class HitLFWheel
			{
				source="Hit";
				hitpoint="HitLFWheel";
				raw=1;
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint="HitRFWheel";
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint="HitLF2Wheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint="HitRF2Wheel";
			};
			class HitLF2Wheel: HitLFWheel
			{
				hitpoint="HitLBWheel";
			};
			class HitRF2Wheel: HitLFWheel
			{
				hitpoint="HitRBWheel";
			};
			class HitLMWheel: HitLFWheel
			{
				hitpoint="HitLMWheel";
			};
			class HitRMWheel: HitLFWheel
			{
				hitpoint="HitRMWheel";
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
			class HitRGlass: HitGlass1
			{
				hitpoint="HitRGlass";
			};
			class HitLGlass: HitGlass1
			{
				hitpoint="HitLGlass";
			};
			class DoorL
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class DoorR
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Door_LF
			{
				source="door";
				animPeriod=0.40000001;
				sound="A3PL_Open_Close";
				soundPosition="Door_LF_axis";
			};
			class Door_RF: Door_LF
			{
				soundPosition="Door_RF_axis";
			};
			class Door_LB: Door_LF
			{
				soundPosition="Door_LB_axis";
			};
			class Door_LB2: Door_LF
			{
				soundPosition="Door_LB2_axis";
			};
			class Door_LB3: Door_LF
			{
				soundPosition="Door_LB3_axis";
			};
			class Door_LB4: Door_LF
			{
				soundPosition="Door_LB4_axis";
			};
			class Door_LB5: Door_LF
			{
				soundPosition="Door_LB5_axis";
			};
			class Door_LB6: Door_LF
			{
				soundPosition="Door_LB6_axis";
			};
			class Door_RB: Door_LF
			{
				soundPosition="Door_RB_axis";
			};
			class Door_RB2: Door_LF
			{
				soundPosition="Door_RB2_axis";
			};
			class Door_RB3: Door_LF
			{
				soundPosition="Door_RB3_axis";
			};
			class Door_RB4: Door_LF
			{
				soundPosition="Door_RB4_axis";
			};
			class Door_RB5: Door_LF
			{
				soundPosition="Door_RB5_axis";
			};
			class Door_RB6: Door_LF
			{
				soundPosition="Door_RB6_axis";
			};
			class Door_Pilot: Door_LF
			{
				soundPosition="Door_Pilot_axis";
			};
			class Door_CoPilot: Door_LF
			{
				soundPosition="Door_CoPilot_axis";
			};
			class Door_Cargo1: Door_LF
			{
				soundPosition="Door_Cargo1_axis";
			};
			class Door_Cargo2: Door_LF
			{
				soundPosition="Door_Cargo2_axis";
			};
			class Door_Cargo3: Door_LF
			{
				soundPosition="Door_Cargo3_axis";
			};
			class Door_Cargo4: Door_LF
			{
				soundPosition="Door_Cargo4_axis";
			};
			class Door_Cargo5: Door_LF
			{
				soundPosition="Door_Cargo5_axis";
			};
			class Trunk: Door_LF
			{
				soundPosition="Trunk_axis";
				animPeriod=1;
				source="user";
			};
			class Cargo_Door
			{
				source="user";
				animPeriod=1;
				sound="A3PL_Cargo_Open_Close";
				soundPosition="";
			};
			class Cargo_Door_1: Cargo_Door
			{
				soundPosition="Cargo_Door_1_axis";
			};
			class Cargo_Door_2: Cargo_Door
			{
				soundPosition="Cargo_Door_2_axis";
			};
			class Cargo_Door_3: Cargo_Door
			{
				soundPosition="Cargo_Door_3_axis";
			};
			class Cargo_Door_4: Cargo_Door
			{
				soundPosition="Cargo_Door_4_axis";
			};
			class Cargo_Door_5: Cargo_Door
			{
				soundPosition="Cargo_Door_5_axis";
			};
			class Cargo_Door_6: Cargo_Door
			{
				soundPosition="Cargo_Door_6_axis";
			};
			class Cargo_Door_7: Cargo_Door
			{
				soundPosition="Cargo_Door_7_axis";
			};
			class Cargo_Door_8: Cargo_Door
			{
				soundPosition="Cargo_Door_8_axis";
			};
			class Cargo_Door_9: Cargo_Door
			{
				soundPosition="Cargo_Door_9_axis";
			};
			class Cargo_Door_10: Cargo_Door
			{
				soundPosition="Cargo_Door_10_axis";
			};
			class Cargo_Door_11: Cargo_Door
			{
				soundPosition="Cargo_Door_11_axis";
			};
			class Cargo_Door_12: Cargo_Door
			{
				soundPosition="Cargo_Door_12_axis";
			};
			class Cargo_Door_13: Cargo_Door
			{
				soundPosition="Cargo_Door_13_axis";
			};
			class Cargo_Door_14: Cargo_Door
			{
				soundPosition="Cargo_Door_14_axis";
			};
			class Cargo_Door_15: Cargo_Door
			{
				soundPosition="Cargo_Door_15_axis";
			};
			class Cargo_Door_16: Cargo_Door
			{
				soundPosition="Cargo_Door_16_axis";
			};
			class Cargo_Door_17: Cargo_Door
			{
				soundPosition="Cargo_Door_17_axis";
			};
			class Cargo_Door_18: Cargo_Door
			{
				soundPosition="Cargo_Door_18_axis";
			};
			class Cargo_Door_19: Cargo_Door
			{
				soundPosition="Cargo_Door_19_axis";
			};
			class Cargo_Door_20: Cargo_Door
			{
				soundPosition="Cargo_Door_20_axis";
			};
			class Outriggers
			{
				source="user";
				animPeriod=5;
				sound="A3PL_Hydraulic";
				soundPosition="";
			};
			class Solid_Red1
			{
				source="MarkerLight";
				markerLight="Solid_Red1";
			};
			class Solid_White1: Solid_Red1
			{
				markerLight="Solid_White1";
			};
			class Solid_Green1: Solid_Red1
			{
				markerLight="Solid_Green1";
			};
			class Blinking_Red1: Solid_Red1
			{
				markerLight="Blinking_Red1";
			};
			class Blinking_Red2: Solid_Red1
			{
				markerLight="Blinking_Red2";
			};
			class Interior_Light: Solid_Red1
			{
				markerLight="Interior_Light";
			};
			class RedStill: Solid_Red1
			{
				markerLight="RedStill";
			};
			class RedStill_2: Solid_Red1
			{
				markerLight="RedStill_2";
			};
			class GreenStill: Solid_Red1
			{
				markerLight="GreenStill";
			};
			class GreenStill_2: Solid_Red1
			{
				markerLight="GreenStill_2";
			};
			class WhiteBlinking: Solid_Red1
			{
				markerLight="WhiteBlinking";
			};
			class WhiteBlinking_2: Solid_Red1
			{
				markerLight="WhiteBlinking_2";
			};
			class WhiteStill: Solid_Red1
			{
				markerLight="WhiteStill";
			};
			class RedBlinking: Solid_Red1
			{
				markerLight="RedBlinking";
			};
			class Mods
			{
				initPhase=0;
				displayName="Mods";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
			class fold
			{
				source="user";
				animperiod=0.5;
				initPhase=0.5;
			};
			class Jayhawk_Fold
			{
				source="user";
				animperiod=25;
				initPhase=0;
			};
			class battery: fold
			{
				initPhase=0;
			};
			class gen1: fold {};
			class gen2: gen1 {};
			class gen3: gen1 {};
			class ecs: fold {};
			class fuelpump: fold {};
			class ignition: fold {};
			class apucontrol: fold {};
			class windshield
			{
				source="user";
				animperiod=0.5;
				initPhase=0;
			};
			class RotorManual
			{
				source="user";
				animperiod=8;
				initPhase=0;
			};
			class wingbackmiddle
			{
				source="user";
				animperiod=6;
				initPhase=1;
			};
			class wingbackleft: wingbackmiddle
			{
				animperiod=5;
			};
			class wingbackright: wingbackmiddle
			{
				animperiod=5;
			};
			class blade1
			{
				source="user";
				animperiod=4;
				initPhase=1;
			};
			class blade2: blade1 {};
			class blade3: blade1 {};
			class blade4: blade1 {};
			class ctail
			{
				source="user";
				animperiod=5;
				initPhase=1;
			};
			class door1
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class door2: door1 {};
			class door3: door1 {};
		};

		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class UserActions {};
		class HitPoints: HitPoints {};
		class Turrets: Turrets {};
		class ViewGunner: ViewGunner {};

		class MarkerLights
		{
			class WhiteStill
			{
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				name="bily pozicni";
				intensity=75;
				blinking=1;
				blinkingPattern[]={0.1,0.89999998};
				blinkingPatternGuarantee=0;
				drawLightSize=0.2;
				drawLightCenterSize=0.039999999;
			};
			class RedStill
			{
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				name="cerveny pozicni";
				intensity=75;
				drawLight=3;
				drawLightSize=0.15000001;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
			};
			class GreenStill
			{
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				name="zeleny pozicni";
				intensity=75;
				drawLight=3;
				drawLightSize=0.15000001;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
			};
			class WhiteBlinking
			{
				name="cerveny pozicni blik";
				color[]={0.80000001,0,0};
				intensity=75;
				ambient[]={0.090000004,0.015,0.0099999998};
				blinking=1;
				blinkingPattern[]={0.1,0.69999999};
				blinkingPatternGuarantee=0;
				drawLightSize=0.25;
				drawLightCenterSize=0.079999998;
			};
		};
	};

	class A3PL_TOH_Base: A3PL_Helicopter_Medium_Base
	{
		accuracy=0.5;
		afMax=200;
		aggregateReflectors[]={};
		allowTabLock=1;
		alwaysTarget=0;
		animated=1;
		armor=20;
		armorLights=0.40000001;
		armorStructural=4;
		artilleryScanner=0;
		artilleryTarget=0;
		attendant=0;
		audible=30;
		author="hsim";
		autocenter=1;
		backRotorSpeed=1.5;
		brakeDistance=200;
		camouflage=100;
		cargoAction[]=
		{
			"chopperMedium_C_Straight_static_H",
			"chopperMedium_C_Straight_static_H",
			"chopperMedium_C_Straight_static_H",
			"chopperMedium_C_Straight_static_H",
			"chopperMedium_C_Straight_static_H",
			"chopperMedium_C_01_H",
			"chopperMedium_C_01_H",
			"chopperMedium_C_01_H",
			"chopperMedium_C_01_H",
			"chopperMedium_C_Straight_static_H",
			"chopperMedium_C_Straight_static_H"
		};
		cargoCanEject=0;
		cargoCompartments[]={0};
		getInProxyOrder[]={1,2,3,4,5,6,7,8,9,10,11};
		cargoDoors[]=
		{
			"Door_LB",
			"Door_RB",
			"Door_LB",
			"Door_RB",
			"Door_LB",
			"Door_RB",
			"Door_LB",
			"Door_RB",
			"Door_LB",
			"Door_RB",
			"Door_LB"
		};
		cargoGetInAction[]=
		{
			"GetInHelicopterCargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutHelicopterCargo"
		};
		cargoIsCoDriver[]={0};
		cargoProxyIndexes[]={};
		castCargoShadow=1;
		castDriverShadow=0;
		commanderCanSee="1 + 2 + 4 + 8 + 32";
		cost=10000000;
		crewVulnerable=1;
		damageEffect="DamageSmokeHeli";
		damageResistance=0.005;
		dammageFull[]={};
		dammageHalf[]={};
		destrType="DestructWreck";
		displayName="Medium (Civil)";
		driverAction="ChopperMedium_R_static_H";
		driverCanEject=0;
		driverCanSee="1 + 2 + 4 + 8 + 32";
		driverCompartments=0;
		driverDoor="Pilot_Door";
		driverForceOptics=0;
		driverInAction="";
		driverLeftHandAnimName="lever_pilot";
		driverLeftLegAnimName="pedalL";
		driverOpticsColor[]={1,1,1,1};
		driverOpticsEffect[]={};
		driverOpticsModel="";
		driverRightHandAnimName="stick_pilot";
		driverRightLegAnimName="pedalR";
		dustEffect="HeliDust";
		ejectDeadCargo=0;
		ejectDeadDriver=0;
		enableGPS=1;
		enableManualFire=1;
		enableRadio=0;
		enableSweep=1;
		enableWatch=0;
		engineer=0;
		envelope[]={0,0.2,0.89999998,2.0999999,2.5,3.3,3.5,3.5999999,3.7,3.8,3.8,3,0.89999998,0.69999999,0.5};
		extCameraPosition[]={0,-1,-20};
		featureSize=0;
		flareVelocity=100;
		forceHideDriver=0;
		formationTime=10;
		formationX=50;
		formationZ=100;
		fuelCapacity=1251;
		fuelConsumptionRate=0.093900003;
		gearDownTime=2;
		gearRetracting=0;
		gearUpTime=3.3299999;
		getInRadius=5;
		ghostPreview="";
		gunnerCanSee="1 + 2 + 4 + 8 + 32";
		gunnerHasFlares=1;
		hasDriver=1;
		HeadAimDown=0;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"A3PL_Planes\Helicopters_Medium\data\Heli_Medium01_1_main_co.paa",
			"A3PL_Planes\Helicopters_Medium\data\Heli_Medium01_1_ext_co.paa",
			"A3PL_Planes\Helicopters_Medium\data\Heli_Medium01_1_ext1_co.paa"
		};
		hideProxyInCombat=0;
		hideUnitInfo=0;
		hideWeaponsCargo=1;
		hideWeaponsDriver=1;
		htMax=1800;
		htMin=60;
		icon="\A3PL_Planes\Helicopters_Medium\data\UI\icons\heli_medium01_CA.paa";
		IncommingMisslieDetectionSystem=0;
		insideSoundCoef=0.5;
		irScanGround=1;
		irScanRangeMax=1000;
		irScanRangeMin=500;
		irScanToEyeFactor=2;
		irTarget=1;
		laserScanner=0;
		laserTarget=0;
		limitedSpeedCoef=0.22;
		LockDetectionSystem=8;
		magazines[]={};
		mainRotorSpeed=1;
		mapSize=9;
		maxBackRotorDive=0;
		maxMainRotorDive=0;
		maxSpeed=259;
		memoryPointCM[]=
		{
			"flare_launcher1",
			"flare_launcher2"
		};
		memoryPointCMDir[]=
		{
			"flare_launcher1_dir",
			"flare_launcher2_dir"
		};
		memoryPointDriverOptics[]=
		{
			"driverview",
			"pilot"
		};
		memoryPointGun="";
		memoryPointLMissile="L strela";
		memoryPointLRocket="L raketa";
		memoryPointPilot="pilot";
		memoryPointRMissile="P strela";
		memoryPointRRocket="P raketa";
		memoryPointsGetInCargo[]=
		{
			"pos Cargo L",
			"pos Cargo R",
			"pos Cargo L",
			"pos Cargo R",
			"pos Cargo L",
			"pos Cargo R",
			"pos Cargo L",
			"pos Cargo R",
			"pos Cargo L",
			"pos Cargo R",
			"pos Cargo L"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos Cargo L dir",
			"pos Cargo R dir",
			"pos Cargo L dir",
			"pos Cargo R dir",
			"pos Cargo L dir",
			"pos Cargo R dir",
			"pos Cargo L dir",
			"pos Cargo R dir",
			"pos Cargo L dir",
			"pos Cargo R dir",
			"pos Cargo L dir"
		};
		memoryPointsGetInCargoPrecise[]=
		{
			"GetIn_L_Cargo",
			"GetIn_R_Cargo",
			"GetIn_L_Cargo",
			"GetIn_R_Cargo",
			"GetIn_L_Cargo",
			"GetIn_R_Cargo",
			"GetIn_L_Cargo",
			"GetIn_R_Cargo",
			"GetIn_L_Cargo",
			"GetIn_R_Cargo",
			"GetIn_L_Cargo"
		};
		memoryPointsGetInCoDriver="pos codriver";
		memoryPointsGetInCoDriverDir="pos codriver dir";
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointsGetInDriverPrecise="GetIn_Pilot";
		memoryPointsLeftWaterEffect="waterEffectL";
		memoryPointsRightWaterEffect="waterEffectR";
		memoryPointSupply="doplnovani";
		mFact=0;
		mfMax=100;
		minBackRotorDive=0;
		minFireTime=20;
		minMainRotorDive=0;
		model="\A3PL_Planes\Helicopters_Medium\Heli_Medium01_H.p3d";
		nameSound="veh_Helicopter";
		neutralBackRotorDive=0;
		neutralMainRotorDive=0;
		nightVision=0;
		nvScanner=0;
		nvTarget=0;
		obstructSoundLFRatio=0;
		obstructSoundsWhenIn=0.316228;
		occludeSoundLFRatio=0.25;
		occludeSoundsWhenIn=0.56234097;
		outsideSoundFilter=1;
		picture="\A3PL_Planes\Helicopters_Medium\data\UI\pictures\heli_medium01_CA.paa";
		portrait="";
		preciseGetInOut=1;
		precision=100;
		predictTurnPlan=1;
		predictTurnSimul=1.2;
		preferRoads=0;
		radarType=0;
		replaceDamaged="";
		replaceDamagedHitpoints[]={};
		replaceDamagedLimit=0.89999998;
		reversed=1;
		scope=0;
		secondaryExplosion=-0.1;
		selectionBackLights="zadni svetlo";
		selectionClan="clan";
		selectionDamage="zbytek";
		selectionDashboard="podsvit pristroju";
		selectionFireAnim="zasleh";
		selectionHRotorMove="main rotor blur";
		selectionHRotorStill="main rotor static";
		selectionLeftOffset="";
		selectionRightOffset="";
		selectionShowDamage="poskozeni";
		selectionVRotorMove="tail rotor blur";
		selectionVRotorStill="tail rotor static";
		sensitivity=2.5;
		sensitivityEar=0.0074999998;
		shadow=1;
		showAllTargets=0;
		soundDammage[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",
			10,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_01\Heli_Light_01_ext_stop",
			0.79432797,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_01\Heli_Light_01_int_stop",
			0.316228,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_01\Heli_Light_01_ext_start",
			0.79432797,
			1,
			600
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_01\Heli_Light_01_int_start",
			0.316228,
			1
		};
		soundGetIn[]=
		{
			"A3PL_Planes\Helicopters_Medium\Sounds\medium-get",
			1,
			1
		};
		soundGetOut[]=
		{
			"A3PL_Planes\Helicopters_Medium\Sounds\medium-get",
			1,
			1,
			40
		};
		startDuration=20;
		spotableDarkNightLightsOff=0.003;
		spotableNightLightsOff=0.035;
		spotableNightLightsOn=4;
		steerAheadPlan=0.69999999;
		steerAheadSimul=0.5;
		supplyRadius=1.2;
		tBody=0;
		TextPlural="Helicopters";
		TextSingular="Helicopter";
		threat[]={0.30000001,1,0.69999999};
		tracksSpeed=0;
		transportAmmo=0;
		transportFuel=0;
		transportMaxBackpacks=1;
		transportMaxMagazines=20;
		transportMaxWeapons=3;
		transportRepair=0;
		transportSoldier=11;
		transportVehiclesCount=0;
		transportVehiclesMass=0;
		type=2;
		typicalCargo[]=
		{
			"Soldier"
		};
		unitInfoType="RscUnitInfoAirRTDFull";
		unitInfoTypeLite="RscUnitInfoAirRTDBasic";
		unloadInCombat=0;
		usePreciseGetInAction=1;
		vehicleClass="Helicopters_Medium";
		viewCargoShadow=1;
		viewCargoShadowAmb=1;
		viewCargoShadowDiff=1;
		viewDriverShadow=1;
		viewDriverShadowAmb=1;
		viewDriverShadowDiff=1;
		visibleNightLightsOff=0.1;
		visibleNightLightsOn=0.2;
		waterEffect="HeliWater";
		weapons[]={};
		weaponSlots=0;
		wheelCircumference=1;

		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};

		class AnimationSources: AnimationSources
		{
			class AddCargoHook
			{
				source="user";
				animPeriod=1e-007;
				initPhase=0;
				isComponent=1;
			};
			class AddCargoHook_cover
			{
				source="user";
				animPeriod=1e-007;
				initPhase=1;
				isComponent=1;
			};
			class CoPilot_Door
			{
				source="door";
				animPeriod=0.60000002;
			};
			class Door_LB2
			{
				source="door";
				animPeriod=0.60000002;
				initPhase=0;
			};
			class Door_LB
			{
				source="door";
				animPeriod=1;
				initPhase=0;
			};
			class Inspect_Panel1_1
			{
				source="user";
				animPeriod=0.60000002;
				initPhase=0;
			};
			class Pilot_Door: CoPilot_Door {};
			class Door_RB2: Door_LB2 {};
			class Door_RB: Door_LB {};
			class Inspect_Panel2_1: Inspect_Panel1_1 {};
			class Inspect_HitHRotor1
			{
				source="user";
				animPeriod=1.5;
				initPhase=0;
			};
			class Inspect_HitVRotor1
			{
				source="user";
				animPeriod=1.5;
				initPhase=0;
			};
			class RotorCover_Hide
			{
				source="user";
				animPeriod=9.9999997e-006;
				initPhase=0;
			};
			class HitHRotor
			{
				source="hit";
				hitpoint="HitHRotor";
				raw=1;
			};
			class HitVRotor
			{
				source="hit";
				hitpoint="HitVRotor";
				raw=1;
			};
			class HitEngine
			{
				source="hit";
				hitpoint="HitEngine";
				raw=1;
			};
			class HitEngine2
			{
				source="hit";
				hitpoint="HitEngine2";
				raw=1;
			};
			class HitBatteries
			{
				source="hit";
				hitpoint="HitBatteries";
				raw=1;
			};
			class HitTransmission
			{
				source="hit";
				hitpoint="HitTransmission";
				raw=1;
			};
			class HitHydraulics
			{
				source="hit";
				hitpoint="HitHydraulics";
				raw=1;
			};
			class HitFuel
			{
				source="hit";
				hitpoint="HitFuel";
				raw=1;
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
		};
		class CargoSpec
		{
			class Cargo1
			{
				showHeadPhones=1;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]={};
		};
		class DestructionEffects {};
		class FxExplo {};
		class HeadLimits
		{
			initAngleX=5;
			minAngleX=-40;
			maxAngleX=40;
			initAngleY=0;
			minAngleY=-90;
			maxAngleY=90;
			minAngleZ=-45;
			maxAngleZ=45;
			rotZRadius=0.2;
		};
		class HitPoints: HitPoints
		{
			class HitHull
			{
				armor=1;
				material=51;
				name="hull";
				passThrough=1;
				visual="trup";
			};
			class HitEngine
			{
				armor=0.25;
				material=51;
				name="Engine";
				passThrough=1;
				visual="motor";
			};
			class HitAvionics
			{
				armor=0.15000001;
				material=51;
				name="instruments";
				passThrough=1;
				visual="elektronika";
			};
			class HitVRotor
			{
				armor=0.30000001;
				material=51;
				name="tail rotor";
				passThrough=0.30000001;
				visual="mala vrtule staticka";
			};
			class HitHRotor
			{
				armor=0.2;
				material=51;
				name="main rotor";
				passThrough=0.1;
				visual="velka vrtule staticka";
			};
			class HitMissiles
			{
				armor=0.1;
				material=51;
				name="ammunition";
				passThrough=0.5;
				visual="munice";
			};
			class HitRGlass
			{
				convexComponent="sklo predni P";
				armor=0.1;
				material=51;
				name="sklo predni P";
				passThrough=0;
				visual="sklo predni P";
			};
			class HitLGlass
			{
				convexComponent="sklo predni L";
				armor=0.1;
				material=51;
				name="sklo predni L";
				passThrough=0;
				visual="sklo predni L";
			};
			class HitGlass1
			{
				armor=2;
				material=-1;
				name="glass1";
				passThrough=0;
				visual="glass1";
			};
			class HitGlass2
			{
				armor=2;
				material=-1;
				name="glass2";
				passThrough=0;
				visual="glass2";
			};
			class HitGlass3
			{
				armor=2;
				material=-1;
				name="glass3";
				passThrough=0;
				visual="glass3";
			};
			class HitGlass4
			{
				armor=2;
				material=-1;
				name="glass4";
				passThrough=0;
				visual="glass4";
			};
			class HitGlass5
			{
				armor=2;
				material=-1;
				name="glass5";
				passThrough=0;
				visual="glass5";
			};
			class HitGlass6
			{
				armor=2;
				material=-1;
				name="glass6";
				passThrough=0;
				visual="glass6";
			};
			class HitEngine2
			{
				armor=1;
				material=-1;
				name="engine2";
				passThrough=0;
			};
			class HitEngine3
			{
				armor=1;
				material=-1;
				name="engine3";
				passThrough=0;
			};
			class HitBatteries
			{
				armor=1;
				material=-1;
				name="batteries";
				passThrough=0;
			};
			class HitLight
			{
				armor=1;
				material=-1;
				name="light";
				passThrough=0;
			};
			class HitHydraulics
			{
				armor=1;
				material=-1;
				name="hydraulics";
				passThrough=0;
			};
			class HitTransmission
			{
				armor=1;
				material=-1;
				name="transmission";
				passThrough=0;
			};
			class HitGear
			{
				armor=1;
				material=-1;
				name="gear";
				passThrough=0;
			};
			class HitFuel
			{
				armor=1;
				material=-1;
				name="fuel tanks";
				passThrough=0;
			};
			class HitHStabilizerL1
			{
				armor=1;
				material=-1;
				name="HStabilizerL1";
				passThrough=0;
			};
			class HitHStabilizerR1
			{
				armor=1;
				material=-1;
				name="HStabilizerR1";
				passThrough=0;
			};
			class HitVStabilizer1
			{
				armor=1;
				material=-1;
				name="VStabilizer1";
				passThrough=0;
			};
			class HitTail
			{
				armor=1;
				material=-1;
				name="tail boom";
				passThrough=0;
			};
			class HitPitotTube
			{
				armor=1;
				material=-1;
				name="pitot tube";
				passThrough=0;
			};
			class HitStaticPort
			{
				armor=1;
				material=-1;
				name="static port";
				passThrough=0;
			};
			class HitStarter1
			{
				armor=1;
				material=-1;
				name="starter1";
				passThrough=0;
			};
			class HitStarter2
			{
				armor=1;
				material=-1;
				name="starter2";
				passThrough=0;
			};
			class HitStarter3
			{
				armor=1;
				material=-1;
				name="starter3";
				passThrough=0;
			};
		};
		class MarkerLights
		{
			class RedStill
			{
				color[]={25,0,0};
				ambient[]={1,0,0};
				intensity=75;
				name="cerveny pozicni";
				activeLight=1;
				blinking=0;
				blinkingPattern[]={0.2,1.3};
				blinkingPatternGuarantee=1;
				blinkingStartsOn=1;
				drawLight=1;
				drawLightSize=0.25;
				drawLightCenterSize=0.079999998;
				dayLight=1;
				useFlare=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=25;
					quadratic=50;
					hardLimitStart=1;
					hardLimitEnd=10;
				};
			};
			class GreenStill: RedStill
			{
				color[]={0,25,0};
				ambient[]={0,1,0};
				name="zeleny pozicni";
			};
			class WhiteStill: RedStill
			{
				color[]={100,100,100};
				ambient[]={1,1,1};
				name="bily pozicni";
				drawLightSize=0.25;
				drawLightCenterSize=0.079999998;
				class Attenuation: Attenuation
				{
					hardLimitEnd=3;
				};
			};
			class RedBlinking: RedStill
			{
				name="cerveny pozicni blik";
				blinking=1;
				blinkingPattern[]={1,2};
				blinkingPatternGuarantee=1;
				drawLightSize=0.40000001;
				drawLightCenterSize=0.079999998;
			};
			class WhiteBlinking: WhiteStill
			{
				name="bily pozicni blik";
				blinking=1;
				blinkingPattern[]={0.050000001,0.1,0.050000001,1};
				blinkingPatternGuarantee=1;
				class Attenuation: Attenuation
				{
					hardLimitEnd=10;
				};
			};
			class WhiteBlinking_2: WhiteBlinking
			{
				name="bily pozicni blik_2";
			};
		};
		class MFD {};
		class PilotSpec
		{
			showHeadPhones=1;
		};
		class Reflectors
		{
			class landinglight01
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="landinglight01_pos";
				direction="landinglight01_dir";
				hitpoint="landinglight01";
				selection="landinglight01";
				size=1;
				innerAngle=120;
				outerAngle=180;
				coneFadeCoef=2;
				intensity=1;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=2;
					constant=0;
					linear=0.1;
					quadratic=0.050000001;
					hardLimitStart=50;
					hardLimitEnd=150;
				};
			};
		};
		class RenderTargets {};
		class ViewPilot
		{
			initAngleX=5;
			minAngleX=-85;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			initFov=0.69999999;
			minFov=0.41999999;
			maxFov=1.2;
			minMoveX=0;
			maxMoveX=0;
			minMoveY=0;
			maxMoveY=0;
			minMoveZ=0;
			maxMoveZ=0;
		};
		class ViewCargo
		{
			initAngleX=5;
			minAngleX=-85;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			initFov=0.69999999;
			minFov=0.41999999;
			maxFov=0.85000002;
			minMoveX=0;
			maxMoveX=0;
			minMoveY=0;
			maxMoveY=0;
			minMoveZ=0;
			maxMoveZ=0;
		};
		class ViewOptics
		{
			initAngleX=0;
			minAngleX=-30;
			maxAngleX=30;
			initAngleY=0;
			minAngleY=-100;
			maxAngleY=100;
			initFov=0.69999999;
			minFov=0.41999999;
			maxFov=0.85000002;
			minMoveX=0;
			maxMoveX=0;
			minMoveY=0;
			maxMoveY=0;
			minMoveZ=0;
			maxMoveZ=0;
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				allowTabLock=1;
				animationSourceBody="searchLight_HRot";
				animationSourceGun="searchLight_VRot";
				animationSourceHatch="hatchGunner";
				armorLights=0.40000001;
				body="searchLight_HRot";
				canEject=0;
				castGunnerShadow=1;
				commanding=-1;
				ejectDeadGunner=0;
				enableManualFire=0;
				forceHideGunner=0;
				forceNVG=0;
				gun="searchLight_VRot";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				gunnerAction="chopperMedium_L_static_H";
				gunnerCompartments="Compartment1";
				GunnerDoor="CoPilot_Door";
				gunnerFireAlsoInInternalCamera=1;
				gunnerGetInAction="ChopperMedium_L_getIn_H";
				gunnerGetOutAction="ChopperMedium_L_getOut_H";
				gunnerInAction="chopperMedium_L_static_H";
				gunnerLeftHandAnimName="lever_copilot";
				gunnerLeftLegAnimName="pedalL";
				gunnerName="copilot";
				gunnerNotSpawned=1;
				gunnerOpticsModel="\a3\weapons_f\Reticle\optics_empty.p3d";
				gunnerOpticsShowCursor=0;
				gunnerOutFireAlsoInInternalCamera=1;
				gunnerOutForceOptics=0;
				gunnerOutOpticsEffect[]={};
				gunnerOutOpticsModel="";
				gunnerOutOpticsShowCursor=0;
				gunnerRightHandAnimName="stick_copilot";
				gunnerRightLegAnimName="pedalR";
				gunnerUsesPilotView=0;
				hasGunner=1;
				hideWeaponsGunner=1;
				inGunnerMayFire=1;
				initElev=-5;
				initTurn=0;
				isCopilot=1;
				lockWhenDriverOut=0;
				lockWhenVehicleSpeed=-1;
				LODTurnedIn=-1;
				LODTurnedOut=-1;
				maxElev=14;
				maxHorizontalRotSpeed=3;
				maxTurn=171;
				maxVerticalRotSpeed=3;
				memoryPointGun="machinegun";
				memoryPointGunnerOptics="z_searchlight_cam";
				memoryPointGunnerOutOptics="";
				memoryPointsGetInGunner="pos codriver";
				memoryPointsGetInGunnerDir="pos codriver dir";
				memoryPointsGetInGunnerPrecise="GetIn_Turret";
				minElev=-74;
				minTurn=-171;
				missileBeg="spice rakety";
				missileEnd="konec rakety";
				outGunnerMayFire=1;
				optics=1;
				preciseGetInOut=1;
				primary=1;
				primaryGunner=1;
				primaryObserver=1;
				proxyIndex=1;
				proxyType="CPGunner";
				selectionFireAnim="zasleh";
				showgunneroptics=1;
				startEngine=0;
				turretInfoType="RscOptics_Offroad_01";
				viewGunnerInExternal=0;
				viewGunnerShadow=1;
				viewGunnerShadowAmb=1;
				viewGunnerShadowDiff=1;
				allowLauncherIn=0;
				allowLauncherOut=0;
				animationSourceCamElev="camElev";
				canHideGunner=-1;
				canUseScanners=1;
				disableSoundAttenuation=0;
				discreteDistance[]={};
				discreteDistanceInitIndex=0;
				dontCreateAI=0;
				gunnerForceOptics=0;
				gunnerOpticsColor[]={0,0,0,1};
				gunnerOpticsEffect[]={};
				gunnerOutOpticsColor[]={0,0,0,1};
				gunnerType="";
				magazines[]={};
				playerPosition=0;
				showAllTargets=4;
				showCrewAim=0;
				showHMD=0;
				slingLoadOperator=0;
				soundElevation[]=
				{
					"",
					0.00316228,
					1
				};
				soundServo[]=
				{
					"",
					0.56234097,
					1,
					30
				};
				soundServoVertical[]=
				{
					"",
					0.56234097,
					1,
					30
				};
				stabilizedInAxes=3;
				turretCanSee=0;
				turretFollowFreeLook=0;
				class Reflectors
				{
					class Cabin
					{
						color[]={20,0,0};
						ambient[]={20,0,0};
						intensity=10;
						size=1;
						innerAngle=179;
						outerAngle=180;
						coneFadeCoef=0;
						position="cabin_light";
						direction="cabin_light_dir";
						hitpoint="";
						selection="";
						useFlare=0;
						flareSize=0;
						flareMaxDistance=0;
						dayLight=1;
						blinking=0;
						class Attenuation
						{
							start=0;
							constant=0;
							linear=1;
							quadratic=1;
							hardLimitStart=0.1;
							hardLimitEnd=1.3;
						};
					};
					class cargo_light_1: Cabin
					{
						position="cargo_light_1";
						direction="cargo_light_1_dir";
						class Attenuation: Attenuation
						{
							hardLimitEnd=4;
						};
					};
				};
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.46599999;
					minFov=0.1;
					maxFov=0.69999999;
					visionMode[]=
					{
						"Normal"
					};
					thermalMode[]={0,0};
				};
				class ViewGunner: ViewGunner
				{
					minAngleX=-65;
					maxAngleX=85;
					initAngleX=0;
					minAngleY=-150;
					maxAngleY=150;
					initAngleY=0;
					minFov=0.30000001;
					maxFov=1.2;
					initFov=1;
				};
			};
		};
	};

	class House_F;
	class A3PL_Rear_Ladder: House_F
	{
		author="Jonzie / Gaming";
		mapSize=1;
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		model="\A3PL_FD\Ladder\Proxies\Rear_Ladder.p3d";
		displayName="A3PL_Rear_Ladder";
		picture="\A3PL_Cars\A3FL.paa";
		ladders[]=
		{
			
			{
				"Ladder_1_start",
				"Ladder_1_end"
			},
			
			{
				"Ladder_2_start",
				"Ladder_2_end"
			}
		};
	};

	class Land_LampDecor_F;
	class A3PL_Floodlight_Double: Land_LampDecor_F
	{
		author="Jonzie / Gaming";
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		displayName="A3PL_Floodlight_Double";
		model="A3PL_Cars\Common\Proxies\A3PL_Floodlight_Double.p3d";
		picture="\A3PL_Cars\A3FL.paa";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		aggregateReflectors[]=
		{
			
			{
				"Light_1",
				"Light_2"
			}
		};
		class Reflectors
		{
			class Light_1
			{
				color[]={1900,1300,950};
				ambient[]={5,5,5};
				position="Light_1_Pos";
				direction="Light_1_Dir";
				hitpoint="Light_1";
				selection="Light_1";
				size=1;
				innerAngle=120;
				outerAngle=170;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=1;
				flareSize=1;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0.1;
					quadratic=0;
					hardLimitStart=800;
					hardLimitEnd=1800;
				};
			};
			class Light_2: Light_1
			{
				position="Light_2_Pos";
				direction="Light_2_Dir";
				hitpoint="Light_2";
				selection="Light_2";
			};
		};
	};
	class A3PL_Floodlight: A3PL_Floodlight_Double
	{
		displayName="A3PL_Floodlight";
		model="A3PL_Cars\Common\Proxies\A3PL_Floodlight.p3d";
		aggregateReflectors[]=
		{
			
			{
				"Light_1"
			}
		};
		class Reflectors
		{
			class Light_1
			{
				color[]={8000,8000,8000};
				ambient[]={20,20,20};
				position="Light_1_Pos";
				direction="Light_1_Dir";
				hitpoint="Light_1";
				selection="Light_1";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=1;
				flareSize=1;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0.1;
					quadratic=0;
					hardLimitStart=800;
					hardLimitEnd=1800;
				};
			};
		};
	};
	class A3PL_Floodlight_Level: A3PL_Floodlight
	{
		displayName="A3PL_Floodlight_Level";
		model="A3PL_Cars\Common\Proxies\A3PL_Floodlight_Level.p3d";
		class Reflectors
		{
			class Light_1
			{
				color[]={240,240,240};
				ambient[]={100,100,100};
				position="Light_1_Pos";
				direction="Light_1_Dir";
				hitpoint="Light_1";
				selection="Light_1";
				size=1;
				innerAngle=40;
				outerAngle=80;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=1;
				flareSize=1;
				class Attenuation
				{
					start=2;
					constant=0;
					linear=0.1;
					quadratic=0.0099999998;
					hardLimitStart=800;
					hardLimitEnd=1800;
				};
			};
		};
	};
	class A3PL_Interior_light: A3PL_Floodlight_Double
	{
		displayName="A3PL_Interior_light";
		model="A3PL_Cars\Common\Proxies\A3PL_Interior_light.p3d";
		aggregateReflectors[]=
		{
			
			{
				"Light_1"
			}
		};
		class Reflectors
		{
			class Light_1
			{
				color[]={1000,1100,1200};
				ambient[]={10,11,12};
				intensity=3;
				size=1;
				innerAngle=120;
				outerAngle=170;
				coneFadeCoef=1;
				position="Light_1_Pos";
				direction="Light_1_Dir";
				hitpoint="Light_1";
				selection="Light_1";
				useFlare=0;
				flareSize=0;
				flareMaxDistance=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=10;
					quadratic=0.1;
					hardLimitStart=1;
					hardLimitEnd=3;
				};
			};
		};
	};
	class A3PL_Red_Rotator: A3PL_Floodlight_Double
	{
		displayName="A3PL_Red_Rotator";
		model="A3PL_Cars\Common\Proxies\A3PL_Red_Rotator.p3d";
		aggregateReflectors[]=
		{
			
			{
				"Light_1"
			}
		};
		class Reflectors
		{
			class Light_1
			{
				color[]={1500,0,0};
				ambient[]={30,0,0};
				position="Light_Pos";
				direction="Light_Dir";
				hitpoint="Light";
				selection="Light";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=1;
				flareSize=0.5;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0.1;
					quadratic=0;
					hardLimitStart=800;
					hardLimitEnd=1800;
				};
			};
		};
	};
	class A3PL_White_Rotator: A3PL_Floodlight_Double
	{
		displayName="A3PL_White_Rotator";
		model="A3PL_Cars\Common\Proxies\A3PL_White_Rotator.p3d";
		aggregateReflectors[]=
		{
			
			{
				"Light_1"
			}
		};
		class Reflectors
		{
			class Light_1
			{
				color[]={125,125,125};
				ambient[]={10,10,10};
				position="Light_Pos";
				direction="Light_Dir";
				hitpoint="Light";
				selection="Light";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=1;
				flareSize=0.5;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0.1;
					quadratic=0;
					hardLimitStart=800;
					hardLimitEnd=1800;
				};
			};
		};
	};
	class A3PL_Red_Rotator_Off: A3PL_Floodlight_Double
	{
		displayName="A3PL_Red_Rotator";
		model="A3PL_Cars\Common\Proxies\A3PL_Red_Rotator.p3d";
		class Reflectors {};
	};
	class A3PL_White_Rotator_Off: A3PL_Floodlight_Double
	{
		displayName="A3PL_White_Rotator";
		model="A3PL_Cars\Common\Proxies\A3PL_White_Rotator.p3d";
		class Reflectors {};
	};

	class Flag_US_F;
	class A3PL_Mini_Flag_US: Flag_US_F
	{
		author="Jonzie / Gaming";
		_generalMacro="A3PL_Mini_Flag_US";
		displayName="A3PL_Mini_Flag_US";
		model="A3PL_FD\Objects\Mast_F.p3d";
		scope=1;
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\A3\Data_F\Flags\Flag_us_CO.paa'";
		};
	};
	class Jonzie_Public_Car_Base: A3PL_Car_Base
	{
	};
	class Jonzie_Public_truck_base: A3PL_Truck_Base
	{
	};

	class Sound_Alarm;
	class A3PL_FT_Pump: Sound_Alarm
	{
		author="Jonzie / Gaming";
		_generalMacro="SFX";
		sound="A3PL_FT_Pump";
		displayName="FT_Pump";
	};
	class A3PL_Airhorn_1: A3PL_FT_Pump
	{
		_generalMacro="Airhorn";
		sound="A3PL_Airhorn_1";
		displayName="Airhorn";
	};
	class A3PL_Electric_Horn: A3PL_Airhorn_1
	{
		sound="A3PL_Electric_Horn";
	};
	class A3PL_Electric_Airhorn: A3PL_Airhorn_1
	{
		sound="A3PL_Electric_Airhorn";
	};
	class A3PL_EQ2B_Priority: A3PL_Airhorn_1
	{
		sound="A3PL_EQ2B_Priority";
		_generalMacro="Siren";
		displayName="Siren";
	};
	class A3PL_EQ2B_Wail: A3PL_EQ2B_Priority
	{
		sound="A3PL_EQ2B_Wail";
	};
	class A3PL_EQ2B_Yelp: A3PL_EQ2B_Priority
	{
		sound="A3PL_EQ2B_Yelp";
	};
	class A3PL_Priority_1: A3PL_EQ2B_Priority
	{
		sound="A3PL_Priority_1";
	};
	class A3PL_Priority_2: A3PL_EQ2B_Priority
	{
		sound="A3PL_Priority_2";
	};
	class A3PL_Rumbler_Manual: A3PL_EQ2B_Priority
	{
		sound="A3PL_Rumbler_Manual";
	};
	class A3PL_SmartSiren_Manual: A3PL_EQ2B_Priority
	{
		sound="A3PL_SmartSiren_Manual";
	};
	class A3PL_Wail: A3PL_EQ2B_Priority
	{
		sound="A3PL_Wail";
	};
	class A3PL_Yelp: A3PL_EQ2B_Priority
	{
		sound="A3PL_Yelp";
	};
	class A3PL_FSS_Phaser: A3PL_EQ2B_Priority
	{
		sound="A3PL_FSS_Phaser";
	};
	class A3PL_FSS_Priority: A3PL_EQ2B_Priority
	{
		sound="A3PL_FSS_Priority";
	};
	class A3PL_FSS_Rumbler: A3PL_EQ2B_Priority
	{
		sound="A3PL_FSS_Rumbler";
	};
	class A3PL_FSS_Siren: A3PL_EQ2B_Priority
	{
		sound="A3PL_FSS_Siren";
	};
	class A3PL_Whelen_Warble: A3PL_EQ2B_Priority
	{
		sound="A3PL_Whelen_Warble";
	};
	class A3PL_Whelen_Siren: A3PL_EQ2B_Priority
	{
		sound="A3PL_Whelen_Siren";
	};
	class A3PL_Whelen_Priority: A3PL_EQ2B_Priority
	{
		sound="A3PL_Whelen_Priority";
	};
	class A3PL_Whelen_Priority2: A3PL_EQ2B_Priority
	{
		sound="A3PL_Whelen_Priority2";
	};
	class A3PL_FSUO_Siren: A3PL_EQ2B_Priority
	{
		sound="A3PL_FSUO_Siren";
	};
	class A3PL_Whelen_Priority3: A3PL_EQ2B_Priority
	{
		sound="A3PL_Whelen_Priority3";
	};
	class A3PL_FIPA20A_Priority: A3PL_EQ2B_Priority
	{
		sound="A3PL_FIPA20A_Priority";
	};
};
class CfgVehicleClasses
{
	class A3PL_Vehicles
	{
		displayName="A3PL Vehicles";
	};
	class A3PL_Objects
	{
		displayName="A3PL Objects";
	};
};
class CfgAnimationSourceSounds
{
	class A3PL_Open_Close
	{
		class Door_Open
		{
			loop=0;
			terminate=0;
			trigger="direction * (phase factor[0.01,0.02])";
			sound0[]=
			{
				"\A3PL_Cars\Common\Sounds\A3PL_Car_Open.ogg",
				"db+6",
				1,
				20
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
		class Door_Close
		{
			loop=0;
			terminate=0;
			trigger="(1 - direction) * (phase factor[0.1,0.09])";
			sound0[]=
			{
				"\A3PL_Cars\Common\Sounds\A3PL_Car_Close.ogg",
				"db+6",
				1,
				20
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
	};
	class A3PL_Truck_Open_Close
	{
		class Door_Open
		{
			loop=0;
			terminate=0;
			trigger="direction * (phase factor[0.01,0.02])";
			sound0[]=
			{
				"\A3PL_Cars\Common\Sounds\A3PL_Truck_Open.ogg",
				"db+6",
				1,
				20
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
		class Door_Close
		{
			loop=0;
			terminate=0;
			trigger="(1 - direction) * (phase factor[0.1,0.09])";
			sound0[]=
			{
				"\A3PL_Cars\Common\Sounds\A3PL_Truck_Close.ogg",
				"db+6",
				1,
				20
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
	};
	class A3PL_Cargo_Open_Close
	{
		class DoorMovement
		{
			loop=0;
			terminate=0;
			trigger="(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[]=
			{
				"\A3PL_Cars\Common\Sounds\A3PL_Cargo_Open_Close.ogg",
				"db+6",
				1,
				20
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
	};
	class A3PL_Hydraulic
	{
		class HydraulicMovement
		{
			loop=0;
			terminate=1;
			trigger="(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[]=
			{
				"\A3PL_Cars\Common\Sounds\A3PL_Hydraulic.ogg",
				1,
				1,
				50
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
	};
	class A3PL_Drill
	{
		class HydraulicMovement
		{
			loop=0;
			terminate=1;
			trigger="(phase factor[0.01,0.10]) * (phase factor[0.99,0.9])";
			sound0[]=
			{
				"\A3PL_Cars\Common\Sounds\A3PL_Drill_Move.ogg",
				1,
				1,
				20
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
	};
	class GooseGear
	{
		class GearUp
		{
			loop=0;
			terminate=0;
			trigger="direction * (phase factor[0.1,0.2])";
			sound0[]=
			{
				"A3PL_Planes\Goose\Sounds\Goose_Gearup.ogg",
				0.79432797,
				1,
				150
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
		class GearDown
		{
			loop=0;
			terminate=0;
			trigger="(1 - direction) * (phase factor[0.9,0.8])";
			sound0[]=
			{
				"A3PL_Planes\Goose\Sounds\Goose_Shutdown.ogg",
				1,
				1
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
	};
	class GooseGen
	{
		class ButtonMovement
		{
			loop=0;
			terminate=0;
			trigger="direction * (phase factor[0.98,0.99])";
			sound0[]=
			{
				"\A3PL_Planes\Goose\sounds\Goose_Gyro.ogg",
				1,
				1,
				50
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
	};
	class GooseFuelPump
	{
		class ButtonMovement
		{
			loop=0;
			terminate=0;
			trigger="direction * (phase factor[0.98,0.99])";
			sound0[]=
			{
				"\A3PL_Planes\Goose\sounds\Goose_Fuelpump.ogg",
				1,
				1,
				50
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
	};
	class GooseStartup
	{
		class ButtonMovement
		{
			loop=0;
			terminate=0;
			trigger="direction * (phase factor[0.51,0.52])";
			sound0[]=
			{
				"A3PL_Planes\Goose\Sounds\Goose_Startup.ogg",
				1,
				1,
				600
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
		class ButtonMovement2
		{
			loop=0;
			terminate=0;
			trigger="(1 - direction) * (phase factor[0.4,0.39])";
			sound0[]=
			{
				"A3PL_Planes\Goose\Sounds\Goose_Startup.ogg",
				1,
				1,
				600
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
		class ButtonMovement3
		{
			loop=0;
			terminate=0;
			trigger="(1 - direction) * (phase factor[0.02,0.01])";
			sound0[]=
			{
				"A3PL_Planes\Goose\Sounds\Goose_Startup.ogg",
				1,
				1,
				600
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
	};
};

class CfgWeapons
{
	class CarHorn;
	class A3PL_CarHorn: CarHorn
	{
		displayname="Horn";
		reloadTime=0;
		drySound[]=
		{
			"A3PL_Cars\Common\Sounds\A3PL_CarHorn.ogg",
			2,
			1,
			200
		};
	};
	class A3PL_DixieHorn: CarHorn
	{
		displayname="Horn";
		reloadTime=3;
		drySound[]=
		{
			"A3PL_Cars\Common\Sounds\A3PL_DixieHorn.ogg",
			2,
			1,
			200
		};
	};
	class A3PL_Ambulance_Air_Horn: CarHorn
	{
		displayname="Horn";
		reloadTime=1.5;
		drySound[]=
		{
			"A3PL_Cars\Common\Sounds\A3PL_Ambulance_Air_Horn.ogg",
			2,
			1,
			200
		};
	};
	class A3PL_Truck_Horn: CarHorn
	{
		displayname="Horn";
		reloadTime=0;
		drySound[]=
		{
			"A3PL_Cars\Common\Sounds\A3PL_Truck_Horn.ogg",
			2,
			1,
			200
		};
	};
};

class CfgSounds
{
	class A3PL_Car_Lock
	{
		name="Car Lock Alarm";
		sound[]=
		{
			"A3PL_Cars\Common\Sounds\A3PL_Car_Lock.ogg",
			1.12202,
			1,
			300,
			1,
			0,
			0,
			0
		};
		titles[]={};
	};
};

class CfgSFX
{
	class A3PL_FSS_Phaser
	{
		sounds[]=
		{
			"Siren"
		};
		name="Federal Signal Smart Phaser";
		Siren[]=
		{
			"A3PL_Cars\Common\Sounds\Federal_Signal_Smart_Siren\Phaser.ogg",
			1,
			1,
			400,
			1,
			0,
			0,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class A3PL_FSS_Priority
	{
		sounds[]=
		{
			"Siren"
		};
		name="Federal Signal Smart Siren Priority";
		Siren[]=
		{
			"A3PL_Cars\Common\Sounds\Federal_Signal_Smart_Siren\Priority.ogg",
			1,
			1,
			400,
			1,
			0,
			0,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class A3PL_FSS_Rumbler
	{
		sounds[]=
		{
			"Siren"
		};
		name="Federal Signal Smart Siren Rumbler";
		Siren[]=
		{
			"A3PL_Cars\Common\Sounds\Federal_Signal_Smart_Siren\Rumbler.ogg",
			1,
			1,
			400,
			1,
			0,
			0,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class A3PL_FSS_Siren
	{
		sounds[]=
		{
			"Siren"
		};
		name="Federal Signal Smart Siren";
		Siren[]=
		{
			"A3PL_Cars\Common\Sounds\Federal_Signal_Smart_Siren\Siren.ogg",
			1,
			1,
			400,
			1,
			0,
			0,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class A3PL_Whelen_Warble
	{
		sounds[]=
		{
			"Siren"
		};
		name="Whelen 295SL100 Warble";
		Siren[]=
		{
			"A3PL_Cars\Common\Sounds\Whelen_295SL100\Warble.ogg",
			1,
			1,
			400,
			1,
			0,
			0,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class A3PL_Whelen_Siren
	{
		sounds[]=
		{
			"Siren"
		};
		name="Whelen 295SL100 Siren";
		Siren[]=
		{
			"A3PL_Cars\Common\Sounds\Whelen_295SL100\Siren.ogg",
			1,
			1,
			400,
			1,
			0,
			0,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class A3PL_Whelen_Priority
	{
		sounds[]=
		{
			"Siren"
		};
		name="Whelen 295SLASA6 Priority";
		Siren[]=
		{
			"A3PL_Cars\Common\Sounds\Whelen_295SLASA6\Priority.ogg",
			1,
			1,
			400,
			1,
			0,
			0,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class A3PL_Whelen_Priority2
	{
		sounds[]=
		{
			"Siren"
		};
		name="Whelen 295SLSA1 Priority";
		Siren[]=
		{
			"A3PL_Cars\Common\Sounds\Whelen_295SLSA1\Priority.ogg",
			1,
			1,
			400,
			1,
			0,
			0,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class A3PL_FSUO_Siren
	{
		sounds[]=
		{
			"Siren"
		};
		name="Federal Signal Unitrol Omega Siren";
		Siren[]=
		{
			"A3PL_Cars\Common\Sounds\Federal_Signal_Unitrol_Omega\Siren.ogg",
			1,
			1,
			400,
			1,
			0,
			0,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class A3PL_Whelen_Priority3
	{
		sounds[]=
		{
			"Siren"
		};
		name="Whelen Epsilon Priority";
		Siren[]=
		{
			"A3PL_Cars\Common\Sounds\Whelen_Epsilon\Priority.ogg",
			1,
			1,
			400,
			1,
			0,
			0,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class A3PL_FIPA20A_Priority
	{
		sounds[]=
		{
			"Siren"
		};
		name="Federal Interceptor PA-20A Series 2E";
		Siren[]=
		{
			"A3PL_Cars\Common\Sounds\Federal_Interceptor_PA20A_Series_2E\Priority.ogg",
			1,
			1,
			400,
			1,
			0,
			0,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
};

class CfgMovesBasic
{
	class Default;
	class DefaultDie;
	class ManActions
	{
		A3PL_Driver_Tahoe="A3PL_Driver_Tahoe";
		A3PL_Passenger_Low="A3PL_Passenger_Low";
		A3PL_Passenger_Low2="A3PL_Passenger_Low2";
		A3PL_Truck_Driver1="A3PL_Truck_Driver1";
		A3PL_Ship_driver="A3PL_Ship_Driver";
		A3PL_Cessna_Pilot="A3PL_Cessna_Pilot";
		A3PL_Goose_Pilot="A3PL_Goose_Pilot";
		A3PL_Crane_Driver="A3PL_Crane_Driver";
		A3PL_Excavator_Driver="A3PL_Excavator_Driver";
		A3PL_Driver1="A3PL_Driver1";
		A3PL_Driver2="A3PL_Driver2";
		A3PL_Passenger2="A3PL_Passenger2";
		A3PL_Passenger_Rear="A3PL_Passenger_Rear";
		A3PL_Jawhawk_Pilot="A3PL_Jawhawk_Pilot";
		A3PL_Jawhawk_CoPilot="A3PL_Jawhawk_CoPilot";
		A3PL_medevac="A3PL_medevac";
		A3PL_Crew="A3PL_Crew";
		A3PL_TowTractor_driver="A3PL_TowTractor_driver";
		A3PL_Lifebuoy_Cargo="A3PL_Lifebuoy_Cargo";
		A3PL_Bed="A3PL_Bed";
		A3PL_Garbage_Truck_Passenger_Left="A3PL_Garbage_Truck_Passenger_Left";
		A3PL_Garbage_Truck_Passenger_Right="A3PL_Garbage_Truck_Passenger_Right";
		chopperMedium_R_buttonPush_H="chopperMedium_R_buttonPush_H";
		chopperMedium_R_getIn_H="chopperMedium_R_getIn_H";
		chopperMedium_R_getOut_H="chopperMedium_R_getOut_H";
		chopperMedium_R_greetFront_H="chopperMedium_R_greetFront_H";
		chopperMedium_R_greetLeft_H="chopperMedium_R_greetLeft_H";
		chopperMedium_R_greetRight_H="chopperMedium_R_greetRight_H";
		chopperMedium_R_headInHand_H="chopperMedium_R_headInHand_H";
		chopperMedium_R_idleLoopA_H="chopperMedium_R_idleLoopA_H";
		chopperMedium_R_idleLoopB_H="chopperMedium_R_idleLoopB_H";
		chopperMedium_R_idleLoopC_H="chopperMedium_R_idleLoopC_H";
		chopperMedium_R_idleLoopD_H="chopperMedium_R_idleLoopD_H";
		chopperMedium_R_idleLoopE_H="chopperMedium_R_idleLoopE_H";
		chopperMedium_R_lookLeft_H="chopperMedium_R_lookLeft_H";
		chopperMedium_R_lookLeftBackUp_H="chopperMedium_R_lookLeftBackUp_H";
		chopperMedium_R_lookRight_H="chopperMedium_R_lookRight_H";
		chopperMedium_R_lookRightBackUp_H="chopperMedium_R_lookRightBackUp_H";
		chopperMedium_R_pointFront_H="chopperMedium_R_pointFront_H";
		chopperMedium_R_pointLeft_H="chopperMedium_R_pointLeft_H";
		chopperMedium_R_pointRight_H="chopperMedium_R_pointRight_H";
		chopperMedium_R_seatBeltOff_H="chopperMedium_R_seatBeltOff_H";
		chopperMedium_R_seatBeltOn_H="chopperMedium_R_seatBeltOn_H";
		chopperMedium_R_static_H="chopperMedium_R_static_H";
		chopperMedium_R_switchOff_H="chopperMedium_R_switchOff_H";
		chopperMedium_R_switchOn_H="chopperMedium_R_switchOn_H";
		chopperMedium_R_thumbDownFront_H="chopperMedium_R_thumbDownFront_H";
		chopperMedium_R_thumbDownLeft_H="chopperMedium_R_thumbDownLeft_H";
		chopperMedium_R_thumbDownRight_H="chopperMedium_R_thumbDownRight_H";
		chopperMedium_R_thumbUpFront_H="chopperMedium_R_thumbUpFront_H";
		chopperMedium_R_thumbUpLeft_H="chopperMedium_R_thumbUpLeft_H";
		chopperMedium_R_thumbUpRight_H="chopperMedium_R_thumbUpRight_H";
		chopperMedium_R_tweakHeadSetMicA_H="chopperMedium_R_tweakHeadSetMicA_H";
		chopperMedium_R_tweakHeadSetMicB_H="chopperMedium_R_tweakHeadSetMicB_H";
		chopperMedium_L_buttonPush_H="chopperMedium_L_buttonPush_H";
		chopperMedium_L_copilot_to_passenger_H="chopperMedium_L_copilot_to_passenger_H";
		chopperMedium_L_GetIn_H="chopperMedium_L_GetIn_H";
		chopperMedium_L_GetOut_H="chopperMedium_L_GetOut_H";
		chopperMedium_L_greetFront_H="chopperMedium_L_greetFront_H";
		chopperMedium_L_greetLeft_H="chopperMedium_L_greetLeft_H";
		chopperMedium_L_greetRight_H="chopperMedium_L_greetRight_H";
		chopperMedium_L_HeadInHand_H="chopperMedium_L_HeadInHand_H";
		chopperMedium_L_headSetOff_H="chopperMedium_L_headSetOff_H";
		chopperMedium_L_headSetOn_H="chopperMedium_L_headSetOn_H";
		chopperMedium_L_idleLoopA_H="chopperMedium_L_idleLoopA_H";
		chopperMedium_L_idleLoopB_H="chopperMedium_L_idleLoopB_H";
		chopperMedium_L_idleLoopC_H="chopperMedium_L_idleLoopC_H";
		chopperMedium_L_idleLoopD_H="chopperMedium_L_idleLoopD_H";
		chopperMedium_L_idleLoopE_H="chopperMedium_L_idleLoopE_H";
		chopperMedium_L_lookLeft_H="chopperMedium_L_lookLeft_H";
		chopperMedium_L_lookLeftBackUp_H="chopperMedium_L_lookLeftBackUp_H";
		chopperMedium_L_lookRight_H="chopperMedium_L_lookRight_H";
		chopperMedium_L_lookRightBackUp_H="chopperMedium_L_lookRightBackUp_H";
		chopperMedium_L_pointFront_H="chopperMedium_L_pointFront_H";
		chopperMedium_L_pointLeft_H="chopperMedium_L_pointLeft_H";
		chopperMedium_L_pointRight_H="chopperMedium_L_pointRight_H";
		chopperMedium_L_seatBeltOff_H="chopperMedium_L_seatBeltOff_H";
		chopperMedium_L_seatBeltOn_H="chopperMedium_L_seatBeltOn_H";
		chopperMedium_L_static_H="chopperMedium_L_static_H";
		chopperMedium_L_switchOff_H="chopperMedium_L_switchOff_H";
		chopperMedium_L_switchOn_H="chopperMedium_L_switchOn_H";
		chopperMedium_L_thumbDownFront_H="chopperMedium_L_thumbDownFront_H";
		chopperMedium_L_thumbDownLeft_H="chopperMedium_L_thumbDownLeft_H";
		chopperMedium_L_thumbDownRight_H="chopperMedium_L_thumbDownRight_H";
		chopperMedium_L_thumbUpFront_H="chopperMedium_L_thumbUpFront_H";
		chopperMedium_L_thumbUpLeft_H="chopperMedium_L_thumbUpLeft_H";
		chopperMedium_L_thumbUpRight_H="chopperMedium_L_thumbUpRight_H";
		chopperMedium_L_tweakHeadSetMicA_H="chopperMedium_L_tweakHeadSetMicA_H";
		chopperMedium_L_tweakHeadSetMicB_H="chopperMedium_L_tweakHeadSetMicB_H";
		chopperMedium_LP_idleA_H="chopperMedium_LP_idleA_H";
		chopperMedium_LP_idleB_H="chopperMedium_LP_idleB_H";
		chopperMedium_LP_idleC_H="chopperMedium_LP_idleC_H";
		chopperMedium_LP_idleD_H="chopperMedium_LP_idleD_H";
		chopperMedium_LP_idleEtalk_H="chopperMedium_LP_idleEtalk_H";
		chopperMedium_LP_idleGtalk_H="chopperMedium_LP_idleGtalk_H";
		chopperMedium_LP_idleH_H="chopperMedium_LP_idleH_H";
		chopperMedium_LP_idleI_H="chopperMedium_LP_idleI_H";
		chopperMedium_LP_idleJ_H="chopperMedium_LP_idleJ_H";
		chopperMedium_LP_passenger_to_copilot_H="chopperMedium_LP_passenger_to_copilot_H";
		chopperMedium_LP_static_H="chopperMedium_LP_static_H";
		chopperMedium_GUN_FLIR_H="chopperMedium_GUN_FLIR_H";
		chopperMedium_GUN_Left_H="chopperMedium_GUN_Left_H";
		chopperMedium_GUN_Right_H="chopperMedium_GUN_Right_H";
		chopperMedium_C_01_H="chopperMedium_C_01_H";
		chopperMedium_C_02_H="chopperMedium_C_02_H";
		chopperMedium_C_03_H="chopperMedium_C_03_H";
		chopperMedium_C_Lin_H="chopperMedium_C_Lin_H";
		chopperMedium_C_Lout_H="chopperMedium_C_Lout_H";
		chopperMedium_C_Rin_H="chopperMedium_C_Rin_H";
		chopperMedium_C_Rout_H="chopperMedium_C_Rout_H";
		chopperMedium_C_VIP_Lin_H="chopperMedium_C_VIP_Lin_H";
		chopperMedium_C_VIP_Lout_H="chopperMedium_C_VIP_Lout_H";
		chopperMedium_C_VIP_Rin_H="chopperMedium_C_VIP_Rin_H";
		chopperMedium_C_VIP_Rout_H="chopperMedium_C_VIP_Rout_H";
		chopperMedium_C_Relax_IdleAtalk_H="chopper_Relax_IdleAtalk_H";
		chopperMedium_C_Relax_IdleBtalk_H="chopper_Relax_IdleBtalk_H";
		chopperMedium_C_Relax_IdleCtalk_H="chopper_Relax_IdleCtalk_H";
		chopperMedium_C_Relax_IdleDtalk_H="chopper_Relax_IdleDtalk_H";
		chopperMedium_C_Relax_IdleEtalk_H="chopper_Relax_IdleEtalk_H";
		chopperMedium_C_Relax_IdleFtalk_H="chopper_Relax_IdleFtalk_H";
		chopperMedium_C_Relax_IdleGtalk_H="chopper_Relax_IdleGtalk_H";
		chopperMedium_C_Relax_IdleHbasicLoop_H="chopper_Relax_IdleHbasicLoop_H";
		chopperMedium_C_Relax_IdleIbasicLoop_H="chopper_Relax_IdleIbasicLoop_H";
		chopperMedium_C_Relax_IdleJlookaround_H="chopper_Relax_IdleJlookaround_H";
		chopperMedium_C_Relax_IdleKlookaround_H="chopper_Relax_IdleKlookaround_H";
		chopperMedium_C_Relax_static_H="chopper_Relax_static_H";
		chopperMedium_C_Straight_IdleAtalk_H="chopper_Straight_IdleAtalk_H";
		chopperMedium_C_Straight_IdleBtalk_H="chopper_Straight_IdleBtalk_H";
		chopperMedium_C_Straight_IdleCtalk_H="chopper_Straight_IdleCtalk_H";
		chopperMedium_C_Straight_IdleDtalk_H="chopper_Straight_IdleDtalk_H";
		chopperMedium_C_Straight_IdleEtalk_H="chopper_Straight_IdleEtalk_H";
		chopperMedium_C_Straight_IdleFtalk_H="chopper_Straight_IdleFtalk_H";
		chopperMedium_C_Straight_IdleGtalk_H="chopper_Straight_IdleGtalk_H";
		chopperMedium_C_Straight_IdleHbasicLoop_H="chopper_Straight_IdleHbasicLoop_H";
		chopperMedium_C_Straight_IdleIbasicLoop_H="chopper_Straight_IdleIbasicLoop_H";
		chopperMedium_C_Straight_IdleJlookaround_H="chopper_Straight_IdleJlookaround_H";
		chopperMedium_C_Straight_IdleKlookaround_H="chopper_Straight_IdleKlookaround_H";
		chopperMedium_C_Straight_static_H="chopper_Straight_static_H";
		chopperMedium_CIN_hitBedinPain_H="chopperMedium_CIN_hitBedinPain_H";
		chopperMedium_CIN_idleA_H="chopperMedium_CIN_idleA_H";
		chopperMedium_CIN_idleB_H="chopperMedium_CIN_idleB_H";
		chopperMedium_CIN_idleCbellyPain_H="chopperMedium_CIN_idleCbellyPain_H";
		chopperMedium_CIN_idleDbellyPain_H="chopperMedium_CIN_idleDbellyPain_H";
		chopperMedium_CIN_lookAhead_H="chopperMedium_CIN_lookAhead_H";
		chopperMedium_CIN_spasm_H="chopperMedium_CIN_spasm_H";
		chopperMedium_CIN_static_H="chopperMedium_CIN_static_H";
		chopperMedium_CIN_watchWrist_H="chopperMedium_CIN_watchWrist_H";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class driver_offroad01;
		class passenger_low01;
		class Truck_02_Driver;
		class driver_boat01;
		class Pilot_Plane_Civil_01;
		class GetInHelicopterCargo;
		class A3PL_Driver_Tahoe: driver_offroad01
		{
			file="\A3PL_Cars\Common\Proxies\Anim\A3PL_Driver_Tahoe.rtm";
		};
		class A3PL_Truck_Driver1: Truck_02_Driver
		{
			file="\A3PL_Cars\Common\Proxies\Anim\A3PL_Truck_Driver1.rtm";
		};
		class A3PL_Passenger_Low: passenger_low01
		{
			file="\A3PL_Cars\Common\Proxies\Anim\A3PL_Passenger_Low.rtm";
		};
		class A3PL_Passenger_Low2: passenger_low01
		{
			file="\A3PL_Cars\Common\Proxies\Anim\A3PL_Passenger_Low2.rtm";
		};
		class A3PL_Ship_Driver: driver_boat01
		{
			file="\A3PL_Cars\Common\Proxies\Anim\Ship_driver.rtm";
		};
		class Crew: Default
		{
			actions="CargoActions";
			file="\A3\anims_f\Data\Anim\Sdr\Mov\Sit\stp\non\non\AmovPsitMstpSnonWnonDnon";
			speed=1e+010;
			soundEnabled=0;
			collisionShape="A3\anims_f\Data\Geom\Sdr\geom_empty.p3d";
			useIdles=0;
			canPullTrigger=0;
			leaning="crewShake";
			mask="empty";
			forceAim=1;
			disableWeapons=1;
			disableWeaponsLong=1;
			rightHandIKCurve[]={1};
			leftHandIKCurve[]={1};
			rightLegIKCurve[]={1};
			leftLegIKCurve[]={1};
			InterpolateTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class A3PL_Cessna_Pilot: Pilot_Plane_Civil_01
		{
			file="\A3PL_Cars\Common\Proxies\Anim\A3PL_Cessna_Pilot.rtm";
		};
		class A3PL_Goose_Pilot: Pilot_Plane_Civil_01
		{
			file="\A3PL_Cars\Common\Proxies\Anim\A3PL_Goose_Pilot.rtm";
		};
		class A3PL_Jawhawk_CoPilot: Pilot_Plane_Civil_01
		{
			file="\A3PL_Cars\Common\Proxies\Anim\A3PL_Jawhawk_CoPilot.rtm";
		};
		class A3PL_Jawhawk_Pilot: Pilot_Plane_Civil_01
		{
			file="\A3PL_Cars\Common\Proxies\Anim\A3PL_Jawhawk_Pilot.rtm";
		};
		class A3PL_Crane_Driver: Truck_02_Driver
		{
			file="\A3PL_Cars\Common\Proxies\Anim\A3PL_Crane_Driver.rtm";
		};
		class A3PL_Excavator_Driver: Truck_02_Driver
		{
			file="\A3PL_Cars\Common\Proxies\Anim\A3PL_Excavator_Driver.rtm";
		};
		class A3PL_Driver1: driver_offroad01
		{
			file="\A3PL_Cars\Common\Proxies\Anim\A3PL_Driver1.rtm";
		};
		class A3PL_Driver2: Truck_02_Driver
		{
			file="\A3PL_Cars\Common\Proxies\Anim\A3PL_Driver2.rtm";
		};
		class A3PL_Passenger2: passenger_low01
		{
			file="\A3PL_Cars\Common\Proxies\Anim\A3PL_Passenger2.rtm";
		};
		class A3PL_Passenger_Rear: passenger_low01
		{
			file="\A3PL_Cars\Common\Proxies\Anim\A3PL_Passenger_Rear.rtm";
		};
		class A3PL_medevac: passenger_low01
		{
			file="\A3PL_Cars\Common\Proxies\Anim\A3PL_medevac.rtm";
		};
		class A3PL_Crew: passenger_low01
		{
			file="\A3PL_Cars\Common\Proxies\Anim\A3PL_Crew.rtm";
		};
		class A3PL_TowTractor_driver: Truck_02_Driver
		{
			file="\A3PL_Cars\Common\Proxies\Anim\A3PL_TowTractor_driver.rtm";
		};
		class A3PL_Lifebuoy_Cargo: passenger_low01
		{
			file="\A3PL_Cars\Common\Proxies\Anim\A3PL_Lifebuoy_Cargo.rtm";
			speed=0.188347;
			relSpeedMin=0.5;
			soundEdge[]={0.5};
			headBobStrength=0.56999999;
			InterpolationSpeed=1.5;
			duty=-0.2;
			disableWeapons=1;
			soundOverride="swim";
			soundEnabled=1;
		};
		class A3PL_Bed: Crew
		{
			file="\A3PL_Cars\Common\Proxies\Anim\A3PL_Bed.rtm";
		};
		class A3PL_Garbage_Truck_Passenger_Left: passenger_low01
		{
			file="\A3PL_Cars\Common\Proxies\Anim\A3PL_Garbage_Truck_Passenger_Left.rtm";
		};
		class A3PL_Garbage_Truck_Passenger_Right: passenger_low01
		{
			file="\A3PL_Cars\Common\Proxies\Anim\A3PL_Garbage_Truck_Passenger_Right.rtm";
		};
		class KIA_chopperMedium_R_01_H: DefaultDie
		{
			actions="DeadActions";
			file="\A3PL_Planes\Helicopters_Medium\data\Anim\R\death1.rtm";
			speed=0.76923102;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class KIA_chopperMedium_R_02_H: KIA_chopperMedium_R_01_H
		{
			file="\A3PL_Planes\Helicopters_Medium\data\Anim\R\death2.rtm";
			speed=0.625;
		};
		class KIA_chopperMedium_R_03_H: KIA_chopperMedium_R_01_H
		{
			file="\A3PL_Planes\Helicopters_Medium\data\Anim\R\death3.rtm";
			speed=0.652174;
		};
		class KIA_chopperMedium_L_01_H: KIA_chopperMedium_R_01_H
		{
			file="\A3PL_Planes\Helicopters_Medium\data\Anim\L\death1.rtm";
			speed=0.76923102;
		};
		class KIA_chopperMedium_L_02_H: KIA_chopperMedium_R_01_H
		{
			file="\A3PL_Planes\Helicopters_Medium\data\Anim\L\death2.rtm";
			speed=0.625;
		};
		class KIA_chopperMedium_L_03_H: KIA_chopperMedium_R_01_H
		{
			file="\A3PL_Planes\Helicopters_Medium\data\Anim\L\death3.rtm";
			speed=0.652174;
		};
		class KIA_chopperMedium_LP_01_H: KIA_chopperMedium_R_01_H
		{
			file="\A3PL_Planes\Helicopters_Medium\data\Anim\LP\death1.rtm";
			speed=0.441176;
		};
		class KIA_chopperMedium_LP_02_H: KIA_chopperMedium_R_01_H
		{
			file="\A3PL_Planes\Helicopters_Medium\data\Anim\LP\death2.rtm";
			speed=0.652174;
		};
		class KIA_chopperMedium_LP_03_H: KIA_chopperMedium_R_01_H
		{
			file="\A3PL_Planes\Helicopters_Medium\data\Anim\LP\death3.rtm";
			speed=0.76923102;
		};
		class KIA_chopperMedium_GUN_FLIR_H: KIA_chopperMedium_R_01_H
		{
			file="\A3PL_Planes\Helicopters_Medium\data\Anim\C\KIA_01.rtm";
			speed=0.5;
		};
		class KIA_chopperMedium_GUN_left_H: KIA_chopperMedium_R_01_H
		{
			file="\A3PL_Planes\Helicopters_Medium\data\Anim\GUN\KIA_Left.rtm";
			speed=0.5;
		};
		class KIA_chopperMedium_GUN_right_H: KIA_chopperMedium_R_01_H
		{
			file="\A3PL_Planes\Helicopters_Medium\data\Anim\GUN\Right.rtm";
			speed=0.5;
		};
		class KIA_chopperMedium_C_01_H: KIA_chopperMedium_R_01_H
		{
			file="\A3PL_Planes\Helicopters_Medium\data\Anim\C\KIA_01.rtm";
			speed=0.5;
		};
		class KIA_chopperMedium_C_02_H: KIA_chopperMedium_R_01_H
		{
			file="\A3PL_Planes\Helicopters_Medium\data\Anim\C\KIA_02.rtm";
			speed=0.5;
		};
		class KIA_chopperMedium_C_03_H: KIA_chopperMedium_R_01_H
		{
			file="\A3PL_Planes\Helicopters_Medium\data\Anim\C\KIA_03.rtm";
			speed=0.5;
		};
		class KIA_chopperMedium_CIN_H: KIA_chopperMedium_R_01_H
		{
			file="\A3PL_Planes\Helicopters_Medium\data\Anim\CIN\death.rtm";
		};
		class ChopperMedium_R_static_H: Crew
		{
			leftHandIKCurve[]={1};
			rightHandIKCurve[]={1};
			leftLegIKCurve[]={1};
			rightLegIKCurve[]={1};
			file="\A3PL_Planes\Helicopters_Medium\data\Anim\R\static.rtm";
			speed=1e+010;
			looped=0;
			interpolateTo[]=
			{
				"KIA_chopperMedium_R_01_H",
				1,
				"KIA_chopperMedium_R_02_H",
				1,
				"KIA_chopperMedium_R_03_H",
				1
			};
		};
		class ChopperMedium_L_static_H: Crew
		{
			leftHandIKCurve[]={1};
			rightHandIKCurve[]={1};
			leftLegIKCurve[]={1};
			rightLegIKCurve[]={1};
			file="\A3PL_Planes\Helicopters_Medium\data\Anim\L\static.rtm";
			speed=1e+010;
			looped=0;
			connectTo[]=
			{
				"ChopperMedium_L_copilot_to_passenger_H",
				1
			};
			interpolateTo[]=
			{
				"KIA_chopperMedium_L_01_H",
				1,
				"KIA_chopperMedium_L_02_H",
				1,
				"KIA_chopperMedium_L_03_H",
				1
			};
		};
		class ChopperMedium_LP_static_H: Crew
		{
			file="\A3PL_Planes\Helicopters_Medium\data\Anim\LP\static.rtm";
			speed=1e+010;
			looped=0;
			connectTo[]=
			{
				"chopperMedium_LP_passenger_to_copilot_H",
				1
			};
			interpolateTo[]=
			{
				"KIA_chopperMedium_LP_01_H",
				1,
				"KIA_chopperMedium_LP_02_H",
				1,
				"KIA_chopperMedium_LP_03_H",
				1
			};
		};
		class ChopperMedium_CIN_static_H: Crew
		{
			file="\A3PL_Planes\Helicopters_Medium\data\Anim\CIN\static.rtm";
			speed=1e+010;
			looped=0;
			interpolateTo[]=
			{
				"KIA_chopperMedium_CIN_H",
				1
			};
		};
		class ChopperMedium_R_buttonPush_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\buttonPush";
			speed=0.5;
		};
		class ChopperMedium_R_greetFront_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\greetFront";
			speed=0.384615;
		};
		class ChopperMedium_R_greetLeft_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\greetLeft";
			speed=0.5;
		};
		class ChopperMedium_R_greetRight_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\greetRight";
			speed=0.365854;
		};
		class ChopperMedium_R_headInHand_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\headInHand";
			speed=0.27026999;
		};
		class ChopperMedium_R_idleLoopA_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\idleLoopA";
			speed=0.35714301;
		};
		class ChopperMedium_R_idleLoopB_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\idleLoopB";
			speed=0.26548699;
		};
		class ChopperMedium_R_idleLoopC_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\idleLoopC";
			speed=0.160428;
		};
		class ChopperMedium_R_idleLoopD_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\idleLoopD";
			speed=0.31914899;
		};
		class ChopperMedium_R_idleLoopE_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\idleLoopE";
			speed=0.234375;
		};
		class ChopperMedium_R_lookLeft_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\lookLeft";
			speed=0.56603801;
		};
		class ChopperMedium_R_lookLeftBackUp_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\lookLeftBackUp";
			speed=0.34883699;
		};
		class ChopperMedium_R_lookRight_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\lookRight";
			speed=0.34883699;
		};
		class ChopperMedium_R_lookRightBackUp_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\lookRightBackUp";
			speed=0.277778;
		};
		class ChopperMedium_R_pointFront_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\pointFront";
			speed=0.40000001;
		};
		class ChopperMedium_R_pointLeft_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\pointLeft";
			speed=0.40000001;
		};
		class ChopperMedium_R_pointRight_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\pointRight";
			speed=0.291262;
		};
		class ChopperMedium_R_seatBeltOff_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\seatBeltOff";
			speed=0.225564;
		};
		class ChopperMedium_R_seatBeltOn_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\seatBeltOn";
			speed=0.180723;
		};
		class ChopperMedium_R_switchOff_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\switchOff";
			speed=0.517241;
		};
		class ChopperMedium_R_switchOn_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\switchOn";
			speed=0.56603801;
		};
		class ChopperMedium_R_thumbDownFront_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\thumbDownFront";
			speed=0.42857099;
		};
		class ChopperMedium_R_thumbDownLeft_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\thumbDownLeft";
			speed=0.422535;
		};
		class ChopperMedium_R_thumbDownRight_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\thumbDownRight";
			speed=0.48387101;
		};
		class ChopperMedium_R_thumbUpFront_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\thumbUpFront";
			speed=0.48387101;
		};
		class ChopperMedium_R_thumbUpLeft_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\thumbUpLeft";
			speed=0.53571397;
		};
		class ChopperMedium_R_thumbUpRight_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\thumbUpRight";
			speed=0.48387101;
		};
		class ChopperMedium_R_tweakHeadSetMicA_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\tweakHeadSetMicA";
			speed=0.422535;
		};
		class ChopperMedium_R_tweakHeadSetMicB_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\tweakHeadSetMicB";
			speed=0.422535;
		};
		class ChopperMedium_L_buttonPush_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\buttonPush";
			speed=0.5;
		};
		class ChopperMedium_L_copilot_to_passenger_H: ChopperMedium_L_static_H
		{
			leftHandIKCurve[]={0,1,1,0};
			rightHandIKCurve[]={0,1,1,0};
			leftLegIKCurve[]={0,1,1,0};
			rightLegIKCurve[]={0,1,1,0};
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\copilot_to_passenger";
			speed=0.38960999;
			connectTo[]=
			{
				"ChopperMedium_LP_static_H",
				1
			};
		};
		class ChopperMedium_L_greetFront_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\greetFront";
			speed=0.384615;
		};
		class ChopperMedium_L_greetLeft_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\greetLeft";
			speed=0.5;
		};
		class ChopperMedium_L_greetRight_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\greetRight";
			speed=0.365854;
		};
		class ChopperMedium_L_HeadInHand_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\HeadInHand";
			speed=0.27272701;
		};
		class ChopperMedium_L_headSetOff_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\headSetOff";
			speed=0.27272701;
		};
		class ChopperMedium_L_headSetOn_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\headSetOn";
			speed=0.23999999;
		};
		class ChopperMedium_L_idleLoopA_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\idleLoopA";
			speed=0.35714301;
		};
		class ChopperMedium_L_idleLoopB_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\idleLoopB";
			speed=0.26548699;
		};
		class ChopperMedium_L_idleLoopC_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\idleLoopC";
			speed=0.160428;
		};
		class ChopperMedium_L_idleLoopD_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\idleLoopD";
			speed=0.31914899;
		};
		class ChopperMedium_L_idleLoopE_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\idleLoopE";
			speed=0.234375;
		};
		class ChopperMedium_L_lookLeft_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\lookLeft";
			speed=0.56603801;
		};
		class ChopperMedium_L_lookLeftBackUp_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\lookLeftBackUp";
			speed=0.34883699;
		};
		class ChopperMedium_L_lookRight_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\lookRight";
			speed=0.34883699;
		};
		class ChopperMedium_L_lookRightBackUp_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\lookRightBackUp";
			speed=0.28037399;
		};
		class ChopperMedium_L_pointFront_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\pointFront";
			speed=0.40000001;
		};
		class ChopperMedium_L_pointLeft_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\pointLeft";
			speed=0.40000001;
		};
		class ChopperMedium_L_pointRight_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\pointRight";
			speed=0.291262;
		};
		class ChopperMedium_L_seatBeltOff_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\seatBeltOff";
			speed=0.225564;
		};
		class ChopperMedium_L_seatBeltOn_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\seatBeltOn";
			speed=0.180723;
		};
		class ChopperMedium_L_switchOff_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\switchOff";
			speed=0.517241;
		};
		class ChopperMedium_L_switchOn_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\switchOn";
			speed=0.56603801;
		};
		class ChopperMedium_L_thumbDownFront_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\thumbDownFront";
			speed=0.42857099;
		};
		class ChopperMedium_L_thumbDownLeft_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\thumbDownLeft";
			speed=0.422535;
		};
		class ChopperMedium_L_thumbDownRight_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\thumbDownRight";
			speed=0.48387101;
		};
		class ChopperMedium_L_thumbUpFront_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\thumbUpFront";
			speed=0.48387101;
		};
		class ChopperMedium_L_thumbUpLeft_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\thumbUpLeft";
			speed=0.53571397;
		};
		class ChopperMedium_L_thumbUpRight_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\thumbUpRight";
			speed=0.48387101;
		};
		class ChopperMedium_L_tweakHeadSetMicA_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\tweakHeadSetMicA";
			speed=0.422535;
		};
		class ChopperMedium_L_tweakHeadSetMicB_H: ChopperMedium_L_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\tweakHeadSetMicB";
			speed=0.422535;
		};
		class ChopperMedium_LP_idleA_H: ChopperMedium_LP_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\LP\idleA";
			speed=0.26548699;
		};
		class ChopperMedium_LP_idleB_H: ChopperMedium_LP_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\LP\idleB";
			speed=0.160428;
		};
		class ChopperMedium_LP_idleC_H: ChopperMedium_LP_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\LP\idleC";
			speed=0.31914899;
		};
		class ChopperMedium_LP_idleD_H: ChopperMedium_LP_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\LP\idleD";
			speed=0.234375;
		};
		class ChopperMedium_LP_idleEtalk_H: ChopperMedium_LP_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\LP\idleEtalk";
			speed=0.099009998;
		};
		class ChopperMedium_LP_idleGtalk_H: ChopperMedium_LP_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\LP\idleGtalk";
			speed=0.092308;
		};
		class ChopperMedium_LP_idleH_H: ChopperMedium_LP_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\LP\idleH";
			speed=0.050505001;
		};
		class ChopperMedium_LP_idleI_H: ChopperMedium_LP_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\LP\idleI";
			speed=0.044842999;
		};
		class ChopperMedium_LP_idleJ_H: ChopperMedium_LP_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\LP\idleJ";
			speed=0.048232;
		};
		class ChopperMedium_LP_passenger_to_copilot_H: ChopperMedium_LP_static_H
		{
			leftHandIKCurve[]={0,0,1,1};
			rightHandIKCurve[]={0,0,1,1};
			leftLegIKCurve[]={0,0,1,1};
			rightLegIKCurve[]={0,0,1,1};
			file="A3PL_Planes\Helicopters_Medium\data\Anim\LP\passenger_to_copilot";
			speed=0.34883699;
			connectTo[]=
			{
				"ChopperMedium_L_static_H",
				1
			};
		};
		class ChopperMedium_GUN_FLIR_H: Crew
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\GUN\FLIR";
			speed=1e+010;
			looped=0;
			interpolateTo[]=
			{
				"KIA_chopperMedium_GUN_FLIR_H",
				0.1
			};
		};
		class ChopperMedium_GUN_Left_H: Crew
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\GUN\Left";
			speed=1e+010;
			looped=0;
			interpolateTo[]=
			{
				"KIA_chopperMedium_GUN_left_H",
				0.1
			};
		};
		class ChopperMedium_GUN_Right_H: Crew
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\GUN\Right";
			speed=1e+010;
			looped=0;
			interpolateTo[]=
			{
				"KIA_chopperMedium_GUN_right_H",
				0.1
			};
		};
		class ChopperMedium_C_01_H: Crew
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\C\01";
			speed=0.30000001;
			equivalentTo="ChopperMedium_C_01_H";
			connectTo[]=
			{
				"ChopperMedium_C_01_H",
				0.30000001,
				"ChopperMedium_C_01_V1_H",
				0.1,
				"ChopperMedium_C_01_V2_H",
				0.1,
				"ChopperMedium_C_01_V3_H",
				0.1
			};
			interpolateTo[]=
			{
				"KIA_chopperMedium_C_01_H",
				1
			};
			variantsAI[]=
			{
				"ChopperMedium_C_01_H",
				0.40000001,
				"ChopperMedium_C_01_V1_H",
				0.2,
				"ChopperMedium_C_01_V2_H",
				0.2,
				"ChopperMedium_C_01_V3_H",
				0.2
			};
			variantAfter[]={5,10,20};
		};
		class ChopperMedium_C_01_V1_H: ChopperMedium_C_01_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\C\01nadech";
			speed=0.39500001;
			looped=0;
			connectTo[]=
			{
				"ChopperMedium_C_01_H",
				0.1
			};
			variantAfter[]={5,5,5};
		};
		class ChopperMedium_C_01_V2_H: ChopperMedium_C_01_V1_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\C\01poposed";
			speed=0.588;
		};
		class ChopperMedium_C_01_V3_H: ChopperMedium_C_01_V2_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\C\01presunruky";
			speed=0.491;
		};
		class ChopperMedium_C_02_H: Crew
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\C\02";
			speed=0.30000001;
			equivalentTo="ChopperMedium_C_02_H";
			connectTo[]=
			{
				"ChopperMedium_C_02_H",
				0.30000001,
				"ChopperMedium_C_02_V1_H",
				0.1,
				"ChopperMedium_C_02_V1_H",
				0.1,
				"ChopperMedium_C_02_V1_H",
				0.1
			};
			interpolateTo[]=
			{
				"KIA_chopperMedium_C_02_H",
				1
			};
			variantsAI[]=
			{
				"ChopperMedium_C_02_H",
				0.40000001,
				"ChopperMedium_C_02_V1_H",
				0.2,
				"ChopperMedium_C_02_V1_H",
				0.2,
				"ChopperMedium_C_02_V1_H",
				0.2
			};
			variantAfter[]={5,10,20};
		};
		class ChopperMedium_C_02_V1_H: ChopperMedium_C_02_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\C\02poposed";
			speed=0.65200001;
			looped=0;
			connectTo[]=
			{
				"ChopperMedium_C_02_H",
				0.1
			};
			variantAfter[]={5,5,5};
		};
		class ChopperMedium_C_02_V2_H: ChopperMedium_C_02_V1_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\C\02predklon";
			speed=0.3125;
		};
		class ChopperMedium_C_02_V3_H: ChopperMedium_C_02_V2_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\C\02presunruky";
			speed=0.37;
		};
		class ChopperMedium_C_03_H: Crew
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\C\03";
			speed=0.30000001;
			equivalentTo="ChopperMedium_C_03_H";
			connectTo[]=
			{
				"ChopperMedium_C_03_H",
				0.30000001,
				"ChopperMedium_C_03_V1_H",
				0.1,
				"ChopperMedium_C_03_V2_H",
				0.1,
				"ChopperMedium_C_03_V3_H",
				0.1
			};
			interpolateTo[]=
			{
				"KIA_chopperMedium_C_03_H",
				1
			};
			variantsAI[]=
			{
				"ChopperMedium_C_03_H",
				0.40000001,
				"ChopperMedium_C_03_V1_H",
				0.1,
				"ChopperMedium_C_03_V2_H",
				0.25,
				"ChopperMedium_C_03_V3_H",
				0.25
			};
			variantAfter[]={5,10,20};
		};
		class ChopperMedium_C_03_V1_H: ChopperMedium_C_03_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\C\03predklon";
			speed=0.37;
			looped=0;
			connectTo[]=
			{
				"ChopperMedium_C_03_H",
				0.1
			};
			variantAfter[]={5,5,5};
		};
		class ChopperMedium_C_03_V2_H: ChopperMedium_C_03_V1_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\C\03presunruky";
			speed=0.37;
		};
		class ChopperMedium_C_03_V3_H: ChopperMedium_C_03_V2_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\C\03protazenizad";
			speed=0.491;
		};
		class ChopperMedium_C_LIn_H: GetInHelicopterCargo
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\C\LIn";
			speed=0.49180299;
		};
		class ChopperMedium_C_LOut_H: ChopperMedium_C_LIn_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\C\LOut";
			speed=0.5;
		};
		class ChopperMedium_C_RIn_H: ChopperMedium_C_LIn_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\C\RIn";
			speed=0.49180299;
		};
		class ChopperMedium_C_ROut_H: ChopperMedium_C_LIn_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\C\ROut";
			speed=0.5;
		};
		class ChopperMedium_C_VIP_LIn_H: ChopperMedium_C_LIn_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\C\VIP_LIn";
			speed=0.32967001;
		};
		class ChopperMedium_C_VIP_LOut_H: ChopperMedium_C_LIn_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\C\VIP_LOut";
			speed=0.326087;
		};
		class ChopperMedium_C_VIP_RIn_H: ChopperMedium_C_LIn_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\C\VIP_RIn";
			speed=0.32967001;
		};
		class ChopperMedium_C_VIP_ROut_H: ChopperMedium_C_LIn_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\C\VIP_ROut";
			speed=0.326087;
		};
		class ChopperMedium_CIN_hitBedinPain_H: ChopperMedium_CIN_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\CIN\hitBedinPain";
			speed=0.165746;
		};
		class ChopperMedium_CIN_idleA_H: ChopperMedium_CIN_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\CIN\idleA";
			speed=0.103093;
		};
		class ChopperMedium_CIN_idleB_H: ChopperMedium_CIN_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\CIN\idleB";
			speed=0.087977;
		};
		class ChopperMedium_CIN_idleCbellyPain_H: ChopperMedium_CIN_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\CIN\idleCbellyPain";
			speed=0.112782;
		};
		class ChopperMedium_CIN_idleDbellyPain_H: ChopperMedium_CIN_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\CIN\idleDbellyPain";
			speed=0.12987;
		};
		class ChopperMedium_CIN_lookAhead_H: ChopperMedium_CIN_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\CIN\lookAhead";
			speed=0.165746;
		};
		class ChopperMedium_CIN_spasm_H: ChopperMedium_CIN_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\CIN\spasm";
			speed=0.093457997;
		};
		class ChopperMedium_CIN_watchWrist_H: ChopperMedium_CIN_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\CIN\watchWrist";
			speed=0.165746;
		};
		class ChopperMedium_R_GetIn_H: GetInHelicopterCargo
		{
			actions="CivilStandActions";
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\getIn";
			speed=0.30000001;
			looped=0;
			soundEnabled=0;
			disableWeapons=1;
			enableOptics=0;
			canPullTrigger=0;
			connectTo[]=
			{
				"chopperMedium_R_static_H",
				0.02
			};
			interpolateTo[]={};
			collisionShape="A3\anims_f\Data\Geom\Sdr\geom_empty.p3d";
			leftHandIKCurve[]={0,0,0.94999999,1};
			rightHandIKCurve[]={0,0,0.94999999,1};
			head="headNo";
			headBobMode=1;
			headBobStrength=-0.5;
		};
		class ChopperMedium_R_GetOut_H: GetInHelicopterCargo
		{
			actions="CivilStandActions";
			file="A3PL_Planes\Helicopters_Medium\data\Anim\R\getOut";
			speed=0.40000001;
			looped=0;
			soundEnabled=0;
			disableWeapons=1;
			enableOptics=0;
			canPullTrigger=0;
			connectTo[]=
			{
				"AmovPercMstpSnonWnonDnon",
				0.02
			};
			interpolateTo[]={};
			collisionShape="A3\anims_f\Data\Geom\Sdr\geom_empty.p3d";
			leftHandIKCurve[]={0,1,0.050000001,0};
			rightHandIKCurve[]={0,1,0.050000001,0};
			head="headNo";
			headBobMode=1;
			headBobStrength=-0.5;
		};
		class ChopperMedium_L_GetIn_H: ChopperMedium_R_GetIn_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\GetIn";
			connectTo[]=
			{
				"ChopperMedium_GUN_Left_H",
				0.02
			};
		};
		class ChopperMedium_L_GetOut_H: ChopperMedium_R_GetOut_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\L\GetOut";
		};
		class KIA_chopper_Relax01_H: DefaultDie
		{
			actions="DeadActions";
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Relax\death1.rtm";
			speed=0.76923102;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class KIA_chopper_Relax02_H: KIA_chopper_Relax01_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Relax\death2.rtm";
			speed=0.441176;
		};
		class KIA_chopper_Relax03_H: KIA_chopper_Relax01_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Relax\death3.rtm";
			speed=0.652174;
		};
		class KIA_chopper_Straight01_H: KIA_chopper_Relax01_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Straight\death1.rtm";
			speed=0.76923102;
		};
		class KIA_chopper_Straight02_H: KIA_chopper_Relax01_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Straight\death2.rtm";
			speed=0.441176;
		};
		class KIA_chopper_Straight03_H: KIA_chopper_Relax01_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Straight\death3.rtm";
			speed=0.62517399;
		};
		class Chopper_Relax_Static_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Relax\static.rtm";
			speed=1e+010;
			looped=0;
			interpolateTo[]=
			{
				"KIA_chopper_Relax01_H",
				1,
				"KIA_chopper_Relax02_H",
				1,
				"KIA_chopper_Relax03_H",
				1
			};
		};
		class Chopper_Straight_Static_H: ChopperMedium_R_static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Straight\static.rtm";
			speed=1e+010;
			looped=0;
			interpolateTo[]=
			{
				"KIA_chopper_Straight01_H",
				1,
				"KIA_chopper_Straight02_H",
				1,
				"KIA_chopper_Straight03_H",
				1
			};
		};
		class Chopper_Relax_IdleAtalk_H: Chopper_Relax_Static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Relax\IdleAtalk";
			speed=0.099009998;
		};
		class Chopper_Relax_IdleBtalk_H: Chopper_Relax_Static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Relax\IdleBtalk";
			speed=0.092308;
		};
		class Chopper_Relax_IdleCtalk_H: Chopper_Relax_Static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Relax\IdleCtalk";
			speed=0.050505001;
		};
		class Chopper_Relax_IdleDtalk_H: Chopper_Relax_Static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Relax\IdleDtalk";
			speed=0.044842999;
		};
		class Chopper_Relax_IdleEtalk_H: Chopper_Relax_Static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Relax\IdleEtalk";
			speed=0.048232;
		};
		class Chopper_Relax_IdleFtalk_H: Chopper_Relax_Static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Relax\IdleFtalk";
			speed=0.1;
		};
		class Chopper_Relax_IdleGtalk_H: Chopper_Relax_Static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Relax\IdleGtalk";
			speed=0.45454499;
		};
		class Chopper_Relax_IdleHbasicLoop_H: Chopper_Relax_Static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Relax\IdleHbasicLoop";
			speed=0.26548699;
		};
		class Chopper_Relax_IdleIbasicLoop_H: Chopper_Relax_Static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Relax\IdleIbasicLoop";
			speed=0.160428;
		};
		class Chopper_Relax_IdleJlookaround_H: Chopper_Relax_Static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Relax\IdleJlookaround";
			speed=0.31914899;
		};
		class Chopper_Relax_IdleKlookaround_H: Chopper_Relax_Static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Relax\IdleKlookaround";
			speed=0.234375;
		};
		class Chopper_Straight_IdleAtalk_H: Chopper_Straight_Static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Straight\IdleAtalk";
			speed=0.099009998;
		};
		class Chopper_Straight_IdleBtalk_H: Chopper_Straight_Static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Straight\IdleBtalk";
			speed=0.092308;
		};
		class Chopper_Straight_IdleCtalk_H: Chopper_Straight_Static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Straight\IdleCtalk";
			speed=0.050505001;
		};
		class Chopper_Straight_IdleDtalk_H: Chopper_Straight_Static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Straight\IdleDtalk";
			speed=0.044842999;
		};
		class Chopper_Straight_IdleEtalk_H: Chopper_Straight_Static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Straight\IdleEtalk";
			speed=0.048232;
		};
		class Chopper_Straight_IdleFtalk_H: Chopper_Straight_Static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Straight\IdleFtalk";
			speed=0.1;
		};
		class Chopper_Straight_IdleGtalk_H: Chopper_Straight_Static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Straight\IdleGtalk";
			speed=0.45454499;
		};
		class Chopper_Straight_IdleHbasicLoop_H: Chopper_Straight_Static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Straight\IdleHbasicLoop";
			speed=0.26548699;
		};
		class Chopper_Straight_IdleIbasicLoop_H: Chopper_Straight_Static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Straight\IdleIbasicLoop";
			speed=0.160428;
		};
		class Chopper_Straight_IdleJlookaround_H: Chopper_Straight_Static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Straight\IdleJlookaround";
			speed=0.31914899;
		};
		class Chopper_Straight_IdleKlookaround_H: Chopper_Straight_Static_H
		{
			file="A3PL_Planes\Helicopters_Medium\data\Anim\Straight\IdleKlookaround";
			speed=0.234375;
		};
	};
};

class ExhaustsEffectBig;
class ExhaustsEffect;
class Jonzie_ExhaustTruckEffect: ExhaustsEffect{};
class A3PL_ExhaustBigShipEffect: ExhaustsEffectBig{};

class CfgActions
{
	class None
	{
		priority=0;
		show=0;
		showWindow=0;
		hideOnUse=1;
		shortcut="";
		text="";
		textDefault="";
		textSimple="";
	};
	class HookCargo: None
	{
		priority=3;
		text="Hook";
	};
	class UnhookCargo: None
	{
		priority=3;
		text="Unhook";
	};
	class LoadVehicle: None
	{
		priority=3;
		text="Load vehicle";
		textDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa' size='1.8' shadow=2 />";
	};
	class UnloadVehicle: None
	{
		priority=3;
		text="Unload vehicle";
		textDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\unloadVehicle_ca.paa' size='1.8' shadow=2 />";
	};
	class UnloadAllVehicles: None
	{
		priority=3;
		text="Unload all vehicles";
		textDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\unloadAllVehicles_ca.paa' size='1.8' shadow=2 />";
	};
	class GetInCommander: None
	{
		text="Get in %1 as commander";
		showWindow=1;
		priority=5.9000001;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\getincommander_ca.paa' size='1.8' shadow=2 />";
		radius=1.5;
		radiusView=0.5;
		showIn3D=1;
	};
	class GetInDriver: None
	{
		text="Get in %1 as Driver";
		showWindow=1;
		priority=5.8000002;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\getindriver_ca.paa' size='1.8' shadow=2 />";
		radius=1.5;
		radiusView=0.5;
		showIn3D=1;
	};
	class GetInPilot: None
	{
		text="Get in %1 as Pilot";
		showWindow=1;
		priority=5.5999999;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\getinpilot_ca.paa' size='1.8' shadow=2 />";
		radius=1.5;
		radiusView=0.5;
		showIn3D=1;
	};
	class GetInGunner: None
	{
		text="Get in %1 as gunner";
		showWindow=1;
		priority=5.6999998;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\getingunner_ca.paa' size='1.8' shadow=2 />";
		radius=1.5;
		radiusView=0.5;
		showIn3D=1;
	};
	class GetInCargo: None
	{
		text="Get in %1 Ride in back";
		showWindow=1;
		priority=5.5;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\getincargo_ca.paa' size='1.8' shadow=2 />";
		radius=1.5;
		radiusView=0.5;
		showIn3D=1;
	};
	class GetInTurret: None
	{
		text="Get in %1 as %2";
		showWindow=1;
		priority=5.4000001;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\getingunner_ca.paa' size='1.8' shadow=2 />";
		radius=1.5;
		radiusView=0.5;
		showIn3D=1;
	};
	class PutInPilot: None
	{
		showWindow=1;
		textDefault="Put in Pilot";
		priority=9.6000004;
		text="Load In Pilot";
	};
	class PutInDriver: None
	{
		showWindow=1;
		textDefault="Put in Driver";
		priority=9.5;
		text="Load In Driver";
	};
	class PutInCargo: None
	{
		showWindow=1;
		textDefault="Put in Cargo";
		priority=9.6999998;
		text="Load In Cargo";
	};
	class Heal: None
	{
		text="Treat at %1";
		showWindow=1;
		priority=10;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\heal_ca.paa' size='1.8' shadow=2 />";
	};
	class HealSoldier: None
	{
		text="Treat %1";
		priority=10;
		showWindow=1;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\heal_ca.paa' size='1.8' shadow=2 />";
	};
	class RepairVehicle: None
	{
		text="Repair %1";
		priority=9;
		showWindow=1;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\repair_ca.paa' size='1.8' shadow=2 />";
	};
	class FirstAid: None
	{
		text="First Aid";
		priority=10;
		showWindow=1;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\heal_ca.paa' size='1.8' shadow=2 />";
	};
	class DragSoldier: None
	{
		priority=0.60000002;
		text="Drag %1";
	};
	class DragSoldierInterrupt: None
	{
		priority=0.60000002;
		text="Drop Draged";
	};
	class CarrySoldier: None
	{
		priority=0.60000002;
		text="Carry %1";
	};
	class CarrySoldierInterrupt: None
	{
		priority=0.60000002;
		text="Drop Body";
	};
	class DropCarried: None
	{
		priority=0.60000002;
		text="Drop Carried";
	};
	class Repair: None
	{
		text="Repair at %1";
		showWindow=1;
		priority=6;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\repair_ca.paa' size='1.8' shadow=2 />";
	};
	class Refuel: None
	{
		text="Refuel at %1";
		showWindow=1;
		priority=2;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\refuel_ca.paa' size='1.8' shadow=2 />";
	};
	class Rearm: None
	{
		text="Rearm at %1";
		showWindow=1;
		priority=5.0999999;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\reammo_ca.paa' size='1.8' shadow=2 />";
	};
	class GetOut: None
	{
		shortcut="GetOut";
		text="Get out";
		showWindow=0;
		priority=6.1999998;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\getout_ca.paa' size='1.8' shadow=2 />";
	};
	class LightOn: None
	{
		shortcut="Headlights";
		priority=0.30000001;
		text="Lights on";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_land_ON_ca' size='2' shadow='true' />";
		modelPositions="switch_lightsldg";
		radius=3;
		radiusView=0.029999999;
		showIn3D=87;
		available=3;
		showWindow=0;
	};
	class LightOff: LightOn
	{
		shortcut="Headlights";
		text="Lights off";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_land_OFF_ca' size='2' shadow='true' />";
	};
	class SearchLightOn: None
	{
		priority=0.30000001;
		show=0;
		text="Searchlight on";
		textDefault="Searchlight on";
	};
	class SearchLightOff: SearchLightOn
	{
		text="Searchlight off";
		textDefault="Searchlight off";
	};
	class CollisionLightOn: None
	{
		priority=0.30000001;
		show=0;
		text="Collision lights on";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_col_ON_ca' size='2' shadow='true' />";
		modelPositions="switch_lightsac";
		radius=3;
		radiusView=0.029999999;
		showIn3D=87;
		available=3;
		showWindow=0;
	};
	class CollisionLightOff: CollisionLightOn
	{
		text="Collision lights off";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_col_OFF_ca' size='2' shadow='true' />";
	};
	class GunLightOn: None
	{
		priority=0.1;
		show=0;
		text="Light on";
		textDefault="Light on";
	};
	class GunLightOff: None
	{
		priority=0.1;
		show=0;
		text="Light off";
		textDefault="Light off";
	};
	class ArtilleryComputer: None
	{
		priority=0.1;
		show=0;
		text="Artillery computer";
		textDefault="Artillery computer";
	};
	class EngineOn: None
	{
		shortcut="EngineToggle";
		text="Engine on";
		showWindow=0;
		priority=6;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\engine_on_ca.paa' size='1.8' shadow=2 />";
	};
	class EngineOff: None
	{
		shortcut="EngineToggle";
		text="Engine off";
		show=0;
		showWindow=0;
		priority=6;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\engine_off_ca.paa' size='1.8' shadow=2 />";
	};
	class TakeVehicleControl: None
	{
		priority=8;
		text="Take controls";
		textDefault="Take controls";
	};
	class SuspendVehicleControl: None
	{
		priority=7;
		text="Release controls";
		textDefault="Release controls";
	};
	class LockVehicleControl: None
	{
		priority=7;
		text="Lock controls";
		textDefault="Lock controls";
	};
	class UnlockVehicleControl: None
	{
		priority=7;
		text="Unlock controls";
		textDefault="Unlock controls";
	};
	class SwitchWeapon: None
	{
		hideActions[]=
		{
			"SwitchSecondary"
		};
		priority=3.0999999;
		shortcut="SwitchWeapon";
		text="Weapon %1";
		textDefault="Weapon %1";
	};
	class SwitchMagazine: SwitchWeapon
	{
		shortcut="ReloadMagazine";
	};
	class HideWeapon: SwitchWeapon
	{
		text="Hide %1";
		textDefault="Hide %1";
	};
	class UseWeapon: None
	{
		priority=1.2;
		text="%1";
		textDefault="%1";
	};
	class LoadMagazine: None
	{
		shortcut="ReloadMagazine";
		text="Reload %1";
		textDefault="Reload %1";
		priority=2;
		show=0;
	};
	class LoadOtherMagazine: LoadMagazine
	{
		show=0;
		priority=2;
		showWindow=0;
	};
	class LoadEmptyMagazine: LoadMagazine
	{
		show=0;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\reload_ca.paa' size='1.8' shadow=2 />";
		priority=2.0999999;
		showWindow=1;
	};
	class TakeWeapon: None
	{
		text="Take %1%2";
		showWindow=1;
		priority=5.3000002;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 />";
	};
	class TakeDropWeapon: TakeWeapon
	{
		text="Take %1 (drop %2)%3";
		textDefault="Take %1 (drop %2)%3";
	};
	class TakeMagazine: None
	{
		text="Take %1%2";
		showWindow=1;
		priority=5.3000002;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 />";
	};
	class TakeDropMagazine: TakeMagazine
	{
		text="Take %1 (drop %2)%3";
		textDefault="Take %1 (drop %2)%3";
	};
	class TakeFlag: None
	{
		text="Take Flag";
		showWindow=1;
		priority=7;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\takeflag_ca.paa' size='1.8' shadow=2 />";
	};
	class ReturnFlag: None
	{
		text="Return Flag";
		showWindow=1;
		priority=8;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\returnflag_ca.paa' size='1.8' shadow=2 />";
	};
	class TurnIn: None
	{
		priority=0.94999999;
		shortcut="TurnIn";
		text="Turn in";
		textDefault="Turn in";
	};
	class TurnOut: None
	{
		priority=0.60000002;
		shortcut="TurnOut";
		text="Turn out";
		textDefault="Turn out";
	};
	class WeaponInHand: None
	{
		priority=2;
		text="%1 in hand";
		textDefault="%1 in hand";
		show=0;
	};
	class WeaponOnBack: None
	{
		priority=0.30000001;
		text="%1 on back";
		textDefault="%1 on back";
		show=0;
	};
	class SitDown: None
	{
		priority=1;
		shortcut="SitDown";
		show=0;
		text="Sit down";
		textDefault="Sit down";
	};
	class Land: None
	{
		priority=0.89999998;
		text="Landing autopilot";
		textDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\landingAutopilot_ON_ca.paa' size='1.8' shadow=2 />";
	};
	class CancelLand: None
	{
		priority=0.89999998;
		text="Landing autopilot off";
		textDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\landingAutopilot_OFF_ca.paa' size='1.8' shadow=2 />";
	};
	class Eject: None
	{
		shortcut="Eject";
		text="Eject";
		showWindow=0;
		priority=6.0999999;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\eject_ca.paa' size='1.8' shadow=2 />";
	};
	class MoveToDriver: None
	{
		shortcut="SwapGunner";
		text="To Driver's seat";
		showWindow=0;
		priority=1.1;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\getindriver_ca.paa' size='1.8' shadow=2 />";
	};
	class MoveToPilot: MoveToDriver
	{
		text="To Pilot's seat";
		priority=1.2;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\getinpilot_ca.paa' size='1.8' shadow=2 />";
	};
	class MoveToGunner: None
	{
		shortcut="SwapGunner";
		text="To Gunner's seat";
		showWindow=0;
		priority=1.5;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\getingunner_ca.paa' size='1.8' shadow=2 />";
	};
	class MoveToCommander: None
	{
		shortcut="SwapGunner";
		text="To Commander's seat";
		showWindow=0;
		priority=1.4;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\getincommander_ca.paa' size='1.8' shadow=2 />";
	};
	class MoveToCargo: None
	{
		text="To Passenger seat";
		showWindow=0;
		priority=1;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\getincargo_ca.paa' size='1.8' shadow=2 />";
	};
	class MoveToTurret: None
	{
		shortcut="SwapGunner";
		text="To %2's seat";
		showWindow=0;
		priority=1.3;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\getingunner_ca.paa' size='1.8' shadow=2 />";
	};
	class HideBody: None
	{
		priority=0.50999999;
		text="Hide body";
		textDefault="Hide body";
	};
	class TouchOff: None
	{
		text="Touch off %1 bomb(s)";
		textDefault="Touch off %1 bomb(s)";
		showWindow=1;
		priority=0.1;
	};
	class TouchOffMines: None
	{
		text="Touch off %1 bomb(s)";
		textDefault="Touch off %1 bomb(s)";
		showWindow=1;
		priority=0.1;
	};
	class SetTimer: None
	{
		text="Set timer +%1 sec. (%2 remaining)";
		showWindow=1;
		priority=2.0999999;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\settimer_ca.paa' size='1.8' shadow=2 />";
	};
	class StartTimer: SetTimer
	{
		text="Set timer on (%1 seconds)";
		textDefault="Set timer on (%1 seconds)";
	};
	class Deactivate: None
	{
		text="Deactivate bomb";
		showWindow=1;
		priority=2.0999999;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\ico_OFF_ca.paa' size='1.8' shadow=2 />";
	};
	class NVGoggles: None
	{
		priority=0.51099998;
		text="Put on NV goggles";
		textDefault="Put on NV goggles";
		show=0;
	};
	class NVGogglesOff: NVGoggles
	{
		text="Take off NV goggles";
		textDefault="Take off NV goggles";
		show=0;
	};
	class ManualFire: None
	{
		priority=0.58999997;
		shortcut="HeliManualFire";
		text="Manual fire";
		textDefault="Manual fire";
	};
	class ManualFireCancel: ManualFire
	{
		text="Cancel manual fire";
		textDefault="Cancel manual fire";
	};
	class AutoHover: None
	{
		shortcut="AutoHover";
		showWindow=0;
		priority=3;
		text="Auto-hover on";
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\autohover_ca.paa' size='1.8' shadow=2 />";
	};
	class AutoHoverCancel: AutoHover
	{
		shortcut="AutoHoverCancel";
		text="Auto-hover off";
		showWindow=0;
		priority=3;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\cancelhover_ca.paa' size='1.8' shadow=2 />";
	};
	class VTOLVectoring: AutoHover
	{
		shortcut="VTOLVectoringCancel";
		text="Vectoring off";
		textDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\VTOLVectoring_ca.paa' size='1.8' shadow=2 />";
		showWindow=0;
		priority=3;
	};
	class VTOLVectoringCancel: AutoHover
	{
		shortcut="VTOLVectoring";
		text="Vectoring on";
		textDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\VTOLVectoringCancel_ca.paa' size='1.8' shadow=2 />";
		showWindow=0;
		priority=3;
	};
	class StrokeFist: None
	{
		priority=0.1;
		text="Strike with fist";
		textDefault="Strike with fist";
	};
	class StrokeGun: None
	{
		priority=0.1;
		text="Strike with weapon";
		textDefault="Strike with weapon";
	};
	class LadderUp: None
	{
		text="Climb Ladder Up";
		textDefault="Climb Ladder Up";
	};
	class LadderDown: None
	{
		text="Climb Ladder Down";
		textDefault="Climb Ladder Down";
	};
	class LadderOnDown: None
	{
		text="Climb Ladder Down";
		showWindow=1;
		priority=8;
		radius=2;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\ladderdown_ca.paa' size='1.8' shadow=2 />";
	};
	class LadderOnUp: None
	{
		text="Climb Ladder Up";
		showWindow=1;
		priority=8;
		radius=2;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\ladderup_ca.paa' size='1.8' shadow=2 />";
	};
	class LadderOff: None
	{
		showWindow=1;
		priority=5;
		radius=2;
		text="Drop Down Ladder";
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\ladderoff_ca.paa' size='1.8' shadow=2 />";
	};
	class FireInflame: None
	{
		priority=0.99000001;
		showWindow=1;
		text="Light fire";
		textDefault="Light fire";
	};
	class FirePutDown: None
	{
		priority=0.99000001;
		showWindow=1;
		text="Put out fire";
		textDefault="Put out fire";
	};
	class LandGear: None
	{
		priority=0.80000001;
		hideOnUse=0;
		shortcut="LandGear";
		text="Gear down";
		textDefault="Gear down";
	};
	class LandGearUp: LandGear
	{
		shortcut="LandGearUp";
		text="Gear up";
		textDefault="Gear up";
	};
	class FlapsDown: None
	{
		priority=0.69999999;
		hideOnUse=0;
		shortcut="FlapsDown";
		text="Flaps down";
		textDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\flapsExtend_ca.paa' size='1.8' shadow=2 />";
	};
	class FlapsUp: None
	{
		priority=0.69999999;
		hideOnUse=0;
		shortcut="FlapsUp";
		text="Flaps up";
		textDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\flapsRetract_ca.paa' size='1.8' shadow=2 />";
	};
	class Salute: None
	{
		priority=1;
		shortcut="Salute";
		show=0;
		text="Salute";
		textDefault="Salute";
	};
	class ScudLaunch: None
	{
		priority=0.039999999;
		text="Prepare Scud launch";
		textDefault="Prepare Scud launch";
	};
	class ScudStart: None
	{
		priority=0.039999999;
		text="Launch Scud";
		textDefault="Launch Scud";
	};
	class ScudCancel: None
	{
		priority=0.039000001;
		text="Cancel Scud launch";
		textDefault="Cancel Scud launch";
	};
	class User: None
	{
		priority=1.5;
		showWindow=1;
		text="%1";
		textDefault="%2";
		textToolTip="%3";
	};
	class DropWeapon: None
	{
		textDefault="Drop %1";
		showWindow=1;
		priority=2;
		text="Drop %1";
	};
	class PutWeapon: DropWeapon
	{
		textDefault="Put %1 to %2";
		showWindow=1;
		priority=5;
		text="Put %1 to %2";
	};
	class DropMagazine: None
	{
		text="Drop %1";
		textDefault="Drop %1";
	};
	class PutMagazine: DropMagazine
	{
		text="Put %1 to %2";
		textDefault="Put %1 to %2";
	};
	class UserType: None
	{
		priority=1.4;
		showWindow=1;
		text="%1";
		textDefault="%2";
		textToolTip="%3";
	};
	class HandGunOn: None
	{
		priority=3;
		text="Weapon %1";
		textDefault="Weapon %1";
		hideActions[]=
		{
			"SwitchHandGun"
		};
	};
	class HandGunOnStand: HandGunOn
	{
		text="%1 in hand";
		textDefault="%1 in hand";
	};
	class HandGunOff: None
	{
		priority=3;
		text="Weapon %1";
		textDefault="Weapon %1";
		hideActions[]=
		{
			"SwitchPrimary"
		};
	};
	class HandGunOffStand: HandGunOff
	{
		text="%1 in hand";
		textDefault="%1 in hand";
	};
	class TakeMine: None
	{
		showWindow=1;
		priority=3;
		text="Take mine";
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 />";
	};
	class DeactivateMine: None
	{
		text="Deactivate mine";
		showWindow=1;
		priority=9;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\ico_OFF_ca.paa' size='1.8' shadow=2 />";
	};
	class UseMagazine: None
	{
		priority=3;
		text="%1";
		textDefault="%1";
	};
	class IngameMenu: None
	{
		priority=-1;
		shortcut="MenuSelect";
		text="Command menu";
		textDefault="Command menu";
	};
	class CancelTakeFlag: None
	{
		text="Cancel action";
		showWindow=1;
		priority=8;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\close_ca.paa' size='1.8' shadow=2 />";
	};
	class CancelAction: None
	{
		shortcut="CancelAction";
		text="Cancel action";
		showWindow=0;
		priority=8;
		textDefault="";
	};
	class MarkEntity: None
	{
		priority=0.51990002;
		showWindow=1;
		text="Collect from %1";
		textDefault="Collect from %1";
	};
	class MarkWeapon: MarkEntity
	{
		text="Collect weapon";
		textDefault="Collect weapon";
	};
	class TeamSwitch: None
	{
		priority=0.11;
		shortcut="TeamSwitch";
		text="Team switch";
		textDefault="Team switch";
		show=0;
	};
	class Gear: None
	{
		priority=5.0999999;
		showWindow=1;
		shortcut="Gear";
		text="Inventory";
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\gear_ca.paa' size='2.5' shadow=2 />";
	};
	class GearOpen: None
	{
		priority=5.0999999;
		showWindow=1;
		text="Open subordinate's inventory";
		textDefault="Open subordinate's inventory";
	};
	class OpenBag: None
	{
		priority=5.1999998;
		showWindow=1;
		text="Open %1";
		textDefault="Open %1";
	};
	class TakeBag: None
	{
		priority=5.3000002;
		text="Take %1";
		textDefault="Take %1";
		showWindow=1;
	};
	class PutBag: None
	{
		priority=5.1999998;
		showWindow=0;
		text="Drop %1";
		textDefault="Drop %1";
	};
	class DropBag: None
	{
		priority=5.1999998;
		showWindow=0;
		text="Drop %1";
		textDefault="Drop %1";
	};
	class AddBag: None
	{
		priority=5.3000002;
		showWindow=0;
		text="Take %1";
		textDefault="Take %1";
	};
	class IRLaserOn: None
	{
		priority=0.1;
		show=0;
		text="Laser Enable";
		textDefault="Laser Enable";
	};
	class IRLaserOff: None
	{
		priority=0.1;
		show=0;
		text="Laser Disable";
		textDefault="Laser Disable";
	};
	class Assemble: None
	{
		priority=6;
		showWindow=0;
		text="Assemble %1";
		textDefault="Assemble %1";
	};
	class DisAssemble: None
	{
		priority=5;
		showWindow=0;
		text="Disassemble %1";
		textDefault="Disassemble %1";
	};
	class Talk: None
	{
		showWindow=1;
		priority=9;
		text="Talk to %1";
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\talk_ca.paa' size='1.8' shadow=2 />";
	};
	class Tell: None
	{
		priority=2;
		showWindow=1;
		text="""%1""";
		textDefault="""%1""";
	};
	class Surrender: None
	{
		priority=0.11;
		shortcut="Surrender";
		show=0;
		text="Surrender";
		textDefault="Surrender";
	};
	class GetOver: None
	{
		priority=0.11;
		shortcut="GetOver";
		show=0;
		text="Step over";
		textDefault="Step over";
	};
	class OpenParachute: None
	{
		priority=9.1000004;
		text="Open Parachute";
	};
	class HelicopterAutoTrimOn: None
	{
		text="Auto-trim on";
		textDefault="Auto-trim on";
		priority=3;
		show=0;
	};
	class HelicopterAutoTrimOff: None
	{
		text="Auto-trim off";
		textDefault="Auto-trim off";
		priority=3;
		show=0;
	};
	class HelicopterTrimOn: None
	{
		text="Manual trim set";
		textDefault="Manual trim set";
		priority=3;
		show=0;
	};
	class HelicopterTrimOff: None
	{
		text="Manual trim release";
		textDefault="Manual trim release";
		priority=3;
		show=0;
	};
	class WheelsBrakeOn: None
	{
		show=0;
		text="Wheel brake on";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_ON_ca' size='2' shadow='true' />";
		priority=0.60000002;
		radius=3;
		radiusView=0.029999999;
		showIn3D=87;
		available=0;
		modelPositions="switch_rotor_brake";
		showWindow=0;
	};
	class WheelsBrakeOff: WheelsBrakeOn
	{
		text="Wheel brake off";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_OFF_ca' size='2' shadow='true' />";
		priority=0.30000001;
	};
	class PeriscopeDepthOn: None
	{
		text="Maintain periscope depth";
		textDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\periscopeDepth_ON_ca.paa' size='1.8' shadow=2 />";
	};
	class PeriscopeDepthOff: None
	{
		text="Leave periscope depth";
		textDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\periscopeDepth_OFF_ca.paa' size='1.8' shadow=2 />";
	};
	class UAVTerminalOpen: None
	{
		text="Open UAV Terminal";
		textDefault="Open UAV Terminal";
	};
	class UAVTerminalMakeConnection: None
	{
		text="Connect terminal to UAV";
		textDefault="Connect terminal to UAV";
	};
	class UAVTerminalReleaseConnection: None
	{
		text="Disconnect terminal from UAV";
		textDefault="Disconnect terminal from UAV";
	};
	class UAVTerminalHackConnection: None
	{
		text="Hack UAV";
		textDefault="Hack UAV";
	};
	class BackFromUAV: None
	{
		text="Release UAV controls";
		textDefault="Release UAV controls";
	};
	class SwitchToUAVDriver: None
	{
		text="Take UAV controls";
		textDefault="Take UAV controls";
	};
	class SwitchToUAVGunner: None
	{
		text="Take UAV turret controls";
		textDefault="Take UAV turret controls";
	};
	class Sleep: None
	{
		text="Sleep";
	};
	class WakeUp: None
	{
		text="WakeUp";
	};
	class UnmountItem: None
	{
		showWindow=1;
		priority=2;
		text="Take it off";
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class MountItem: None
	{
		showWindow=1;
		priority=2;
		text="Put it on";
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class DropItem: None
	{
		showWindow=1;
		priority=2;
		text="Drop it";
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class TakeItem: None
	{
		showWindow=1;
		priority=5.3000002;
		text="Take %1";
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 />";
	};
	class UnloadMagazine: None
	{
		showWindow=1;
		priority=2;
		text="Unload magazine";
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class ChangeUniformWithBody: None
	{
		showWindow=0;
		priority=2;
		text="Change uniform from body";
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class DropItemFromBody: None
	{
		showWindow=0;
		priority=4;
		text="Drop item from body";
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class TakeItemFromBody: None
	{
		showWindow=0;
		priority=5.3000002;
		text="Take item from body";
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class ChangeBackpackFromBackpack: None
	{
		showWindow=0;
		priority=4;
		text="Change backpack from backpack";
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class TakeWeaponFromBody: None
	{
		showWindow=0;
		priority=5;
		text="Take weapon from body";
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class TakeBackpackFromBody: None
	{
		showWindow=0;
		priority=5;
		text="Take backpack from body";
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class UnmountUniformItem: None
	{
		showWindow=0;
		priority=2;
		text="Take off uniform";
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class MountUniformItem: None
	{
		showWindow=0;
		priority=2;
		text="Put on uniform";
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class MountWeaponFromInv: None
	{
		showWindow=1;
		priority=2;
		text="Take weapon from inventory";
		extDefault="<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class UnmountWeaponToInv: None
	{
		showWindow=1;
		priority=2;
		text="Take weapon to inventory";
		extDefault="<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class OpenParachuteSteerable: None
	{
		priority=9.1000004;
		text="Open steerable parachute";
	};
	class OpenParachuteNonSteerable: None
	{
		priority=9.1999998;
		text="Open non-steerable parachute";
	};
	class ActivateBreathingBomb: None
	{
		priority=9.3000002;
		text="Activate oxygen tube";
	};
	class DeactivateBreathingBomb: None
	{
		priority=9.3999996;
		text="Deactivate oxygen tube";
	};
	class PatchSoldier: None
	{
		text="Provide help";
		priority=10;
		showWindow=1;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\bandage_ca.paa' size='1.8' shadow=2 />";
	};
	class HealSoldierSelf: None
	{
		text="Treat yourself";
		priority=10;
		showWindow=1;
		textDefault="<img image='\A3\ui_f\data\igui\cfg\actions\heal_ca.paa' size='1.8' shadow=2 />";
	};
	class AIAssemble: None
	{
		priority=6;
		showWindow=0;
		text="Assemble %1";
		textDefault="Assemble %1";
	};
	class PutInGunner: None
	{
		priority=9.5;
		text="Load In Gunner";
	};
	class PutInCommander: None
	{
		priority=9.6000004;
		text="Load In Commander";
	};
	class PutInTurret: None
	{
		priority=9.6999998;
		text="Load In Turret";
	};
	class UnloadFromDriver: None
	{
		priority=8.5;
		text="Unload From Driver";
	};
	class UnloadFromPilot: None
	{
		priority=8.6000004;
		text="Unload From Pilot";
	};
	class UnloadFromCargo: None
	{
		priority=8.6999998;
		text="Unload From Cargo";
	};
	class UnloadFromCommander: None
	{
		priority=8.5;
		text="Unload From Commander";
	};
	class UnloadFromGunner: None
	{
		priority=8.6000004;
		text="Unload From Gunner";
	};
	class UnloadFromTurret: None
	{
		priority=8.6999998;
		text="Unload From Turret";
	};
	class HealBleedingOnly: None
	{
		text="Staunch bleeding";
	};
	class HealBleedingSelfOnly: None
	{
		text="Staunch your bleeding";
	};
	class HealSoldierAuto: None
	{
		text="Heal soldier";
	};
	class HealBleedingAuto: None
	{
		text="Staunch bleeding";
	};
	class ActivateFins: None
	{
		text="Activate fins";
	};
	class DeactivateFins: None
	{
		text="Deactivate fins";
	};
	class BatteriesOn: None
	{
		text="Batteries on";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_batt_ON_ca' size='2' shadow='true' />";
		radius=3;
		radiusView=0.029999999;
		showIn3D=87;
		available=3;
		modelPositions="switch_batteries";
		showWindow=1;
	};
	class BatteriesOff: BatteriesOn
	{
		text="Batteries off";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_batt_OFF_ca' size='2' shadow='true' />";
		priority=2;
	};
	class APUOn: None
	{
		radius=3;
		radiusView=0.029999999;
		showIn3D=87;
		available=3;
		modelPositions="switch_apu";
		showWindow=1;
		priority=4;
		text="APU on";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_ON_ca' size='2' shadow='true' />";
	};
	class APUOff: APUOn
	{
		text="APU off";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_OFF_ca' size='2' shadow='true' />";
		priority=3;
	};
	class StarterOn1: None
	{
		text="Starter on (engine 1)";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_start_ON_ca' size='2.5' shadow='true' />";
		radius=3;
		radiusView=0.079999998;
		showIn3D=87;
		available=3;
		modelPositions[]=
		{
			"switch_starter",
			"switch_starter_2"
		};
		showWindow=1;
	};
	class StarterOff1: StarterOn1
	{
		text="Starter off (engine 1)";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_start_OFF_ca' size='2.5' shadow='true' />";
		priority=3;
	};
	class StarterOn2: None
	{
		text="Starter on (engine 2)";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_start_ON_ca' size='2.5' shadow='true' />";
		radius=3;
		radiusView=0.079999998;
		showIn3D=87;
		available=3;
		modelPositions[]=
		{
			"switch_starter2",
			"switch_starter2_2"
		};
		showWindow=1;
	};
	class StarterOff2: StarterOn2
	{
		text="Starter off (engine 2)";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_start_OFF_ca' size='2.5' shadow='true' />";
		priority=3;
	};
	class StarterOn3: None
	{
		text="Starter on (engine 3)";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_start_ON_ca' size='2.5' shadow='true' />";
		radius=3;
		radiusView=0.079999998;
		showIn3D=87;
		available=3;
		modelPositions[]=
		{
			"switch_starter3",
			"switch_starter3_2"
		};
		showWindow=1;
	};
	class StarterOff3: StarterOn3
	{
		text="Starter off (engine 3)";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_start_OFF_ca' size='2.5' shadow='true' />";
		priority=3;
	};
	class ThrottleOff1: None
	{
		text="Throttle closed (engine 1)";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_OFF_ca' size='2' shadow='true' />";
		priority=3;
		radius=3;
		radiusView=0.079999998;
		showIn3D=87;
		available=3;
		modelPositions[]=
		{
			"switch_throttle",
			"switch_throttle_2"
		};
		showWindow=1;
	};
	class ThrottleIdle1: ThrottleOff1
	{
		text="Throttle idle (engine 1)";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_IDL_ca' size='2' shadow='true' />";
		priority=3;
	};
	class ThrottleFull1: ThrottleOff1
	{
		text="Throttle full (engine 1)";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_ON_ca' size='2' shadow='true' />";
		priority=3;
	};
	class ThrottleOff2: None
	{
		text="Throttle closed (engine 2)";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_OFF_ca' size='2' shadow='true' />";
		priority=3;
		radius=3;
		radiusView=0.079999998;
		showIn3D=87;
		available=3;
		modelPositions[]=
		{
			"switch_throttle2",
			"switch_throttle2_2"
		};
		showWindow=1;
	};
	class ThrottleIdle2: ThrottleOff2
	{
		text="Throttle idle (engine 2)";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_IDL_ca' size='2' shadow='true' />";
		priority=3;
	};
	class ThrottleFull2: ThrottleOff2
	{
		text="Throttle full (engine 2)";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_ON_ca' size='2' shadow='true' />";
		priority=3;
	};
	class ThrottleOff3: None
	{
		text="Throttle closed (engine 3)";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_OFF_ca' size='2' shadow='true' />";
		priority=3;
		radius=3;
		radiusView=0.079999998;
		showIn3D=87;
		available=3;
		modelPositions[]=
		{
			"switch_throttle3",
			"switch_throttle3_2"
		};
		showWindow=1;
	};
	class ThrottleIdle3: ThrottleOff3
	{
		text="Throttle idle (engine 3)";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_IDL_ca' size='2' shadow='true' />";
		priority=4;
	};
	class ThrottleFull3: ThrottleOff3
	{
		text="Throttle full (engine 3)";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_ON_ca' size='2' shadow='true' />";
		priority=4;
	};
	class RotorBrakeOn: None
	{
		text="Rotor brake on";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_brk_ON_ca' size='2' shadow='true' />";
		priority=0.60000002;
		radius=3;
		radiusView=0.029999999;
		showIn3D=87;
		available=3;
		modelPositions="switch_rotor_brake";
		showWindow=0;
	};
	class RotorBrakeOff: RotorBrakeOn
	{
		text="Rotor brake off";
		textDefault="<img image='A3\ui_f\data\igui\cfg\actions\ico_OFF_ca' size='2' shadow='true' />";
		priority=0.30000001;
	};
};