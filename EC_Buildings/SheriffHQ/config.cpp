class CfgPatches
{
	class EC_Buildings_SheriffHQ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3FL_Buildings","A3PL_Houses"};
	};
};
class CfgVehicles
{
	class A3PL_Houses;
	class Land_EC_SheriffHQ: A3PL_Houses
	{
		displayName = "Sheriffs Department HQ";
		model = "\EC_Buildings\SheriffHQ\EC_SheriffHQ";
		class AnimationSources
		{
			class Door_1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "GenericDoorsSound";
			};
			class Door_2: Door_1{};
			class Door_3: Door_1{};
			class Door_4: Door_1{};
			class Door_5: Door_1{};
			class Door_6: Door_1{};
			class Door_7: Door_1{};
			class Door_8: Door_1{};
			class Door_9: Door_1{};
			class Door_10: Door_1{};
			class Door_11: Door_1{};
			class Door_12: Door_1{};
			class Door_13: Door_1{};
			class Door_14: Door_1{};
			class Door_15: Door_1{};
			class Door_16: Door_1{};
			class Door_17: Door_1{};
			class Door_18: Door_1{};
			class Door_19: Door_1{};
			class Door_20: Door_1{};
			class Door_21: Door_1{};
			class Door_22: Door_1{};
			class Door_23: Door_1{};
			class Door_24: Door_1{};
			class Door_25: Door_1{};
			class Door_34: Door_1{};
			class Door_35: Door_1{};
			class Door_36: Door_1{};
			class Door_37: Door_1{};
			class Door_38: Door_1{};
			class Door_39: Door_1{};
		};
		class MarkerLights
		{
			class Light_4
			{
				color[] = {255,255,255};
				ambient[] = {255,255,255};
				intensity = 1;
				name = "Light_4";
				useFlare = 0;
				flareSize = 0;
				flareMaxDistance = 0;
				activeLight = 1;
				dayLight = 0;
				drawLight = 0;
				blinking = 0;
				class Attenuation
				{
					start = 0;
					constant = 50;
					linear = 5;
					quadratic = 1;
					hardLimitStart = 0;
					hardLimitEnd = 0;
				};
			};
			class Light_3
			{
				color[] = {255,255,255};
				ambient[] = {255,255,255};
				intensity = 3;
				name = "Light_3";
				useFlare = 0;
				flareSize = 0;
				flareMaxDistance = 0;
				activeLight = 1;
				dayLight = 0;
				drawLight = 0;
				blinking = 0;
				class Attenuation
				{
					start = 0;
					constant = 50;
					linear = 5;
					quadratic = 1;
					hardLimitStart = 0;
					hardLimitEnd = 0;
				};
			};
			class Light_2
			{
				color[] = {255,255,255};
				ambient[] = {255,255,255};
				intensity = 3;
				name = "Light_2";
				useFlare = 0;
				flareSize = 0;
				flareMaxDistance = 0;
				activeLight = 1;
				dayLight = 0;
				drawLight = 0;
				blinking = 0;
				class Attenuation
				{
					start = 0;
					constant = 50;
					linear = 5;
					quadratic = 1;
					hardLimitStart = 0;
					hardLimitEnd = 0;
				};
			};
			class Light_1
			{
				color[] = {255,255,255};
				ambient[] = {255,255,255};
				intensity = 15;
				name = "Light_1";
				useFlare = 0;
				flareSize = 0;
				flareMaxDistance = 0;
				activeLight = 1;
				dayLight = 0;
				drawLight = 0;
				blinking = 0;
				class Attenuation
				{
					start = 0;
					constant = 50;
					linear = 5;
					quadratic = 1;
					hardLimitStart = 0;
					hardLimitEnd = 0;
				};
			};
			class Light_red_1
			{
				color[] = {0.95,0,0};
				ambient[] = {0,0,0};
				intensity = 8;
				name = "light_red_1";
				drawLight = 1;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.08;
				activeLight = 0;
				blinking = 0;
				dayLight = 1;
				useFlare = 0;
			};
			class Light_green_1
			{
				color[] = {0,0.95,0};
				ambient[] = {0,0,0};
				intensity = 12;
				name = "light_green_1";
				drawLight = 1;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.08;
				activeLight = 0;
				blinking = 0;
				dayLight = 1;
				useFlare = 0;
			};
		};
	};
};
