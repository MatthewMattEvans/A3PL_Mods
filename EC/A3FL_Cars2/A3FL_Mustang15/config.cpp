class CfgPatches
{
	class A3FL_Mustang15
	{
		units[]={"A3FL_Mustang15","A3FL_Mustang15_PD","A3FL_Mustang15_PD_ST"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Soft_F"};
	};
};

class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		A3FL_Mustang15_FrontPassanger="A3FL_Mustang15_FrontPassanger";
		A3FL_Mustang15_Driver="A3FL_Mustang15_Driver";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName="OFP2_ManSkeleton";
	gestures="CfgGesturesMale";
	class States
	{
		class Crew;
		class A3FL_Mustang15_FrontPassanger: Crew {
			file="\A3FL_Cars2\A3FL_Mustang15\anim\A3FL_Mustang15_FrontPassanger.rtm";
		};
		class A3FL_Mustang15_Driver: Crew {
			file="\A3FL_Cars2\A3FL_Mustang15\anim\A3FL_Mustang15_Driver.rtm";
		};
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
	};
	class A3FL_Mustang15: Car_F
	{
		scope=2;
		model="A3FL_Cars2\A3FL_Mustang15\A3FL_Mustang15";
		weapons[]={"A3PL_CarHorn"};
		displayName="2015 Ford Mustang GT";
		author="A3FL Winters";
		extCameraPosition[]={0,.50,-5};
		hiddenSelections[]=	{"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","glass1","glass2","glass3","glass4","glass5","glass6"};
		hiddenSelectionsTextures[]={"#(argb,8,8,3)color(1,1,1,1.0,CO)","","","","","","","","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)"};
		
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
			class HitGlass2
			{
				source="Hit";
				hitpoint="HitGlass2";
				raw=1;
			};
			class HitGlass3
			{
				source="Hit";
				hitpoint="HitGlass3";
				raw=1;
			};
			class HitGlass4
			{
				source="Hit";
				hitpoint="HitGlass4";
				raw=1;
			};
			class HitGlass5
			{
				source="Hit";
				hitpoint="HitGlass5";
				raw=1;
			};
			class HitGlass6
			{
				source="Hit";
				hitpoint="HitGlass6";
				raw=1;
			};
			class Common
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class Head_Lights: Common{};
			class High_Beam: Common {};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
		{
		turnIncreaseConst	= 0.3; // basic sensitivity value, higher value = faster steering
		turnIncreaseLinear	= 1.0; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
		turnIncreaseTime	= 1.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle

		turnDecreaseConst	= 5.0; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
		turnDecreaseLinear	= 3.0; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
		turnDecreaseTime	= 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position

		maxTurnHundred		= 0.7; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
		};
		terrainCoef=3;
		turnCoef=5;
		precision=9;
		brakeDistance=11;
		acceleration=20;
		fireResistance=5;
		cost=50000;
		armor=100;
		transportMaxBackpacks=4;
		transportSoldier=3;
		crewCrashProtection=2;
		wheelDamageRadiusCoef=0.69999999;
		wheelDestroyRadiusCoef=0.30000001;
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="drivewheel";
		class CargoTurret;
		class Turrets {};
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
		driverAction="A3FL_Mustang15_Driver";
		cargoAction[]={"A3FL_Mustang15_FrontPassanger"};
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]={"GetInLow"};
		cargoGetOutAction[]={"GetOutLow"};
		attenuationEffectType="OpenCarAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",
			"db-5",
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",
			"db-5",
			1,
			40
		};
		soundDammage[]=
		{
			"",
			"db-5",
			1
		};
		soundEngineOnInt[]=
		{
			"A3FL_Cars2\A3FL_Mustang15\sounds\int_start.wav",
			"db-8",
			1
		};
		soundEngineOnExt[]=
		{
			"A3FL_Cars2\A3FL_Mustang15\sounds\ext_start.wav",
			"db-7",
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3FL_Cars2\A3FL_Mustang15\sounds\int_stop.wss",
			"db-8",
			1
		};
		soundEngineOffExt[]=
		{
			"A3FL_Cars2\A3FL_Mustang15\sounds\ext_stop.wss",
			"db-7",
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			"db0",
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			"db0",
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			"db0",
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			"db0",
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
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			"db0",
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			"db0",
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			"db0",
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			"db0",
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.25,
			"woodCrash1",
			0.25,
			"woodCrash2",
			0.25,
			"woodCrash3",
			0.25
		};
		armorCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			"db0",
			1,
			200
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			"db0",
			1,
			200
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			"db0",
			1,
			200
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			"db0",
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
			class Idle_ext
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\ext_idle.wav",
					"db-13",
					1,
					150
				};
				frequency="0.9 + ((rpm/6400) factor[(400/6400),(1150/6400)])*0.2";
				volume="engineOn*camPos*(((rpm/6400) factor[(400/6400),(700/6400)])* ((rpm/6400) factor[(1100/6400),(900/6400)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\ext_1000.wav",
					"db-11",
					1,
					200
				};
				frequency="0.8 + ((rpm/6400) factor[(900/6400),(2100/6400)])*0.2";
				volume="engineOn*camPos*(((rpm/6400) factor[(870/6400),(1100/6400)])* ((rpm/6400) factor[(2100/6400),(1300/6400)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\ext_2000.wav",
					"db-9",
					1,
					240
				};
				frequency="0.8 + ((rpm/6400) factor[(1300/6400),(3100/6400)])*0.2";
				volume="engineOn*camPos*(((rpm/6400) factor[(1250/6400),(2050/6400)])* ((rpm/6400) factor[(3100/6400),(2300/6400)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\ext_3000.wav",
					"db-8",
					1,
					280
				};
				frequency="0.8 + ((rpm/6400) factor[(2200/6400),(4100/6400)])*0.2";
				volume="engineOn*camPos*(((rpm/6400) factor[(2250/6400),(3050/6400)])* ((rpm/6400) factor[(4100/6400),(3300/6400)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\ext_4000.wav",
					"db-7",
					1,
					320
				};
				frequency="0.8 + ((rpm/6400) factor[(3300/6400),(4900/6400)])*0.2";
				volume="engineOn*camPos*(((rpm/6400) factor[(3250/6400),(4050/6400)])* ((rpm/6400) factor[(4870/6400),(4200/6400)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\ext_5000.wav",
					"db-6",
					1,
					360
				};
				frequency="0.8 + ((rpm/6400) factor[(4200/6400),(6200/6400)])*0.2";
				volume="engineOn*camPos*(((rpm/6400) factor[(4150/6400),(4800/6400)])* ((rpm/6400) factor[(6150/6400),(5150/6400)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\ext_6000.wav",
					"db-5",
					1,
					420
				};
				frequency="0.95 + ((rpm/6400) factor[(5100/6400),(6900/6400)])*0.15";
				volume="engineOn*camPos*((rpm/6400) factor[(5100/6400),(6100/6400)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\ext_idle.wav",
					"db-6",
					1,
					200
				};
				frequency="0.9 + ((rpm/6400) factor[(400/6400),(1150/6400)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6400) factor[(400/6400),(700/6400)])* ((rpm/6400) factor[(1100/6400),(900/6400)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\ext_1000.wav",
					"db-5",
					1,
					250
				};
				frequency="0.8 + ((rpm/6400) factor[(900/6400),(2100/6400)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6400) factor[(870/6400),(1100/6400)])* ((rpm/6400) factor[(2100/6400),(1300/6400)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\ext_2000.wav",
					"db-4",
					1,
					280
				};
				frequency="0.8 + ((rpm/6400) factor[(1300/6400),(3100/6400)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6400) factor[(1250/6400),(2050/6400)])* ((rpm/6400) factor[(3100/6400),(2300/6400)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\ext_3000.wav",
					"db-3",
					1,
					320
				};
				frequency="0.8 + ((rpm/6400) factor[(2200/6400),(4100/6400)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6400) factor[(2250/6400),(3050/6400)])* ((rpm/6400) factor[(4100/6400),(3300/6400)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\ext_4000.wav",
					"db-2",
					1,
					360
				};
				frequency="0.8 + ((rpm/6400) factor[(3300/6400),(4900/6400)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6400) factor[(3250/6400),(4050/6400)])* ((rpm/6400) factor[(4870/6400),(4200/6400)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\ext_5000.wav",
					"db0",
					1,
					400
				};
				frequency="0.8 + ((rpm/6400) factor[(4200/6400),(6200/6400)])*0.3";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6400) factor[(4150/6400),(4800/6400)])* ((rpm/6400) factor[(6150/6400),(5150/6400)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\ext_6000.wav",
					"db2",
					1,
					450
				};
				frequency="0.9 + ((rpm/6400) factor[(5100/6400),(6900/6400)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/6400) factor[(5100/6400),(6100/6400)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\int_idle.wav",
					"db-15",
					1
				};
				frequency="0.9 + ((rpm/6400) factor[(400/6400),(1150/6400)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/6400) factor[(400/6400),(700/6400)])* ((rpm/6400) factor[(1100/6400),(900/6400)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\int_1000.wav",
					"db-14",
					1
				};
				frequency="0.8 + ((rpm/6400) factor[(900/6400),(2100/6400)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/6400) factor[(870/6400),(1100/6400)])* ((rpm/6400) factor[(2100/6400),(1300/6400)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\int_2000.wav",
					"db-12",
					1
				};
				frequency="0.8 + ((rpm/6400) factor[(1300/6400),(3100/6400)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/6400) factor[(1250/6400),(2050/6400)])* ((rpm/6400) factor[(3100/6400),(2300/6400)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\int_3000.wav",
					"db-11",
					1
				};
				frequency="0.8 + ((rpm/6400) factor[(2200/6400),(4100/6400)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/6400) factor[(2250/6400),(3050/6400)])* ((rpm/6400) factor[(4100/6400),(3300/6400)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\int_4000.wav",
					"db-10",
					1
				};
				frequency="0.8 + ((rpm/6400) factor[(3300/6400),(4900/6400)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/6400) factor[(3250/6400),(4050/6400)])* ((rpm/6400) factor[(4870/6400),(4200/6400)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\int_5000.wav",
					"db-9",
					1
				};
				frequency="0.8 + ((rpm/6400) factor[(4200/6400),(6200/6400)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/6400) factor[(4150/6400),(4800/6400)])* ((rpm/6400) factor[(6150/6400),(5150/6400)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\int_6000.wav",
					"db-6",
					1
				};
				frequency="0.95 + ((rpm/6400) factor[(5100/6400),(6900/6400)])*0.15";
				volume="engineOn*(1-camPos)*((rpm/6400) factor[(5100/6400),(6100/6400)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\int_idle.wav",
					"db-10",
					1
				};
				frequency="0.9 + ((rpm/6400) factor[(400/6400),(1150/6400)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6400) factor[(400/6400),(700/6400)])* ((rpm/6400) factor[(1100/6400),(900/6400)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\int_1000.wav",
					"db-9",
					1
				};
				frequency="0.8 + ((rpm/6400) factor[(900/6400),(2100/6400)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6400) factor[(870/6400),(1100/6400)])* ((rpm/6400) factor[(2100/6400),(1300/6400)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\int_2000.wav",
					"db-8",
					1
				};
				frequency="0.8 + ((rpm/6400) factor[(1300/6400),(3100/6400)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6400) factor[(1250/6400),(2050/6400)])* ((rpm/6400) factor[(3100/6400),(2300/6400)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\int_3000.wav",
					"db-7",
					1
				};
				frequency="0.8 + ((rpm/6400) factor[(2200/6400),(4100/6400)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6400) factor[(2250/6400),(3050/6400)])* ((rpm/6400) factor[(4100/6400),(3300/6400)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\int_4000.wav",
					"db-6",
					1
				};
				frequency="0.8 + ((rpm/6400) factor[(3300/6400),(4900/6400)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6400) factor[(3250/6400),(4050/6400)])* ((rpm/6400) factor[(4870/6400),(4200/6400)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\int_5000.wav",
					"db-5",
					1
				};
				frequency="0.8 + ((rpm/6400) factor[(4200/6400),(6200/6400)])*0.3";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6400) factor[(4150/6400),(4800/6400)])* ((rpm/6400) factor[(6150/6400),(5150/6400)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3FL_Cars2\A3FL_Mustang15\sounds\int_6000.wav",
					"db-4",
					1
				};
				frequency="0.9 + ((rpm/6400) factor[(5100/6400),(6900/6400)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/6400) factor[(5100/6400),(6100/6400)])";
			};
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
					"db-6",
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
					"db-6",
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
					"db-6",
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
					"db-6",
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
					"db-6",
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
					"db-6",
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
					"db-8",
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
					"db-6",
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
					"db-6",
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
					"db-6",
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
					"db-6",
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
					"db-6",
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
					"db-6",
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
					"db-12",
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
					"db-3",
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
					"db-3",
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
					"db-3",
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
					"db-3",
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
					"db-3",
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
					"db-3",
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
					"db-3",
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
					"db-3",
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
					"db-10",
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
					"db-10",
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
					"db-10",
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
					"db-10",
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
					"db-10",
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
					"db-10",
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
					"db-10",
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
					"db-10",
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		thrustDelay=0.1;
		brakeIdleSpeed=1.78;
		maxSpeed=249;
		fuelCapacity=30;
		wheelCircumference=2.277;
		idleRpm=900;
		redRpm=7000;
		antiRollbarForceCoef=2.3;
		antiRollbarForceLimit=2;
		antiRollbarSpeedMin=20;
		antiRollbarSpeedMax=80;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-2.882,
				"N",
				0,
				"D1",
				4.17,
				"D2",
				2.34,
				"D3",
				1.52,
				"D4",
				1.14,
				"D5",
				0.87,
				"D6",
				0.69
			};
			TransmissionRatios[]=
			{
				"High",
				3.15
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		simulation="carx";
		dampersBumpCoef=0.0099999998;
		differentialType="all_open";
		frontRearSplit=0.5;
		frontBias=1.5;
		rearBias=1.5;
		centreBias=1.5;
		clutchStrength=55;
		maxOmega=780;
		enginePower=520;
		peakTorque=650;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchDisengaged=2;
		dampingRateZeroThrottleClutchEngaged=0.34999999;
		torqueCurve[]=
		{
			{0,0},
			{0.14,0.41},
			{0.28,0.69999999},
			{0.43000001,1},
			{0.56,1},
			{0.69999999,0.97000003},
			{0.86000001,0.88},
			{1,0.69}
		};
		changeGearMinEffectivity[]={1,0.15000001,0.85000002,0.85000002,0.85000002,0.85000002,0.85000002,0.75,0.75};
		switchTime=0.2;
		latency=1;
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
				MOI=3.3;
				maxBrakeTorque=6800;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.15000001;
				MaxDroop=0.15000001;
				sprungMass=315;
				springStrength=37875;
				springDamperRate=2672;
				longitudinalStiffnessPerUnitGravity=12000;
				latStiffX=25;
				latStiffY=220;
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
				latStiffY=22000;
				maxHandBrakeTorque=7500;
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
				maxHandBrakeTorque=7500;
				steering=0;
				side="right";
				latStiffX=25;
				latStiffY=22000;
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
	};
	class A3FL_Mustang15_PD: A3FL_Mustang15 {
		model = "\A3FL_Cars2\A3FL_Mustang15\A3FL_Mustang15_PD";
		hiddenSelections[] = {"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","spd1","spd2","spd3","spd4","spd5","spd6","spd7","spd8","spd9","glass1","glass2","glass3","glass4","glass5","glass6"};
		hiddenSelectionsTextures[] = { "\A3PL_Textures\Mustang15\FISD\FISD_Mustang15_Highway.paa","","","","","","","","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)"};
		displayName="2015 Ford Mustang GT PD";
		class AnimationSources : AnimationSources 
		{
			class Common
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class Lightbar: Common {};
			class Directional_R: Common {};
			class Directional_S: Common {};
			class Directional_F: Common {};
			class Directional_L: Common {};
			class Lightbar1
			{
				source="MarkerLight";
				markerLight="Lightbar1";
			};
			class Lightbar2: Lightbar1 {markerLight="Lightbar2";};
			class DirectL1: Lightbar1 {markerLight="DirectL1";};
			class DirectL2: Lightbar1 {markerLight="DirectL2";};
			class DirectL3: Lightbar1 {markerLight="DirectL3";};
			class DirectL4: Lightbar1 {markerLight="DirectL4";};
			class DirectL5: Lightbar1 {markerLight="DirectL5";};
			class DirectL6: Lightbar1 {markerLight="DirectL6";};
			class DirectL7: Lightbar1 {markerLight="DirectL7";};
			class DirectL8: Lightbar1 {markerLight="DirectL8";};
			class DirectR1: Lightbar1 {markerLight="DirectR1";};
			class DirectR2: Lightbar1 {markerLight="DirectR2";};
			class DirectR3: Lightbar1 {markerLight="DirectR3";};
			class DirectR4: Lightbar1 {markerLight="DirectR4";};
			class DirectR5: Lightbar1 {markerLight="DirectR5";};
			class DirectR6: Lightbar1 {markerLight="DirectR6";};
			class DirectR7: Lightbar1 {markerLight="DirectR7";};
			class DirectR8: Lightbar1 {markerLight="DirectR8";};
			class DirectS1: Lightbar1 {markerLight="DirectS1";};
			class DirectS2: Lightbar1 {markerLight="DirectS2";};
			class DirectS3: Lightbar1 {markerLight="DirectS3";};
			class DirectS4: Lightbar1 {markerLight="DirectS4";};
			class DirectS5: Lightbar1 {markerLight="DirectS5";};
			class DirectS6: Lightbar1 {markerLight="DirectS6";};
			class DirectS7: Lightbar1 {markerLight="DirectS7";};
			class DirectS8: Lightbar1 {markerLight="DirectS8";};
			class DirectF1: Lightbar1 {markerLight="DirectF1";};
			class DirectF2: Lightbar1 {markerLight="DirectF2";};
			class DirectF3: Lightbar1 {markerLight="DirectF3";};
			class DirectF4: Lightbar1 {markerLight="DirectF4";};
			class DirectF5: Lightbar1 {markerLight="DirectF5";};
			class DirectF6: Lightbar1 {markerLight="DirectF6";};
			class DirectF7: Lightbar1 {markerLight="DirectF7";};
			class DirectF8: Lightbar1 {markerLight="DirectF8";};
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
			class Spotlight: Common {};
			class Pushbar_Addon
			{ 
				initPhase = 1;
				source = "user";
				animPeriod = 0.001;
				forceAnimate[] = {};
			};
			class Spotlight_Addon: Pushbar_Addon {};
			class devider_addon: Pushbar_Addon {};
			class spotlight_rotate: Common {};
		};
		class Reflectors: Reflectors
		{
			class LightCarHeadL01: LightCarHeadL01 {};
			class LightCarHeadR01: LightCarHeadR01 {};
			class LightCarHeadL02: LightCarHeadL02 {};
			class LightCarHeadR02: LightCarHeadR02 {};
			class Spotlight
			{
				color[] = { 120,120,120 };
				ambient[] = { 100,100,100 };
				position = "Spotlight_pos";
				direction = "Spotlight_dir";
				hitpoint = "Spotlight_Hit";
				selection = "Spotlight";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 2;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation { start = 2.0; constant = 0; linear = 0.1; quadratic = 0.01; hardLimitStart = 490; hardLimitEnd = 550; };
			};
			class Blue
			{
				color[]={0,0,255};
				ambient[]={0,0,90};
				position="Lightbar_Blue";
				direction="Lightbar_Blue_End";
				hitpoint="Light_L";
				selection="Front_3";
				size=1;
				innerAngle=125;
				outerAngle=180;
				coneFadeCoef=2.5;
				intensity=1;
				useFlare=0;
				dayLight=1;
				flareSize=0;
				flareMaxDistance=0;
				class Attenuation
				{
					start=5;
					constant=3;
					linear=1.5;
					quadratic=1.5;
					hardLimitStart=100;
					hardLimitEnd=250;
				};
			};
			class Red: Blue
			{
				color[]={255,0,0};
				ambient[]={90,0,0};
				position="Lightbar_Red";
				direction="Lightbar_Red_End";
				selection="Front_4";
			};
		};
		aggregateReflectors[] = 
		{
			{"LightCarHeadL01","LightCarHeadR01"},			
			{"LightCarHeadL02","LightCarHeadR02"}
		};
		maxSpeed=315;
		maxOmega=920;
		enginePower=780;
		peakTorque=920;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-2.882,
				"N",
				0,
				"D1",
				2.3,
				"D2",
				1.62,
				"D3",
				1,
				"D4",
				0.72,
				"D5",
				0.5,
				"D6",
				0.39
			};
			TransmissionRatios[]=
			{
				"High",
				4.32
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
	};
	class A3FL_Mustang15_PD_ST: A3FL_Mustang15 {
		model = "\A3FL_Cars2\A3FL_Mustang15\A3FL_Mustang15_PD_ST";
		hiddenSelections[] = {"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","spd1","spd2","spd3","spd4","spd5","spd6","spd7","spd8","spd9","glass1","glass2","glass3","glass4","glass5","glass6"};
		hiddenSelectionsTextures[] = { "#(argb,8,8,3)color(0,0,0,1.0,co)","","","","","","","","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)"};
		displayName="2015 Ford Mustang GT PD ST";
		class AnimationSources : AnimationSources 
		{
			class Common
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class Lightbar: Common {};
			class Directional_R: Common {};
			class Directional_S: Common {};
			class Directional_F: Common {};
			class Directional_L: Common {};
			class Lightbar1
			{
				source="MarkerLight";
				markerLight="Lightbar1";
			};
			class Lightbar2: Lightbar1 {markerLight="Lightbar2";};
			class DirectL1: Lightbar1 {markerLight="DirectL1";};
			class DirectL2: Lightbar1 {markerLight="DirectL2";};
			class DirectL3: Lightbar1 {markerLight="DirectL3";};
			class DirectL4: Lightbar1 {markerLight="DirectL4";};
			class DirectL5: Lightbar1 {markerLight="DirectL5";};
			class DirectL6: Lightbar1 {markerLight="DirectL6";};
			class DirectL7: Lightbar1 {markerLight="DirectL7";};
			class DirectL8: Lightbar1 {markerLight="DirectL8";};
			class DirectR1: Lightbar1 {markerLight="DirectR1";};
			class DirectR2: Lightbar1 {markerLight="DirectR2";};
			class DirectR3: Lightbar1 {markerLight="DirectR3";};
			class DirectR4: Lightbar1 {markerLight="DirectR4";};
			class DirectR5: Lightbar1 {markerLight="DirectR5";};
			class DirectR6: Lightbar1 {markerLight="DirectR6";};
			class DirectR7: Lightbar1 {markerLight="DirectR7";};
			class DirectR8: Lightbar1 {markerLight="DirectR8";};
			class DirectS1: Lightbar1 {markerLight="DirectS1";};
			class DirectS2: Lightbar1 {markerLight="DirectS2";};
			class DirectS3: Lightbar1 {markerLight="DirectS3";};
			class DirectS4: Lightbar1 {markerLight="DirectS4";};
			class DirectS5: Lightbar1 {markerLight="DirectS5";};
			class DirectS6: Lightbar1 {markerLight="DirectS6";};
			class DirectS7: Lightbar1 {markerLight="DirectS7";};
			class DirectS8: Lightbar1 {markerLight="DirectS8";};
			class DirectF1: Lightbar1 {markerLight="DirectF1";};
			class DirectF2: Lightbar1 {markerLight="DirectF2";};
			class DirectF3: Lightbar1 {markerLight="DirectF3";};
			class DirectF4: Lightbar1 {markerLight="DirectF4";};
			class DirectF5: Lightbar1 {markerLight="DirectF5";};
			class DirectF6: Lightbar1 {markerLight="DirectF6";};
			class DirectF7: Lightbar1 {markerLight="DirectF7";};
			class DirectF8: Lightbar1 {markerLight="DirectF8";};
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
			class Spotlight: Common {};
			class Pushbar_Addon 
			{ 
				initPhase = 0;
				source = "user";
				animPeriod = 0.001;
				forceAnimate[] = {};
			};
			class Spotlight_Addon : Pushbar_Addon {};
			class spotlight_rotate: Common {};
		};
		class Reflectors: Reflectors
		{
			class LightCarHeadL01: LightCarHeadL01 {};
			class LightCarHeadR01: LightCarHeadR01 {};
			class LightCarHeadL02: LightCarHeadL02 {};
			class LightCarHeadR02: LightCarHeadR02 {};
			class Spotlight
			{
				color[] = { 120,120,120 };
				ambient[] = { 100,100,100 };
				position = "Spotlight_pos";
				direction = "Spotlight_dir";
				hitpoint = "Spotlight_Hit";
				selection = "Spotlight";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 2;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation { start = 2.0; constant = 0; linear = 0.1; quadratic = 0.01; hardLimitStart = 490; hardLimitEnd = 550; };
			};
			class Blue
			{
				color[]={0,0,255};
				ambient[]={0,0,90};
				position="Lightbar_Blue";
				direction="Lightbar_Blue_End";
				hitpoint="Light_L";
				selection="Front_3";
				size=1;
				innerAngle=125;
				outerAngle=180;
				coneFadeCoef=2.5;
				intensity=1;
				useFlare=0;
				dayLight=1;
				flareSize=0;
				flareMaxDistance=0;
				class Attenuation
				{
					start=5;
					constant=3;
					linear=1.5;
					quadratic=1.5;
					hardLimitStart=100;
					hardLimitEnd=250;
				};
			};
			class Red: Blue
			{
				color[]={255,0,0};
				ambient[]={90,0,0};
				position="Lightbar_Red";
				direction="Lightbar_Red_End";
				selection="Front_4";
			};
		};
		aggregateReflectors[] = 
		{
			{"LightCarHeadL01","LightCarHeadR01"},			
			{"LightCarHeadL02","LightCarHeadR02"}
		};
		class MarkerLights
		{
			class Lightbar1
			{
				color[] = {0,0,0,0};ambient[] = {0,0,0};
				name = "Lightbar1_pos";
				blinkingPattern[] = {0.08,0.08,0.08,0.08,0.08,0.08,0.08,0.08,0.64};
				blinking = 1;
				blinkingStartsOn = 0;
				blinkingPatternGuarantee = 1;
				intensity = 0;
				activeLight = 0;
				drawLight = 0;
				drawLightSize = 0;
				drawLightCenterSize = 0;
				dayLight = 0;
				useFlare = 0;
				flareSize = 0;
				flareMaxDistance = 0;
				class Attenuation {start = 0;constant = 0;linear = 0;quadratic = 0;hardLimitStart = 0;hardLimitEnd = 0;};
			};
			class Lightbar2: Lightbar1 {name = "Lightbar2_pos";blinkingPattern[] ={0.64,0.08,0.08,0.08,0.08,0.08,0.08,0.08,0.08};};
		};
		maxSpeed=315;
		maxOmega=920;
		enginePower=780;
		peakTorque=920;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-2.882,
				"N",
				0,
				"D1",
				2.3,
				"D2",
				1.62,
				"D3",
				1,
				"D4",
				0.72,
				"D5",
				0.5,
				"D6",
				0.39
			};
			TransmissionRatios[]=
			{
				"High",
				4.32
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
	};
};