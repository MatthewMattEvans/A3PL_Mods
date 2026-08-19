class CfgPatches
{
	class A3PL_Silverado
	{
		units[]=
		{
			"A3PL_Silverado"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3PL_Cars",
			"A3_Soft_F"
		};
	};
};
class CfgVehicles
{
	class Hatchback_01_sport_base_F;
	class A3PL_Car_Base: Hatchback_01_sport_base_F
	{
		class Sounds;
		class AnimationSources
		{
			class Mods;
		};
		class Reflectors
		{
			class LightCarHeadL01;
			class LightCarHeadR01;
			class LightCarHeadL02;
			class LightCarHeadR02;
		};
	};
	class A3PL_Silverado: A3PL_Car_Base
	{
		author="Jonzie & Danny Indelicato & Henry Indelicato & Marshall Johns ECLIPSE ROLEPLAY";
		displayName="2010 Chevrolet Silverado";
		class Library
		{
			libTextDesc="2010 Chevrolet Silverado 1500 Extended Cab";
		};
		fuelCapacity=20.42;
		transportSoldier=4;
		differentialType="all_limited";
		model="\A3PL_Cars2\A3PL_Silverado\A3PL_Silverado";
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
			"#(argb,8,8,3)color(0,0,0,1.0,CO)",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)"
		};
		tf_isolatedAmount=0.2;
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;
		maxSpeed=250;
		enginePower=403;
		peakTorque=434;
		redRpm=6000;
		turnCoef=3;
		cargoAction[]=
		{
			"passenger_low01",
			"A3PL_Passenger_Rear",
			"A3PL_Passenger_Rear",
			"A3PL_Passenger_Rear"
		};
		wheelDestroyRadiusCoef=0.75;
		terrainCoef=3;
		extCameraPosition[]={0,0.89999998,-6.5};
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
		htMax=2724;
		class AnimationSources: AnimationSources
		{
			class Bed_Cover
			{
				initPhase=0;
				displayName="Bed Cover";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
			class Toolbox: Bed_Cover
			{
				initPhase=0;
				displayName="Toolbox";
				forceAnimate[]={};
			};
		};
		class PlayerSteeringCoefficients
		{
			turnIncreaseConst=0.5;
			turnIncreaseLinear=1;
			turnIncreaseTime=1;
			turnDecreaseConst=5;
			turnDecreaseLinear=3;
			turnDecreaseTime=0;
			maxTurnHundred=0.69999999;
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
		class Sounds: Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_Silverado\sounds\Idle.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\1000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\2000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\3000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\4000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\5000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\6000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\7000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\8000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\9000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\10000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\11000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\12000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\13000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\Idle.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\1000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\2000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\3000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\4000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\5000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\6000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\7000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\8000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\9000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\10000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\11000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\12000.ogg",
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
					"\A3PL_Cars2\A3PL_Silverado\sounds\13000.ogg",
					"db-6",
					1
				};
				frequency="0.95 + ((rpm/11900) factor[(10100/11900),(11900/11900)])*0.15";
				volume="engineOn*(1-camPos)*((rpm/11900) factor[(10100/11900),(11100/11900)])*1";
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
	};
	class A3PL_Silverado_PD: A3PL_Silverado
	{
		displayName="2010 Chevrolet Silverado PD";
		model="\A3PL_Cars2\A3PL_Silverado\A3PL_Silverado_PD";
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
			"spd1",
			"spd2",
			"spd3",
			"spd4",
			"spd5",
			"spd6",
			"spd7",
			"spd8",
			"spd9"
		};
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
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa"
		};
		maxSpeed=250;
		enginePower=483.60001;
		peakTorque=520.79999;
		class AnimationSources: AnimationSources
		{
			class Common
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Lightbar: Common
			{
			};
			class Directional_R: Common
			{
			};
			class Directional_S: Common
			{
			};
			class Directional_F: Common
			{
			};
			class Directional_L: Common
			{
			};
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
			class Spotlight: Common
			{
			};
			class Pushbar_Addon
			{
				initPhase=1;
				source="user";
				animPeriod=0.001;
				forceAnimate[]={};
			};
			class Spotlight_Addon: Pushbar_Addon
			{
			};
			class devider_addon: Pushbar_Addon
			{
			};
			class spotlight_rotate: Common
			{
			};
		};
		class Reflectors: Reflectors
		{
			class LightCarHeadL01: LightCarHeadL01
			{
			};
			class LightCarHeadR01: LightCarHeadR01
			{
			};
			class LightCarHeadL02: LightCarHeadL02
			{
			};
			class LightCarHeadR02: LightCarHeadR02
			{
			};
			class Spotlight
			{
				color[]={120,120,120};
				ambient[]={100,100,100};
				position="Spotlight_pos";
				direction="Spotlight_dir";
				hitpoint="Spotlight_Hit";
				selection="Spotlight";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=2;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=2;
					constant=0;
					linear=0.1;
					quadratic=0.0099999998;
					hardLimitStart=490;
					hardLimitEnd=550;
				};
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
		aggregateReflectors[]=
		{
			
			{
				"LightCarHeadL01",
				"LightCarHeadR01"
			},
			
			{
				"LightCarHeadL02",
				"LightCarHeadR02"
			},
			
			{
				"Lightbar1_1",
				"Lightbar1_2",
				"Lightbar1_3",
				"Lightbar1_4",
				"Lightbar1_5",
				"Lightbar1_6",
				"Lightbar1_7",
				"Lightbar1_8"
			},
			
			{
				"Lightbar2_1",
				"Lightbar2_2",
				"Lightbar2_3",
				"Lightbar2_4",
				"Lightbar2_5",
				"Lightbar2_6",
				"Lightbar2_7",
				"Lightbar2_8"
			},
			
			{
				"AUX_Light1_1",
				"AUX_Light1_2",
				"AUX_Light1_3",
				"AUX_Light1_4",
				"AUX_Light1_5",
				"AUX_Light1_6",
				"AUX_Light1_7",
				"AUX_Light1_8",
				"AUX_Light1_9",
				"AUX_Light1_10",
				"AUX_Light1_11",
				"AUX_Light1_12"
			},
			
			{
				"AUX_Light2_1",
				"AUX_Light2_2",
				"AUX_Light2_3",
				"AUX_Light2_4",
				"AUX_Light2_5",
				"AUX_Light2_6",
				"AUX_Light2_7",
				"AUX_Light2_8",
				"AUX_Light2_9",
				"AUX_Light2_10",
				"AUX_Light2_11",
				"AUX_Light2_12"
			}
		};
		class MarkerLights
		{
			class Lightbar1
			{
				color[]={0,0,0,0};
				ambient[]={0,0,0};
				name="Lightbar1_pos";
				blinkingPattern[]={0.079999998,0.079999998,0.079999998,0.079999998,0.079999998,0.079999998,0.079999998,0.079999998,0.63999999};
				blinking=1;
				blinkingStartsOn=0;
				blinkingPatternGuarantee=1;
				intensity=0;
				activeLight=0;
				drawLight=0;
				drawLightSize=0;
				drawLightCenterSize=0;
				dayLight=0;
				useFlare=0;
				flareSize=0;
				flareMaxDistance=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0;
					quadratic=0;
					hardLimitStart=0;
					hardLimitEnd=0;
				};
			};
			class Lightbar2: Lightbar1
			{
				name="Lightbar2_pos";
				blinkingPattern[]={0.63999999,0.079999998,0.079999998,0.079999998,0.079999998,0.079999998,0.079999998,0.079999998,0.079999998};
			};
			class DirectL1: Lightbar1
			{
				name="DirectL1_pos";
				blinkingPattern[]={0.80000001,0.1};
				useFlare=1;
				flareSize=1;
				color[]={0.30000001,0.1,0,1};
			};
			class DirectL2: DirectL1
			{
				name="DirectL2_pos";
				blinkingPattern[]={0.69999999,0.2};
			};
			class DirectL3: DirectL1
			{
				name="DirectL3_pos";
				blinkingPattern[]={0.60000002,0.30000001};
			};
			class DirectL4: DirectL1
			{
				name="DirectL4_pos";
				blinkingPattern[]={0.5,0.40000001};
			};
			class DirectL5: DirectL1
			{
				name="DirectL5_pos";
				blinkingPattern[]={0.40000001,0.5};
			};
			class DirectL6: DirectL1
			{
				name="DirectL6_pos";
				blinkingPattern[]={0.30000001,0.60000002};
			};
			class DirectL7: DirectL1
			{
				name="DirectL7_pos";
				blinkingPattern[]={0.2,0.69999999};
			};
			class DirectL8: DirectL1
			{
				name="DirectL8_pos";
				blinkingPattern[]={0.1,0.80000001};
			};
			class DirectR1: DirectL1
			{
				name="DirectR1_pos";
				blinkingPattern[]={0.1,0.80000001};
			};
			class DirectR2: DirectL1
			{
				name="DirectR2_pos";
				blinkingPattern[]={0.2,0.69999999};
			};
			class DirectR3: DirectL1
			{
				name="DirectR3_pos";
				blinkingPattern[]={0.30000001,0.60000002};
			};
			class DirectR4: DirectL1
			{
				name="DirectR4_pos";
				blinkingPattern[]={0.40000001,0.5};
			};
			class DirectR5: DirectL1
			{
				name="DirectR5_pos";
				blinkingPattern[]={0.5,0.40000001};
			};
			class DirectR6: DirectL1
			{
				name="DirectR6_pos";
				blinkingPattern[]={0.60000002,0.69999999};
			};
			class DirectR7: DirectL1
			{
				name="DirectR7_pos";
				blinkingPattern[]={0.80000001,0.1};
			};
			class DirectR8: DirectL1
			{
				name="DirectR8_pos";
				blinkingPattern[]={0.1,0.80000001};
			};
			class DirectS1: DirectL1
			{
				name="DirectS1_pos";
				blinkingPattern[]={0.80000001,0.2};
			};
			class DirectS2: DirectL1
			{
				name="DirectS2_pos";
				blinkingPattern[]={0.60000002,0.40000001};
			};
			class DirectS3: DirectL1
			{
				name="DirectS3_pos";
				blinkingPattern[]={0.40000001,0.60000002};
			};
			class DirectS4: DirectL1
			{
				name="DirectS4_pos";
				blinkingPattern[]={0.2,0.80000001};
			};
			class DirectS5: DirectL1
			{
				name="DirectS5_pos";
				blinkingPattern[]={0.2,0.80000001};
			};
			class DirectS6: DirectL1
			{
				name="DirectS6_pos";
				blinkingPattern[]={0.40000001,0.60000002};
			};
			class DirectS7: DirectL1
			{
				name="DirectS7_pos";
				blinkingPattern[]={0.60000002,0.40000001};
			};
			class DirectS8: DirectL1
			{
				name="DirectS8_pos";
				blinkingPattern[]={0.80000001,0.2};
			};
			class DirectF1: DirectL1
			{
				name="DirectF1_pos";
				blinkingPattern[]={0,0.16,0.16};
			};
			class DirectF2: DirectF1
			{
				name="DirectF2_pos";
				blinkingPattern[]={0.16,0.16,0};
			};
			class DirectF3: DirectF1
			{
				name="DirectF3_pos";
				blinkingPattern[]={0,0.16,0.16};
			};
			class DirectF4: DirectF1
			{
				name="DirectF4_pos";
				blinkingPattern[]={0.16,0.16,0};
			};
			class DirectF5: DirectF1
			{
				name="DirectF5_pos";
				blinkingPattern[]={0,0.16,0.16};
			};
			class DirectF6: DirectF1
			{
				name="DirectF6_pos";
				blinkingPattern[]={0.16,0.16,0};
			};
			class DirectF7: DirectF1
			{
				name="DirectF7_pos";
				blinkingPattern[]={0,0.16,0.16};
			};
			class DirectF8: DirectF1
			{
				name="DirectF8_pos";
				blinkingPattern[]={0.16,0.16,0};
			};
		};
	};
	class A3PL_Silverado_PD_ST: A3PL_Silverado_PD
	{
		model="\A3PL_Cars2\A3PL_Silverado\A3PL_Silverado_PD_ST";
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
			"spd1",
			"spd2",
			"spd3",
			"spd4",
			"spd5",
			"spd6",
			"spd7",
			"spd8",
			"spd9"
		};
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
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa"
		};
		displayName="2011 Silverado PD ST";
		class AnimationSources: AnimationSources
		{
			class Pushbar_Addon: Pushbar_Addon
			{
				initPhase=0;
			};
			class Spotlight_Addon: Spotlight_Addon
			{
				initPhase=0;
			};
			class devider_addon: Spotlight_Addon
			{
				initPhase=0;
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
			class Spotlight
			{
				color[]={120,120,120};
				ambient[]={100,100,100};
				position="Spotlight_pos";
				direction="Spotlight_dir";
				hitpoint="Spotlight_Hit";
				selection="Spotlight";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=2;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=2;
					constant=0;
					linear=0.1;
					quadratic=0.0099999998;
					hardLimitStart=490;
					hardLimitEnd=550;
				};
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
	class A3PL_Silverado_FD: A3PL_Silverado
	{
		displayName="2010 Chevrolet Silverado FD";
		model="\A3PL_Cars2\A3PL_Silverado\A3PL_Silverado_FD";
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
			"\A3PL_Textures\Silverado\FIFR\FIFR_Silverado_Command.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class AnimationSources: AnimationSources
		{
			class Pushbar_Addon: Bed_Cover
			{
				initPhase=1;
				displayName="Pushbar";
			};
			class Antenna: Bed_Cover
			{
				initPhase=1;
				displayName="Antenna";
			};
		};
		class Reflectors
		{
			delete Spotlight;
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
			class Blue
			{
				color[]={255,255,255};
				ambient[]={255,255,255};
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
	};
	class A3PL_Silverado_FD_Brush: A3PL_Silverado_FD
	{
		displayName="2010 Chevrolet Silverado Brush Truck";
		model="\A3PL_Cars2\A3PL_Silverado\A3PL_Silverado_FD_Brush";
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
			"ft_num_1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3PL_Cars2\A3PL_Silverado\data\Brush_tex\FIFR_SilveradoBrush.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class AnimationSources: AnimationSources
		{
			class Pushbar_Addon
			{
				initPhase=1;
				displayName="Pushbar";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
			};
			class Antenna: Pushbar_Addon
			{
				initPhase=1;
				displayName="Antenna";
			};
			class BT_Lever_2
			{
				initPhase=0;
				displayName="BT_Lever_2";
				source="user";
				animPeriod=2;
				forceAnimatePhase=0;
			};
			class BT_Lever_3
			{
				initPhase=0;
				displayName="BT_Lever_2";
				source="user";
				animPeriod=2;
				forceAnimatePhase=0;
			};
		};
		class TransportItems
		{
			class _xx_Helmet_Probationer
			{
				name="A3PL_FireHelmet_Probationer_New";
				count=1;
			};
			class _xx_Helmet_Firefighter
			{
				name="A3PL_FireHelmet_Firefighter_New";
				count=3;
			};
			class _xx_Helmet_Engineer
			{
				name="A3PL_FireHelmet_Engineer_New";
				count=1;
			};
			class _xx_Helmet_Lieutenant
			{
				name="A3PL_FireHelmet_Lieutenant_New";
				count=1;
			};
			class _xx_Helmet_Batt_1
			{
				name="A3PL_FireHelmet_Batt_1_New";
				count=1;
			};
			class _xx_Helmet_Batt_2
			{
				name="A3PL_FireHelmet_Batt_2_New";
				count=1;
			};
			class _xx_Helmet_Dep_Chief
			{
				name="A3PL_FireHelmet_Dep_Chief_New";
				count=1;
			};
			class _xx_Helmet_Chief
			{
				name="A3PL_FireHelmet_Chief_New";
				count=1;
			};
			class _xx_FireExtinguisher
			{
				name="A3PL_FireExtinguisher";
				count=4;
			};
			class _xx_FireExtinguisher_Mag
			{
				name="A3PL_Extinguisher_Water_Mag";
				count=4;
			};
			class _xx_FireAxe
			{
				name="A3PL_FireAxe";
				count=1;
			};
			class _xx_Jaws
			{
				name="A3PL_Jaws";
				count=1;
			};
			class _xx_Protective
			{
				name="A3PL_FD_Protective_Uniform";
				count=5;
			};
			class _xx_SCBA
			{
				name="A3PL_FD_Oxygen";
				count=5;
			};
			class _xx_Mask
			{
				name="A3PL_FD_Mask";
				count=5;
			};
			class _xx_Nozzle
			{
				name="A3PL_High_Pressure";
				count=5;
			};
		};
	};
	class A3PL_Silverado_ML: A3PL_Silverado
	{
		displayName="2010 Chevrolet Silverado MarkerLights";
		model="\A3PL_Cars2\A3PL_Silverado\A3PL_Silverado_ML";
		class Reflectors: Reflectors
		{
			class LightCarHeadL01: LightCarHeadL01
			{
			};
			class LightCarHeadR01: LightCarHeadR01
			{
			};
			class LightCarHeadL02: LightCarHeadL02
			{
			};
			class LightCarHeadR02: LightCarHeadR02
			{
			};
			class Yellow1
			{
				color[]={255,255,0};
				ambient[]={90,90,0};
				position="Lightbar1_6_pos";
				direction="Lightbar1_6_dir";
				hitpoint="";
				selection="Lightbar1_6";
				size=1;
				innerAngle=125;
				outerAngle=180;
				coneFadeCoef=2.5;
				intensity=1;
				useFlare=1;
				dayLight=1;
				flareSize=0;
				flareMaxDistance=5;
				class Attenuation
				{
					start=5;
					constant=3;
					linear=1.5;
					quadratic=1.5;
					hardLimitStart=15;
					hardLimitEnd=25;
				};
			};
			class Yellow2: Yellow1
			{
				color[]={255,255,0};
				ambient[]={90,90,0};
				position="Lightbar2_6_pos";
				direction="Lightbar2_6_dir";
				hitpoint="";
				selection="Lightbar2_6";
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
};
