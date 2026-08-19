class CfgPatches
{
	class A3FL_Ships_LCM
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.2;
		requiredAddons[]=
		{
			"A3PL_Ships"
		};
	};
};

class RCWSOptics;
class SensorTemplatePassiveRadar;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	class Boat_Transport_02_base_F;
	class A3PL_Ship_Base: Boat_Transport_02_base_F
	{
		class AnimationSources;
		class NewTurret;
		class Turrets;
		class ViewOptics;
		class Components;
		class Sounds;
	};
	class A3FL_LCM: A3PL_Ship_Base
	{
		displayName="LCM Transport Ship";
		model="\A3FL_Ships\LCM\A3FL_LCM";
		scope = 2;
		enginePower=5200;
		maxSpeed=100;
		fuelCapacity=42;
		driverAction="driver_boat01";
		cargoAction[]=
		{
			"Truck_Cargo01",
			"passenger_flatground_crosslegs"
		};
		extCameraPosition[]={0,1,-12};
		transportSoldier=15;
		maximumLoad=2000;
		commanderCanSee="31+32";
		sensitivity=900;
		ejectDeadDriver=1;
		ejectDeadCargo=1;
		driverDoor="door";
		cargoDoors[]=
		{
			"door"
		};
		rudderForceCoef=1;
		rudderForceCoefAtMaxSpeed=0.1;
		waterLinearDampingCoefY=4;
		thrustDelay=0.5;
		waterResistanceCoef=0.02;
		engineShiftY=0.5;
		offsetY=1.6;
		driverCanSee="38";
		gunnerCanSee="38";
		canUseScanners=1;
		incomingMissileDetectionSystem="0";
		irTarget=1;
		irTargetSize=2;
		weaponLockSystem=0;
		radarTarget=1;
		radarTargetSize=2;
		radarType=2;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		showAllTargets=2;
		showCrewAim=0;
		visualTarget=1;
		visualTargetSize=2;
		waterAngularDampingCoef=1.2;
		class ComplexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-2.5,
				"N",
				0,
				"D1",
				1.2
			};
			TransmissionRatios[]=
			{
				"High",
				1.2
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		class AnimationSources: AnimationSources{
			class ramp
			{
				source="user";
				animPeriod=1.2;
				initPhase=0;
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
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=0;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						aimDown=0;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						animDirection="";
						color[]={0,0,0,0.80000001};
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						maxSpeedThreshold=0;
						maxTrackableATL=1e+010;
						maxTrackableSpeed=1e+010;
						minSpeedThreshold=0;
						minTrackableATL=-1e+010;
						minTrackableSpeed=-1e+010;
						typeRecognitionDistance=12000;
						componentType="ActiveRadarSensorComponent";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				componentType="VehicleSystemsDisplayManager";
				defaultDisplay="EmptyDisplay";
				left=1;
				x="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"", (safezoneX + 0.5 *    (   ((safezoneW / safezoneH) min 1.2) / 40))])";
				y="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"", (safezoneY + safezoneH - 21 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={100,200,400,500,1000,2000,3000,4000,5000,6000,7000,8000,9000,10000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				componentType="VehicleSystemsDisplayManager";
				right=1;
				x="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"", ((safezoneX + safezoneW) - (  (10 *    (   ((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 *    (   ((safezoneW / safezoneH) min 1.2) / 40)))])";
				y="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"", (safezoneY + safezoneH - 21 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={100,200,400,500,1000,2000,3000,4000,5000,6000,7000,8000,9000,10000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
		class RenderTargets	{};
		class Reflectors {};
	};
};