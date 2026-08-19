class CfgPatches
{
	class A3PL_Cars_Kane_Kart
	{
		addonRootClass="A3_Soft_F_Kart";
		requiredAddons[]=
		{
			"A3_Soft_F_Kart",
			"A3_Soft_F_Kart_Kart_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"C_Kart_01_black_F",
			"C_Kart_01_Blu_F",
			"C_Kart_01_F",
			"C_Kart_01_Fuel_F",
			"C_Kart_01_green_F",
			"C_Kart_01_orange_F",
			"C_Kart_01_Red_F",
			"C_Kart_01_Vrana_F",
			"C_Kart_01_white_F",
			"C_Kart_01_yellow_F"
		};
		weapons[]={};
	};
};
class CfgMovesBasic
{
	class ManActions
	{
		Kart_driver="Kart_driver";
	};
	class BlendAnims;
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	gestures="CfgGesturesMale";
	class States
	{
		class Crew;
		class Kart_driver: Crew
		{
			file="a3\Soft_F_Kart\Kart_01\data\Anim\Kart_driver.rtm";
			leftLegIKCurve[]={1};
			rightLegIKCurve[]={1};
			interpolateTo[]=
			{
				"Kart_driver_KIA",
				1
			};
			leaning="crewShake_shoulders";
		};
		class Kart_driver_KIA: Crew
		{
			file="a3\Soft_F_Kart\Kart_01\data\Anim\Kart_driver.rtm";
			leftLegIKCurve[]={1};
			rightLegIKCurve[]={1};
			actions="DeadActions";
			speed=1;
			looped=0;
			terminal=1;
			soundEnabled=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
	};
	class BlendAnims: BlendAnims
	{
		crewShake_shoulders[]=
		{
			"weapon",
			0.5,
			"Camera",
			0.5,
			"launcher",
			0.5,
			"Head",
			0.5,
			"Neck",
			0.5,
			"Neck1",
			0.5,
			"LeftShoulder",
			0.44999999,
			"LeftArm",
			0.34999999,
			"LeftArmRoll",
			0.25,
			"LeftForeArm",
			0.15000001,
			"RightShoulder",
			0.44999999,
			"RightArm",
			0.34999999,
			"RightArmRoll",
			0.25,
			"RightForeArm",
			0.315,
			"spine3",
			0.47499999,
			"spine2",
			0.25,
			"LeftUpLeg",
			0.1,
			"LeftUpLegRoll",
			0.25,
			"LeftLeg",
			0.1,
			"RightUpLeg",
			0.1,
			"RightUpLegRoll",
			0.25,
			"RightLeg",
			0.1
		};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
	};
	class Car_F: Car
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitBody;
		};
		class EventHandlers;
	};
	class Kart_01_Base_F: Car_F
	{
		features="Randomization: No      <br />Camo selections: 4 - body, sponsor logos, first number, second number      <br />Script door sources: None      <br />Script animations: None      <br />Executed scripts: None      <br />Firing from vehicles: No      <br />Slingload: Slingloadable      <br />Cargo proxy indexes: None";
		author="$STR_A3_Bohemia_Interactive";
		mapSize=3.3399999;
		_generalMacro="Kart_01_Base_F";
		DLC="Kart";
		overviewPicture="\A3\Data_F_Kart\Images\watermarkInfo_page01_ca.paa";
		editorSubcategory="EdSubcat_Cars";
		vehicleClass="Car";
		displayName="$STR_A3_CfgVehicles_Kart_01_Base_F0";
		class Library
		{
			libTextDesc="$STR_A3_CfgVehicles_Kart_01_Base_F_Library0";
		};
		model="A3PL_Cars_Kane\Kart\Kart_01_F.p3d";
		picture="A3\Soft_F_Kart\Kart_01\data\UI\Kart_01_base_CA.paa";
		icon="A3\Soft_F_Kart\Kart_01\data\UI\map_Kart_01_CA.paa";
		accuracy=0.25;
		transportSoldier=0;
		transportMaxBackpacks=0;
		unitInfoType="RscUnitInfoNoWeapon";
		DriverLeftHandAnimName="DrivingWheel";
		DriverRightHandAnimName="DrivingWheel";
		driverLeftLegAnimName="pedal_brake_G";
		driverRightLegAnimName="pedal_thrust_G";
		wheelDamageThreshold=0.99000001;
		wheelDestroyThreshold=0.99000001;
		wheelDamageRadiusCoef=1;
		wheelDestroyRadiusCoef=0.64999998;
		crewCrashProtection=4.5500002;
		maximumLoad=0;
		class TransportItems
		{
		};
		cost=50000;
		weapons[]={};
		magazines[]={};
		armor=4;
		crewExplosionProtection=0;
		epeImpulseDamageCoef=5;
		damageResistance=0.0091300001;
		damageEffect="";
		damageTexDelay=0.5;
		fuelExplosionPower=0;
		memoryPointTaskMarker="TaskMarker_1_pos";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1"
		};
		class DestructionEffects
		{
			class UAVCrashSmoke
			{
				simulation="particles";
				type="UAVCrashSmoke";
				position="[0,0,0]";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.012;
			};
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLightSmall";
				position="destructionEffect1";
				intensity=0.001;
				interval=1;
				lifeTime=3;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
				type="Fire";
			};
			class Fire1
			{
				simulation="particles";
				type="ObjectDestructionFire1Tiny";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class Refract1
			{
				simulation="particles";
				type="SmallFireFRefract";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class Smoke1
			{
				simulation="particles";
				type="SmallWreckSmoke";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"Number_a",
			"Number_b"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\soft_f_kart\kart_01\data\kart_01_co.paa",
			"",
			"",
			""
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=1;
				radius=0.2;
				visual="wheel_1_1_hide";
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=1;
				radius=0.2;
				visual="wheel_1_2_hide";
			};
			class HitRFWheel: HitRFWheel
			{
				armor=1;
				radius=0.2;
				visual="wheel_2_1_hide";
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=1;
				radius=0.2;
				visual="wheel_2_2_hide";
			};
			delete HitRBWheel;
			delete HitLBWheel;
			delete HitRMWheel;
			delete HitLMWheel;
			class HitFuel
			{
				armor=5;
				material=-1;
				name="fuel";
				visual="";
				passThrough=0.2;
				radius=0.2;
			};
			class HitEngine
			{
				armor=2;
				material=-1;
				name="engine";
				visual="";
				passThrough=0.2;
				radius=0.2;
			};
			class HitBody: HitBody
			{
				armor=0.5;
				visual="zbytek";
				passThrough=1;
				radius=0.2;
			};
		};
		steerAheadSimul=0.5;
		steerAheadPlan=0.5;
		predictTurnPlan=0.80000001;
		predictTurnSimul=0.60000002;
		precision=4;
		brakeDistance=2;
		turnCoef=2.5;
		terrainCoef=5;
		normalSpeedForwardCoef=0.75;
		driverAction="Kart_driver";
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		fireResistance=5;
		collisionEffect="collisionEffectSmall";
		maxFordingDepth=-0.60000002;
		waterResistance=0;
		class PlayerSteeringCoefficients
		{
			turnIncreaseConst=1;
			turnIncreaseLinear=2;
			turnIncreaseTime=0;
			turnDecreaseConst=8;
			turnDecreaseLinear=0;
			turnDecreaseTime=0;
			maxTurnHundred=1;
		};
		attenuationEffectType="OpenCarAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F_Kart\vehicles\soft\noises\getin",
			0.31622776,
			1,
			20
		};
		soundGetOut[]=
		{
			"A3\Sounds_F_Kart\vehicles\soft\noises\getout",
			0.31622776,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F_Kart\vehicles\soft\Kart_01\engine_start",
			0.70794576,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F_Kart\vehicles\soft\Kart_01\engine_start",
			0.70794576,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F_Kart\vehicles\soft\Kart_01\engine_stop",
			0.63095737,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F_Kart\vehicles\soft\Kart_01\engine_stop",
			0.63095737,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
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
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
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
			1,
			1,
			200
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
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
		Crash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundCrashes[]=
		{
			"Crash0",
			0.25,
			"Crash1",
			0.25,
			"Crash2",
			0.25,
			"Crash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F_Kart\vehicles\soft\Kart_01\engine_rpm1",
					0.25118864,
					1
				};
				frequency=1;
				volume="engineOn*camPos*((((rpm/ 3000) factor[(200/ 3000),( 500/ 3000)]) * ((rpm/ 3000) factor[( 934/ 3000),( 713/ 3000)])))*2";
			};
			class Engine_ext
			{
				sound[]=
				{
					"A3\Sounds_F_Kart\vehicles\soft\Kart_01\engine_rpm2",
					0.2818383,
					1
				};
				frequency="0.9 + ((rpm/ 3000) factor[(600/ 3000),(1230/ 3000)])*0.4";
				volume="engineOn*camPos*((((rpm/ 3000) factor[(600/ 3000),( 800/ 3000)]) * ((rpm/ 3000) factor[( 1230/ 3000),( 963/ 3000)])))*2.5";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F_Kart\vehicles\soft\Kart_01\engine_rpm3",
					0.31622776,
					1
				};
				frequency="0.9 + ((rpm/ 3000) factor[(803/ 3000),(1643/ 3000)])*0.3";
				volume="engineOn*camPos*((((rpm/ 3000) factor[(803/ 3000),( 1130/ 3000)]) * ((rpm/ 3000) factor[( 1643/ 3000),( 1253/ 3000)])))*2.5";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F_Kart\vehicles\soft\Kart_01\engine_rpm4",
					0.3548134,
					1
				};
				frequency="0.9 + ((rpm/ 3000) factor[(1153/ 3000),(1959/ 3000)])*0.2";
				volume="engineOn*camPos*((((rpm/ 3000) factor[(1153/ 3000),( 1543/ 3000)]) * ((rpm/ 3000) factor[( 1959/ 3000),( 1713/ 3000)])))*2.6";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3\Sounds_F_Kart\vehicles\soft\Kart_01\engine_rpm5",
					0.39810717,
					1
				};
				frequency="0.95 + ((rpm/ 3000) factor[(1613/ 3000),(2500/ 3000)])*0.2";
				volume="engineOn*camPos*((((rpm/ 3000) factor[(1613/ 3000),( 1859/ 3000)]) * ((rpm/ 3000) factor[( 2500/ 3000),( 2203/ 3000)])))*3";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3\Sounds_F_Kart\vehicles\soft\Kart_01\engine_rpm6",
					0.44668359,
					1
				};
				frequency="0.95 + ((rpm/ 3000) factor[(1800/ 3000),(2500/ 3000)])*0.2";
				volume="engineOn*camPos*(((rpm/ 3000) factor[(1800/ 3000),( 2500/ 3000)]))*2.88";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F_Kart\vehicles\soft\Kart_01\engine_rpm1",
					0.25118864,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*((((rpm/ 3000) factor[(200/ 3000),( 500/ 3000)]) * ((rpm/ 3000) factor[( 934/ 3000),( 713/ 3000)])))*2";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F_Kart\vehicles\soft\Kart_01\engine_rpm2",
					0.2818383,
					1
				};
				frequency="0.9 + ((rpm/ 3000) factor[(600/ 3000),(1230/ 3000)])*0.4";
				volume="engineOn*(1-camPos)*((((rpm/ 3000) factor[(600/ 3000),( 800/ 3000)]) * ((rpm/ 3000) factor[( 1230/ 3000),( 963/ 3000)])))*2.5";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F_Kart\vehicles\soft\Kart_01\engine_rpm3",
					0.31622776,
					1
				};
				frequency="0.9 + ((rpm/ 3000) factor[(803/ 3000),(1643/ 3000)])*0.3";
				volume="engineOn*(1-camPos)*((((rpm/ 3000) factor[(803/ 3000),( 1130/ 3000)]) * ((rpm/ 3000) factor[( 1643/ 3000),( 1253/ 3000)])))*2.5";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F_Kart\vehicles\soft\Kart_01\engine_rpm4",
					0.3548134,
					1
				};
				frequency="0.9 + ((rpm/ 3000) factor[(1153/ 3000),(1959/ 3000)])*0.2";
				volume="engineOn*(1-camPos)*((((rpm/ 3000) factor[(1153/ 3000),( 1543/ 3000)]) * ((rpm/ 3000) factor[( 1959/ 3000),( 1713/ 3000)])))*2.6";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F_Kart\vehicles\soft\Kart_01\engine_rpm5",
					0.39810717,
					1
				};
				frequency="0.95 + ((rpm/ 3000) factor[(1613/ 3000),(2500/ 3000)])*0.2";
				volume="engineOn*(1-camPos)*((((rpm/ 3000) factor[(1613/ 3000),( 1859/ 3000)]) * ((rpm/ 3000) factor[( 2500/ 3000),( 2203/ 3000)])))*3";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F_Kart\vehicles\soft\Kart_01\engine_rpm6",
					0.44668359,
					1
				};
				frequency="0.95 + ((rpm/ 3000) factor[(1800/ 3000),(2500/ 3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 3000) factor[(1800/ 3000),( 2500/ 3000)]))*2.88";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(Speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(Speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(Speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(Speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(Speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(Speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",
					0.89125091,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(Speed factor[0, 15])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					0.63095737,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(Speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand2",
					0.63095737,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(Speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					0.63095737,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(Speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					0.63095737,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(Speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					0.63095737,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(Speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(Speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",
					0.56234133,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(Speed factor[0, 15])*(1-camPos)";
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
				volume="engineOn*camPos*asphalt*(LongSlipDrive factor[-0.15, -0.3])*(Speed factor[2, 10])";
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
				volume="engineOn*camPos*asphalt*(LongSlipDrive factor[0.15, 0.3])*(Speed factor[10, 0])";
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
				volume="engineOn*camPos*asphalt*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
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
				volume="engineOn*camPos*asphalt*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
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
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive factor[-0.15, -0.3])*(Speed factor[2, 10])";
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
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive factor[0.15, 0.3])*(Speed factor[10, 0])";
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
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
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
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F_Kart\vehicles\soft\noises\slipping_tires_loop_05",
					0.50118721,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive factor[-0.15, -0.3])*(Speed factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F_Kart\vehicles\soft\noises\slipping_tires_loop_05",
					0.50118721,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive factor[0.15, 0.3])*(Speed factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F_Kart\vehicles\soft\noises\slipping_tires_loop_05",
					0.50118721,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F_Kart\vehicles\soft\noises\slipping_tires_loop_05",
					0.50118721,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
					0.50118721,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive factor[-0.15, -0.3])*(Speed factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",
					0.50118721,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive factor[0.15, 0.3])*(Speed factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.50118721,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.50118721,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class Waternoise_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\soft_driving_in_water",
					0.50118721,
					1,
					300
				};
				frequency="1";
				volume="(Speed factor[0, 10]) * water * camPos + (Speed factor[-0.1, -10]) * water * camPos";
			};
			class Waternoise_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\soft_driving_in_water",
					0.50118721,
					1,
					100
				};
				frequency="1";
				volume="(Speed factor[0, 10]) * water * (1-camPos) + (Speed factor[-0.1, -10]) * water * (1-camPos)";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain2_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain2_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		thrustDelay=0.5;
		engineBrakeCoef=0.1;
		overSpeedBrakeCoef=0.80000001;
		brakeIdleSpeed=1.78;
		maxSpeed=100;
		fuelCapacity=5;
		wheelCircumference=1.34;
		antiRollbarForceCoef=0;
		antiRollbarForceLimit=0;
		antiRollbarSpeedMin=0;
		antiRollbarSpeedMax=0;
		idleRpm=600;
		redRpm=3000;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-20,
				"N",
				0,
				"D1",
				5.881
			};
			TransmissionRatios[]=
			{
				"High",
				0.37
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		simulation="carx";
		dampersBumpCoef=0.0099999998;
		differentialType="rear_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=50;
		enginePower=85;
		maxOmega=319;
		peakTorque=360;
		dampingRateFullThrottle=0.0080000004;
		dampingRateZeroThrottleClutchEngaged=0.015;
		dampingRateZeroThrottleClutchDisengaged=0.015;
		torqueCurve[]=
		{
			{0,0.55000001},
			{0.30000001,0.89999998},
			{0.55000001,0.60000002},
			{0.64999998,0.5},
			{0.75,0.44999999},
			{1,0.40000001}
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.94999999};
		switchTime=0.0099999998;
		latency=1;
		class Wheels
		{
			class LF
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				boneName="wheel_1_1_damper";
				steering=1;
				center="wheel_1_1_axis_fake";
				boundary="wheel_1_1_bound";
				width="0.2";
				mass=40;
				MOI=2.4230001;
				dampingRate=0.5;
				dampingRateDamaged=5;
				dampingRateDestroyed=5000;
				maxBrakeTorque=0;
				maxHandBrakeTorque=0;
				suspForceAppPointOffset="wheel_1_1_suspForce";
				tireForceAppPointOffset="wheel_1_1_tireForce";
				maxCompression=0.015;
				maxDroop=0.15000001;
				sprungMass=20;
				springStrength=9375;
				springDamperRate=142;
				longitudinalStiffnessPerUnitGravity=3000;
				latStiffX=25;
				latStiffY=120;
				frictionVsSlipGraph[]=
				{
					{0,1.3},
					{0.5,1},
					{1,0.89999998}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis_fake";
				boundary="wheel_1_2_bound";
				maxBrakeTorque=1400;
				suspForceAppPointOffset="wheel_1_2_suspForce";
				tireForceAppPointOffset="wheel_1_2_tireForce";
				frictionVsSlipGraph[]=
				{
					{0,1.2},
					{0.5,1.1},
					{1,1}
				};
			};
			class RF: LF
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis_fake";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_suspForce";
				tireForceAppPointOffset="wheel_2_1_tireForce";
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis_fake";
				boundary="wheel_2_2_bound";
				maxBrakeTorque=1400;
				suspForceAppPointOffset="wheel_2_2_suspForce";
				tireForceAppPointOffset="wheel_2_2_tireForce";
				frictionVsSlipGraph[]=
				{
					{0,1.2},
					{0.5,1.1},
					{1,1}
				};
			};
		};
		ejectDeadDriver=1;
		class Turrets
		{
		};
		hideWeaponsDriver=0;
		extCameraPosition[]={0,1.5,-4.5};
		headAimDown=-5;
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustsEffect";
			};
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteHeightLimit=5;
				canBeTransported=1;
				parachuteClass="B_Parachute_02_F";
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Soft_F_Kart\Kart_01\Data\Kart_01.rvmat",
				"A3\Soft_F_Kart\Kart_01\Data\Kart_01_damage.rvmat",
				"A3\Soft_F_Kart\Kart_01\Data\Kart_01_destruct.rvmat"
			};
		};
		class Reflectors
		{
		};
		class UserActions
		{
			class PressXToFlipTheThing
			{
				displayNameDefault="$STR_A3_CfgVehicles_Kart_01_Base_F_UserActions_PressXToFlipTheThing0";
				displayName="$STR_A3_CfgVehicles_Kart_01_Base_F_UserActions_PressXToFlipTheThing0";
				position="";
				radius=2.7;
				onlyForPlayer=1;
				condition="alive this AND not canmove this AND count crew this == 0";
				statement="this setpos [getpos this select 0,getpos this select 1,(getpos this select 2)+2]";
			};
		};
		class TextureSources
		{
			class Fuel
			{
				displayName="$STR_A3_TEXTURESOURCES_FUEL0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_CO.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_CA.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Bluking
			{
				displayName="$STR_A3_TEXTURESOURCES_BLUKING0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Redstone
			{
				displayName="$STR_A3_TEXTURESOURCES_REDSTONE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_black_CO.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Vrana
			{
				displayName="$STR_A3_TEXTURESOURCES_VRANA0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_vrana_CO.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Green
			{
				displayName="$STR_A3_TEXTURESOURCES_GREEN0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_green_CO.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Blue
			{
				displayName="$STR_A3_TEXTURESOURCES_BLUE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_blue_CO.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Orange
			{
				displayName="$STR_A3_TEXTURESOURCES_ORANGE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_orange_CO.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class White
			{
				displayName="$STR_A3_TEXTURESOURCES_WHITE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_white_CO.paa",
					"",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Yellow
			{
				displayName="$STR_A3_TEXTURESOURCES_YELLOW0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_yellow_CO.paa",
					"",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Black
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_black_CO.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
					"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
		};
		textureList[]=
		{
			"Green",
			1,
			"Orange",
			1,
			"Blue",
			1,
			"White",
			1,
			"Yellow",
			1,
			"Black",
			1
		};
	};
	class C_Kart_01_F_Base: Kart_01_Base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="C_Kart_01_F_Base";
		side=3;
		faction="CIV_F";
		crew="C_Driver_1_random_base_F";
	};
	class C_Kart_01_F: C_Kart_01_F_Base
	{
		features="Randomization: Yes, 7 skins, disabled by: this setVariable [""BIS_enableRandomization"",false];      <br />Specific skin may be set by: this setVariable [""color"",X]; (the number ranges from 0 to 6)      <br />Specific number may be set by: this setVariable [""number"",X]; (the number ranges from 0 to 99)      <br />Camo selections: 4 - body, sponsor logos, first number, second number      <br />Script door sources: None      <br />Script animations: None      <br />Executed scripts: \A3\Soft_F_Kart\Kart_01\scripts\randomize.sqf       <br />Firing from vehicles: No      <br />Slingload: Slingloadable      <br />Cargo proxy indexes: None";
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"wheel_1_1",
					1
				},
				
				{
					"wheel_2_1",
					1
				},
				
				{
					"wheel_1_2",
					1
				},
				
				{
					"wheel_2_2",
					1
				},
				
				{
					"daylights",
					0
				},
				
				{
					"reverse_light",
					0
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"drivingwheel_shaft",
					0
				},
				
				{
					"drivingwheel_link_l",
					0
				},
				
				{
					"drivingwheel_link_r",
					0
				},
				
				{
					"drivingwheel_link_l2",
					0
				},
				
				{
					"drivingwheel_link_r2",
					0
				},
				
				{
					"steering_1_1",
					0
				},
				
				{
					"steering_2_1",
					0
				},
				
				{
					"steering_shaft_l",
					0
				},
				
				{
					"steering_shaft_r",
					0
				},
				
				{
					"wheel_shaft",
					0
				},
				
				{
					"pedal_thrust",
					0
				},
				
				{
					"pedal_brake",
					1
				},
				
				{
					"pedal_thrust_y",
					0
				},
				
				{
					"pedal_brake_y",
					0
				},
				
				{
					"pedal_thrust_x",
					0
				},
				
				{
					"pedal_brake_x",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.058;
			verticalOffsetWorld=0.0049999999;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_Kart_01_F.jpg";
		_generalMacro="C_Kart_01_F";
		scope=2;
		displayName="$STR_A3_CfgVehicles_C_Kart_01_F0";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", nil, nil] call bis_fnc_initVehicle; [(_this select 0)] call bis_fnc_initVehicleKart;};";
		};
	};
	class C_Kart_01_Fuel_F: C_Kart_01_F_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_2_1",
					0
				},
				
				{
					"wheel_1_2",
					0
				},
				
				{
					"wheel_2_2",
					0
				},
				
				{
					"daylights",
					0
				},
				
				{
					"reverse_light",
					0
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"drivingwheel_shaft",
					0
				},
				
				{
					"drivingwheel_link_l",
					0
				},
				
				{
					"drivingwheel_link_r",
					0
				},
				
				{
					"drivingwheel_link_l2",
					0
				},
				
				{
					"drivingwheel_link_r2",
					0
				},
				
				{
					"steering_1_1",
					0
				},
				
				{
					"steering_2_1",
					0
				},
				
				{
					"steering_shaft_l",
					0
				},
				
				{
					"steering_shaft_r",
					0
				},
				
				{
					"wheel_shaft",
					0
				},
				
				{
					"pedal_thrust",
					0
				},
				
				{
					"pedal_brake",
					1
				},
				
				{
					"pedal_thrust_y",
					0
				},
				
				{
					"pedal_brake_y",
					0
				},
				
				{
					"pedal_thrust_x",
					0
				},
				
				{
					"pedal_brake_x",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.058;
			verticalOffsetWorld=0.0049999999;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_Kart_01_Fuel_F.jpg";
		_generalMacro="C_Kart_01_Fuel_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_C_Kart_01_Fuel_F0";
		DLC="Kart";
		crew="C_Driver_1_F";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_CO.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
		};
		textureList[]=
		{
			"Fuel",
			1
		};
	};
	class C_Kart_01_Blu_F: C_Kart_01_F_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_2_1",
					0
				},
				
				{
					"wheel_1_2",
					0
				},
				
				{
					"wheel_2_2",
					0
				},
				
				{
					"daylights",
					0
				},
				
				{
					"reverse_light",
					0
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"drivingwheel_shaft",
					0
				},
				
				{
					"drivingwheel_link_l",
					0
				},
				
				{
					"drivingwheel_link_r",
					0
				},
				
				{
					"drivingwheel_link_l2",
					0
				},
				
				{
					"drivingwheel_link_r2",
					0
				},
				
				{
					"steering_1_1",
					0
				},
				
				{
					"steering_2_1",
					0
				},
				
				{
					"steering_shaft_l",
					0
				},
				
				{
					"steering_shaft_r",
					0
				},
				
				{
					"wheel_shaft",
					0
				},
				
				{
					"pedal_thrust",
					0
				},
				
				{
					"pedal_brake",
					1
				},
				
				{
					"pedal_thrust_y",
					0
				},
				
				{
					"pedal_brake_y",
					0
				},
				
				{
					"pedal_thrust_x",
					0
				},
				
				{
					"pedal_brake_x",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.058;
			verticalOffsetWorld=0.0049999999;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_Kart_01_Blu_F.jpg";
		_generalMacro="C_Kart_01_Blu_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_C_Kart_01_Blu_F0";
		DLC="Kart";
		crew="C_Driver_2_F";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
		};
		textureList[]=
		{
			"Bluking",
			1
		};
	};
	class C_Kart_01_Red_F: C_Kart_01_F_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"wheel_1_1",
					1
				},
				
				{
					"wheel_2_1",
					1
				},
				
				{
					"wheel_1_2",
					1
				},
				
				{
					"wheel_2_2",
					1
				},
				
				{
					"daylights",
					0
				},
				
				{
					"reverse_light",
					0
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"drivingwheel_shaft",
					0
				},
				
				{
					"drivingwheel_link_l",
					0
				},
				
				{
					"drivingwheel_link_r",
					0
				},
				
				{
					"drivingwheel_link_l2",
					0
				},
				
				{
					"drivingwheel_link_r2",
					0
				},
				
				{
					"steering_1_1",
					0
				},
				
				{
					"steering_2_1",
					0
				},
				
				{
					"steering_shaft_l",
					0
				},
				
				{
					"steering_shaft_r",
					0
				},
				
				{
					"wheel_shaft",
					0
				},
				
				{
					"pedal_thrust",
					0
				},
				
				{
					"pedal_brake",
					1
				},
				
				{
					"pedal_thrust_y",
					0
				},
				
				{
					"pedal_brake_y",
					0
				},
				
				{
					"pedal_thrust_x",
					0
				},
				
				{
					"pedal_brake_x",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.058;
			verticalOffsetWorld=0.0049999999;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_Kart_01_Red_F.jpg";
		_generalMacro="C_Kart_01_Red_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_C_Kart_01_Red_F0";
		DLC="Kart";
		crew="C_Driver_3_F";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_black_CO.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
		};
		textureList[]=
		{
			"Redstone",
			1
		};
	};
	class C_Kart_01_Vrana_F: C_Kart_01_F_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_2_1",
					0
				},
				
				{
					"wheel_1_2",
					0
				},
				
				{
					"wheel_2_2",
					0
				},
				
				{
					"daylights",
					0
				},
				
				{
					"reverse_light",
					0
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"drivingwheel_shaft",
					0
				},
				
				{
					"drivingwheel_link_l",
					0
				},
				
				{
					"drivingwheel_link_r",
					0
				},
				
				{
					"drivingwheel_link_l2",
					0
				},
				
				{
					"drivingwheel_link_r2",
					0
				},
				
				{
					"steering_1_1",
					0
				},
				
				{
					"steering_2_1",
					0
				},
				
				{
					"steering_shaft_l",
					0
				},
				
				{
					"steering_shaft_r",
					0
				},
				
				{
					"wheel_shaft",
					0
				},
				
				{
					"pedal_thrust",
					0
				},
				
				{
					"pedal_brake",
					1
				},
				
				{
					"pedal_thrust_y",
					0
				},
				
				{
					"pedal_brake_y",
					0
				},
				
				{
					"pedal_thrust_x",
					0
				},
				
				{
					"pedal_brake_x",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.058;
			verticalOffsetWorld=0.0049999999;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_Kart_01_Vrana_F.jpg";
		_generalMacro="C_Kart_01_Vrana_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_C_Kart_01_Vrana_F0";
		DLC="Kart";
		crew="C_Driver_4_F";
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_vrana_CO.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa",
			"\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"
		};
		textureList[]=
		{
			"Vrana",
			1
		};
	};
	class C_Kart_01_green_F: C_Kart_01_F_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"wheel_1_1",
					1
				},
				
				{
					"wheel_2_1",
					1
				},
				
				{
					"wheel_1_2",
					1
				},
				
				{
					"wheel_2_2",
					1
				},
				
				{
					"daylights",
					0
				},
				
				{
					"reverse_light",
					0
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"drivingwheel_shaft",
					0
				},
				
				{
					"drivingwheel_link_l",
					0
				},
				
				{
					"drivingwheel_link_r",
					0
				},
				
				{
					"drivingwheel_link_l2",
					0
				},
				
				{
					"drivingwheel_link_r2",
					0
				},
				
				{
					"steering_1_1",
					0
				},
				
				{
					"steering_2_1",
					0
				},
				
				{
					"steering_shaft_l",
					0
				},
				
				{
					"steering_shaft_r",
					0
				},
				
				{
					"wheel_shaft",
					0
				},
				
				{
					"pedal_thrust",
					0
				},
				
				{
					"pedal_brake",
					1
				},
				
				{
					"pedal_thrust_y",
					0
				},
				
				{
					"pedal_brake_y",
					0
				},
				
				{
					"pedal_thrust_x",
					0
				},
				
				{
					"pedal_brake_x",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.058;
			verticalOffsetWorld=0.0049999999;
			init="''";
		};
		_generalMacro="C_Kart_01_green_F";
		scope=1;
		scopeCurator=0;
		displayName="$STR_A3_C_Kart_01_green_F0";
		DLC="Kart";
		textureList[]=
		{
			"Green",
			1
		};
	};
	class C_Kart_01_orange_F: C_Kart_01_F_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"wheel_1_1",
					1
				},
				
				{
					"wheel_2_1",
					1
				},
				
				{
					"wheel_1_2",
					1
				},
				
				{
					"wheel_2_2",
					1
				},
				
				{
					"daylights",
					0
				},
				
				{
					"reverse_light",
					0
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"drivingwheel_shaft",
					0
				},
				
				{
					"drivingwheel_link_l",
					0
				},
				
				{
					"drivingwheel_link_r",
					0
				},
				
				{
					"drivingwheel_link_l2",
					0
				},
				
				{
					"drivingwheel_link_r2",
					0
				},
				
				{
					"steering_1_1",
					0
				},
				
				{
					"steering_2_1",
					0
				},
				
				{
					"steering_shaft_l",
					0
				},
				
				{
					"steering_shaft_r",
					0
				},
				
				{
					"wheel_shaft",
					0
				},
				
				{
					"pedal_thrust",
					0
				},
				
				{
					"pedal_brake",
					1
				},
				
				{
					"pedal_thrust_y",
					0
				},
				
				{
					"pedal_brake_y",
					0
				},
				
				{
					"pedal_thrust_x",
					0
				},
				
				{
					"pedal_brake_x",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.058;
			verticalOffsetWorld=0.0049999999;
			init="''";
		};
		_generalMacro="C_Kart_01_orange_F";
		scope=1;
		scopeCurator=0;
		displayName="$STR_A3_C_Kart_01_orange_F0";
		DLC="Kart";
		textureList[]=
		{
			"Orange",
			1
		};
	};
	class C_Kart_01_white_F: C_Kart_01_F_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"wheel_1_1",
					1
				},
				
				{
					"wheel_2_1",
					1
				},
				
				{
					"wheel_1_2",
					1
				},
				
				{
					"wheel_2_2",
					1
				},
				
				{
					"daylights",
					0
				},
				
				{
					"reverse_light",
					0
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"drivingwheel_shaft",
					0
				},
				
				{
					"drivingwheel_link_l",
					0
				},
				
				{
					"drivingwheel_link_r",
					0
				},
				
				{
					"drivingwheel_link_l2",
					0
				},
				
				{
					"drivingwheel_link_r2",
					0
				},
				
				{
					"steering_1_1",
					0
				},
				
				{
					"steering_2_1",
					0
				},
				
				{
					"steering_shaft_l",
					0
				},
				
				{
					"steering_shaft_r",
					0
				},
				
				{
					"wheel_shaft",
					0
				},
				
				{
					"pedal_thrust",
					0
				},
				
				{
					"pedal_brake",
					1
				},
				
				{
					"pedal_thrust_y",
					0
				},
				
				{
					"pedal_brake_y",
					0
				},
				
				{
					"pedal_thrust_x",
					0
				},
				
				{
					"pedal_brake_x",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.058;
			verticalOffsetWorld=0.0049999999;
			init="''";
		};
		_generalMacro="C_Kart_01_white_F";
		scope=1;
		scopeCurator=0;
		displayName="$STR_A3_C_Kart_01_white_F0";
		DLC="Kart";
		textureList[]=
		{
			"White",
			1
		};
	};
	class C_Kart_01_yellow_F: C_Kart_01_F_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_2_1",
					0
				},
				
				{
					"wheel_1_2",
					0
				},
				
				{
					"wheel_2_2",
					0
				},
				
				{
					"daylights",
					0
				},
				
				{
					"reverse_light",
					0
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"drivingwheel_shaft",
					0
				},
				
				{
					"drivingwheel_link_l",
					0
				},
				
				{
					"drivingwheel_link_r",
					0
				},
				
				{
					"drivingwheel_link_l2",
					0
				},
				
				{
					"drivingwheel_link_r2",
					0
				},
				
				{
					"steering_1_1",
					0
				},
				
				{
					"steering_2_1",
					0
				},
				
				{
					"steering_shaft_l",
					0
				},
				
				{
					"steering_shaft_r",
					0
				},
				
				{
					"wheel_shaft",
					0
				},
				
				{
					"pedal_thrust",
					0
				},
				
				{
					"pedal_brake",
					1
				},
				
				{
					"pedal_thrust_y",
					0
				},
				
				{
					"pedal_brake_y",
					0
				},
				
				{
					"pedal_thrust_x",
					0
				},
				
				{
					"pedal_brake_x",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.058;
			verticalOffsetWorld=0.0049999999;
			init="''";
		};
		_generalMacro="C_Kart_01_yellow_F";
		scope=1;
		scopeCurator=0;
		displayName="$STR_A3_C_Kart_01_yellow_F0";
		DLC="Kart";
		textureList[]=
		{
			"Yellow",
			1
		};
	};
	class C_Kart_01_black_F: C_Kart_01_F_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"wheel_1_1",
					1
				},
				
				{
					"wheel_2_1",
					1
				},
				
				{
					"wheel_1_2",
					1
				},
				
				{
					"wheel_2_2",
					1
				},
				
				{
					"daylights",
					0
				},
				
				{
					"reverse_light",
					0
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"drivingwheel_shaft",
					0
				},
				
				{
					"drivingwheel_link_l",
					0
				},
				
				{
					"drivingwheel_link_r",
					0
				},
				
				{
					"drivingwheel_link_l2",
					0
				},
				
				{
					"drivingwheel_link_r2",
					0
				},
				
				{
					"steering_1_1",
					0
				},
				
				{
					"steering_2_1",
					0
				},
				
				{
					"steering_shaft_l",
					0
				},
				
				{
					"steering_shaft_r",
					0
				},
				
				{
					"wheel_shaft",
					0
				},
				
				{
					"pedal_thrust",
					0
				},
				
				{
					"pedal_brake",
					1
				},
				
				{
					"pedal_thrust_y",
					0
				},
				
				{
					"pedal_brake_y",
					0
				},
				
				{
					"pedal_thrust_x",
					0
				},
				
				{
					"pedal_brake_x",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.058;
			verticalOffsetWorld=0.0049999999;
			init="''";
		};
		_generalMacro="C_Kart_01_black_F";
		scope=1;
		scopeCurator=0;
		displayName="$STR_A3_C_Kart_01_black_F0";
		DLC="Kart";
		textureList[]=
		{
			"Black",
			1
		};
	};
};
