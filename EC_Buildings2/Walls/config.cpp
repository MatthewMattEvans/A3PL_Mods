////////////////////////////////////////////////////////////////////
//DeRap: Walls\config.bin
//Produced from mikero's Dos Tools Dll version 9.89
//https://mikero.bytex.digital/Downloads
//'now' is Tue Jan 21 19:53:06 2025 : 'file' last modified on Sun Jan 21 08:15:48 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class EC_Buildings2_Bollards
	{
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Structures_F_Exp_Signs_Traffic"};
		units[] = {"Land_EC_WiredFence"};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Land_Mil_WiredFence_F;
	class Land_EC_WiredFence: Land_Mil_WiredFence_F
	{
		displayName = "EC Wired Fence";
		destrType = 0;
		model = "\EC_Buildings2\Walls\EC_WiredFence";
	};
};
