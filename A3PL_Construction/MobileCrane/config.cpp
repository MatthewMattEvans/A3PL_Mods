class CfgPatches
{
	class A3PL_MobileCrane
	{
		units[] = {"A3PL_MobileCrane"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3PL_Cars","A3_Soft_F"};
	};
};
class CfgVehicles
{
	class Hatchback_01_sport_base_F;
	class A3PL_Car_Base: Hatchback_01_sport_base_F {class Sounds;};
	class A3PL_MobileCrane: A3PL_Car_Base
	{
		displayName = "Mobile Crane (Container Grip)";
		class Library { libTextDesc = "Mobile Crane"; };
		fuelCapacity = 750;///mpg (imp.), average combined
		transportSoldier = 0;
		differentialType = "all_limited";
		model = "\A3PL_Construction\MobileCrane\MobileCrane_01_F";
		maxSpeed = 100;
		enginePower = 500;
		peakTorque = 250;
		terrainCoef = 0;
		driverAction = "A3PL_Crane_Driver";//Truck_02_Driver
		driverLeftHandAnimName = "";
		driverRightHandAnimName = "";
		wheelDestroyRadiusCoef = 0.75;
		extCameraPosition[] = {0,-10,-50};
		//ladders[] = {["Ladder_1_start","Ladder_1_end"],["Ladder_2_start","Ladder_2_end"]};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_MobileCrane_01_F.jpg";
		class RenderTargets {};
		class Reflectors{};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-250,"N",0,"D1",250};
			TransmissionRatios[] = {"High",1};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 2;
		};
		class Wheels
		{
			class L1
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 200;
				MOI = 150;
				dampingRate = 0.5;
				maxBrakeTorque = 10000;
				maxHandBrakeTorque = 500000;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.2;
				mMaxDroop = 0.0005;
				sprungMass = 4000;
				springStrength = 2000000;
				springDamperRate = 148132;
				longitudinalStiffnessPerUnitGravity = 100000;
				latStiffX = 25;
				latStiffY = 18000;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class L2: L1
			{
				boneName = "wheel_1_2_damper";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
			};
			class L3: L1
			{
				boneName = "wheel_1_3_damper";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
			};
			class L4: L1
			{
				boneName = "wheel_1_4_damper";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
				suspForceAppPointOffset = "wheel_1_4_axis";
				tireForceAppPointOffset = "wheel_1_4_axis";
			};
			class L5: L1
			{
				boneName = "wheel_1_5_damper";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
				suspForceAppPointOffset = "wheel_1_5_axis";
				tireForceAppPointOffset = "wheel_1_5_axis";
			};
			class L6: L1
			{
				boneName = "wheel_1_6_damper";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
				suspForceAppPointOffset = "wheel_1_6_axis";
				tireForceAppPointOffset = "wheel_1_6_axis";
			};
			class L7: L1
			{
				boneName = "wheel_1_7_damper";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
				suspForceAppPointOffset = "wheel_1_7_axis";
				tireForceAppPointOffset = "wheel_1_7_axis";
			};
			class R1: L1
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class R2: R1
			{
				boneName = "wheel_2_2_damper";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
			};
			class R3: R1
			{
				boneName = "wheel_2_3_damper";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
			};
			class R4: R1
			{
				boneName = "wheel_2_4_damper";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
				suspForceAppPointOffset = "wheel_2_4_axis";
				tireForceAppPointOffset = "wheel_2_4_axis";
			};
			class R5: R1
			{
				boneName = "wheel_2_5_damper";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
				suspForceAppPointOffset = "wheel_2_5_axis";
				tireForceAppPointOffset = "wheel_2_5_axis";
			};
			class R6: R1
			{
				boneName = "wheel_2_6_damper";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
				suspForceAppPointOffset = "wheel_2_6_axis";
				tireForceAppPointOffset = "wheel_2_6_axis";
			};
			class R7: R1
			{
				boneName = "wheel_2_7_damper";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
				suspForceAppPointOffset = "wheel_2_7_axis";
				tireForceAppPointOffset = "wheel_2_7_axis";
			};		
		};
		class Sounds: Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3PL_Construction\MobileCrane\Sounds\Idle.ogg",0.31622776,1,100};
				frequency = 1.0;
				volume = "engineOn*camPos*(((rpm/	11900) factor[(500/	11900),(700/	11900)])	*	((rpm/	11900) factor[(3000/	11900),( 900/	11900)]))*12";
			};
			class Engine_ext
			{
				sound[] = {"A3PL_Construction\MobileCrane\Sounds\High.ogg",0.56234133,1,300};
				frequency = "0.95	+	((rpm/	11900) factor[(700/	11900),(11900/	11900)])*0.2";
				volume = "engineOn*camPos*((rpm/	11900) factor[(1000/	11900),(1900/	11900)])*12";
			};
			class Idle_int
			{
				sound[] = {"A3PL_Construction\MobileCrane\Sounds\Idle.ogg",0.25118864,1};
				frequency = 1.0;
				volume = "engineOn*(1-camPos)*(((rpm/	11900) factor[(500/	11900),(700/	11900)])	*	((rpm/	11900) factor[(3000/	11900),( 900/	11900)]))*2";
			};
			class Engine_int
			{
				sound[] = {"A3PL_Construction\MobileCrane\Sounds\High.ogg",0.4466836,1};
				frequency = "0.95	+	((rpm/	11900) factor[(700/	11900),(11900/	11900)])*0.2";
				volume = "engineOn*(1-camPos)*((rpm/	11900) factor[(1000/	11900),(1900/	11900)])*2";
			};
		};
    };
};