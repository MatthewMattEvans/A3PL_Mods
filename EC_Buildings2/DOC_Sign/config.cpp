////////////////////////////////////////////////////////////////////
//DeRap: DOC_Sign\config.bin
//Produced from mikero's Dos Tools Dll version 9.89
//https://mikero.bytex.digital/Downloads
//'now' is Tue Jan 21 19:53:05 2025 : 'file' last modified on Sun Jan 21 08:15:47 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class EC_DOC_Sign
	{
		units[] = {"EC_DOC_Sign"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3PL_Cars","A3PL_Objects"};
	};
};
class CfgVehicles
{
	class All{};
	class Static: All{};
	class Building: Static{};
	class EC_DOC_Sign: Building
	{
		scope = 2;
		displayName = "DOC Sign";
		vehicleclass = "";
		model = "\EC_Buildings2\DOC_Sign\EC_DOC_Sign.p3d";
	};
};
