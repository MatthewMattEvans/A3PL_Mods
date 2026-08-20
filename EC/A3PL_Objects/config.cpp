class CfgPatches
{
	class A3PL_Objects
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.2;
		requiredAddons[]=
		{
			"A3PL_Weapons"
		};
	};
};
class CfgVehicles
{
	class All;
	class ThingX;
	class C_Offroad_01_F;
	class A3PL_Ship_Base;
	class Land_BuoyBig_F;
	class Land_MetalBarrel_F;
	class Land_BarrelWater_grey_F;
	class Land_WaterBarrel_F;
	class Land_WaterTank_F;
	class House_F;
	class A3PL_Houses;
	class A3PL_Car_Base;
	class A3PL_Objects: ThingX
	{
		displayName="A3PL_Objects";
		vehicleclass="A3PL_Objects";
		model="";
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		author="A3PL Development Team";
		placement="vertical";
		armor=999999;
		picture="\A3PL_Characters\A3PL_Logo.paa";
		class AnimationSources
		{
			class Common
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Fuse: Common
			{
				animPeriod=4;
				sound="RocketFuse";
			};
			class door1: Common
			{
				animPeriod=1.5;
			};
			class door2: door1
			{
			};
			class WrenchRotation: Common
			{
				animPeriod=2;
			};
			class Switch1: Common
			{
				animPeriod=1;
			};
			class Switch2: Switch1
			{
			};
			class pump: Common
			{
				animPeriod=5;
			};
			class Spin: Common
			{
				animPeriod=5;
			};
			class Plant_Growth: Common
			{
				animPeriod=300;
			};
			class Plant_Growth_Marijuana: Common
			{
				animPeriod=900;
			};
			class LockedDoor_source: Common
			{
				animPeriod=0.1;
			};
			class Deploy_Stinger: Common
			{
				animPeriod=1;
			};
			class Door_1_handle_source: Common
			{
				animPeriod=1;
			};
			class Door_2_handle_source: Common
			{
				animPeriod=1;
			};
			class Tape_Unhide: Common
			{
			};
			class Cone_Hide: Common
			{
			};
			class Part_1_spin: Common
			{
			};
			class Part_2_spin: Common
			{
			};
			class Part_3_spin: Common
			{
			};
			class Part_4_spin: Common
			{
			};
			class Part_5_spin: Common
			{
			};
			class Part_6_spin: Common
			{
			};
			class Part_7_spin: Common
			{
			};
			class Part_8_spin: Common
			{
			};
			class Part_9_spin: Common
			{
			};
			class Part_10_spin: Common
			{
			};
			class Part_11_spin: Common
			{
			};
			class Part_12_spin: Common
			{
			};
			class Part_13_spin: Common
			{
			};
			class Part_14_spin: Common
			{
			};
			class Part_15_spin: Common
			{
			};
			class Part_16_spin: Common
			{
			};
			class Part_17_spin: Common
			{
			};
			class Part_18_spin: Common
			{
			};
			class Part_19_spin: Common
			{
			};
			class Part_20_spin: Common
			{
			};
			class door
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class GarageDoor
			{
				source="user";
				animPeriod=10;
				initPhase=0;
			};
			class garage: GarageDoor
			{
			};
			class garage1: GarageDoor
			{
			};
			class garage2: GarageDoor
			{
			};
			class storagedoor: GarageDoor
			{
			};
			class storagedoor2: GarageDoor
			{
			};
			class GarageDoor1: GarageDoor
			{
			};
			class GarageDoor2: GarageDoor
			{
			};
			class All_Lights: Common
			{
			};
			class Door_1: door
			{
			};
			class Door_2: door
			{
			};
			class Door_3: door
			{
			};
			class Door_4: door
			{
			};
			class Door_5: door
			{
			};
			class Door_6: door
			{
			};
			class Door_7: door
			{
			};
			class Door_8: door
			{
			};
			class Door_9: door
			{
			};
			class Door_10: door
			{
			};
			class Door_11: door
			{
			};
			class Door_12: door
			{
			};
			class Door_13: door
			{
			};
			class Door_14: door
			{
			};
			class Door_15: door
			{
			};
			class Door_16: door
			{
			};
			class Door_17: door
			{
			};
			class Door_18: door
			{
			};
			class Door_19: door
			{
			};
			class Door_20: door
			{
			};
			class Door_21: door
			{
			};
			class Door_22: door
			{
			};
			class Door_23: door
			{
			};
			class Door_24: door
			{
			};
			class Door_25: door
			{
			};
			class Door_26: door
			{
			};
			class Door_27: door
			{
			};
			class Door_28: door
			{
			};
			class Door_29: door
			{
			};
			class Door_30: door
			{
			};
			class Door_31: door
			{
			};
			class Door_32: door
			{
			};
			class Door_33: door
			{
			};
			class Door_34: door
			{
			};
			class Door_35: door
			{
			};
			class Door_36: door
			{
			};
			class Door_37: door
			{
			};
			class Door_38: door
			{
			};
			class Door_39: door
			{
			};
			class Door_40: door
			{
			};
			class Door_41: door
			{
			};
			class Door_42: door
			{
			};
			class Door_43: door
			{
			};
			class Door_44: door
			{
			};
			class Door_45: door
			{
			};
			class Door_46: door
			{
			};
			class Door_47: door
			{
			};
			class Door_48: door
			{
			};
			class Door_49: door
			{
			};
			class Door_50: door
			{
			};
			class Door_1_Source: door
			{
			};
			class Door_2_Source: door
			{
			};
			class Door_3_Source: door
			{
			};
			class Door_4_Source: door
			{
			};
			class Door_5_Source: door
			{
			};
			class Door_6_Source: door
			{
			};
			class Door_7_Source: door
			{
			};
			class Door_8_Source: door
			{
			};
			class Door_9_Source: door
			{
			};
			class Door_10_Source: door
			{
			};
			class Door_11_Source: door
			{
			};
			class Door_12_Source: door
			{
			};
			class Door_13_Source: door
			{
			};
			class Door_14_Source: door
			{
			};
			class Door_15_Source: door
			{
			};
			class Door_16_Source: door
			{
			};
			class Door_17_Source: door
			{
			};
			class Door_18_Source: door
			{
			};
			class Door_19_Source: door
			{
			};
			class Door_20_Source: door
			{
			};
			class Door_21_Source: door
			{
			};
			class Door_22_Source: door
			{
			};
			class Door_23_Source: door
			{
			};
			class Door_24_Source: door
			{
			};
			class Door_25_Source: door
			{
			};
			class Door_26_Source: door
			{
			};
			class Door_27_Source: door
			{
			};
			class Door_28_Source: door
			{
			};
			class Door_29_Source: door
			{
			};
			class Door_30_Source: door
			{
			};
			class Door_31_Source: door
			{
			};
			class Door_32_Source: door
			{
			};
			class Door_33_Source: door
			{
			};
			class Door_34_Source: door
			{
			};
			class Door_35_Source: door
			{
			};
			class Door_36_Source: door
			{
			};
			class Door_37_Source: door
			{
			};
			class Door_38_Source: door
			{
			};
			class Door_39_Source: door
			{
			};
			class Door_40_Source: door
			{
			};
			class Door_41_Source: door
			{
			};
			class Door_42_Source: door
			{
			};
			class Door_43_Source: door
			{
			};
			class Door_44_Source: door
			{
			};
			class Door_45_Source: door
			{
			};
			class Door_46_Source: door
			{
			};
			class Door_47_Source: door
			{
			};
			class Door_48_Source: door
			{
			};
			class Door_49_Source: door
			{
			};
			class Door_50_Source: door
			{
			};
			class GarageDoor_1_Source: door
			{
			};
			class GarageDoor_2_Source: door
			{
			};
			class GarageDoor_3_Source: door
			{
			};
			class GarageDoor_4_Source: door
			{
			};
			class GarageDoor_5_Source: door
			{
			};
			class GarageDoor_6_Source: door
			{
			};
			class GarageDoor_7_Source: door
			{
			};
			class GarageDoor_8_Source: door
			{
			};
			class GarageDoor_9_Source: door
			{
			};
			class GarageDoor_10_Source: door
			{
			};
			class GarageDoor_11_Source: door
			{
			};
			class GarageDoor_12_Source: door
			{
			};
			class GarageDoor_13_Source: door
			{
			};
			class GarageDoor_14_Source: door
			{
			};
			class GarageDoor_15_Source: door
			{
			};
			class GarageDoor_16_Source: door
			{
			};
			class GarageDoor_17_Source: door
			{
			};
			class GarageDoor_18_Source: door
			{
			};
			class GarageDoor_19_Source: door
			{
			};
			class GarageDoor_20_Source: door
			{
			};
			class GarageDoor_21_Source: door
			{
			};
			class GarageDoor_22_Source: door
			{
			};
			class GarageDoor_23_Source: door
			{
			};
			class GarageDoor_24_Source: door
			{
			};
			class GarageDoor_25_Source: door
			{
			};
			class GarageDoor_26_Source: door
			{
			};
			class GarageDoor_27_Source: door
			{
			};
			class GarageDoor_28_Source: door
			{
			};
			class GarageDoor_29_Source: door
			{
			};
			class GarageDoor_30_Source: door
			{
			};
			class GarageDoor_31_Source: door
			{
			};
			class GarageDoor_32_Source: door
			{
			};
			class GarageDoor_33_Source: door
			{
			};
			class GarageDoor_34_Source: door
			{
			};
			class GarageDoor_35_Source: door
			{
			};
			class GarageDoor_36_Source: door
			{
			};
			class GarageDoor_37_Source: door
			{
			};
			class GarageDoor_38_Source: door
			{
			};
			class GarageDoor_39_Source: door
			{
			};
			class GarageDoor_40_Source: door
			{
			};
			class GarageDoor_41_Source: door
			{
			};
			class GarageDoor_42_Source: door
			{
			};
			class GarageDoor_43_Source: door
			{
			};
			class GarageDoor_44_Source: door
			{
			};
			class GarageDoor_45_Source: door
			{
			};
			class GarageDoor_46_Source: door
			{
			};
			class GarageDoor_47_Source: door
			{
			};
			class GarageDoor_48_Source: door
			{
			};
			class GarageDoor_49_Source: door
			{
			};
			class GarageDoor_50_Source: door
			{
			};
			class deposit_1
			{
				source="user";
				animPeriod=1.5;
				initPhase=0;
			};
			class deposit_2: deposit_1
			{
			};
			class deposit_3: deposit_1
			{
			};
			class deposit_4: deposit_1
			{
			};
			class deposit_5: deposit_1
			{
			};
			class deposit_6: deposit_1
			{
			};
			class deposit_7: deposit_1
			{
			};
			class deposit_8: deposit_1
			{
			};
			class deposit_9: deposit_1
			{
			};
			class deposit_10: deposit_1
			{
			};
			class deposit_11: deposit_1
			{
			};
			class deposit_12: deposit_1
			{
			};
			class deposit_13: deposit_1
			{
			};
			class deposit_14: deposit_1
			{
			};
			class deposit_15: deposit_1
			{
			};
			class deposit_16: deposit_1
			{
			};
			class deposit_17: deposit_1
			{
			};
			class deposit_18: deposit_1
			{
			};
			class deposit_19: deposit_1
			{
			};
			class deposit_20: deposit_1
			{
			};
			class door_bankvault
			{
				source="user";
				animPeriod=6;
				initPhase=0;
			};
			class car_lift
			{
				source="user";
				animPeriod=8;
				initPhase=0;
			};
			class hoseSwitch
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class bargate1: Common
			{
				animPeriod=3;
			};
			class bargate2: bargate1
			{
			};
		};
	};
	class A3PL_AmmoBox_Base: A3PL_Objects
	{
		displayName="AmmoBox Base";
		model="\A3\Weapons_f\dummyweapon.p3d";
		typicalCargo[]={};
		destrType="DestructNo";
		explosionEffect="";
		maximumLoad=1000000;
		transportMaxWeapons=100;
		transportMaxMagazines=600;
		transportMaxBackpacks=500;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		supplyRadius=1.4;
		memoryPointSupply="SupplyPoint";
		waterLinearDampingCoefY=1;
		waterAngularDampingCoef=0.1;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class Rope: All
	{
		displayName="";
		simulation="rope";
		side=8;
		maxRelLenght=1.1;
		maxExtraLenght=20;
		alwaysTarget=0;
		irTarget=0;
		irScanRangeMin=0;
		irScanRangeMax=0;
		irScanToEyeFactor=1;
		laserTarget=0;
		laserScanner=0;
		nvTarget=0;
		nvScanner=0;
		artilleryTarget=0;
		artilleryScanner=0;
		author="Bohemia Interactive";
		mapSize=0.029999999;
		_generalMacro="Rope";
		scope=1;
		model="\A3PL_Objects\FD\A3PL_FireHose.p3d";
	};
	class A3PL_FD_HoseEnd1: A3PL_Car_Base
	{
		displayName="A3PL_HoseEnd1";
		class Library
		{
			libTextDesc="";
		};
		fuelCapacity=16.799999;
		transportSoldier=0;
		maxSpeed=300;
		enginePower=309;
		peakTorque=400;
		wheelDestroyRadiusCoef=0.81999999;
		differentialType="rear_limited";
		model="\A3PL_Objects\FD\A3PL_HoseEnd1";
		author="Jonzie";
		maximumLoad=0;
		memoryPointSupply="";
	};
	class A3PL_FishingBuoy: Land_BuoyBig_F
	{
		author="A3PL Kane";
		_generalMacro="A3PL_FishingBuoy";
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		displayName="Fishing Buoy";
		model="\A3PL_Objects\fishing\A3PL_buoy.p3d";
	};
	class A3PL_Lifebuoy: A3PL_Ship_Base
	{
		author="Jonzie";
		displayName="Lifebuoy";
		model="\A3PL_Objects\Small\A3PL_Lifebuoy.p3d";
		cargoAction[]=
		{
			"A3PL_Lifebuoy_Cargo"
		};
		cargoGetInAction[]=
		{
			"GetInHemttBack"
		};
		maxSpeed=100;
		enginePower=0;
		waterLeakiness=0;
		waterResistanceCoef=0.02;
		redRpm=0;
		armor=100000000;
		transportSoldier=1;
		hiddenSelections[]={};
		leftDustEffect="";
		leftEngineEffect="";
		leftFastWaterEffect="";
		leftWaterEffect="";
		rightDustEffect="";
		rightEngineEffect="";
		rightFastWaterEffect="";
		rightWaterEffect="";
		class Sounds
		{
		};
		class Turrets
		{
		};
		class Exhausts
		{
		};
		class MarkerLights
		{
		};
	};
	class A3PL_Mcfisher_Table: A3PL_Houses
	{
		displayName="McFishers Table";
		model="\A3PL_Objects\Small\A3PL_mcfisher_table";
	};
	class A3PL_Mcfisher_Grill: A3PL_Houses
	{
		displayName="McFishers Grill";
		model="\A3PL_Objects\Small\A3PL_mcfisher_grill";
	};
	class A3PL_CarInfo: A3PL_Houses
	{
		displayName="Car Info";
		model="\A3PL_Objects\Small\A3PL_carinfo";
	};
	class A3PL_Container_Hook: A3PL_Objects
	{
		model="\A3PL_Objects\Harbor\A3PL_Container_Hook";
		hiddenSelections[]=
		{
			"Camo"
		};
		displayName="Container Hook";
		slingLoadCargoMemoryPoints[]=
		{
			"Cable_1_End",
			"Cable_2_End",
			"Cable_3_End"
		};
	};
	class A3PL_Crane_Hook: A3PL_Objects
	{
		model="\A3PL_Objects\Harbor\A3PL_Crane_Hook";
		displayName="Crane Hook";
		slingLoadCargoMemoryPoints[]=
		{
			"Cable_1_End",
			"Cable_2_End",
			"Cable_3_End"
		};
	};
	class A3PL_Container40: A3PL_Objects
	{
		model="\A3PL_Objects\Harbor\A3PL_Container40";
		displayName="Container";
		hiddenSelections[]=
		{
			"Camo"
		};
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class TextureSources
		{
			class Blue
			{
				displayName="Blue";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Structures_F\Data\Metal\Containers\Containers_colors_01_co.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Light_Blue
			{
				displayName="Light Blue";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Structures_F\Data\Metal\Containers\Containers_colors_05_co.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Light_Green
			{
				displayName="Light Green";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Structures_F\Data\Metal\Containers\Containers_colors_04_co.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Military_Green
			{
				displayName="Military Green";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Structures_F\Data\Metal\Containers\Containers_colors_02_co.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Orange
			{
				displayName="Orange";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Structures_F\Data\Metal\Containers\Containers_colors_03_co.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
		};
		textureList[]=
		{
			"Blue",
			1,
			"Light_Blue",
			1,
			"Light_Green",
			1,
			"Military_Green",
			1,
			"Orange",
			1
		};
	};
	class A3PL_Container20: A3PL_Objects
	{
		model="\A3PL_Objects\Harbor\A3PL_Container20";
		displayName="Container";
		hiddenSelections[]=
		{
			"Camo"
		};
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class TextureSources
		{
			class Blue
			{
				displayName="Blue";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Structures_F\Data\Metal\Containers\Containers_colors_01_co.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Light_Blue
			{
				displayName="Light Blue";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Structures_F\Data\Metal\Containers\Containers_colors_05_co.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Light_Green
			{
				displayName="Light Green";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Structures_F\Data\Metal\Containers\Containers_colors_04_co.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Military_Green
			{
				displayName="Military Green";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Structures_F\Data\Metal\Containers\Containers_colors_02_co.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Orange
			{
				displayName="Orange";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Structures_F\Data\Metal\Containers\Containers_colors_03_co.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
		};
		textureList[]=
		{
			"Blue",
			1,
			"Light_Blue",
			1,
			"Light_Green",
			1,
			"Military_Green",
			1,
			"Orange",
			1
		};
	};
	class A3PL_Anchor: A3PL_Objects
	{
		model="\A3PL_Objects\Harbor\A3PL_Anchor";
		displayName="Anchor";
	};
	class A3PL_Golf_Driver_Object: A3PL_Objects
	{
		model="\A3PL_Weapons\Golf\A3PL_GolfDriver_Obj";
		displayName="Golf Driver Object";
	};
	class A3PL_Golf_Driver_Object_Flat: A3PL_Objects
	{
		model="\A3PL_Weapons\Golf\A3PL_GolfDriver_Obj_Flat";
		displayName="Golf Driver Object Flat";
	};
	class A3PL_TennisCourt: A3PL_Houses
	{
		model="\A3PL_Objects\TennisCourt";
		displayName="TennisCourt";
	};
	class A3PL_TrafficLight1: A3PL_Houses
	{
		model="\A3PL_Objects\TrafficLight1";
		displayName="TrafficLight1";
	};
	class A3PL_TrafficLight2: A3PL_Houses
	{
		model="\A3PL_Objects\TrafficLight2";
		displayName="TrafficLight2";
	};
	class A3PL_Road01Obj: A3PL_Houses
	{
		model="\A3PL_Objects\Road01";
		displayName="Road01";
	};
	class A3PL_Road01: A3PL_Houses
	{
		displayName="Road01";
		model="\A3PL_Objects\Road01.p3d";
	};
	class A3PL_RoadDouble: A3PL_Houses
	{
		displayName="RoadDouble";
		model="\A3PL_Objects\RoadDouble.p3d";
	};
	class A3PL_RunwayInto: A3PL_Houses
	{
		displayName="RunwayInto";
		model="\A3PL_Objects\Runway12into.p3d";
	};
	class A3PL_RunwayMain: A3PL_Houses
	{
		displayName="RunwayMain";
		model="\A3PL_Objects\Runway12Main.p3d";
	};
	class A3PL_Runway12Text: A3PL_Houses
	{
		displayName="Runway12text";
		model="\A3PL_Objects\Runway12text.p3d";
	};
	class A3PL_Runway7Text: A3PL_Houses
	{
		displayName="Runway7text";
		model="\A3PL_Objects\Runway7text.p3d";
	};
	class A3PL_Runway25Text: A3PL_Houses
	{
		displayName="Runway25text";
		model="\A3PL_Objects\Runway25text.p3d";
	};
	class A3PL_Runway30Text: A3PL_Houses
	{
		displayName="Runway30text";
		model="\A3PL_Objects\Runway30text.p3d";
	};
	class A3PL_AirportPlanePark: A3PL_Houses
	{
		displayName="Airport Park";
		model="\A3PL_Objects\AirportPlanePark.p3d";
	};
	class A3PL_AirportTaxi: A3PL_Houses
	{
		displayName="Airport Taxi Lane";
		model="\A3PL_Objects\AirportTaxi.p3d";
	};
	class Land_A3PL_EstateSign: A3PL_Houses
	{
		model="\A3PL_Objects\Street\estate_sign\A3PL_EstateSign";
		displayName="Estate Sign";
		hiddenSelections[]=
		{
			"EstateSign"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3PL_Objects\Street\estate_sign\house_sale_co.paa"
		};
	};
	class Land_A3PL_GreenhouseSign: A3PL_Houses
	{
		model="\A3PL_Objects\Street\rent_sign\A3PL_GreenhouseSign";
		displayName="Greenhouse Sign";
		hiddenSelections[]=
		{
			"GreenhouseSign"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3PL_Objects\Street\rent_sign\Data\rent_sign_forrent_co.paa"
		};
	};
	class Land_A3PL_Mailbox: A3PL_Houses
	{
		model="\A3PL_Objects\Street\mailbox\A3PL_Mailbox";
		displayName="Mail box";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class animationSources
		{
			class door_mailbox
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
	};
	class Land_A3PL_BusinessSign: A3PL_Houses
	{
		model="\A3PL_Objects\Street\business_sign\A3PL_BusinessSign";
		displayName="Business Sign";
		hiddenSelections[]=
		{
			"sign_business"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3pl_objects\street\business_sign\business_sale_co.paa"
		};
	};
	class Land_A3PL_HouseFence: A3PL_Houses
	{
		model="\A3PL_Objects\Street\fence\A3PL_HouseFence";
		displayName="House Fence";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
	class Land_A3PL_FarmFence: A3PL_Houses
	{
		model="\A3PL_Objects\Street\fence_farm\A3PL_FarmFence";
		displayName="Farm Fence";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
	class Land_A3PL_FarmFence_Long: A3PL_Houses
	{
		model="\A3PL_Objects\Street\fence_farm\A3PL_FarmFence_Long";
		displayName="Farm Fence Long";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
	class Land_A3PL_FarmFence_End: A3PL_Houses
	{
		model="\A3PL_Objects\Street\fence_farm\A3PL_FarmFence_End";
		displayName="Farm Fence End";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
	class Land_A3PL_Greenhouse: A3PL_Houses
	{
		model="\A3PL_Objects\farming\A3PL_Greenhouse";
		displayName="Greenhouse";
	};
	class A3PL_Drillhole: A3PL_Houses
	{
		model="\A3PL_Objects\oil\drill_hole\A3PL_drillhole";
		displayName="Drill hole";
	};
	class Land_A3PL_Tree1: A3PL_Houses
	{
		displayName="Tree 1";
		model="\A3PL_Objects\Street\Vegetation\A3PL_Tree1";
	};
	class Land_A3PL_Tree2: A3PL_Houses
	{
		displayName="Tree 2";
		model="\A3PL_Objects\Street\Vegetation\A3PL_Tree2";
	};
	class Land_A3PL_Tree3: A3PL_Houses
	{
		displayName="Tree 3";
		model="\A3PL_Objects\Street\Vegetation\A3PL_Tree3";
	};
	class Land_A3PL_Tree4: A3PL_Houses
	{
		displayName="Tree 4";
		model="\A3PL_Objects\Street\Vegetation\A3PL_Tree4";
	};
	class Land_A3PL_Tree5: A3PL_Houses
	{
		displayName="Tree 5";
		model="\A3PL_Objects\Street\Vegetation\A3PL_Tree5";
	};
	class Land_A3PL_Tree6: A3PL_Houses
	{
		displayName="Tree 6";
		model="\A3PL_Objects\Street\Vegetation\A3PL_Tree6";
	};
	class Land_A3PL_Tree7: A3PL_Houses
	{
		displayName="Tree 7";
		model="\A3PL_Objects\Street\Vegetation\A3PL_Tree7";
	};
	class Land_A3PL_Tree8: A3PL_Houses
	{
		displayName="Tree 8";
		model="\A3PL_Objects\Street\Vegetation\A3PL_Tree8";
	};
	class A3PL_UniformStatic: A3PL_Objects
	{
		displayName="Uniform Static";
		picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"A3PL_Characters\Civ_Default\Alpha.paa"
		};
	};
	class A3PL_Clothes: A3PL_Objects
	{
		displayName="Clothes";
		model="\A3PL_Objects\Small\A3PL_Clothes";
	};
	class A3PL_HouseKey: A3PL_Objects
	{
		_generalMacro="A3PL_HouseKey";
		model="\A3PL_Objects\Small\house_key.p3d";
		displayName="House key";
	};
	class A3PL_CarKey: A3PL_Objects
	{
		_generalMacro="A3PL_CarKey";
		model="\A3PL_Objects\Small\car_key.p3d";
		displayName="Car Keys";
	};
	class A3PL_Crate: A3PL_Objects
	{
		_generalMacro="A3PL_Crate";
		model="\A3PL_Objects\Small\A3PL_Crate.p3d";
		displayName="Crate";
	};
	class A3PL_DogCage: A3PL_Objects
	{
		_generalMacro="A3PL_DogCage";
		model="\A3PL_Objects\Small\A3PL_Cage";
		displayName="Dog Cage";
	};
	class Land_A3PL_MarketStall: A3PL_Houses
	{
		_generalMacro="A3PL_MarketStall";
		model="\A3PL_Objects\Small\A3PL_MarketStall";
		displayName="Market Stall";
	};
	class A3PL_Crate_GreenHouse: A3PL_Objects
	{
		_generalMacro="A3PL_Crate_GreenHouse";
		model="\A3PL_Objects\Small\A3PL_Crate.p3d";
		displayName="Crate Greenhouse";
	};
	class A3PL_Money: A3PL_Objects
	{
		_generalMacro="A3PL_Money";
		model="\A3PL_Objects\Small\A3PL_Money.p3d";
		displayName="Money";
	};
	class A3PL_Handcuffs: A3PL_Objects
	{
		_generalMacro="A3PL_Handcuffs";
		model="\A3PL_Objects\Small\A3PL_Handcuffs.p3d";
		displayName="Handcuffs";
	};
	class A3PL_Wrench: A3PL_Objects
	{
		_generalMacro="A3PL_Wrench";
		model="\A3PL_Objects\Small\A3PL_Wrench.p3d";
		displayName="Wrench";
	};
	class A3PL_JerryCan: A3PL_Objects
	{
		model="\A3PL_Objects\Small\A3PL_JerryCan.p3d";
		displayName="JerryCan";
	};
	class A3PL_Ticket: A3PL_Objects
	{
		_generalMacro="A3PL_Ticket";
		model="\A3PL_Objects\Small\A3PL_Ticket.p3d";
		displayName="Ticket";
	};
	class A3PL_Rocket: A3PL_Objects
	{
		_generalMacro="A3PL_Rocket";
		model="\A3PL_Objects\Small\A3PL_Rocket.p3d";
		displayName="Rocket";
	};
	class A3PL_Corn: A3PL_Houses
	{
		model="\A3PL_Objects\farming\A3PL_Corn";
		displayName="Corn";
		armor=9999999;
	};
	class A3PL_Marijuana: A3PL_Houses
	{
		model="\A3PL_Objects\farming\A3PL_Marijuana";
		displayName="Marijuana";
		armor=9999999;
		class AnimationSources
		{
			class Plant_Growth
			{
				source="user";
				animPeriod=900;
				initPhase=0;
			};
		};
	};
	class A3PL_Wheat: A3PL_Houses
	{
		model="\A3PL_Objects\farming\A3PL_Wheat";
		displayName="Wheat";
		armor=9999999;
	};
	class A3PL_Lettuce: A3PL_Houses
	{
		model="\A3PL_Objects\farming\A3PL_Lettuce_Plant";
		displayName="Lettuce";
		armor=9999999;
	};
	class A3PL_Coco_Plant: A3PL_Houses
	{
		model="\A3PL_Objects\farming\A3PL_Coco_Plant";
		displayName="Coco";
		armor=9999999;
	};
	class A3PL_Sugarcane_Plant: A3PL_Houses
	{
		model="\A3PL_Objects\farming\A3PL_Sugarcane_Plant";
		displayName="Sugarcane";
		armor=9999999;
	};
	class A3PL_MarijuanaBag: A3PL_Objects
	{
		_generalMacro="A3PL_MarijuanaBag";
		model="\A3PL_Objects\farming\A3PL_WeedBag.p3d";
		displayName="Marijuana Bag";
	};
	class A3PL_Seed_Marijuana: A3PL_Objects
	{
		_generalMacro="A3PL_Seed_Marijuana";
		model="\A3PL_Objects\farming\A3PL_Seed.p3d";
		displayName="Seed Marijuana";
		hiddenSelections[]=
		{
			"seedBox"
		};
		hiddenSelectionsTextures[]=
		{
			"A3PL_Objects\farming\Data\seeds_co.paa"
		};
	};
	class A3PL_Seed_Corn: A3PL_Seed_Marijuana
	{
		_generalMacro="A3PL_Seed_Corn";
		displayName="Seed Corn";
		hiddenSelectionsTextures[]=
		{
			"A3PL_Objects\farming\Data\corn_seeds_co.paa"
		};
	};
	class A3PL_Seed_Wheat: A3PL_Seed_Marijuana
	{
		_generalMacro="A3PL_Seed_Wheat";
		displayName="Seed Wheat";
		hiddenSelectionsTextures[]=
		{
			"A3PL_Objects\farming\Data\wheat_seeds_co.paa"
		};
	};
	class A3PL_Seed_Lettuce: A3PL_Seed_Marijuana
	{
		_generalMacro="A3PL_Seed_Lettuce";
		displayName="Seed Lettuce";
		hiddenSelectionsTextures[]=
		{
			"A3PL_Objects\farming\Data\lettuce_seeds_co.paa"
		};
	};
	class A3PL_Seed_Coca: A3PL_Seed_Marijuana
	{
		_generalMacro="A3PL_Seed_Coca";
		displayName="Seed Lettuce";
		hiddenSelectionsTextures[]=
		{
			"A3PL_Objects\farming\Data\coca_seeds_co.paa"
		};
	};
	class A3PL_Seed_Sugarcane: A3PL_Seed_Marijuana
	{
		_generalMacro="A3PL_Seed_Sugarcane";
		displayName="Seed Lettuce";
		hiddenSelectionsTextures[]=
		{
			"A3PL_Objects\farming\Data\sugarcane_seeds_co.paa"
		};
	};
	class A3PL_Seed_Carrot: A3PL_Seed_Marijuana
	{
		_generalMacro="A3PL_Seed_Carrot";
		displayName="Seed Lettuce";
		hiddenSelectionsTextures[]=
		{
			"A3PL_Objects\farming\Data\carrot_seeds_co.paa"
		};
	};
	class A3PL_Seed_Tobacco: A3PL_Seed_Marijuana
	{
		_generalMacro="A3PL_Seed_Tobacco";
		displayName="Seed Lettuce";
		hiddenSelectionsTextures[]=
		{
			"A3PL_Objects\farming\Data\tobacco_seeds_co.paa"
		};
	};
	class A3PL_DeliveryBox: A3PL_Objects
	{
		_generalMacro="A3PL_DeliveryBox";
		model="\A3PL_Objects\delivery\A3PL_Box.p3d";
	};
	class A3PL_Net: A3PL_Objects
	{
		_generalMacro="A3PL_Net";
		model="\A3PL_Objects\fishing\A3PL_Net.p3d";
		displayName="Net";
	};
	class A3PL_Bucket: A3PL_Objects
	{
		_generalMacro="A3PL_Bucket";
		model="\A3PL_Objects\fishing\A3PL_Bucket.p3d";
		displayName="Bucket";
		hiddenSelections[]=
		{
			"fish"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class A3PL_BucketFull: A3PL_Bucket
	{
		_generalMacro="A3PL_BucketFull";
		hiddenSelectionsTextures[]=
		{
			"A3PL_Objects\fishing\Data\fishing_co.paa"
		};
	};
	class A3PL_BucketSand: A3PL_Bucket
	{
		_generalMacro="A3PL_BucketSand";
		model="\A3PL_Objects\fishing\A3PL_BucketSand.p3d";
		displayName="Bucket Sand";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
	class A3PL_Stinger: A3PL_Objects
	{
		model="\A3PL_Objects\Police\A3PL_Stinger";
		displayName="Police Stinger";
		class EventHandlers
		{
			init="if (!isDedicated) then { [_this] spawn {waituntil{sleep 1; !isNil 'A3PL_Vehicle_Init_A3PL_Stinger'}; [_this] call A3PL_Vehicle_Init_A3PL_Stinger};};";
		};
	};
	class A3PL_Ladder: House_F
	{
		author="Jonzie";
		mapSize=1;
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		model="\A3PL_Objects\FD\A3PL_Ladder.p3d";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		displayName="Ladder";
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
		class AnimationSources
		{
			class Common
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Ladder_lift: Common
			{
				animPeriod=1;
			};
		};
	};
	class A3PL_FD_HydrantWrench_F: A3PL_Objects
	{
		_generalMacro="A3PL_FD_HydrantWrench";
		model="\A3PL_Objects\FD\A3PL_HydrantWrench_F";
		displayName="Hydrant Wrench";
	};
	class A3PL_FD_HydrantWrench: A3PL_Objects
	{
		_generalMacro="A3PL_FD_HydrantWrench";
		model="\A3PL_Objects\FD\A3PL_HydrantWrench";
		displayName="Hydrant Wrench";
	};
	class A3PL_FD_yAdapter: A3PL_Objects
	{
		_generalMacro="A3PL_FD_yAdapter";
		model="\A3PL_Objects\FD\A3PL_yAdapter";
		displayName="Y-Adapter";
	};
	class A3PL_FD_HoseRolled: A3PL_Objects
	{
		_generalMacro="A3PL_FD_HoseRolled";
		model="\A3PL_Objects\FD\A3PL_FireHoseRolled";
		displayName="Rolled Fire Hose";
	};
	class A3PL_FD_HoseEnd2: A3PL_FD_HoseEnd1
	{
		_generalMacro="A3PL_FD_HoseEnd2";
		model="\A3PL_Objects\FD\A3PL_HoseEnd2";
		displayName="Hose End 2";
		picture="\A3PL_Characters\A3PL_Logo.paa";
	};
	class A3PL_FD_HoseEnd1_Float: A3PL_FD_HoseEnd1
	{
		_generalMacro="A3PL_FD_HoseEnd1";
		model="\A3PL_Objects\FD\A3PL_HoseEnd1_F";
		displayName="Hose End 1";
	};
	class A3PL_FD_HoseEnd2_Float: A3PL_FD_HoseEnd1
	{
		_generalMacro="A3PL_FD_HoseEnd2";
		model="\A3PL_Objects\FD\A3PL_HoseEnd2_F";
		displayName="Hose End 2";
	};
	class A3PL_FD_HoseEnd_Player: A3PL_Objects
	{
		_generalMacro="A3PL_FD_HoseEnd_Player";
		model="\A3PL_Objects\FD\A3PL_HoseEnd_Player";
		displayName="Hose End -Player";
	};
	class A3PL_FD_EmptyPhysx: A3PL_Objects
	{
		_generalMacro="A3PL_FD_EmptyPhysx";
		model="\A3PL_Objects\FD\A3PL_EmptyPhysx";
		displayName="Empty Physx";
	};
	class A3PL_WheelChock: A3PL_Objects
	{
		_generalMacro="A3PL_wheelChock";
		model="\A3PL_Objects\FD\A3PL_WheelChock";
		displayName="Wheel Chock";
		vehicleclass="A3PL_Objects";
	};
	class A3PL_FireObject: A3PL_Objects
	{
		_generalMacro="A3PL_FireObject";
		model="\A3PL_Objects\FD\A3PL_FireObject";
		displayName="Fire Object";
		vehicleclass="A3PL_Objects";
		destrType="DestructDefault";
		armor=50;
		class HitPoints
		{
			class HitMain
			{
				armor=10;
				material=-1;
				name="main";
				passThrough=0;
				radius=0.1;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
		};
	};
	class A3PL_FD_Oxygen_Obj: A3PL_Objects
	{
		_generalMacro="A3PL_FD_Oxygen_Obj";
		model="\A3PL_Characters\Fire_Protective\firefighter_back_obj.p3d";
		displayName="Oxygen Object";
	};
	class A3PL_FD_Helmet_Obj: A3PL_Objects
	{
		_generalMacro="A3PL_FD_Helmet_Obj";
		model="\A3PL_Characters\Fire_Protective\firefighter_helmet_obj.p3d";
		displayName="Helmet Object";
	};
	class A3PL_FD_Mask_Obj: A3PL_Objects
	{
		_generalMacro="A3PL_FD_Mask_Obj";
		model="\A3PL_Characters\Fire_Protective\firefighter_mask_obj.p3d";
		displayName="FD Mask Object";
	};
	class A3PL_FD_Axe_Obj: A3PL_Objects
	{
		_generalMacro="A3PL_FD_Axe_Obj";
		model="\A3PL_Weapons\axe\A3PL_Axe_Obj.p3d";
		displayName="FD Axe Object";
	};
	class A3PL_Pumpjack: A3PL_Objects
	{
		model="\A3PL_Objects\oil\pump\pump";
		displayName="Pump Jack";
	};
	class A3PL_OilBarrel: A3PL_Objects
	{
		vehicleclass="A3PL_Objects";
		_generalMacro="A3PL_OilBarrel";
		model="\A3PL_Objects\oil\barrel\A3PL_OilBarrel.p3d";
		displayName="Oil Barrel";
	};
	class A3PL_MiniExcavator_Bucket: A3PL_Objects
	{
		model="\A3PL_Construction\MiniExcavator\A3PL_MiniExcavator_Bucket.p3d";
		displayName="Mini Excavator Bucket";
	};
	class A3PL_MiniExcavator_Jackhammer: A3PL_Objects
	{
		model="\A3PL_Construction\MiniExcavator\A3PL_MiniExcavator_Jackhammer.p3d";
		displayName="Mini Excavator Jackhammer";
	};
	class A3PL_MiniExcavator_Claw: A3PL_Objects
	{
		model="\A3PL_Construction\MiniExcavator\A3PL_MiniExcavator_Claw.p3d";
		displayName="Mini Excavator Grapple";
	};
	class A3PL_Resource_Shovel: A3PL_Objects
	{
		_generalMacro="A3PL_Resource_Shovel";
		model="\A3PL_Weapons\axe\A3PL_Shovel_Obj";
		displayName="Shovel";
	};
	class A3PL_Resource_Pickaxe: A3PL_Objects
	{
		model="\A3PL_Weapons\axe\A3PL_pickaxe_Obj";
		displayName="Pickaxe";
	};
	class A3PL_Engine: A3PL_Objects
	{
		displayName="Engine";
		model="\A3PL_Objects\resource\A3PL_Engine.p3d";
	};
	class A3PL_Fuel_Tank: A3PL_Objects
	{
		displayName="Fuel Tank";
		model="\A3PL_Objects\resource\A3PL_Fuel_Tank.p3d";
	};
	class A3PL_Tyre: A3PL_Objects
	{
		displayName="Tyre";
		model="\A3PL_Objects\resource\A3PL_Tyre.p3d";
	};
	class A3PL_Transmission: A3PL_Objects
	{
		displayName="Transmission";
		model="\A3PL_Objects\resource\A3PL_Transmission.p3d";
	};
	class A3PL_Radiator: A3PL_Objects
	{
		displayName="Radiator";
		model="\A3PL_Objects\resource\A3PL_Radiator.p3d";
	};
	class A3PL_Brake_Rotor: A3PL_Objects
	{
		displayName="Brake Rotor";
		model="\A3PL_Objects\resource\A3PL_Brake_Rotor.p3d";
	};
	class A3PL_Chassis: A3PL_Objects
	{
		displayName="Chassis Rails";
		model="\A3PL_Objects\resource\A3PL_Chassis.p3d";
	};
	class A3PL_Diff: A3PL_Objects
	{
		displayName="Differential";
		model="\A3PL_Objects\resource\A3PL_Diff.p3d";
	};
	class A3PL_Drive_Shaft: A3PL_Objects
	{
		displayName="Drive Shaft";
		model="\A3PL_Objects\resource\A3PL_Drive_Shaft.p3d";
	};
	class A3PL_Exhaust: A3PL_Objects
	{
		displayName="Exhaust";
		model="\A3PL_Objects\resource\A3PL_Exhaust.p3d";
	};
	class A3PL_AlloyRims: A3PL_Objects
	{
		displayName="Alloy Rims";
		model="\A3PL_Objects\resource\A3PL_AlloyRims.p3d";
	};
	class A3PL_SteelRims: A3PL_Objects
	{
		displayName="Steel Rims";
		model="\A3PL_Objects\resource\A3PL_SteelRims.p3d";
	};
	class A3PL_Crude_Oil: Land_MetalBarrel_F
	{
		displayName="Crude Oil";
		model="\A3PL_Objects\resource\A3PL_Oil.p3d";
		scope=1;
	};
	class A3PL_Petrol: Land_MetalBarrel_F
	{
		displayName="Gasoline";
		model="\A3PL_Objects\resource\A3PL_Oil.p3d";
		scope=1;
	};
	class A3PL_Kerosene: Land_MetalBarrel_F
	{
		displayName="Kerosene";
		model="\A3PL_Objects\resource\A3PL_Petrol.p3d";
		scope=1;
	};
	class A3PL_Plywood: A3PL_Objects
	{
		displayName="Plywood";
		model="\A3PL_Objects\resource\A3PL_Plywood.p3d";
	};
	class A3PL_LPG: A3PL_Objects
	{
		displayName="Liquified Petroleum Gas";
		model="\A3PL_Objects\resource\A3PL_LPG.p3d";
	};
	class A3PL_CementBag: A3PL_Objects
	{
		displayName="Cement Bag";
		model="\A3PL_Objects\resource\A3PL_CementBag.p3d";
	};
	class A3PL_Salt: A3PL_Objects
	{
		displayName="Salt Bag";
		model="\A3PL_Objects\resource\A3PL_Salt.p3d";
	};
	class A3PL_Salt_Water_10: Land_BarrelWater_grey_F
	{
		_generalMacro="A3PL_Salt_Water_10";
		displayName="10L Salt Water";
		scope=1;
	};
	class A3PL_Salt_Water_100: Land_WaterBarrel_F
	{
		_generalMacro="A3PL_Salt_Water_100";
		displayName="100L Salt Water";
		scope=1;
	};
	class A3PL_Salt_Water_1000: Land_WaterTank_F
	{
		_generalMacro="A3PL_Salt_Water_1000";
		displayName="1000L Salt Water";
		scope=1;
	};
	class A3PL_Water_10: Land_BarrelWater_grey_F
	{
		_generalMacro="A3PL_Water_10";
		displayName="10L Water";
		scope=1;
	};
	class A3PL_Water_100: Land_WaterBarrel_F
	{
		_generalMacro="A3PL_Water_100";
		displayName="100L Water";
		scope=1;
	};
	class A3PL_Water_1000: Land_WaterTank_F
	{
		_generalMacro="A3PL_Water_1000";
		displayName="1000L Water";
		scope=1;
	};
	class A3PL_PaperBox_Empty: A3PL_Objects
	{
		displayName="PaperBox Empty";
		model="\A3PL_Objects\resource\A3PL_PaperBox_Empty.p3d";
	};
	class A3PL_Plastic: A3PL_Objects
	{
		displayName="Plastic";
		model="\A3PL_Objects\resource\A3PL_Box.p3d";
	};
	class A3PL_Fibreglass: A3PL_Plastic
	{
		displayName="Fiberglass";
	};
	class A3PL_Glass: A3PL_Plastic
	{
		displayName="Glass";
		model="\A3PL_Objects\resource\A3PL_Glass.p3d";
	};
	class A3PL_Glass_Fibre: A3PL_Plastic
	{
		displayName="Glass Fibre";
		model="\A3PL_Objects\resource\A3PL_Box.p3d";
	};
	class A3PL_Carbon_Fibre: A3PL_Glass_Fibre
	{
		displayName="Carbon Fibre";
	};
	class A3PL_Synthetic_Fiber: A3PL_Glass_Fibre
	{
		displayName="Synthetic Fibers";
		model="\A3PL_Objects\resource\A3PL_Box.p3d";
	};
	class A3PL_Silica: A3PL_Plastic
	{
		displayName="Silica";
	};
	class A3PL_Latex: A3PL_Plastic
	{
		displayName="Latex";
	};
	class A3PL_Nylon: A3PL_Plastic
	{
		displayName="Nylon";
	};
	class A3PL_Spandex: A3PL_Plastic
	{
		displayName="Spandex";
	};
	class A3PL_Polyester: A3PL_Plastic
	{
		displayName="Polyester";
		model="\A3PL_Objects\resource\A3PL_Box.p3d";
	};
	class A3PL_Acrylic: A3PL_Plastic
	{
		displayName="Acrylic";
	};
	class A3PL_Rayon: A3PL_Plastic
	{
		displayName="Rayon";
	};
	class A3PL_Aramid: A3PL_Plastic
	{
		displayName="Aramid";
	};
	class A3PL_Rubber: A3PL_Plastic
	{
		displayName="Rubber";
	};
	class A3PL_Kevlar: A3PL_Glass_Fibre
	{
		displayName="Kevlar";
		model="\A3PL_Objects\resource\A3PL_Box.p3d";
	};
	class A3PL_Fleece: A3PL_Plastic
	{
		displayName="Fleece";
	};
	class A3PL_Leather: A3PL_Plastic
	{
		displayName="Leather";
	};
	class A3PL_Morocco_Leather: A3PL_Plastic
	{
		displayName="Morocco Leather";
	};
	class A3PL_Boar_Leather: A3PL_Plastic
	{
		displayName="Boar Leather";
	};
	class A3PL_Bucket_Zinc: A3PL_Objects
	{
		displayName="Zinc";
		model="\A3PL_Objects\resource\A3PL_Bucket_Ore";
	};
	class A3PL_Bucket_Limestone: A3PL_Objects
	{
		displayName="Limestone";
		model="\A3PL_Objects\resource\A3PL_Bucket_Ore";
	};
	class A3PL_Bucket_Chalk: A3PL_Objects
	{
		displayName="Chalk";
		model="\A3PL_Objects\resource\A3PL_Bucket_Ore";
	};
	class A3PL_Bucket_Marble: A3PL_Objects
	{
		displayName="Marble";
		model="\A3PL_Objects\resource\A3PL_Bucket_Ore";
	};
	class A3PL_Bucket_Titanium: A3PL_Objects
	{
		displayName="Titanium";
		model="\A3PL_Objects\resource\A3PL_Bucket_Ore";
	};
	class A3PL_Bucket_Sand: A3PL_Objects
	{
		displayName="Sand";
		model="\A3PL_Objects\resource\A3PL_Bucket_Sand";
	};
	class A3PL_Bucket_Dirt: A3PL_Objects
	{
		displayName="Dirt";
		model="\A3PL_Objects\resource\A3PL_Bucket_Dirt";
	};
	class A3PL_Bucket_Empty: A3PL_Objects
	{
		displayName="Empty Bucket";
		model="\A3PL_Objects\resource\A3PL_Bucket_Empty";
	};
	class A3PL_Propane: A3PL_Objects
	{
		displayName="Propane Tank";
		model="\A3PL_Objects\resource\A3PL_Propane";
	};
	class A3PL_Sack: A3PL_Objects
	{
		displayName="Empty Sack";
		model="\A3PL_Objects\resource\A3PL_Sack_F.p3d";
	};
	class A3PL_SulphurPowder: A3PL_Objects
	{
		displayName="Sulphur Powder";
		model="\A3PL_Objects\resource\A3PL_Box.p3d";
	};
	class A3PL_Paint_Tin: A3PL_Objects
	{
		displayName="Paint Tin";
		model="\A3PL_Objects\resource\A3PL_Paint_Tin";
	};
	class A3PL_Gunpowder: A3PL_Objects
	{
		displayName="Gunpowder";
		model="\A3PL_Objects\resource\A3PL_TinContainer_F.p3d";
	};
	class A3PL_Dildo: A3PL_Objects
	{
		displayName="Dildo";
		model="\A3PL_Objects\resource\A3PL_Dildo";
	};
	class A3PL_BottlePlastic_V2: A3PL_Objects
	{
		displayName="Water bottle";
		model="\A3PL_Objects\resource\A3PL_BottlePlastic_V2_F.p3d";
	};
	class A3PL_File: A3PL_Objects
	{
		displayName="File";
		model="\A3PL_Objects\resource\A3PL_File_F.p3d";
	};
	class A3PL_File1: A3PL_Objects
	{
		displayName="File (Documents)";
		model="\A3PL_Objects\resource\A3PL_File1_F.p3d";
	};
	class A3PL_File2: A3PL_Objects
	{
		displayName="File (Research)";
		model="\A3PL_Objects\resource\A3PL_File2_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_EPC\Items\Documents\Data\Files_secret_CA.paa"
		};
	};
	class A3PL_FilePhotos: A3PL_Objects
	{
		displayName="File (Photos)";
		model="\A3PL_Objects\resource\A3PL_FilePhotos_F.p3d";
	};
	class A3PL_Map: A3PL_Objects
	{
		displayName="Sleeved map";
		model="\A3PL_Objects\resource\A3PL_Map_F.p3d";
	};
	class A3PL_Map_unfolded: A3PL_Objects
	{
		displayName="Sleeved map (Stratis)";
		model="\A3PL_Objects\resource\A3PL_Map_unfolded_F.p3d";
	};
	class A3PL_Notepad: A3PL_Objects
	{
		displayName="Notepad";
		model="\A3PL_Objects\resource\A3PL_Notepad_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.835294,0,0,0.0,ca)"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\data_f\default.rvmat"
		};
	};
	class A3PL_ExtensionCord: A3PL_Objects
	{
		displayName="Extension Cord";
		model="\A3PL_Objects\resource\A3PL_ExtensionCord_F.p3d";
	};
	class A3PL_FloodLight_Objects: A3PL_Objects
	{
		displayName="Floodlight";
		model="\A3PL_Objects\resource\A3PL_FloodLight_F.p3d";
	};
	class A3PL_FMradio: A3PL_Objects
	{
		displayName="FM Radio";
		model="\A3PL_Objects\resource\A3PL_FMradio_F.p3d";
	};
	class A3PL_HandyCam: A3PL_Objects
	{
		displayName="Handheld Camera";
		model="\A3PL_Objects\resource\A3PL_HandyCam_F.p3d";
	};
	class A3PL_Laptop: A3PL_Objects
	{
		displayName="Laptop (Closed)";
		model="\A3PL_Objects\resource\A3PL_Laptop_F.p3d";
	};
	class A3PL_SurvivalRadio: A3PL_Objects
	{
		displayName="Survival Radio";
		model="\A3PL_Objects\resource\A3PL_SurvivalRadio_F.p3d";
	};
	class A3PL_BottlePlastic_V1: A3PL_Objects
	{
		displayName="Plastic Bottle";
		model="\A3PL_Objects\resource\A3PL_BottlePlastic_V1_F.p3d";
	};
	class A3PL_Can_Dented: A3PL_Objects
	{
		displayName="Can (Dented)";
		model="\A3PL_Objects\resource\A3PL_Can_Dented_F.p3d";
	};
	class A3PL_Can_Rusty: A3PL_Objects
	{
		displayName="Can (Rusty)";
		model="\A3PL_Objects\resource\A3PL_Can_Rusty_F.p3d";
	};
	class A3PL_Suitcase: A3PL_Objects
	{
		displayName="Suitcase";
		model="\A3PL_Objects\resource\A3PL_Suitcase_F.p3d";
	};
	class A3PL_PenBlack: A3PL_Objects
	{
		displayName="Pen (Black)";
		model="\A3PL_Objects\resource\A3PL_PenBlack_F.p3d";
	};
	class A3PL_PensAndPencils: A3PL_Objects
	{
		displayName="Pens and Pencils";
		model="\A3PL_Objects\resource\A3PL_PensAndPencils_F.p3d";
	};
	class A3PL_Axe: A3PL_Objects
	{
		displayName="Axe";
		model="\A3PL_Objects\resource\A3PL_Axe_F.p3d";
	};
	class A3PL_DrillAku: A3PL_Objects
	{
		displayName="Power Drill";
		model="\A3PL_Objects\resource\A3PL_DrillAku_F.p3d";
	};
	class A3PL_DustMask: A3PL_Objects
	{
		displayName="Dust Mask";
		model="\A3PL_Objects\resource\A3PL_DustMask_F.p3d";
	};
	class A3PL_Gloves: A3PL_Objects
	{
		displayName="Gloves";
		model="\A3PL_Objects\resource\A3PL_Gloves_F.p3d";
	};
	class A3PL_Grinder: A3PL_Objects
	{
		displayName="Grinder";
		model="\A3PL_Objects\resource\A3PL_Grinder_F.p3d";
	};
	class A3PL_Hammer: A3PL_Objects
	{
		displayName="Hammer";
		model="\A3PL_Objects\resource\A3PL_Hammer_F.p3d";
	};
	class A3PL_Meter3m: A3PL_Objects
	{
		displayName="Tape Measure";
		model="\A3PL_Objects\resource\A3PL_Meter3m_F.p3d";
	};
	class A3PL_MultiMeter: A3PL_Objects
	{
		displayName="Multi-meter";
		model="\A3PL_Objects\resource\A3PL_MultiMeter_F.p3d";
	};
	class A3PL_Pliers: A3PL_Objects
	{
		displayName="Pliers";
		model="\A3PL_Objects\resource\A3PL_Pliers_F.p3d";
	};
	class A3PL_Saw: A3PL_Objects
	{
		displayName="Saw";
		model="\A3PL_Objects\resource\A3PL_Saw_F.p3d";
	};
	class A3PL_Screwdriver_V1: A3PL_Objects
	{
		displayName="Screwdriver (Slotted)";
		model="\A3PL_Objects\resource\A3PL_Screwdriver_V1_F.p3d";
	};
	class A3PL_Screwdriver_V2: A3PL_Objects
	{
		displayName="Screwdriver (Phillips)";
		model="\A3PL_Objects\resource\A3PL_Screwdriver_V2_F.p3d";
	};
	class A3PL_CanisterFuel: A3PL_Objects
	{
		displayName="Canister (Fuel)";
		model="\A3PL_Objects\resource\A3PL_CanisterFuel_F.p3d";
	};
	class A3PL_CanisterOil: A3PL_Objects
	{
		displayName="Canister (Oil)";
		model="\A3PL_Objects\resource\A3PL_CanisterOil_F.p3d";
	};
	class A3PL_CanisterPlastic: A3PL_Objects
	{
		displayName="Canister (Plastic)";
		model="\A3PL_Objects\resource\A3PL_CanisterPlastic_F.p3d";
	};
	class A3PL_Sap: A3PL_Objects
	{
		displayName="Canister (Sap)";
		model="\A3PL_Objects\resource\A3PL_CanisterPlastic_F.p3d";
	};
	class A3PL_WoodenLog: A3PL_Objects
	{
		displayName="Wooden log";
		model="\A3PL_Objects\resource\A3PL_WoodenLog_F.p3d";
	};
	class A3PL_Battery: A3PL_Objects
	{
		displayName="Battery";
		model="\A3PL_Objects\resource\A3PL_Battery_F.p3d";
	};
	class A3PL_Canteen: A3PL_Objects
	{
		displayName="Canteen";
		model="\A3PL_Objects\resource\A3PL_Canteen_F.p3d";
	};
	class A3PL_CerealsBox: A3PL_Objects
	{
		displayName="Cereal box";
		model="\A3PL_Objects\resource\A3PL_CerealsBox_F.p3d";
	};
	class A3PL_PowderedMilk: A3PL_Objects
	{
		displayName="Powdered milk";
		model="\A3PL_Objects\resource\A3PL_PowderedMilk_F.p3d";
	};
	class A3PL_Antibiotic: A3PL_Objects
	{
		displayName="Antibiotics";
		model="\A3PL_Objects\resource\A3PL_Antibiotic_F.p3d";
	};
	class A3PL_Bandage: A3PL_Objects
	{
		displayName="Bandages";
		model="\A3PL_Objects\resource\A3PL_Bandage_F.p3d";
	};
	class A3PL_BloodBag: A3PL_Objects
	{
		displayName="Blood bag";
		model="\A3PL_Objects\resource\A3PL_BloodBag_F.p3d";
	};
	class A3PL_Defibrillator: A3PL_Objects
	{
		displayName="Defibrillator";
		model="\A3PL_Objects\resource\A3PL_Defibrillator_F.p3d";
	};
	class A3PL_DisinfectantSpray: A3PL_Objects
	{
		displayName="Disinfectant spray";
		model="\A3PL_Objects\resource\A3PL_DisinfectantSpray_F.p3d";
	};
	class A3PL_HeatPack: A3PL_Objects
	{
		displayName="Heatpack";
		model="\A3PL_Objects\resource\A3PL_HeatPack_F.p3d";
	};
	class A3PL_PainKillers: A3PL_Objects
	{
		displayName="Pain killers";
		model="\A3PL_Objects\resource\A3PL_PainKillers_F.p3d";
	};
	class A3PL_VitaminBottle: A3PL_Objects
	{
		displayName="Vitamin bottle";
		model="\A3PL_Objects\resource\A3PL_VitaminBottle_F.p3d";
	};
	class A3PL_WaterPurificationTablets: A3PL_Objects
	{
		displayName="Water purification tablets";
		model="\A3PL_Objects\resource\A3PL_WaterPurificationTablets_F.p3d";
	};
	class A3PL_ButaneCanister: A3PL_Objects
	{
		displayName="Butane canister";
		model="\A3PL_Objects\resource\A3PL_ButaneCanister_F.p3d";
	};
	class A3PL_CanOpener: A3PL_Objects
	{
		displayName="Can opener";
		model="\A3PL_Objects\resource\A3PL_CanOpener_F.p3d";
	};
	class A3PL_DuctTape: A3PL_Objects
	{
		displayName="Duct tape";
		model="\A3PL_Objects\resource\A3PL_DuctTape_F.p3d";
	};
	class A3PL_FireExtinguisher: A3PL_Objects
	{
		displayName="Fire extinguisher";
		model="\A3PL_Objects\resource\A3PL_FireExtinguisher_F.p3d";
	};
	class A3PL_GasCanister: A3PL_Objects
	{
		displayName="Gas canister";
		model="\A3PL_Objects\resource\A3PL_GasCanister_F.p3d";
	};
	class A3PL_GasCooker: A3PL_Objects
	{
		displayName="Gas cooker";
		model="\A3PL_Objects\resource\A3PL_GasCooker_F.p3d";
	};
	class A3PL_Matches: A3PL_Objects
	{
		displayName="Box of matches";
		model="\A3PL_Objects\resource\A3PL_Matches_F.p3d";
	};
	class A3PL_MetalWire: A3PL_Objects
	{
		displayName="Metal wire";
		model="\A3PL_Objects\resource\A3PL_MetalWire_F.p3d";
	};
	class A3PL_Shovel: A3PL_Objects
	{
		displayName="Shovel";
		model="\A3PL_Objects\resource\A3PL_Shovel_F.p3d";
	};
	class A3PL_TinContainer: A3PL_Objects
	{
		displayName="Tin container";
		model="\A3PL_Objects\resource\A3PL_TinContainer_F.p3d";
	};
	class A3PL_Tuna: A3PL_Objects
	{
		displayName="$STR_A3_CfgVehicles_Tuna_F0";
		model="\A3PL_Objects\resource\A3PL_tuna_F.p3d";
	};
	class A3PL_Salema: A3PL_Objects
	{
		displayName="$STR_A3_CfgVehicles_Salema_F0";
		model="\A3PL_Objects\resource\A3PL_Salema_porgy_F.p3d";
	};
	class A3PL_Ornate: A3PL_Objects
	{
		displayName="$STR_A3_CfgVehicles_Ornate_random_F0";
		model="\A3PL_Objects\resource\A3PL_ornate_F.p3d";
	};
	class A3PL_Mackerel: A3PL_Objects
	{
		displayName="$STR_A3_CfgVehicles_Mackerel_F0";
		model="\A3PL_Objects\resource\A3PL_mackerel_F.p3d";
	};
	class A3PL_Mullet: A3PL_Objects
	{
		displayName="$STR_A3_CfgVehicles_Mullet_F0";
		model="\A3PL_Objects\resource\A3PL_Mullet_F.p3d";
	};
	class A3PL_CatShark: A3PL_Objects
	{
		displayName="$STR_A3_CfgVehicles_CatShark_F0";
		model="\A3PL_Objects\resource\A3PL_CatShark_F.p3d";
	};
	class A3PL_Clothing: A3PL_Objects
	{
		displayName="Clothing Garmant";
		model="\A3PL_Objects\resource\A3PL_Clothing.p3d";
	};
	class A3PL_TapeSign: A3PL_Houses
	{
		displayName="Red Tape Barrier";
		model="\A3PL_Objects\Street\Roadworks\A3PL_TapeSign.p3d";
	};
	class A3PL_RoadCone: A3PL_Objects
	{
		displayName="Road Cone";
		model="\A3PL_Objects\Street\Roadworks\A3PL_RoadCone.p3d";
	};
	class A3PL_RoadCone_x10: A3PL_Objects
	{
		displayName="Road Cone x10";
		model="\A3PL_Objects\Street\Roadworks\A3PL_RoadCone_x10.p3d";
	};
	class A3PL_PlasticBarrier_01: A3PL_Objects
	{
		displayName="Plastic Barrier";
		model="\A3PL_Objects\Street\Roadworks\A3PL_PlasticBarrier_01.p3d";
	};
	class A3PL_PlasticBarrier_02: A3PL_Objects
	{
		displayName="Plastic Barrier 2";
		model="\A3PL_Objects\Street\Roadworks\A3PL_PlasticBarrier_02.p3d";
	};
	class A3PL_RedTape: A3PL_Objects
	{
		displayName="Red Tape";
		model="\A3PL_Objects\Street\Roadworks\A3PL_RedTape.p3d";
	};
	class A3PL_Road_Bollard: A3PL_Objects
	{
		displayName="Bollard";
		model="\A3PL_Objects\Street\Roadworks\A3PL_Road_Bollard.p3d";
	};
	class A3PL_RoadBarrier: A3PL_Objects
	{
		displayName="Barrier";
		model="\A3PL_Objects\Street\Roadworks\A3PL_RoadBarrier.p3d";
	};
	class A3PL_RoadBarrier_Legs: A3PL_Objects
	{
		displayName="Barrier Legs";
		model="\A3PL_Objects\Street\Roadworks\A3PL_RoadBarrier_Legs.p3d";
	};
	class A3PL_RoadBarrier_Top: A3PL_Objects
	{
		displayName="Barrier Top";
		model="\A3PL_Objects\Street\Roadworks\A3PL_RoadBarrier_Top.p3d";
	};
	class A3PL_Camping_Light: A3PL_FishingBuoy
	{
		displayName="$STR_A3_CfgVehicles_Land_Camping_Light_F0";
		model="\A3PL_Objects\Small\A3PL_Camping_Light.p3d";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_Camping_Light_F.jpg";
		class MarkerLights
		{
			class Light_1
			{
				color[]={0.60000002,0.80000001,1};
				ambient[]={0.0060000001,0.0080000004,0.0099999998};
				intensity=2000;
				name="Light_1_pos";
				useFlare=1;
				flareSize=0.40000001;
				flareMaxDistance=150;
				activeLight=1;
				blinking=0;
				dayLight=0;
				drawLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0.2;
					hardLimitStart=20;
					hardLimitEnd=30;
				};
			};
		};
	};
	class A3PL_EMS_Locker: A3PL_AmmoBox_Base
	{
		maximumLoad=7500;
		displayName="Locker";
		model="\A3PL_Police2\Locker\A3PL_Locker.p3d";
	};
	class A3PL_Police_Locker: A3PL_AmmoBox_Base
	{
		maximumLoad=7500;
		displayName="Locker";
		model="\A3PL_Police2\Locker\A3PL_Locker.p3d";
	};
	class A3PL_WheelieBin: A3PL_Objects
	{
		displayName="WheelieBin";
		model="\A3PL_Objects\Street\Garbage\A3PL_WheelieBin.p3d";
	};
	class A3PL_GarbageContainer: A3PL_Objects
	{
		displayName="Garbage Container";
		model="\A3PL_Objects\Street\Garbage\A3PL_GarbageContainer.p3d";
	};
	class ContainerSupply;
	class Supply0: ContainerSupply
	{
		maximumLoad=0;
	};
	class Supply1: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply2: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply3: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply4: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply5: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply6: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply7: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply8: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply9: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply10: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply20: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply30: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply40: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply50: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply60: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply70: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply80: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply90: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply100: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply110: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply120: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply130: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply140: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply150: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply160: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply170: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply180: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply190: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply200: ContainerSupply
	{
		maximumLoad=200;
	};
	class Supply210: ContainerSupply
	{
		maximumLoad=210;
	};
	class Supply220: ContainerSupply
	{
		maximumLoad=220;
	};
	class Supply230: ContainerSupply
	{
		maximumLoad=230;
	};
	class Supply240: ContainerSupply
	{
		maximumLoad=240;
	};
	class Supply250: ContainerSupply
	{
		maximumLoad=250;
	};
	class Supply260: ContainerSupply
	{
		maximumLoad=260;
	};
	class Supply270: ContainerSupply
	{
		maximumLoad=270;
	};
	class Supply280: ContainerSupply
	{
		maximumLoad=280;
	};
	class Supply290: ContainerSupply
	{
		maximumLoad=290;
	};
	class Supply300: ContainerSupply
	{
		maximumLoad=300;
	};
	class Supply310: ContainerSupply
	{
		maximumLoad=310;
	};
	class Supply320: ContainerSupply
	{
		maximumLoad=320;
	};
	class Supply330: ContainerSupply
	{
		maximumLoad=330;
	};
	class Supply340: ContainerSupply
	{
		maximumLoad=340;
	};
	class Supply350: ContainerSupply
	{
		maximumLoad=350;
	};
	class Supply360: ContainerSupply
	{
		maximumLoad=360;
	};
	class Supply370: ContainerSupply
	{
		maximumLoad=370;
	};
	class Supply380: ContainerSupply
	{
		maximumLoad=380;
	};
	class Supply390: ContainerSupply
	{
		maximumLoad=390;
	};
	class Supply400: ContainerSupply
	{
		maximumLoad=400;
	};
	class Supply410: ContainerSupply
	{
		maximumLoad=410;
	};
	class Supply420: ContainerSupply
	{
		maximumLoad=420;
	};
	class Supply430: ContainerSupply
	{
		maximumLoad=430;
	};
	class Supply440: ContainerSupply
	{
		maximumLoad=440;
	};
	class Supply450: ContainerSupply
	{
		maximumLoad=450;
	};
	class Supply460: ContainerSupply
	{
		maximumLoad=460;
	};
	class Supply470: ContainerSupply
	{
		maximumLoad=470;
	};
	class Supply480: ContainerSupply
	{
		maximumLoad=480;
	};
	class Supply490: ContainerSupply
	{
		maximumLoad=490;
	};
	class Supply500: ContainerSupply
	{
		maximumLoad=500;
	};
	class Supply510: ContainerSupply
	{
		maximumLoad=510;
	};
	class Supply520: ContainerSupply
	{
		maximumLoad=520;
	};
	class Supply530: ContainerSupply
	{
		maximumLoad=530;
	};
	class Supply540: ContainerSupply
	{
		maximumLoad=540;
	};
	class Supply550: ContainerSupply
	{
		maximumLoad=550;
	};
	class Supply560: ContainerSupply
	{
		maximumLoad=560;
	};
	class Supply570: ContainerSupply
	{
		maximumLoad=570;
	};
	class Supply580: ContainerSupply
	{
		maximumLoad=580;
	};
	class Supply590: ContainerSupply
	{
		maximumLoad=590;
	};
	class Supply600: ContainerSupply
	{
		maximumLoad=600;
	};
	class Supply610: ContainerSupply
	{
		maximumLoad=610;
	};
	class Supply620: ContainerSupply
	{
		maximumLoad=620;
	};
	class Supply630: ContainerSupply
	{
		maximumLoad=630;
	};
	class Supply640: ContainerSupply
	{
		maximumLoad=640;
	};
	class Supply650: ContainerSupply
	{
		maximumLoad=650;
	};
	class Supply660: ContainerSupply
	{
		maximumLoad=660;
	};
	class Supply670: ContainerSupply
	{
		maximumLoad=670;
	};
	class Supply680: ContainerSupply
	{
		maximumLoad=680;
	};
	class Supply690: ContainerSupply
	{
		maximumLoad=690;
	};
	class Supply700: ContainerSupply
	{
		maximumLoad=700;
	};
	class Supply710: ContainerSupply
	{
		maximumLoad=710;
	};
	class Supply720: ContainerSupply
	{
		maximumLoad=720;
	};
	class Supply730: ContainerSupply
	{
		maximumLoad=730;
	};
	class Supply740: ContainerSupply
	{
		maximumLoad=740;
	};
	class Supply750: ContainerSupply
	{
		maximumLoad=750;
	};
	class Supply760: ContainerSupply
	{
		maximumLoad=760;
	};
	class Supply770: ContainerSupply
	{
		maximumLoad=770;
	};
	class Supply780: ContainerSupply
	{
		maximumLoad=780;
	};
	class Supply790: ContainerSupply
	{
		maximumLoad=790;
	};
	class Supply800: ContainerSupply
	{
		maximumLoad=800;
	};
	class Supply810: ContainerSupply
	{
		maximumLoad=810;
	};
	class Supply820: ContainerSupply
	{
		maximumLoad=820;
	};
	class Supply830: ContainerSupply
	{
		maximumLoad=830;
	};
	class Supply840: ContainerSupply
	{
		maximumLoad=840;
	};
	class Supply850: ContainerSupply
	{
		maximumLoad=850;
	};
	class Supply860: ContainerSupply
	{
		maximumLoad=860;
	};
	class Supply870: ContainerSupply
	{
		maximumLoad=870;
	};
	class Supply880: ContainerSupply
	{
		maximumLoad=880;
	};
	class Supply890: ContainerSupply
	{
		maximumLoad=890;
	};
	class Supply900: ContainerSupply
	{
		maximumLoad=900;
	};
	class Supply910: ContainerSupply
	{
		maximumLoad=910;
	};
	class Supply920: ContainerSupply
	{
		maximumLoad=920;
	};
	class Supply930: ContainerSupply
	{
		maximumLoad=930;
	};
	class Supply940: ContainerSupply
	{
		maximumLoad=940;
	};
	class Supply950: ContainerSupply
	{
		maximumLoad=950;
	};
	class Supply960: ContainerSupply
	{
		maximumLoad=960;
	};
	class Supply970: ContainerSupply
	{
		maximumLoad=970;
	};
	class Supply980: ContainerSupply
	{
		maximumLoad=980;
	};
	class Supply990: ContainerSupply
	{
		maximumLoad=990;
	};
	class Supply1000: ContainerSupply
	{
		maximumLoad=1000;
	};
};
class CfgAmmo
{
	class SmokeShell;
	class Chemlight_base: SmokeShell
	{
		timeToLive=900000000;
		grenadeFireSound[]={};
		grenadeBurningSound[]={};
		aiAmmoUsageFlags="2 + 1";
	};
	class Chemlight_green: Chemlight_base
	{
		model="\A3\Weapons_f\chemlight\chemlight_green_lit";
		effectsSmoke="ChemlightLight_green";
		typicalspeed=14;
	};
	class Chemlight_red: Chemlight_base
	{
		model="\A3\Weapons_f\chemlight\chemlight_red_lit";
		effectsSmoke="ChemlightLight_red";
	};
	class Chemlight_yellow: Chemlight_base
	{
		model="\A3\Weapons_f\chemlight\chemlight_yellow_lit";
		effectsSmoke="ChemlightLight_yellow";
		timeToLive=-1;
	};
	class Chemlight_blue: Chemlight_base
	{
		model="\A3\Weapons_f\chemlight\chemlight_blue_lit";
		effectsSmoke="ChemlightLight_blue";
	};
};
class CfgVehicleClasses
{
	class A3PL_Objects
	{
		displayName="Objects";
	};
	class A3PL_Roads
	{
		displayName="Roads";
	};
};
class CfgNonAIVehicles
{
	class RopeSegment
	{
		model="\A3PL_Objects\FD\A3PL_FireHose.p3d";
	};
	class RopeEnd: RopeSegment
	{
		model="\A3\Data_f\Hook\Hook_F.p3d";
	};
};
class CfgAnimationSourceSounds
{
	class RocketFuse
	{
		class Fuse
		{
			loop=0;
			terminate=0;
			trigger="direction * (phase factor[0.01,0.02])";
			sound0[]=
			{
				"\A3PL_Objects\Small\Sounds\fuse.ogg",
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
		class FuseFinal
		{
			loop=0;
			terminate=0;
			trigger="direction * (phase factor[0.98,0.99])";
			sound0[]=
			{
				"\A3PL_Objects\Small\Sounds\rocketWhistle1.ogg",
				1,
				1,
				100
			};
			sound1[]=
			{
				"\A3PL_Objects\Small\Sounds\rocketWhistle2.ogg",
				1,
				1,
				100
			};
			sound[]=
			{
				"sound0",
				0.5,
				"sound1",
				0.5
			};
		};
	};
};
class CfgMaterial
{
	class Water
	{
		ambient[]={0.032000002,0.12800001,0.12800001,0.40000001};
		diffuse[]={0.032000002,0.12800001,0.12800001,1};
	};
	class Shore
	{
		ambient[]={0.032000002,0.12800001,0.12800001,0.40000001};
		diffuse[]={0.032000002,0.12800001,0.12800001,1};
	};
	class ShoreFoam
	{
		ambient[]={0.032000002,0.12800001,0.12800001,0.40000001};
		diffuse[]={0.032000002,0.12800001,0.12800001,1};
	};
	class ShoreWet
	{
	};
};
class cfgMods
{
	author="Marshall";
	timepacked="1672803363";
};
