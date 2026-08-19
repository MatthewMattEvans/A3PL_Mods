////////////////////////////////////////////////////////////////////
//DeRap: Bank\config.bin
//Produced from mikero's Dos Tools Dll version 9.66
//https://mikero.bytex.digital/Downloads
//'now' is Thu Oct 31 11:26:31 2024 : 'file' last modified on Tue Jan 17 16:58:02 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class A3PL_Houses_Bank
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3PL_Cars","A3PL_Houses"};
	};
};
class CfgVehicles
{
	class A3PL_Houses;
	class Land_A3PL_Bank: A3PL_Houses
	{
		model = "\A3PL_Houses\Bank\A3PL_Bank";
		scope = 1;
		displayName = "A3PL Bank";
		ladders[] = {{"ladder_1_1","ladder_1_2"}};
	};
};
class cfgMods
{
	author = "Marshall";
	timepacked = "1673956681";
};
