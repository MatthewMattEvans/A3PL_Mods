#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class A3PL_Houses2
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3PL_Cars",
			"A3_Data_F",
			"A3_Structures_F",
			"A3_Structures_F_Walls",
			"A3PL_Houses"
		};
	};
};
class CfgVehicles
{
	class A3PL_Houses;
	class Land_A3PL_ModernHouse1: A3PL_Houses
	{
		model="\A3PL_Houses2\house1\A3PL_ModernHouse1.p3d";
		displayName="A3PL Modern House 1";
	};
	class Land_A3PL_ModernHouse2: A3PL_Houses
	{
		model="\A3PL_Houses2\house2\A3PL_ModernHouse2.p3d";
		displayName="A3PL Modern House 2";
	};
	class Land_A3PL_ModernHouse3: A3PL_Houses
	{
		model="\A3PL_Houses2\house3\A3PL_ModernHouse3.p3d";
		displayName="A3PL Modern House 3";
	};
	class Land_A3PL_BostonHouse: A3PL_Houses
	{
		model="\A3PL_Houses2\bostonHouse\A3PL_BostonHouse.p3d";
		displayName="A3PL Boston House";
	};
};