class CfgPatches
{
	class A3FL_Buildings_Trailers
	{
		requiredAddons[]= {"A3_Structures_F","A3_Data_F","A3_Structures_F_Data"};
		units[]={};
		weapons[]={};
		requiredVersion=1;
	};
};
class CfgVehicles
{
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class Ruins_F;
	class Land_A3FL_Trailer: House_F
	{
		model="\A3FL_Buildings\Trailers\A3FL_Trailer";
		displayName="A3FL Trailer";
		scope=2;
		mapSize=8;
		class Reflectors
		{
			class Light_1
			{
				color[] = {1000,1000,1200};
				ambient[] = {6,5,4};
				intensity = 2;
				size = 1;
				innerAngle = 90;
				outerAngle = 360;
				coneFadeCoef = 1;
				position = "Light1_pos";
				direction = "Light1_dir";
				hitpoint = "Light1_hitpoint";
				selection = "Light_1";
				useFlare = 1;
				flareSize = 0.3;
				flareMaxDistance = 20;
				class Attenuation
				{
					start = 0;
					constant = 20;
					linear = 0;
					quadratic = 0.5;
					hardLimitStart = 15;
					hardLimitEnd = 40;
				};
			};
			class Light_2: Light_1
            {
                position = "light2_pos";
                direction = "light2_dir";
                hitpoint = "light2";
                selection = "light_2";
            };
        };
		aggregateReflectors[] = {{ "Light_1;Light_2"}};
		
		class AnimationSources
		{
			class Door_1
			{
				source = user;
				initPhase = 0;
				animPeriod = 1;
				sound = "GenericDoorsSound";
			};
			class Door_2: Door_1 {};
			class Door_3: Door_1 {};
			class Door_4: Door_1 {};
			class Door_5: Door_1 {};
			class Door_6: Door_1 {};
			class Door_7: Door_1 {};
			class Door_8: Door_1 {};
		};
	};
	class Land_A3FL_Trailer_2: Land_A3FL_Trailer
	{
		model="\A3FL_Buildings\Trailers\A3FL_Trailer_2";
		displayName="A3FL Trailer 2";
	};
	class Land_A3FL_Trailer_3: Land_A3FL_Trailer
	{
		model="\A3FL_Buildings\Trailers\A3FL_Trailer_3";
		displayName="A3FL Trailer 3";
	};
	class Land_A3FL_Trailer_4: Land_A3FL_Trailer
	{
		model="\A3FL_Buildings\Trailers\A3FL_Trailer_4";
		displayName="A3FL Trailer 4";
	};
	class Land_A3FL_Trailer_5: Land_A3FL_Trailer
	{
		model="\A3FL_Buildings\Trailers\A3FL_Trailer_5";
		displayName="A3FL Trailer 5";
	};
	class Land_A3FL_Trailer_6: Land_A3FL_Trailer
	{
		model="\A3FL_Buildings\Trailers\A3FL_Trailer_6";
		displayName="A3FL Trailer 6";
	};
};