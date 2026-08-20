class CfgPatches
{
	class A3FL_Explorer_Platinum_20
	{
		units[]=
		{
			"A3FL_Explorer_Platinum_20",
			"A3FL_Explorer_Platinum_PD_20",
			"A3FL_Explorer_Platinum_PD_Slicktop_20",
			"A3FL_Explorer_Platinum_FD_20"
		};
		weapons[]={"A3FL_CarHorn"};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3PL_Cars",
			"A3FL_Cars",
			"A3_Soft_F"
		};
	};
};
class cfgWeapons
{
	class CarHorn;
	class A3FL_CarHorn: CarHorn
	{
		displayname="Horn";
		reloadTime=4;
		drySound[]={"A3PL_Cars\Common\Sounds\A3PL_CarHorn.ogg",2,1,200};
		scope = 2;
	};
};
class CfgVehicles
{
	class Hatchback_01_sport_base_F;
	class A3PL_Car_Base: Hatchback_01_sport_base_F
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
		class Sounds;
		class Reflectors
		{
			class LightCarHeadL01;
			class LightCarHeadR01;
			class LightCarHeadL02;
			class LightCarHeadR02;
		};
		class AnimationSources
		{
			class Mods;
		};
	};
	class A3FL_Explorer_Platinum_20: A3PL_Car_Base
	{
		author="Danny Indelicato, Henry Indelicato";
		displayName="2020 Ford Explorer Platinum";
		class Library
		{
			libTextDesc="2020 Ford Explorer";
		};
		fuelCapacity=35;
		transportSoldier=5;
		differentialType="all_open";
		model="\A3FL_Cars2\A3FL_Explorer_20\A3FL_Explorer_Platinum_20";
		driverAction = "A3FL_DriverExplorer19";
		cargoAction[] = {"A3FL_PassangerExplorer19","A3FL_PassangerExplorer19","A3FL_PassangerExplorer19","A3FL_PassangerExplorer19","A3FL_PassangerExplorer19"};
		hiddenSelections[]=
		{
			"Body",
			"Lett_1",
			"Lett_2",
			"Lett_3",
			"num_1",
			"num_2",
			"num_3",
			"num_4",
			"glass1",
			"glass2",
			"glass3",
			"glass4",
			"glass5",
			"glass6"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(1,1,1,1.0,co)",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)"
		};
		tf_isolatedAmount = 0;
		hideWeaponsDriver = true;
		hideWeaponsCargo = true;
		maxSpeed=230;
		enginePower=300;
		peakTorque=440;
		idleRpm=600;
		torqueCurve[]=
		{
			{0,0},
			{0.185,0.85000002},
			{0.34999999,0.99000001},
			{0.5,1},
			{0.75,0.99900001},
			{0.85000002,0.755},
			{1,0.62699997}
		};
		terrainCoef=1.8;
		turnCoef=2.5;
		wheelDestroyRadiusCoef=0.75;
		extCameraPosition[]={0,0.89999998,-6.1999998};
		antiRollbarForceCoef=2.3;
		antiRollbarForceLimit=2.0999999;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=95;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 2.5;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-1.3,
				"N",
				0,
				"D1",
				4.714,
				"D2",
				2.997,
				"D3",
				2.149,
				"D4",
				1.769,
				"D5",
				1.521,
				"D6",
				1.275,
				"D7",
				0.853
			};
			TransmissionRatios[]=
			{
				"High",
				4.1
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		class PlayerSteeringCoefficients
		{
			turnIncreaseConst	= 1.5;	// basic sensitivity value, higher value = faster steering
			turnIncreaseLinear	= 0.4;	// higher value means less sensitive steering in higher speed, more sensitive in lower speeds
			turnIncreaseTime	= 3.0;	// higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
			turnDecreaseConst	= 5.0;	// basic caster effect value, higher value = the faster the wheels align in the direction of travel
			turnDecreaseLinear	= 4.0;	// higher value means faster wheel re-centering in higher speed, slower in lower speeds
			turnDecreaseTime	= 0.0;	// higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
			maxTurnHundred		= 0.6;	// coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
		};
		class Exhausts {
			class Exhaust1 {
				position = "exhaust1_pos";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffect";
			};

			class Exhaust2 {
				position  = "exhaust2_pos";
				direction = "exhaust2_dir";
				effect 	  = "ExhaustsEffect";
			};
			class Exhaust3 {
				position = "exhaust3_pos";
				direction = "exhaust3_dir";
				effect = "ExhaustsEffect";
			};

			class Exhaust4 {
				position  = "exhaust4_pos";
				direction = "exhaust4_dir";
				effect 	  = "ExhaustsEffect";
			};
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
				width="0.2";
				mass=20;
				MOI=5.3000002;
				dampingRate=0.5;
				maxBrakeTorque=7800;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.18000001;
				mMaxDroop=0.050000001;
				sprungMass=850;
				springStrength=150000;
				springDamperRate=8500;
				longitudinalStiffnessPerUnitGravity=100000;
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
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxBrakeTorque=5200;
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
				maxBrakeTorque=7800;
				side="right";
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=50000;
				maxBrakeTorque=5200;
			};
		};
		aggregateReflectors[]=
		{
			{
				"LightCarHeadL01"
			},
			{
				"LightCarHeadR01"
			},
			{
				"LightCarHeadL02"
			},
			{
				"LightCarHeadR02"
			}
		};
		htMax=1430;
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
		};

		/* ---- CRASHES START ---- */

        buildCrash0[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1", db0, 1,200};
        buildCrash1[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2", db0, 1,200};
        buildCrash2[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3", db0, 1,200};
        buildCrash3[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4", db0, 1,200};
        soundBuildingCrash[]={buildCrash0, 0.25, buildCrash1, 0.25, buildCrash2, 0.25, buildCrash3, 0.25};

        WoodCrash0[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", db0, 1,200};
        WoodCrash1[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", db0, 1,200};
        WoodCrash2[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", db0, 1,200};
        WoodCrash3[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", db0, 1,200};
        soundWoodCrash[]={woodCrash0, 0.25, woodCrash1, 0.25, woodCrash2, 0.25, woodCrash3, 0.25};

        armorCrash0[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1", db0, 1,200};
        armorCrash1[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2", db0, 1,200};
        armorCrash2[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3", db0, 1,200};
        armorCrash3[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4", db0, 1,200};
        soundArmorCrash[]={ArmorCrash0, 0.25, ArmorCrash1, 0.25, ArmorCrash2, 0.25, ArmorCrash3, 0.25};

        /* ---- CRASHES  END ---- */

		class Sounds: Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\Idle.ogg",
					"db-13",
					1,
					150
				};
				frequency="0.9 + ((rpm/11900) factor[(400/11900),(1150/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(400/11900),(700/11900)])* ((rpm/11900) factor[(1100/11900),(900/11900)]))*2";
			};
			class Engine
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\1000.ogg",
					"db-11",
					1,
					200
				};
				frequency="0.8 + ((rpm/11900) factor[(900/11900),(2100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(870/11900),(1100/11900)])* ((rpm/11900) factor[(2100/11900),(1300/11900)]))*2";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\2000.ogg",
					"db-9",
					1,
					240
				};
				frequency="0.8 + ((rpm/11900) factor[(1300/11900),(3100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(1250/11900),(2050/11900)])* ((rpm/11900) factor[(3100/11900),(2300/11900)]))*2";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\3000.ogg",
					"db-8",
					1,
					280
				};
				frequency="0.8 + ((rpm/11900) factor[(2200/11900),(4100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(2250/11900),(3050/11900)])* ((rpm/11900) factor[(4100/11900),(3300/11900)]))*2";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\4000.ogg",
					"db-7",
					1,
					320
				};
				frequency="0.8 + ((rpm/11900) factor[(3300/11900),(4900/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(3250/11900),(4050/11900)])* ((rpm/11900) factor[(4870/11900),(4200/11900)]))*2";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\5000.ogg",
					"db-6",
					1,
					360
				};
				frequency="0.8 + ((rpm/11900) factor[(4200/11900),(6200/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(4150/11900),(4800/11900)])* ((rpm/11900) factor[(6150/11900),(5150/11900)]))*2";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\6000.ogg",
					"db-5",
					1,
					420
				};
				frequency="0.95 + ((rpm/11900) factor[(5100/11900),(6900/11900)])*0.15";
				volume="engineOn*camPos*(((rpm/11900) factor[(5100/11900),(6100/11900)])* ((rpm/11900) factor[(5700/11900),(5400/11900)]))*2";
			};
			class Engine6_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\7000.ogg",
					"db-13",
					1,
					150
				};
				frequency="0.9 + ((rpm/11900) factor[(5400/11900),(6150/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(5400/11900),(5700/11900)])* ((rpm/11900) factor[(6100/11900),(5900/11900)]))*2";
			};
			class Engine7_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\8000.ogg",
					"db-11",
					1,
					200
				};
				frequency="0.8 + ((rpm/11900) factor[(5900/11900),(7100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(5870/11900),(6100/11900)])* ((rpm/11900) factor[(7100/11900),(6300/11900)]))*2";
			};
			class Engine8_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\9000.ogg",
					"db-9",
					1,
					240
				};
				frequency="0.8 + ((rpm/11900) factor[(6300/11900),(8100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(6250/11900),(7050/11900)])* ((rpm/11900) factor[(8100/11900),(7300/11900)]))*2";
			};
			class Engine9_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\10000.ogg",
					"db-8",
					1,
					280
				};
				frequency="0.8 + ((rpm/11900) factor[(7200/11900),(9100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(7250/11900),(8050/11900)])* ((rpm/11900) factor[(9100/11900),(8300/11900)]))*2";
			};
			class Engine10_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\11000.ogg",
					"db-7",
					1,
					320
				};
				frequency="0.8 + ((rpm/11900) factor[(8300/11900),(9900/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(8250/11900),(9050/11900)])* ((rpm/11900) factor[(9870/11900),(9200/11900)]))*2";
			};
			class Engine11_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\12000.ogg",
					"db-6",
					1,
					360
				};
				frequency="0.8 + ((rpm/11900) factor[(9200/11900),(11200/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(9150/11900),(9800/11900)])* ((rpm/11900) factor[(9150/11900),(10150/11900)]))*2";
			};
			class Engine12_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\13000.ogg",
					"db-5",
					1,
					420
				};
				frequency="0.95 + ((rpm/11900) factor[(10100/11900),(11900/11900)])*0.15";
				volume="engineOn*camPos*((rpm/11900) factor[(10100/11900),(11100/11900)])*2";
			};
			class Idle_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\Idle.ogg",
					"db-15",
					1
				};
				frequency="0.9 + ((rpm/11900) factor[(400/11900),(1150/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(400/11900),(700/11900)])* ((rpm/11900) factor[(1100/11900),(900/11900)]))*2";
			};
			class Engine_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\1000.ogg",
					"db-14",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(900/11900),(2100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(870/11900),(1100/11900)])* ((rpm/11900) factor[(2100/11900),(1300/11900)]))*2";
			};
			class Engine1_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\2000.ogg",
					"db-12",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(1300/11900),(3100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(1250/11900),(2050/11900)])* ((rpm/11900) factor[(3100/11900),(2300/11900)]))*2";
			};
			class Engine2_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\3000.ogg",
					"db-11",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(2200/11900),(4100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(2250/11900),(3050/11900)])* ((rpm/11900) factor[(4100/11900),(3300/11900)]))*2";
			};
			class Engine3_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\4000.ogg",
					"db-10",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(3300/11900),(4900/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(3250/11900),(4050/11900)])* ((rpm/11900) factor[(4870/11900),(4200/11900)]))*2";
			};
			class Engine4_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\5000.ogg",
					"db-9",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(4200/11900),(6200/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(4150/11900),(4800/11900)])* ((rpm/11900) factor[(6150/11900),(5150/11900)]))*2";
			};
			class Engine5_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\6000.ogg",
					"db-6",
					1
				};
				frequency="0.95 + ((rpm/11900) factor[(5100/11900),(6900/11900)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(5100/11900),(6100/11900)])* ((rpm/11900) factor[(5700/11900),(5400/11900)]))*2";
			};
			class Engine6_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\7000.ogg",
					"db-15",
					1
				};
				frequency="0.9 + ((rpm/11900) factor[(5400/11900),(6150/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(5400/11900),(5700/11900)])* ((rpm/11900) factor[(6100/11900),(5900/11900)]))*2";
			};
			class Engine7_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\8000.ogg",
					"db-14",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(5900/11900),(7100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(5870/11900),(6100/11900)])* ((rpm/11900) factor[(7100/11900),(6300/11900)]))*2";
			};
			class Engine8_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\9000.ogg",
					"db-12",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(6300/11900),(8100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(6250/11900),(7050/11900)])* ((rpm/11900) factor[(8100/11900),(7300/11900)]))*2";
			};
			class Engine9_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\10000.ogg",
					"db-11",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(7200/11900),(9100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(7250/11900),(8050/11900)])* ((rpm/11900) factor[(9100/11900),(8300/11900)]))*2";
			};
			class Engine10_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\11000.ogg",
					"db-10",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(8300/11900),(9900/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(8250/11900),(9050/11900)])* ((rpm/11900) factor[(9870/11900),(9200/11900)]))*2";
			};
			class Engine11_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\12000.ogg",
					"db-9",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(9200/11900),(11200/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(9150/11900),(9800/11900)])* ((rpm/11900) factor[(9150/11900),(10150/11900)]))*2";
			};
			class Engine12_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\13000.ogg",
					"db-6",
					1
				};
				frequency="0.95 + ((rpm/11900) factor[(10100/11900),(11900/11900)])*0.15";
				volume="engineOn*(1-camPos)*((rpm/11900) factor[(10100/11900),(11100/11900)])*2";
			};

			/*----------------------------------*/
	        /*-----------  TIRES EXT ---------*/
	        /*----------------------------------*/

	        class TiresRockOut
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1", db-6, 1.0, 60};
		        frequency = "1";
		        volume = "camPos*rock*(speed factor[2, 20])";
	        };
	        class TiresSandOut
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1", db-6, 1.0, 60};
		        frequency = "1";
		        volume = "camPos*sand*(speed factor[2, 20])";
	        };
	        class TiresGrassOut
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2", db-6, 1.0, 60};
		        frequency = "1";
		        volume = "camPos*grass*(speed factor[2, 20])";
	        };
	        class TiresMudOut
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2", db-6, 1.0, 60};
		        frequency = "1";
		        volume = "camPos*mud*(speed factor[2, 20])";
	        };
	        class TiresGravelOut
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1", db-6, 1.0, 60};
		        frequency = "1";
		        volume = "camPos*gravel*(speed factor[2, 20])";
	        };
	        class TiresAsphaltOut
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2", db-6, 1.0, 60};
		        frequency = "1";
		        volume = "camPos*asphalt*(speed factor[2, 20])";
	        };
	        class NoiseOut
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3", db-8, 1.0, 90};
		        frequency = "1";
		        volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
	        };

	        /*----------------------------------*/
	        /*-----------  TIRES INT ---------*/
	        /*----------------------------------*/

	        class TiresRockIn
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1", db-6, 1.0};
		        frequency = "1";
		        volume = "(1-camPos)*rock*(speed factor[2, 20])";
	        };
	        class TiresSandIn
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2", db-6, 1.0};
		        frequency = "1";
		        volume = "(1-camPos)*sand*(speed factor[2, 20])";
	        };
	        class TiresGrassIn
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2", db-6, 1.0};
		        frequency = "1";
		        volume = "(1-camPos)*grass*(speed factor[2, 20])";
	        };
	        class TiresMudIn
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2", db-6, 1.0};
		        frequency = "1";
		        volume = "(1-camPos)*mud*(speed factor[2, 20])";
	        };
	        class TiresGravelIn
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1", db-6, 1.0};
		        frequency = "1";
		        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
	        };
	        class TiresAsphaltIn
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2", db-6, 1.0};
		        frequency = "1";
		        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
	        };
	        class NoiseIn
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", db-12, 1.0};
		        frequency = "1";
		        volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)"; //Definition of inside sounds
	        };

	        /*------------------------------------------------------------------*/
	        /*-------------- external sounds for screeching tires on the road -------------*/
	        /*------------------------------------------------------------------*/

	        /* sounds on the road */

	        class breaking_ext_road
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04", db-3, 1, 80};
		        frequency	=	1;
		        volume = engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
	        };

	        class acceleration_ext_road
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
		        frequency	=	1;
		        volume = engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2]);
	        };
	        class turn_left_ext_road
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
		        frequency	=	1;
		        volume = engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15]);
	        };

	        class turn_right_ext_road
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
		        frequency	=	1;
		        volume = engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
	        };

	        /*-----------------------------------------------------------------*/
	        /* external sounds for screeching tires on other surfaces  */
	        /*-----------------------------------------------------------------*/

	        class breaking_ext_dirt
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking", db-3, 1, 60};
		        frequency	=	1;
		        volume = engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15]);
	        };
	        class acceleration_ext_dirt
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration", db-3,	1, 60};
		        frequency	=	1;
		        volume = engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1]);
	        };
	        class turn_left_ext_dirt
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", db-3, 1, 60};
		        frequency	=	1;
		        volume = engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15]);
	        };
	        class turn_right_ext_dirt
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", db-3, 1, 60};
		        frequency	=	1;
		        volume = engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15]);
	        };


	        /*---------------------------------------------------------------------------*/
	        /*-------------- internal sounds for screeching tires on the road --------------*/
	        /*---------------------------------------------------------------------------*/

	        class breaking_int_road
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", db-10, 1};
		        frequency	=	1;
		        volume = engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
	        };
	        class acceleration_int_road
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
		        frequency	=	1;
		        volume = engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2]);
	        };
	        class turn_left_int_road
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
		        frequency	=	1;
		        volume = engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15]);
	        };
	        class turn_right_int_road
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
		        frequency	=	1;
		        volume = engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
	        };

	        /*--------------------------------------------------------------------------------------------*/
	        /*-------------- internal sounds for screeching tires on other surfaces -------------*/
	        /*--------------------------------------------------------------------------------------------*/
	        class breaking_int_dirt
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int", db-10, 1};
		        frequency	=	1;
		        volume = engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15]);
	        };
	        class acceleration_int_dirt
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int", db-10, 1};
		        frequency	=	1;
		        volume = engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2]);
	        };
	        class turn_left_int_dirt
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", db-10,	1};
		        frequency	=	1;
		        volume = engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15]);
	        };
	        class turn_right_int_dirt
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", db-10,	1};
		        frequency	=	1;
		        volume = engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
	        };

		};
	};
	class A3FL_Explorer_Platinum_PD_20: A3FL_Explorer_Platinum_20
	{
		author="Danny Indelicato & Henry Indelicato";
		displayName="2020 Ford Explorer PD";
		class Library
		{
			libTextDesc="2020 Ford Explorer PD";
		};
		fuelCapacity=35;
		transportSoldier=3;
		maxSpeed=276;
		enginePower=360;
		peakTorque=528;
		model="\A3FL_Cars2\A3FL_Explorer_20\A3FL_Explorer_Platinum_PD_20";
		driverLeftHandAnimName = "steering_wheel";
		driverAction = "A3FL_DriverExplorer19";
		cargoAction[] = {"A3FL_PassangerExplorer19","A3FL_PassangerExplorer19","A3FL_PassangerExplorer19","A3FL_PassangerExplorer19","A3FL_PassangerExplorer19"};
		
		hiddenSelections[]={"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","spd1","spd2","spd3","spd4","spd5","spd6","spd7","spd8","spd9","glass1","glass2","glass3","glass4","glass5","glass6"};
		hiddenSelectionsTextures[]=
		{
			"\A3PL_Textures\Explorer\FISD\FISD_Explorer20_Patrol.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)"
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
			class Transport_Addon
			{
				initPhase=0;
				displayName="Cage";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
			class Floor_Addon
			{
				initPhase=0;
				displayName="Steel trunk floor";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
			class Gunsafe_Addon
			{
				initPhase=0;
				displayName="Gun safe";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
			class Antennas
			{
				initPhase=1;
				displayName="Antennas";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
		};
	};
	class A3FL_Explorer_PD_K9_20: A3FL_Explorer_Platinum_20
	{
		author="Anton (Steam: kilhunter2013), Danny Indelicato & Henry Indelicato";
		displayName="2020 Ford Explorer PD K9";
		class Library
		{
			libTextDesc="2020 Ford Explorer PD K9";
		};
		fuelCapacity=35;
		transportSoldier=2;
		model="\A3FL_Cars2\A3FL_Explorer_20\A3FL_Explorer_Platinum_PD_K9_20";
		driverLeftHandAnimName = "steering_wheel";
		driverAction = "A3FL_DriverExplorer19";
		cargoAction[] = {"A3FL_PassangerExplorer19","A3FL_PassangerExplorer19","A3FL_PassangerExplorer19","A3FL_PassangerExplorer19","A3FL_PassangerExplorer19"};
		hiddenSelections[]={"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","spd1","spd2","spd3","spd4","spd5","spd6","spd7","spd8","spd9","glass1","glass2","glass3","glass4","glass5","glass6"};
		hiddenSelectionsTextures[]=
		{
			"\A3PL_Textures\Explorer\FISD\FISD_Explorer20_K9.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)"
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
			class Floor_Addon
			{
				initPhase=0;
				displayName="Steel trunk floor";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
			class Gunsafe_Addon
			{
				initPhase=0;
				displayName="Gun safe";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=0;
				forceAnimate[]={};
			};
			class Antennas
			{
				initPhase=1;
				displayName="Antennas";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=0;
				forceAnimate[]={};
			};
		};
	};
	class A3FL_Explorer_Platinum_PD_Slicktop_20: A3FL_Explorer_Platinum_20
	{
		author="Danny Indelicato & Henry Indelicato";
		displayName="2020 Ford Explorer PD ST";
		class Library
		{
			libTextDesc="2020 Ford Explorer PD ST";
		};
		fuelCapacity=35;
		transportSoldier=3;
		model="\A3FL_Cars2\A3FL_Explorer_20\A3FL_Explorer_Platinum_PD_Slicktop_20";
		driverLeftHandAnimName = "steering_wheel";
		driverAction = "A3FL_DriverExplorer19";
		cargoAction[] = {"A3FL_PassangerExplorer19","A3FL_PassangerExplorer19","A3FL_PassangerExplorer19","A3FL_PassangerExplorer19","A3FL_PassangerExplorer19"};
		hiddenSelections[]={"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","spd1","spd2","spd3","spd4","spd5","spd6","spd7","spd8","spd9","glass1","glass2","glass3","glass4","glass5","glass6"};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0,0,0,1.0,co)",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"A3FL_Cars\common\textures\numbers\a0.paa",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)"
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
			class Floor_Addon
			{
				initPhase=0;
				displayName="Steel trunk floor";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
			class Gunsafe_Addon
			{
				initPhase=0;
				displayName="Gun safe";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
		};
	};
	class A3FL_Explorer_Platinum_FD_20: A3FL_Explorer_Platinum_20
	{
		author="Danny Indelicato & Henry Indelicato";
		displayName="2020 Ford Explorer FD";
		class Library
		{
			libTextDesc="2020 Ford Explorer FD";
		};
		fuelCapacity=35;
		transportSoldier=3;
		model="\A3FL_Cars2\A3FL_Explorer_20\A3FL_Explorer_Platinum_FD_20";
		driverLeftHandAnimName = "steering_wheel";
		driverAction = "A3FL_DriverExplorer19";
		cargoAction[] = {"A3FL_PassangerExplorer19","A3FL_PassangerExplorer19","A3FL_PassangerExplorer19","A3FL_PassangerExplorer19","A3FL_PassangerExplorer19"};
		hiddenSelections[]=
		{
			"Body",
			"Lett_1",
			"Lett_2",
			"Lett_3",
			"num_1",
			"num_2",
			"num_3",
			"num_4",
			"glass1",
			"glass2",
			"glass3",
			"glass4",
			"glass5",
			"glass6"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3PL_Textures\Explorer\FIFR\FIFR_Explorer_BattChief.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)",
			"#(argb,8,8,3)color(0,0,0,0.8,ca)"
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
			class rota1
			{
				color[]={2500,0,0};
				ambient[]={255,0,0};
				position="rota1_start";
				direction="rota1_end";
				hitpoint="Light_L";
				selection="rota1";
				size=0.75;
				innerAngle=30;
				outerAngle=60;
				coneFadeCoef=0.75;
				intensity=1.5;
				useFlare=1;
				dayLight=1;
				flareSize=0.5;
				flareMaxDistance=50;
				class Attenuation
				{
					start=0.5;
					constant=0;
					linear=0;
					quadratic=0;
					hardLimitStart=5;
					hardLimitEnd=15;
				};
			};
			class rota2: rota1
			{
				color[]={2500,0,0};
				ambient[]={255,0,0};
				position="rota2_start";
				direction="rota2_end";
				selection="rota2";
			};
			class rota3: rota1
			{
				color[]={2500,2500,2500};
				ambient[]={255,255,255};
				position="rota3_start";
				direction="rota3_end";
				selection="rota3";
			};
			class rota4: rota1
			{
				color[]={2500,0,0};
				ambient[]={255,0,0};
				position="rota4_start";
				direction="rota4_end";
				selection="rota4";
			};
			class rota5: rota1
			{
				color[]={2500,2500,2500};
				ambient[]={255,255,255};
				position="rota5_start";
				direction="rota5_end";
				selection="rota5";
			};
			class rota6: rota1
			{
				color[]={2500,0,0};
				ambient[]={255,0,0};
				position="rota6_start";
				direction="rota6_end";
				selection="rota6";
			};
			class rota7: rota1
			{
				color[]={2500,0,0};
				ambient[]={255,0,0};
				position="rota7_start";
				direction="rota7_end";
				selection="rota7";
			};
		};
		class AnimationSources: AnimationSources
		{
			class Common
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
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
			class Spotlight: Common
			{
			};
			class Lightbar: Common
			{
			};
			class Spotlight_Addon
			{
				initPhase=0;
				displayName="Spotlight";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=0;
				forceAnimate[]={};
			};
			class Antennas
			{
				initPhase=1;
				displayName="Antennas";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
			class Floor_Addon
			{
				initPhase=0;
				displayName="Steel trunk floor";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
			class Gunsafe_Addon
			{
				initPhase=0;
				displayName="Equipment Drawer";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
		};
	};
};