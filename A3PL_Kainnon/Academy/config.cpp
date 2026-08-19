class CfgPatches
{
	class A3PL_Academy
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
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
	class Land_A3PL_Academy: A3PL_Houses
	{
		displayName = "FISD Academy";
		model = "A3PL_Kainnon\Academy\A3PL_Academy.p3d";
		class Reflectors
		{
			class Light_1
			{
				color[] = {246,236,219};
				ambient[] = {196,188,175};
				intensity = 5;
				size = 1;
				innerAngle = 90;
				outerAngle = 360;
				coneFadeCoef = 1;
				position = "mem_light1";
				direction = "mem_light1_dir";
				hitpoint = "mem_light1";
				selection = "mem_light1";
				useFlare = 0;
				flareSize = 0;
				flareMaxDistance = 0;
				class Attenuation
				{
					start = 0;
					constant = 20;
					linear = 0;
					quadratic = 0.5;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
			class Light_2
			{
				color[] = {246,236,219};
				ambient[] = {196,188,175};
				intensity = 5;
				size = 1;
				innerAngle = 90;
				outerAngle = 360;
				coneFadeCoef = 1;
				position = "mem_light2";
				direction = "mem_light2_dir";
				hitpoint = "mem_light2";
				selection = "mem_light2";
				useFlare = 0;
				flareSize = 0;
				flareMaxDistance = 0;
				class Attenuation
				{
					start = 0;
					constant = 20;
					linear = 0;
					quadratic = 0.5;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
			class Light_3
			{
				color[] = {246,236,219};
				ambient[] = {196,188,175};
				intensity = 5;
				size = 1;
				innerAngle = 90;
				outerAngle = 360;
				coneFadeCoef = 1;
				position = "mem_light3";
				direction = "mem_light3_dir";
				hitpoint = "mem_light3";
				selection = "mem_light3";
				useFlare = 0;
				flareSize = 0;
				flareMaxDistance = 0;
				class Attenuation
				{
					start = 0;
					constant = 20;
					linear = 0;
					quadratic = 0.5;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
			class Light_4
			{
				color[] = {246,236,219};
				ambient[] = {196,188,175};
				intensity = 5;
				size = 1;
				innerAngle = 90;
				outerAngle = 360;
				coneFadeCoef = 1;
				position = "mem_light4";
				direction = "mem_light4_dir";
				hitpoint = "mem_light4";
				selection = "mem_light4";
				useFlare = 0;
				flareSize = 0;
				flareMaxDistance = 0;
				class Attenuation
				{
					start = 0;
					constant = 20;
					linear = 0;
					quadratic = 0.5;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
		};
	};
};