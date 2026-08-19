////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.64
//https://mikero.bytex.digital/Downloads
//'now' is Fri Nov 01 17:19:57 2024 : 'file' last modified on Thu Apr 28 17:40:33 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class A3PL_TaxiDepot
	{
		requiredVersion = 0.1;
		units[] = {"Land_A3PL_TaxiDepot"};
		requiredAddons[] = {"A3_Data_F","A3PL_MultiMats_4"};
		author = "Kainnon";
		weapons[] = {};
	};
};
class CfgVehicles
{
	class House;
	class House_F: House{};
	class Land_A3PL_TaxiDepot: House_F
	{
		model = "A3PL_Kainnon\TaxiDepot\A3PL_TaxiDepot.p3d";
		displayName = "Gs Taxi Depot";
		icon = "A3PL_Kainnon\TaxiDepot\Logo.paa";
		picture = "A3PL_Kainnon\TaxiDepot\Logo.paa";
		scope = 2;
		ladders[] = {{"start1","end1"}};
		class AnimationSources
		{
			class door_1_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				sound = "GenericBigDoorsSound";
				soundPosition = "door_1_axis";
			};
			class door_2_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				sound = "GenericBigDoorsSound";
				soundPosition = "door_2_axis";
			};
			class door_3_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				sound = "GenericBigDoorsSound";
				soundPosition = "door_3_axis";
			};
		};
		class Reflectors
		{
			class Light_1
			{
				color[] = {246,236,219};
				ambient[] = {196,188,175};
				intensity = 5;
				size = 4;
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
		};
	};
};
