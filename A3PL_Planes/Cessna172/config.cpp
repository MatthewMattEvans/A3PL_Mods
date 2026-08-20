class CfgPatches
{
	class A3PL_Cessna172
	{
		units[]				 = {"A3PL_Cessna172"};
		weapons[]			 = {};
		requiredVersion		 = 1.1;
		requiredAddons[]	 = {"A3PL_Cars","A3PL_Planes", "A3PL_objects"};
	};
};

#include "cfgMoves.hpp"

class CfgVehicles
{
	class Plane;
	class Plane_Base_F: Plane
	{
		class Turrets;
		class NewTurret;
		class ViewGunner;
		class AnimationSources;
	};
	
	class A3PL_Objects;
	class A3PL_Cessna172_Banner: A3PL_Objects
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Banner";
		model = "\A3PL_Planes\Cessna172\A3PL_Cessna172_Banner.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,1,1,1.0,CO)"};
	};
	
	class A3PL_Cessna172: Plane_Base_F
	{
		scope = 2;
		scopeCurator = 2;	
		side = 3;		
		cost = 10;					
		accuracy = 0.2;		
		displayName = "Cessna 172"; 
		model = "\A3PL_Planes\Cessna172\A3PL_Cessna172";	
		simulation = "airplane";
		transportSoldier = 3;
		faction	= CIV_F;					
		crew = "C_man_1";	
		availableForSupportTypes[] = {"Transport"};					
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetOutLow"};
		cargoGetOutAction[] = {"GetOutLow"};		
		driverDoor = "Door_LF";
		nightVision = true;

		icon = "A3PL_Planes\Cessna172\textures\icon.paa"; 
		picture = "A3PL_Planes\Cessna172\textures\image.paa";	

		driverAction = "cessna_pilot";
		cargoAction[] = {passenger_apc_narrow_generic03,passenger_apc_generic02,passenger_apc_narrow_generic03};
		gearRetracting = false;
		cargoCanEject = 1;		
		driverCanEject = 1;	
		driveOnComponent[] = {"wheel_1","wheel_2","wheel_3"};
		
		driverLeftHandAnimName = "stick_pilot";
		driverRightHandAnimName = "stick_pilot";
		driverLeftLegAnimName = "rudder_pilot1";
		driverRightLegAnimName = "rudder_pilot2";
		class AnimationSources: AnimationSources
		{
			class Common
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class Light:Common {animPeriod = 0.2;};
			class Proxy: Common {animPeriod = 0.001;initPhase = 1;};
			class Head_Lights:Common {};
			class High_Beam:Common {};
			class Spotlight:Common {};
			class Lightbar:Common {};
			class Fair_Available:Common {};
			class Hitched:Common {animPeriod = 1;};
			class Doors:Common {animPeriod	 = 2;};
			class AUX:Common {animPeriod	 = 0.2;};
			class HitGlass1 {source = "Hit";hitpoint = "HitGlass1";raw = 1;};
			class HitGlass2:HitGlass1 {hitpoint = "HitGlass2";};
			class HitGlass3:HitGlass1 {hitpoint = "HitGlass3";};
			class HitGlass4:HitGlass1 {hitpoint = "HitGlass4";};
			class HitGlass5:HitGlass1 {hitpoint = "HitGlass5";};
			class HitGlass6:HitGlass1 {hitpoint = "HitGlass6";};
			class HitGlass7:HitGlass1 {hitpoint = "HitGlass7";};
			class HitGlass8:HitGlass1 {hitpoint = "HitGlass8";};
			class HitGlass9:HitGlass1 {hitpoint = "HitGlass9";};
			class HitGlass10:HitGlass1 {hitpoint = "HitGlass10";};
			class HitRGlass:HitGlass1 {hitpoint = "HitRGlass";};
			class HitLGlass:HitGlass1 {hitpoint = "HitLGlass";};
			class DoorL:Common {animPeriod = 1;};
			class DoorR:Common {animPeriod = 1;};
			class Door_LF {source = "door";animPeriod = 0.4;sound = "A3PL_Open_Close";soundPosition = "Door_LF_axis";};
			class Door_RF:Door_LF {soundPosition = "Door_RF_axis";};
			class Door_LB:Door_LF {soundPosition = "Door_LB_axis";};
			class Trunk:Door_LF {soundPosition = "Trunk_axis";animPeriod = 1;source = "user"; };
		};/*
		class Turrets: Turrets
		{
			class CopilotTurret: NewTurret
			{
				gunnerAction = "cessna_pilot";
				gunnerLeftHandAnimName = "stick_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				isCopilot = 1;
				primaryGunner = 0;
				canEject = 1;
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				weapons[] = {};
				magazines[] = {};
				gunnerInAction = "Heli_Medium_Gunner_H";
				gunnerName = "copilot";
				gunnerDoor = "Door_RF";
				gunnerNotSpawned = 1;
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				minElev = -50;
				maxElev = 30;
				initElev = 11;
				minTurn = -170;
				maxTurn = 170;
				initTurn = 0;
				maxHorizontalRotSpeed = 3;
				maxVerticalRotSpeed = 3;
				class ViewGunner: ViewGunner
				{
					minAngleX = -65;
					maxAngleX = 85;
					initAngleX = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initAngleY = 0;
					minFov = 0.3;
					maxFov = 1.2;
					initFov = 1;
				};
				commanding = -1;
				gunnerLeftLegAnimName = "rudder_copilot1";
				gunnerRightLegAnimName = "rudder_copilot2";
			};
		};*/
		class TransportItems{};	
		class WingVortices
		{
			class WingTipLeft
			{
				effectName = "WingVortices";
				position = "body_vapour_L_E";
			};

			class WingTipRight
			{
				effectName = "WingVortices"; 
				position = "body_vapour_R_E";
			};
			class BodyLeft
			{
				effectName = "BodyVortices";
				position = "body_vapour_L_S";
			};

			class BodyRight
			{
				effectName = "BodyVortices"; 
				position = "body_vapour_R_S";
			};
		};

		#include "sounds.hpp"

		insideSoundCoef = 0.6;
		landingSpeed = 180;
		maxSpeed = 290;
		armor = 20;
		ejectSpeed[] = {0,0,-0.6};
		flapsFrictionCoef = 3.5;
		wheelSteeringSensitivity = 0.3; //was 0.7
		type = "VAir";
		threat[] = {0.1,1,0.7};
		aileronSensitivity = 0.5;
		elevatorSensitivity = 0.09;
		noseDownCoef = 2.01;
		landingAoa = "7*3.1415/180";
		envelope[] = {0,0.2,0.9,2.1,2.5,3.3,3.5,3.5,3.5,3.0,2.5,2.0};
		extCameraPosition[] = {0,0,-7.5};
		irTarget = 1;
		irScanRange = 2000;
		irScanGround = 1;
		weapons[] = {};
		magazines[] = {};
		class Reflectors			/// landing lights of the plane, turned on by AI while in night and "careless" or "safe"
		{
			class Left
			{
				color[] = {7000, 7500, 10000, 1}; 	
				ambient[] = {100, 100, 100};		
				position = "Light_L";				
				direction = "Light_L_end";		
				hitpoint = "Light_L";				
				selection = "Light_L";				
				innerAngle = 20;					
				outerAngle = 60;				
				coneFadeCoef = 10;					
				intensity = 50;						
				useFlare = true;					
				dayLight = false;					
				FlareSize = 4;		
				size = 1;						
				class Attenuation					
				{
					start = 1;						
					constant = 0;					
					linear = 0;					
					quadratic = 4;					
					hardLimitStart = 150;			
					hardLimitEnd = 300;			
				};
			};
			class Right: Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
		};
		class MarkerLights
		{
			class RedStill
			{
				activeLight = 0;
				ambient[] = {0.08,0,0};
				blinking = 0;
				color[] = {0.8,0,0};
				dayLight = 0;
				drawLight = 1;
				drawLightCenterSize = 0.05;
				drawLightSize = 0.6;
				intensity = 50;
				name = "PositionLight_Red1_pos";
				useFlare = 0;
			};
			class GreenStill: RedStill
			{
				name = "PositionLight_Green_pos";
				color[] = {0,0.8,0};
				ambient[] = {0,0.08,0};
			};
			class RedStill2: RedStill
			{
				name = "PositionLight_Red2_pos";
			};
		};		
		destrType = "DestructWreck";
	};

	class PlaneWreck;
	class A3PL_Cessna172_Wreck: PlaneWreck
	{
		scope = 1;
		model = "A3PL_Planes\Cessna172\A3PL_Cessna172_wreck.p3d";
		typicalCargo[] = {};
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 3;
	};
};