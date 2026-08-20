////////////////////////////////////////////////////////////////////
//DeRap: Prison\config.bin
//Produced from mikero's Dos Tools Dll version 9.89
//https://mikero.bytex.digital/Downloads
//'now' is Tue Jan 21 19:53:06 2025 : 'file' last modified on Sun Jan 21 08:15:48 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Land_EC_Prison
	{
		author = "Eclipse Roleplay Development Team";
		name = "EclipseRoleplay Buildings / Prison";
		url = "www.arma-eclipse.net";
		units[] = {"Land_EC_Prison"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3FL_Buildings"};
	};
};
class CfgVehicles
{
	class House_F;
	class Land_EC_Prison: House_F
	{
		scope = 2;
		scopeCurator = 2;
		mapSize = 6;
		author = "ToxicRageTv";
		model = "\EC_Buildings2\Prison\EC_Prison";
		displayName = "EC Prison";
	};
};
