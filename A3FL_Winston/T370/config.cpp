class CfgPatches
{
	class A3FL_T370
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3PL_Cars","A3PL_Trucks_N_Trailers"};
		requiredVersion = 0.1;
	};
};
class CfgVehicles
{
	class Truck_02_base_F;
	class A3PL_Truck_Base: Truck_02_base_F
	{
		class Wheels
		{
			class L1;
			class L2;
			class L3;
			class R1;
			class R2;
			class R3;
		};
		class Sounds;
	};
	class A3PL_Prime_Mover_Base: A3PL_Truck_Base{};
	class A3FL_T370: A3PL_Prime_Mover_Base
	{
		displayName = "Kenworth T370 Box";
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
			"body2"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(1,1,1,1.0,CO)",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"a3pl_cars\common\textures\glass.paa",
			"a3pl_cars\common\textures\glass.paa",
			"a3pl_cars\common\textures\glass.paa",
			"a3fl_winston\t370\data\box_base.paa"
		};
		maxspeed = 130;
		fuelCapacity = 43;
		transportSoldier = 1;
		differentialType = "rear_open";
		model = "\A3FL_Winston\T370\A3FL_T370";
		driverAction = "Truck_02_Driver";
		cargoAction[] = {"Truck_Cargo01"};
		driverRightHandAnimName = "Gear_Stick";
		tf_isolatedAmount = 0.2;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;
		crewCrashProtection=0;
		enginePower = 330;
		peakTorque = 1017;
		extCameraPosition[] = {0,3,-11};
		wheelDestroyRadiusCoef = 0.6;
		class Wheels
		{
			class L1
			{
				boneName="wheel_1_1";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.2";
				mass=80;
				MOI=40;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=30000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.15000001;
				mMaxDroop=0.15000001;
				sprungMass=1500;
				springStrength=51338;
				springDamperRate=5000;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class L2: L1
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=300000;
			};
			class R1: L1
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class R2: R1
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=300000;
			};
		};
		class PlayerSteeringCoefficients
		{
			turnIncreaseConst	= 1.1;	// basic sensitivity value, higher value = faster steering
			turnIncreaseLinear	= 0.6;	// higher value means less sensitive steering in higher speed, more sensitive in lower speeds
			turnIncreaseTime	= 3.0;	// higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
			turnDecreaseConst	= 5.0;	// basic caster effect value, higher value = the faster the wheels align in the direction of travel
			turnDecreaseLinear	= 4.0;	// higher value means faster wheel re-centering in higher speed, slower in lower speeds
			turnDecreaseTime	= 0.0;	// higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
			maxTurnHundred		= 0.5;	// coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
		};
    };
};