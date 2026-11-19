class CfgPatches
{
	class A3FL_Nissan_GTR
	{
		units[]={"A3FL_Nissan_GTR","A3FL_Nissan_GTR_LW"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3PL_Cars","A3_Soft_F"};
	};
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class EventHandlers;
		class AnimationSources;
		class Sounds;
	};
	class A3FL_Nissan_GTR: Car_F
	{
		scope = 2;
		model="\A3FL_Cars\A3FL_Nissan_GTR\A3FL_NissanGTR";
		picture="";
		Icon="";
		weapons[]={"A3PL_CarHorn"};
		displayName="Nissan GT-R";
		author="A3FL Winters";
		hiddenSelections[]={"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","glass1","glass2","glass3","glass4"};
		hiddenSelectionsTextures[]={"#(argb,8,8,3)color(1,1,1,1.0,CO)","","","","","","","","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa"};
		extCameraPosition[]={0,0.89999998,-6.1999998};
		insideSoundCoef=1;
		outsideSoundFilter=1;
		occludeSoundsWhenIn=1;
		obstructSoundsWhenIn=1;
		obstructSoundLFRatio=1;
		occludeSoundLFRatio=1;
		secondaryExplosion=0;
		driverLeftHandAnimName="steering_wheel";
		driverRightHandAnimName="steering_wheel";
		class TransportItems {};
		class UserActions {};
		class EventHandlers
		{
			init="if (!isDedicated) then { [_this] spawn {waituntil{sleep 1; !isNil 'A3PL_HandleVehicleInit'}; [_this] call A3PL_HandleVehicleInit}; };";
		};
		class AnimationSources: AnimationSources
		{
			class Zeroanimation
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class LightAnim
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class HitLFWheel
			{
				source="Hit";
				hitpoint="HitLFWheel";
				raw=1;
			};
			class HitLF2Wheel
			{
				source="Hit";
				hitpoint="HitLF2Wheel";
				raw=1;
			};
			class HitRFWheel
			{
				source="Hit";
				hitpoint="HitRFWheel";
				raw=1;
			};
			class HitRF2Wheel
			{
				source="Hit";
				hitpoint="HitRF2Wheel";
				raw=1;
			};
			class HitBody
			{
				source="Hit";
				hitpoint="HitBody";
				raw=1;
			};
			class HitGlass1
			{
				source="Hit";
				hitpoint="HitGlass1";
				raw=1;
			};
			class stay_light
			{
				source="user";
				animPeriod=0;
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
			class trunk
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class Common
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class Head_Lights: Common{};
			class High_Beam: Common {};
			class Stock_Bonnet
			{
				initPhase=1;
				displayName="Stock Bonnet";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
			class Stock_Front_Bumper: Stock_Bonnet
			{
				displayName="Stock Front Bumper";
				forceAnimate[]={};
			};
			class Stock_Rear_Bumper: Stock_Bonnet
			{
				displayName="Stock Rear Bumper";
				forceAnimate[]={};
			};
			class Stock_Exhaust: Stock_Bonnet
			{
				displayName="Stock Exhaust";
				forceAnimate[]={};
			};
		};
		class PlayerSteeringCoefficients {
			turnIncreaseConst	= 2.5; // basic sensitivity value, higher value = faster steering
			turnIncreaseLinear	= 0.6; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
			turnIncreaseTime	= 1.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle

			turnDecreaseConst	= 10.0; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
			turnDecreaseLinear	= 5.0; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
			turnDecreaseTime	= 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position

			maxTurnHundred		= 5.0; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
		};
		terrainCoef=3.8;
		turnCoef=2.5;
		precision=9;
		brakeDistance=13;
		acceleration=15;
		fireResistance=5;
		cost=50000;
		armor=100;
		transportMaxBackpacks=4;
		transportSoldier=3;
		wheelDamageRadiusCoef=0.7;
		wheelDestroyRadiusCoef=0.5;
		crewCrashProtection=0;
		class CargoTurret;
		class Turrets {};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=0.5;
				passThrough=0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=0.5;
				passThrough=0;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.5;
				passThrough=0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=0.5;
				passThrough=0;
			};
			class HitFuel
			{
				armor=0.5;
				material=-1;
				name="fueltank";
				visual="";
				passThrough=0.2;
			};
			class HitEngine
			{
				armor=0.5;
				material=-1;
				name="engine";
				visual="";
				passThrough=0.2;
			};
			class HitBody: HitBody
			{
				name="body";
				visual="camo1";
				passThrough=0.5;
			};
			class HitGlass1: HitGlass1
			{
				armor=0.0099999998;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.0099999998;
			};
			class HitGlass3: HitGlass3
			{
				armor=0.0099999998;
			};
			class HitGlass4: HitGlass4
			{
				armor=0.0099999998;
			};
			class HitGlass5: HitGlass5
			{
				armor=0.0099999998;
			};
			class HitGlass6: HitGlass6
			{
				armor=0.0099999998;
			};
		};
		driverAction="A3PL_Driver1";
		cargoAction[]=
		{
			"passenger_low01"
		};
		driverDoor="Door_LF";
        cargoDoors[]=
        {
            "Door_RF"
        };
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]= {"GetInLow"};
		cargoGetOutAction[]= {"GetOutLow"};
		attenuationEffectType="OpenCarAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_door",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_door",
			0.56234133,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"A3FL_Cars2\A3FL_Focus\sounds\startup.ogg",
			0.39810717,
			1
		};
		soundEngineOnExt[]=
		{
			"A3FL_Cars2\A3FL_Focus\sounds\startup.ogg",
			0.44668359,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"",
			0.39810717,
			1
		};
		soundEngineOffExt[]=
		{
			"",
			0.44668359,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_building_01",
			0.70794576,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_building_02",
			0.70794576,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_building_03",
			0.70794576,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_building_04",
			0.70794576,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_01",
			0.70794576,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_02",
			0.70794576,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_03",
			0.70794576,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_04",
			0.70794576,
			1,
			200
		};
		WoodCrash4[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_05",
			0.70794576,
			1,
			200
		};
		WoodCrash5[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_06",
			0.70794576,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_01",
			0.70794576,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_02",
			0.70794576,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_03",
			0.70794576,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_04",
			0.70794576,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
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
			class Idle_ext
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\Idle.ogg",
					"db-13",
					1,
					150
				};
				frequency="0.9 + ((rpm/11900) factor[(400/11900),(1150/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(400/11900),(700/11900)])* ((rpm/11900) factor[(1100/11900),(900/11900)]))*1";
			};
			class Engine
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\1000.ogg",
					"db-11",
					1,
					200
				};
				frequency="0.8 + ((rpm/11900) factor[(900/11900),(2100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(870/11900),(1100/11900)])* ((rpm/11900) factor[(2100/11900),(1300/11900)]))*1";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\2000.ogg",
					"db-9",
					1,
					240
				};
				frequency="0.8 + ((rpm/11900) factor[(1300/11900),(3100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(1250/11900),(2050/11900)])* ((rpm/11900) factor[(3100/11900),(2300/11900)]))*1";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\3000.ogg",
					"db-8",
					1,
					280
				};
				frequency="0.8 + ((rpm/11900) factor[(2200/11900),(4100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(2250/11900),(3050/11900)])* ((rpm/11900) factor[(4100/11900),(3300/11900)]))*1";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\4000.ogg",
					"db-7",
					1,
					320
				};
				frequency="0.8 + ((rpm/11900) factor[(3300/11900),(4900/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(3250/11900),(4050/11900)])* ((rpm/11900) factor[(4870/11900),(4200/11900)]))*1";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\5000.ogg",
					"db-6",
					1,
					360
				};
				frequency="0.8 + ((rpm/11900) factor[(4200/11900),(6200/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(4150/11900),(4800/11900)])* ((rpm/11900) factor[(6150/11900),(5150/11900)]))*1";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\6000.ogg",
					"db-5",
					1,
					420
				};
				frequency="0.95 + ((rpm/11900) factor[(5100/11900),(6900/11900)])*0.15";
				volume="engineOn*camPos*(((rpm/11900) factor[(5100/11900),(6100/11900)])* ((rpm/11900) factor[(5700/11900),(5400/11900)]))*1";
			};
			class Engine6_ext
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\7000.ogg",
					"db-13",
					1,
					150
				};
				frequency="0.9 + ((rpm/11900) factor[(5400/11900),(6150/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(5400/11900),(5700/11900)])* ((rpm/11900) factor[(6100/11900),(5900/11900)]))*1";
			};
			class Engine7_ext
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\8000.ogg",
					"db-11",
					1,
					200
				};
				frequency="0.8 + ((rpm/11900) factor[(5900/11900),(7100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(5870/11900),(6100/11900)])* ((rpm/11900) factor[(7100/11900),(6300/11900)]))*1";
			};
			class Engine8_ext
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\9000.ogg",
					"db-9",
					1,
					240
				};
				frequency="0.8 + ((rpm/11900) factor[(6300/11900),(8100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(6250/11900),(7050/11900)])* ((rpm/11900) factor[(8100/11900),(7300/11900)]))*1";
			};
			class Engine9_ext
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\10000.ogg",
					"db-8",
					1,
					280
				};
				frequency="0.8 + ((rpm/11900) factor[(7200/11900),(9100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(7250/11900),(8050/11900)])* ((rpm/11900) factor[(9100/11900),(8300/11900)]))*1";
			};
			class Engine10_ext
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\11000.ogg",
					"db-7",
					1,
					320
				};
				frequency="0.8 + ((rpm/11900) factor[(8300/11900),(9900/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(8250/11900),(9050/11900)])* ((rpm/11900) factor[(9870/11900),(9200/11900)]))*1";
			};
			class Engine11_ext
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\12000.ogg",
					"db-6",
					1,
					360
				};
				frequency="0.8 + ((rpm/11900) factor[(9200/11900),(11200/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(9150/11900),(9800/11900)])* ((rpm/11900) factor[(9150/11900),(10150/11900)]))*1";
			};
			class Engine12_ext
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\13000.ogg",
					"db-5",
					1,
					420
				};
				frequency="0.95 + ((rpm/11900) factor[(10100/11900),(11900/11900)])*0.15";
				volume="engineOn*camPos*((rpm/11900) factor[(10100/11900),(11100/11900)])*1";
			};
			class Idle_int
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\Idle.ogg",
					"db-15",
					1
				};
				frequency="0.9 + ((rpm/11900) factor[(400/11900),(1150/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(400/11900),(700/11900)])* ((rpm/11900) factor[(1100/11900),(900/11900)]))*1";
			};
			class Engine_int
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\1000.ogg",
					"db-14",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(900/11900),(2100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(870/11900),(1100/11900)])* ((rpm/11900) factor[(2100/11900),(1300/11900)]))*1";
			};
			class Engine1_int
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\2000.ogg",
					"db-12",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(1300/11900),(3100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(1250/11900),(2050/11900)])* ((rpm/11900) factor[(3100/11900),(2300/11900)]))*1";
			};
			class Engine2_int
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\3000.ogg",
					"db-11",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(2200/11900),(4100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(2250/11900),(3050/11900)])* ((rpm/11900) factor[(4100/11900),(3300/11900)]))*1";
			};
			class Engine3_int
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\4000.ogg",
					"db-10",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(3300/11900),(4900/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(3250/11900),(4050/11900)])* ((rpm/11900) factor[(4870/11900),(4200/11900)]))*1";
			};
			class Engine4_int
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\5000.ogg",
					"db-9",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(4200/11900),(6200/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(4150/11900),(4800/11900)])* ((rpm/11900) factor[(6150/11900),(5150/11900)]))*1";
			};
			class Engine5_int
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\6000.ogg",
					"db-6",
					1
				};
				frequency="0.95 + ((rpm/11900) factor[(5100/11900),(6900/11900)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(5100/11900),(6100/11900)])* ((rpm/11900) factor[(5700/11900),(5400/11900)]))*1";
			};
			class Engine6_int
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\7000.ogg",
					"db-15",
					1
				};
				frequency="0.9 + ((rpm/11900) factor[(5400/11900),(6150/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(5400/11900),(5700/11900)])* ((rpm/11900) factor[(6100/11900),(5900/11900)]))*1";
			};
			class Engine7_int
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\8000.ogg",
					"db-14",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(5900/11900),(7100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(5870/11900),(6100/11900)])* ((rpm/11900) factor[(7100/11900),(6300/11900)]))*1";
			};
			class Engine8_int
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\9000.ogg",
					"db-12",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(6300/11900),(8100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(6250/11900),(7050/11900)])* ((rpm/11900) factor[(8100/11900),(7300/11900)]))*1";
			};
			class Engine9_int
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\10000.ogg",
					"db-11",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(7200/11900),(9100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(7250/11900),(8050/11900)])* ((rpm/11900) factor[(9100/11900),(8300/11900)]))*1";
			};
			class Engine10_int
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\11000.ogg",
					"db-10",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(8300/11900),(9900/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(8250/11900),(9050/11900)])* ((rpm/11900) factor[(9870/11900),(9200/11900)]))*1";
			};
			class Engine11_int
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\12000.ogg",
					"db-9",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(9200/11900),(11200/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(9150/11900),(9800/11900)])* ((rpm/11900) factor[(9150/11900),(10150/11900)]))*1";
			};
			class Engine12_int
			{
				sound[]=
				{
					"\A3FL_Cars\A3FL_Nissan_GTR\Sounds\13000.ogg",
					"db-6",
					1
				};
				frequency="0.95 + ((rpm/11900) factor[(10100/11900),(11900/11900)])*0.15";
				volume="engineOn*(1-camPos)*((rpm/11900) factor[(10100/11900),(11100/11900)])*1";
			};
		};
		thrustDelay=0.1;
		brakeIdleSpeed=1.78;
		maxSpeed=225;
		fuelCapacity=36;
		wheelCircumference=2.277;
		idleRpm=900;
		redRpm=11900;
		antiRollbarForceCoef=2.3;
		antiRollbarForceLimit=2;
		antiRollbarSpeedMin=20;
		antiRollbarSpeedMax=80;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.2309999,
				"N",
				0,
				"D1",
				4.4619999,
				"D2",
				3.5699999,
				"D3",
				2.5710001,
				"D4",
				1.97,
				"D5",
				1.601,
				"D6",
				0.89999998,
				"D7",
				0.64999998
			};
			TransmissionRatios[]=
			{
				"High",
				4.1110001
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.0099999998;
		};
		simulation="carx";
		dampersBumpCoef=0.0099999998;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.5;
		rearBias=1.5;
		centreBias=1.5;
		clutchStrength=55;
		enginePower=560;
		peakTorque=580;
		maxOmega=1247;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchDisengaged=2;
		dampingRateZeroThrottleClutchEngaged=0.34999999;
		torqueCurve[]=
		{
			{0,0},
			{0.185,0.713},
			{0.34999999,0.97500002},
			{0.5,1},
			{0.75,0.97500002},
			{0.85000002,0.755},
			{1,0.62699997}
		};
		changeGearMinEffectivity[]={0.55000001,0.15000001,0.94999999,0.94999999,0.94999999,0.94999999,0.94999999};
		switchTime=0.14;
		latency=0.5;
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				mass=20;
				MOI=5.3000002;
				maxBrakeTorque=5100;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.1;
				MaxDroop=0.15000001;
				sprungMass = -1;
				springStrength = 145000;
				springDamperRate = 41000;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=18000;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				steering=0;
				side="left";
				latStiffX=25;
				latStiffY=18000;
				maxHandBrakeTorque=50000;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
				latStiffX=25;
				latStiffY=220;
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=50000;
				steering=0;
				side="right";
				latStiffX=25;
				latStiffY=18000;
			};
		};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=10;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
			class RearCam
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderQuality=10;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
			class FrontCam
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderQuality=10;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
		};
		memoryPointTrackFLL="TrackFLL";
		memoryPointTrackFLR="TrackFLR";
		memoryPointTrackBLL="TrackBLL";
		memoryPointTrackBLR="TrackBLR";
		memoryPointTrackFRL="TrackFRL";
		memoryPointTrackFRR="TrackFRR";
		memoryPointTrackBRL="TrackBRL";
		memoryPointTrackBRR="TrackBRR";
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
	class A3FL_Nissan_GTR_LW: A3FL_Nissan_GTR
	{
		displayName="Nissan GT-R Liberty Walk";
		class Library
		{
			libTextDesc="Nissan GT-R Liberty Walk";
		};
		model="\A3FL_Cars\A3FL_Nissan_GTR\A3FL_NissanGTR_LW";
		maxSpeed=240;
		peakTorque=660;
		class AnimationSources: AnimationSources
		{
			class Stock_Bonnet
			{
				initPhase=1;
				displayName="Stock Bonnet";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
			class Liberty_Walk_Front_Bumper_Fender: Stock_Bonnet
			{
				displayName="Liberty Walk Front Bumper_Fender";
				forceAnimate[]={};
			};
			class Liberty_Walk_Rear_Bumper: Stock_Bonnet
			{
				displayName="Liberty Walk Rear Bumper";
				forceAnimate[]={};
			};
			class Liberty_Walk_Rear_Fender: Stock_Bonnet
			{
				displayName="Liberty Walk Rear Fender";
				forceAnimate[]={};
			};
			class Liberty_Walk_Side_Skirt: Stock_Bonnet
			{
				displayName="Liberty Walk Side Skirt";
				forceAnimate[]={};
			};
			class Liberty_Walk_Spoiler: Stock_Bonnet
			{
				displayName="Liberty Walk Spoiler";
				forceAnimate[]={};
			};
		};
	};
};
