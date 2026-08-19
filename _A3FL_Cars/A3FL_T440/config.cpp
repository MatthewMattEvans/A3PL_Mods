class CfgPatches
{
	class A3FL_T440
	{
		units[]=
		{
			"A3FL_T440"
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
	class A3FL_T440: A3PL_Prime_Mover_Base
	{
		author="Danny Indelicato & Henry Indelicato";
		displayName="Kenworth T440 Box";
		class Library
		{
			libTextDesc="Kenworth T440 Box Truck";
		};
		fuelCapacity=45;
		transportSoldier=1;
		differentialType="rear_open";
		model="\A3FL_Cars\A3FL_T440\A3FL_T440";
		hiddenSelections[]={"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","glass1","glass2","glass3","glass4"};
		hiddenSelectionsTextures[]={"#(argb,8,8,3)color(1,1,1,1.0,CO)","","","","","","","","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa"};
		driverAction="A3FL_Kenworth_Anim";
		cargoAction[]={"Truck_Cargo01"};
		driverRightHandAnimName="Gear_Stick";
		crewCrashProtection=0;
		tf_isolatedAmount = 0.2;
		hideWeaponsDriver = true;
		hideWeaponsCargo = true;
		maxspeed=120;
		maxOmega=560;
		enginePower = 380;
		peakTorque = 1650;
		wheelDestroyRadiusCoef=0.8;
		extCameraPosition[]={0,1,-12};
		terrainCoef=2.8;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 0;
		antiRollbarSpeedMin = 0;
		antiRollbarSpeedMax = 0;
		frontBias = 1;
		rearBias = 1;
		centreBias = 1;
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
		class PlayerSteeringCoefficients
		{
			turnIncreaseConst	= 1.2;	// basic sensitivity value, higher value = faster steering
			turnIncreaseLinear	= 1.5;	// higher value means less sensitive steering in higher speed, more sensitive in lower speeds
			turnIncreaseTime	= 1.0;	// higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
			turnDecreaseConst	= 5.0;	// basic caster effect value, higher value = the faster the wheels align in the direction of travel
			turnDecreaseLinear	= 1.5;	// higher value means faster wheel re-centering in higher speed, slower in lower speeds
			turnDecreaseTime	= 0.0;	// higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
			maxTurnHundred		= 0.9;	// coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
		};
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
			class L3: L1
			{
				boneName="wheel_1_3_damper";
				steering=0;
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_axis";
				tireForceAppPointOffset="wheel_1_3_axis";
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
			class R3: R1
			{
				boneName="wheel_2_3_damper";
				steering=0;
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_axis";
				tireForceAppPointOffset="wheel_2_3_axis";
				maxHandBrakeTorque=300000;
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
		
		class RenderTargets
		{
			class Left_mirror
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
			class Right_mirror
			{
				renderTarget="rendertarget1";
				class mirror
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.5;
				};
			};
			class Left_Small_mirror
			{
				renderTarget="rendertarget2";
				class mirror
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=1;
				};
			};
			class Right_Small_mirror
			{
				renderTarget="rendertarget3";
				class mirror
				{
					pointPosition="PIP3_pos";
					pointDirection="PIP3_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=1;
				};
			};
		};
	};
};
