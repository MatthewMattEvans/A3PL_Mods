////////////////////////////////////////////////////////////////////
//DeRap: RadioTowerGate\config.bin
//Produced from mikero's Dos Tools Dll version 9.89
//https://mikero.bytex.digital/Downloads
//'now' is Tue Dec 03 02:59:21 2024 : 'file' last modified on Mon Oct 16 01:26:56 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class EC_Buildings_RadioTowerGate
	{
		author = "Eclipse Roleplay Development Team";
		name = "EclipseRoleplay Buildings / SheriffHQ";
		url = "www.arma-eclipse.net";
		units[] = {"Land_EC_RadioTowerGate"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3FL_Buildings"};
	};
};
class CfgVehicles
{
	class House_F;
	class Land_EC_RadioTowerGate: House_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Winston";
		model = "\EC_Buildings\RadioTowerGate\EC_RadioTowerGate";
		displayName = "EC Radio Tower Gate";
		class AnimationSources
		{
			class Gate_1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 11;
			};
		};
	};
};
