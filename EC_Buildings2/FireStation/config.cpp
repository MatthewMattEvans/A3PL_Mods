////////////////////////////////////////////////////////////////////
//DeRap: FireStation\config.bin
//Produced from mikero's Dos Tools Dll version 9.89
//https://mikero.bytex.digital/Downloads
//'now' is Tue Jan 21 19:53:05 2025 : 'file' last modified on Sun Jan 21 08:15:47 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Land_EC_FireStation
	{
		author = "Eclipse Roleplay Development Team";
		name = "EclipseRoleplay Buildings / Fire Station";
		url = "www.arma-eclipse.net";
		units[] = {"Land_EC_FireStation"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3FL_Buildings"};
	};
};
class CfgVehicles
{
	class House_F;
	class Land_EC_FireStation: House_F
	{
		scope = 2;
		scopeCurator = 2;
		mapSize = 6;
		author = "ToxicRageTv";
		model = "\EC_Buildings2\FireStation\EC_FireStation";
		displayName = "EC Fire Station";
		class AnimationSources
		{
			class default
			{
				source = "user";
				initPhase = 0;
				animPeriod = 2;
			};
			class door_1: default
			{
				animPeriod = 3;
			};
			class door_2: default
			{
				animPeriod = 2;
			};
			class door_3: default
			{
				animPeriod = 2;
			};
			class door_4: default
			{
				animPeriod = 2;
			};
			class door_5: default
			{
				animPeriod = 2;
			};
			class door_6: default
			{
				animPeriod = 2;
			};
			class door_7: default
			{
				animPeriod = 2;
			};
			class BayLargeFrontLeft: default
			{
				animPeriod = 12;
			};
			class BayLargeFrontRight: default
			{
				animPeriod = 12;
			};
			class BayLargeBackRight: default
			{
				animPeriod = 12;
			};
			class BayLargeBackLeft: default
			{
				animPeriod = 12;
			};
			class BaySmallLeft: default
			{
				animPeriod = 10;
			};
			class BaySmallCenter: default
			{
				animPeriod = 10;
			};
			class BaySmallRight: default
			{
				animPeriod = 10;
			};
		};
	};
};
