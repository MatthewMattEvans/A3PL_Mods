class CfgPatches
{
	class FYD_Parras_Houses
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3PL_Houses"
		};
	};
};
class CfgVehicles
{
	class A3PL_Houses;
	class Land_FYD_PARRAS_BigModernHouse: A3PL_Houses
	{
		model="\FYD_Parras_Houses\FYD_Parras_BiModernHouse\FYD_Parras_BigModernHouse.p3d";
		displayName="FYD Parras - Big Modern House";
		scope = 2;
	};
	class Land_FYD_Parras_Modern_House: A3PL_Houses
	{
		model="\FYD_Parras_Houses\FYD_Parras_Modern_House\FYD_Parras_Modern_House.p3d";
		displayName="FYD Parras - Modern House";
		scope = 2;
	};
	class Land_FYD_Parras_Modern_House_02: A3PL_Houses
	{
		model="\FYD_Parras_Houses\FYD_Parras_Modern_House_02\FYD_Parras_Modern_House_02.p3d";
		displayName="FYD Parras - Modern House 02";
		scope = 2;
	};
	class Land_FYD_Parras_Modern_House_03: A3PL_Houses
	{
		model="\FYD_Parras_Houses\FYD_Parras_Modern_House_03\FYD_Parras_Modern_House_03.p3d";
		displayName="FYD Parras - Modern House 03";
		scope = 2;
	};
};