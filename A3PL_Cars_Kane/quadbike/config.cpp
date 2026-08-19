class CfgPatches
{
	class A3PL_Cars_Kane_Quadbike
	{
		addonRootClass="A3_Soft_F";
		requiredAddons[]=
		{
			"A3_Soft_F",
			"A3_Soft_F_Quadbike_01"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Quadbike_01_base_F;
	class C_Quadbike_01_F: Quadbike_01_base_F
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		crewCrashProtection=0;
		author = "Gaming";
		displayName = "Quad Bike";
		class Library {libTextDesc = "Quad Bike";};
		model = "\A3PL_Cars_Kane\quadbike\quadbike_01_f";
		maxSpeed=101;
		enginePower = 260;
		peakTorque = 366;
		maxOmega=947;
		htMax = 1575;
		thrustDelay=0.05;
		extCameraPosition[] = {0,0.55,-3.2};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(1,1,1,1,CO)"
		};

		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-7,
				"N",
				0,
				"D1",
				4.46,
				"D2",
				3.56,
				"D3",
				2.57,
				"D4",
				1.97,
				"D5",
				1.60,
				"D6",
				0.89,
				"D7",
				0.649
			};
			TransmissionRatios[]=
			{
				"High",
				4.2
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.01;
		};

		brakeIdleSpeed=0.01;
		wheelCircumference=2;
		antiRollbarForceCoef=10;
		antiRollbarForceLimit=25;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=50;
		frontBias=4;
		rearBias=2;
		centreBias=3;
		dampersBumpCoef=0.05;
		accelAidForceCoef=1;
		accelAidForceYOffset=-2;
		accelAidForceSpd=1;
		differentialType="all_open";
		frontRearSplit=0.25;
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width=0.15;
				mass=20;
				MOI=5.3;
				dampingRate=0.1;
				dampingRateDamaged=0.1;
				dampingRateDestroyed=5000;
				maxCompression=0.05;
				mMaxDroop=0.05;
				sprungMass=350;
				springStrength=45000;
				springDamperRate=8500;
				longitudinalStiffnessPerUnitGravity=2000;
				suspTravelDirection[]={0,-1.8,0};
				frictionVsSlipGraph[]={{0.6,1},{0.9,1},{1,0.8}};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxHandBrakeTorque=0;
				maxBrakeTorque=5000;
				latStiffX=18;
				latStiffY=180;
			};
			class LR: LF
			{
				width=0.5;
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				sprungMass=350*1.1;
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=10000;
				latStiffX=18;
				latStiffY=180;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				steering=1;
				side="right";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				sprungMass=350;
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				maxHandBrakeTorque=0;
				maxBrakeTorque=5000;
				latStiffX=18;
				latStiffY=180;
			};
			class RR: LF
			{
				width=0.5;
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				sprungMass=350*1.1;
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=10000;
				latStiffX=18;
				latStiffY=180;
			};
		};

		class PlayerSteeringCoefficients /// steering sensitivity configuration
		{
			turnIncreaseConst	= 0.95; // basic sensitivity value, higher value = faster steering
			turnIncreaseLinear	= 0.5; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
			turnIncreaseTime	= 0.5; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle

			turnDecreaseConst	= 6.5; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
			turnDecreaseLinear	= 2; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
			turnDecreaseTime	= 0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position

			maxTurnHundred		= 1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
		};

		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustsEffectBig";
			};
			class Exhaust2
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectBig";
			};
		};

		class Reflectors {};
	};
};
