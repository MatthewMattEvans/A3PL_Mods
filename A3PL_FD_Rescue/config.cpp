class CfgPatches
{
	class A3PL_FD_Rescue
	{
		units[]= {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= {"A3PL_Cars","A3PL_FD"};
	};
};
class CfgVehicles
{
	class Truck_F;
	class A3PL_Truck_Base: Truck_F {
		class AnimationSources {
			class Cargo_Door;
			class Outriggers;
		};
		class Sounds;
	};
	class A3PL_Pierce_Ladder: A3PL_Truck_Base {
		class AnimationSources;
		class Wheels
		{
			class L1;
			class L2;
			class L3;
			class R1;
			class R2;
			class R3;
		};
	};
	class A3PL_Pierce_Rescue: A3PL_Pierce_Ladder
	{
		scope = 2;
		displayName="Pierce Rescue";
		model="\A3PL_FD_Rescue\Rescue\A3PL_Rescue";
		author="Jonzie";
		hiddenSelections[] = {"body_back","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","FT_num_1","FT_num_2"};
		hiddenSelectionsTextures[]={"a3pl_fd_rescue\rescue\data\cab_q_rb_r1_d.paa","","","","","","","","a3pl_fd\textures\truck_numbers\0.paa","a3pl_fd\textures\truck_numbers\3.paa"};
		extCameraPosition[]={0,2,-10};
		wheelDestroyRadiusCoef = 0.64;
		transportSoldier=5;
		armor = 200;
		thrustDelay = 0.1;
		brakeIdleSpeed = 2.1;
		maxSpeed = 130;
		fuelCapacity = 40;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 0;
		antiRollbarSpeedMin = 0;
		antiRollbarSpeedMax = 0;
		enginePower=238;
		maxOmega=722;
		peakTorque=950;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-10.094,
				"N",
				0,
				"D1",
				5.5619998,
				"D2",
				3.4560001,
				"D3",
				2.6229999,
				"D4",
				1.678,
				"D5",
				1.0779999
			};
			TransmissionRatios[]=
			{
				"High",
				8
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			gearUpMaxCoef=0.94999999;
			gearDownMaxCoef=0.5;
			gearUpMinCoef=0.89999998;
			gearDownMinCoef=0.15000001;
			transmissionDelay=2;
		};
		simulation = "carx";
		dampersBumpCoef = 6.0;
		differentialType = "rear_open";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 55.0;
		switchTime = 0.56;
		latency = 1.0;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = 0.4;
				mass = 80;
				MOI = 40;
				dampingRate = 1;
				maxBrakeTorque = 10000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 1;
				mMaxDroop = 0;
				sprungMass = 2000;
				springStrength = 70000;
				longitudinalStiffnessPerUnitGravity = 8000;
				latStiffX = 25;
				latStiffY = 18000;
				frictionVsSlipGraph[] = {
					{ 0,1 },
					{ 0.5,1 },
					{ 1,1 }};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 9000;
			};
			class LRR: LF
			{
				boneName = "wheel_1_3_damper";
				steering = 0;
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
				maxHandBrakeTorque = 9000;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 9000;
			};
			class RRR: RF
			{
				boneName = "wheel_2_3_damper";
				steering = 0;
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
				maxHandBrakeTorque = 9000;
			};
		};
		class Turrets {};
		class TransportItems
		{
			class _xx_Helmet_Probationer
			{
				name="A3PL_FireHelmet_Probationer_New";
				count=3;
			};
			class _xx_Helmet_Firefighter
			{
				name="A3PL_FireHelmet_Firefighter_New";
				count=6;
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
			class _xx_Helmet_Captain
			{
				name="A3PL_FireHelmet_Captain_New";
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
				count=3;
			};
			class _xx_FireExtinguisher_Mag
			{
				name="A3PL_Extinguisher_Water_Mag";
				count=3;
			};
			class _xx_FireAxe
			{
				name="A3PL_FireAxe";
				count=2;
			};
			class _xx_Jaws
			{
				name="A3PL_Jaws";
				count=1;
			};
			class _xx_Protective
			{
				name="A3PL_FD_Protective_Uniform";
				count=8;
			};
			class _xx_SCBA
			{
				name="A3PL_FD_Oxygen";
				count=8;
			};
			class _xx_Mask
			{
				name="A3PL_FD_Mask";
				count=8;
			};
			class _xx_Nozzle
			{
				name="A3PL_High_Pressure";
				count=8;
			};
			class _xx_RescueDiver
			{
				name="A3PL_FIFR_Swimmer_Uniform";
				count=2;
			};
			class _xx_G_Diving
			{
				name="G_Diving";
				count=2;
			};			
		};
		class AnimationSources: AnimationSources {
			class Top_Spot_Rotate {
				source="user";
				animPeriod=10;
				initPhase=0;
				sound="A3PL_Hydraulic";
			};
			class Top_Lights {
				source="user";
				animPeriod = 0;
				initPhase = 0;
			};
			class Ladder_Rotate {
				source="user";
				animPeriod=3;
				initPhase=0;
			};
		};
		class Reflectors {
			class LightCarHeadL01 {
				color[]={1000,650,400};
				ambient[]={5,5,5};
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
				class Attenuation {
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class LightCarHeadR01: LightCarHeadL01 {
				position="LightCarHeadR01";
				direction="LightCarHeadR01_end";
				hitpoint="P svetlo";
				selection="P svetlo";
			};
			class LightCarHeadL02: LightCarHeadL01 {
				position="LightCarHeadL02";
				direction="LightCarHeadL02_end";
				innerAngle=60;
				outerAngle=100;
				coneFadeCoef=10;
				intensity=2;
				class Attenuation {
					start=2;
					constant=0;
					linear=0.1;
					quadratic=0.0099999998;
					hardLimitStart=390;
					hardLimitEnd=450;
				};
			};
			class LightCarHeadR02: LightCarHeadR01 {
				position="LightCarHeadR02";
				direction="LightCarHeadR02_end";
				innerAngle=60;
				outerAngle=100;
				coneFadeCoef=10;
				intensity=2;
				class Attenuation {
					start=2;
					constant=0;
					linear=0.1;
					quadratic=0.0099999998;
					hardLimitStart=390;
					hardLimitEnd=450;
				};
			};
		};
		class RenderTargets {
			class Left_mirror {
				renderTarget="rendertarget0";
				class mirror {
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.5;
				};
			};
			class Left_Right {
				renderTarget="rendertarget1";
				class mirror {
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.5;
				};
			};
			class Reverse_Cam {
				renderTarget="rendertarget2";
				class mirror {
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.5;
				};
			};
		};
	};
	class A3PL_Objects;
	class A3PL_SceneLight: A3PL_Objects
	{
		_generalMacro="A3PL_SceneLight";
		model="\A3PL_FD_Rescue\tools\A3PL_SceneLight";
		displayName="Scene Light";
		class Reflectors
		{
			class SceneLight
			{
				color[]={1000,650,400};
				ambient[]={5,5,5};
				position = "light_pos";
				direction = "light_dir";
				hitpoint = "light_1_hitpoint";
				selection = "light_pos";
				size = 1;
				innerAngle = 50;
				outerAngle = 110;
				intensity = 20;
				useFlare = 1;
				dayLight = 0;
				flareSize = 5;
				flareMaxDistance = 50;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 0.2;
					hardLimitStart = 40;
					hardLimitEnd = 50;
				};
			};
		};
	};
	class Land_LampDecor_F;
	class A3PL_RescueTruck_Light: Land_LampDecor_F
	{
		author="Winston";
		scope=1;
		access=1;
		scopeCurator=0;
		scopeArsenal=2;
		displayName="A3PL_Rescue_FloodLight";
		model="A3PL_FD_Rescue\tools\A3PL_Rescue_FloodLight";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		hiddenSelections[]= {""};
		hiddenSelectionsTextures[]={""};
		aggregateReflectors[]= {{"Light_1","Light_2"}};
		class Reflectors
		{
			class Light_1
			{
				color[] = {1000,650,400};
				ambient[]={5,5,5};
				position="Light_1_Pos";
				direction="Light_1_Dir";
				hitpoint="Light_1";
				selection="Light_1";
				size=1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef=4;
				intensity = 1;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 90;
					hardLimitEnd = 110;
				};
			};
			class Light_2: Light_1
			{
				position="Light_2_Pos";
				direction="Light_2_Dir";
				hitpoint="Light_2";
				selection="Light_2";
			};
		};
	};
};