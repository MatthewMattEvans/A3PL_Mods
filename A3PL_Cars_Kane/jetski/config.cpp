class CfgPatches
{
	class A3PL_Cars_Kane_Jetski
	{
		addonRootClass="A3_Boat_F_Exp";
		requiredAddons[]=
		{
			"A3_Boat_F_Exp",
			"A3_Boat_F_Exp_Scooter_Transport_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"C_Scooter_Transport_01_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Boat_F;
	class Rubber_duck_base_F: Boat_F
	{
		class EventHandlers;
		class ViewPilot;
	};
	class Scooter_Transport_01_base_F: Rubber_duck_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=4;
		_generalMacro="Scooter_Transport_01_base_F";
		scope=0;
		scopeCurator=0;
		displayName="$STR_A3_CfgVehicles_Scooter_Transport_01_base_F0";
		overviewPicture="\A3\Data_F_Exp\Images\VehicleWaterScooter_ca.paa";
		model="\A3PL_Cars_Kane\jetski\Scooter_Transport_01_F.p3d";
		picture="\A3\Boat_F_Exp\Scooter_Transport_01\Data\UI\Scooter_Transport_01_CA.paa";
		DLC="Expansion";
		class Library
		{
			libTextDesc="$STR_A3_CfgVehicles_Scooter_Transport_01_base_F_Library0";
		};
		editorSubcategory="EdSubcat_Boats";
		extCameraPosition[]={0,1,-6};
		class ViewPilot: ViewPilot
		{
			initAngleX=-13;
		};
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		memoryPointTaskMarker="TaskMarker_1_pos";
		leftWaterEffect="LWaterEffectsScooter";
		rightWaterEffect="RWaterEffectsScooter";
		leftEngineEffect="LEngEffectsScooter";
		rightEngineEffect="REngEffectsScooter";
		leftFastWaterEffect="LFastWaterEffectsScooter";
		rightFastWaterEffect="RFastWaterEffectsScooter";
		waterEffectSpeed=5;
		engineEffectSpeed=5;
		waterFastEffectSpeed=28;
		ejectDeadCargo=1;
		ejectDeadDriver=0;
		driverAction="driver_scooter_01";
		cargoAction[]=
		{
			"passenger_scooter_01",
			"passenger_scooter_02"
		};
		driverLeftHandAnimName="DrivingWheel";
		driverRightHandAnimName="DrivingWheel";
		transportSoldier=2;
		armor=15;
		crewCrashProtection=0.64999998;
		epeImpulseDamageCoef=24;
		class Turrets
		{
		};
		maxSpeed=85;
		simulation="shipX";
		overSpeedBrakeCoef=0.5;
		enginePower=68.5;
		engineShiftY=0.0049999999;
		waterLeakiness=0.5;
		waterResistanceCoef=0.0044999998;
		thrustDelay=0.5;
		waterLinearDampingCoefY=3;
		waterLinearDampingCoefX=5;
		waterAngularDampingCoef=2.3;
		rudderForceCoef=0.079999998;
		rudderForceCoefAtMaxSpeed=0.00019999999;
		torqueCurve[]=
		{
			{0,0},
			{0.26499999,0.60000002},
			{0.417,0.80000001},
			{0.66299999,0.98199999},
			{0.75800002,1},
			{0.85000002,0.93000001},
			{0.92500001,0.80699998},
			{1,0.60000002}
		};
		class ComplexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-14.5,
				"N",
				0,
				"D1",
				1.9,
				"D2",
				1.6,
				"D3",
				1.4,
				"D4",
				1.1
			};
			TransmissionRatios[]=
			{
				"High",
				1
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		class RenderTargets
		{
			class mirrorL
			{
				renderTarget="rendertarget0";
				class mirror
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.5;
				};
			};
		};
		attenuationEffectType="OpenCarAttenuation";
		insideSoundCoef=0.5;
		soundEngineOnInt[]=
		{
			"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_01_start",
			1,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_01_start",
			1,
			1,
			150
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_01_stop",
			0.63095737,
			0.89999998
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_01_stop",
			0.63095737,
			0.89999998,
			150
		};
		buildCrash0[]=
		{
			"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_building_01",
			1.7782794,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_building_02",
			1.7782794,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_building_03",
			1.7782794,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.33000001,
			"buildCrash1",
			0.33000001,
			"buildCrash2",
			0.34
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_wood_01",
			1.7782794,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_wood_02",
			1.7782794,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_wood_03",
			1.7782794,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.33000001,
			"woodCrash1",
			0.33000001,
			"woodCrash2",
			0.34
		};
		ArmorCrash0[]=
		{
			"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_armor_01",
			1.7782794,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_armor_02",
			1.7782794,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_armor_03",
			1.7782794,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.33000001,
			"ArmorCrash1",
			0.33000001,
			"ArmorCrash2",
			0.34
		};
		soundGeneralCollision1[]=
		{
			"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_armor_01",
			1.7782794,
			1,
			200
		};
		soundGeneralCollision2[]=
		{
			"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_armor_02",
			1.7782794,
			1,
			200
		};
		soundGeneralCollision3[]=
		{
			"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_crash_armor_03",
			1.7782794,
			1,
			200
		};
		soundCrashes[]=
		{
			"soundGeneralCollision1",
			0.33000001,
			"soundGeneralCollision2",
			0.33000001,
			"soundGeneralCollision3",
			0.34
		};
		class Sounds
		{
			class IdleOut
			{
				sound[]=
				{
					"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_01_idle",
					0.63095737,
					1,
					150
				};
				frequency="0.95 + ((rpm/ 1200) factor[(100/ 1200),(200/ 1200)])*0.15";
				volume="engineOn*(((rpm/ 1200) factor[(0/ 1200),(30/ 1200)]) * ((rpm/ 1200) factor[(500/ 1200),(300/ 1200)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_01_low",
					0.63095737,
					1.1,
					300
				};
				frequency="0.95 + ((rpm/ 1200) factor[(300/ 1200),(600/ 1200)])*0.2";
				volume="engineOn*(((rpm/ 1200) factor[(200/ 1200),(300/ 1200)]) * ((rpm/ 1200) factor[(600/ 1200),(400/ 1200)]))";
			};
			class EngineMidOut
			{
				sound[]=
				{
					"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_01_mid",
					0.89125091,
					0.60000002,
					400
				};
				frequency="0.95 + ((rpm/ 1200) factor[(600/ 1200),(900/ 1200)])*0.2";
				volume="engineOn*(((rpm/ 1200) factor[(350/ 1200),(500/ 1200)]) * ((rpm/ 1200) factor[(1200/ 1200),(900/ 1200)]))";
			};
			class EngineMaxOut
			{
				sound[]=
				{
					"A3\Sounds_F_Exp\vehicles\boat\Water_Scooter\WaterScooter_01_high",
					1.2589254,
					1,
					500
				};
				frequency="0.95 + ((rpm/ 1200) factor[(700/ 1200),(1000/ 1200)])*0.3";
				volume="engineOn*((rpm/ 1200) factor[(600/ 1200),(1200/ 1200)])";
			};
			class WaternoiseOutW0
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",
					1,
					1.1,
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
					1.1,
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
					1.1,
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
					1.1,
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
					1.1,
					100
				};
				frequency=1;
				volume="(scrubLand factor[0.01, 0.20])";
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
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01.rvmat",
				"A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_damage.rvmat",
				"A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_destruct.rvmat",
				"A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Pilot.rvmat",
				"A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Pilot_damage.rvmat",
				"A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Pilot_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		class TextureSources
		{
			class White
			{
				displayName="$STR_A3_TEXTURESOURCES_WHITE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa",
					"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
				};
			};
			class Black
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa",
					"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"
				};
			};
			class Blue
			{
				displayName="$STR_A3_TEXTURESOURCES_BLUE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa",
					"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"
				};
			};
			class Grey
			{
				displayName="$STR_A3_TEXTURESOURCES_GREY0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa",
					"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"
				};
			};
			class Lime
			{
				displayName="$STR_A3_TEXTURESOURCES_GREEN0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa",
					"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"
				};
			};
			class Red
			{
				displayName="$STR_A3_TEXTURESOURCES_RED0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa",
					"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
				};
			};
			class Yellow
			{
				displayName="$STR_A3_TEXTURESOURCES_YELLOW0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa",
					"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"
				};
			};
		};
		textureList[]=
		{
			"White",
			1,
			"Black",
			1,
			"Blue",
			1,
			"Grey",
			1,
			"Lime",
			1,
			"Red",
			1,
			"Yellow",
			1
		};
	};
	class C_Scooter_Transport_01_F: Scooter_Transport_01_base_F
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
					"damage_unhide",
					0
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"nuzzle",
					0
				},
				
				{
					"rpm",
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
			verticalOffset=1.388;
			verticalOffsetWorld=-0.48800001;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\C_Scooter_Transport_01_F.jpg";
		_generalMacro="C_Scooter_Transport_01_F";
		scope=2;
		scopeCurator=2;
		DLC="Expansion";
		side=3;
		faction="CIV_F";
		crew="C_man_sport_1_F_tanoan";
		typicalCargo[]=
		{
			"C_man_sport_1_F_tanoan"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa",
			"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
		};
	};
};
