////////////////////////////////////////////////////////////////////
//DeRap: wildboar\config.bin
//Produced from mikero's Dos Tools Dll version 10.10
//https://mikero.bytex.digital/Downloads
//'now' is Wed Jan 21 18:20:41 2026 : 'file' last modified on Fri Jan 11 20:39:39 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class A3PL_Animals_WildBoar
	{
		units[] = {"WildBoar"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3PL_Animals","A3PL_Animals_Anim_Config"};
	};
};
class CfgVehicles
{
	class CAAnimalBase;
	class WildBoar: CAAnimalBase
	{
		scope = 2;
		model = "\ca\animals2\WildBoar\WildBoar";
		displayName = "Wild Boar";
		moves = "CfgMovesWildBoar";
		runDistanceMax = 10;
		minIdleTime = 10;
		maxIdleTime = 20;
	};
};
