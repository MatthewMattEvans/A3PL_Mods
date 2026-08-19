class CfgPatches
{
	class buildingsNightclub2
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = 
		{
			"A3PL_Houses",
			"A3PL_MultiMats_1"
		};
	};
};
class CfgVehicles
{
	class A3PL_Houses;
	class Land_buildingsNightclub2: A3PL_Houses
	{
		displayName = "NightClub 2";
		model = "A3PL_Kainnon\NightClub2\mesh\buildingsNightclub2.p3d";
		class Reflectors
		{
			class Light_1
			{
				color[] = {200,50,255};
				ambient[] = {81,47,99};
				intensity = 0.25;
				size = 2;
				innerAngle = 90;
				outerAngle = 170;
				coneFadeCoef = 1;
				position = "mem_light1";
				direction = "mem_light1_dir";
				hitpoint = "mem_light1";
				selection = "mem_light1";
				useFlare = 0;
				flareSize = 2;
				flareMaxDistance = 200;
				class Attenuation
				{
					start = 18;
					constant = 0.1;
					linear = 0.6;
					quadratic = 0.1;
					hardLimitStart = 20;
					hardLimitEnd = 80;
				};
			};
		};
		ladders[] = 
		{
			{"mem_ladder_bottom","mem_ladder_top"},
			{"mem_ladder_bottom1","mem_ladder_top1"}
		};
	};
};
