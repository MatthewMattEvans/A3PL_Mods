////////////////////////////////////////////////////////////////////
//DeRap: birds\chicken\config.bin
//Produced from mikero's Dos Tools Dll version 10.10
//https://mikero.bytex.digital/Downloads
//'now' is Wed Jan 21 18:20:39 2026 : 'file' last modified on Fri Jan 11 20:39:38 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class A3PL_Animals_Chicken
	{
		units[] = {"Cock","Hen"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3PL_Animals","A3PL_Animals_Anim_Config"};
	};
};
class CfgVehicles
{
	class CAAnimalBase;
	class Cock: CAAnimalBase
	{
		scope = 2;
		model = "\ca\animals2\Birds\chicken\Cock";
		displayName = "Rooster";
		moves = "CfgMovesCock";
		wildAnimal = 0;
		humansDetectionRadius = 5;
		runDistanceMax = 10;
		minIdleTime = 2;
		maxIdleTime = 5;
		favouritezones = "(houses) * (1 - forest) * (1 - meadow) * (1 - sea)";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\animals2\Birds\chicken\data\cock.rvmat","ca\animals2\Birds\chicken\data\W1_cock.rvmat","ca\animals2\Birds\chicken\data\W2_cock.rvmat"};
		};
		class VariablesString
		{
			_sound1 = "chicken01";
			_sound2 = "chicken02";
			_sound3 = "chicken01";
		};
	};
	class Hen: CAAnimalBase
	{
		scope = 2;
		model = "\ca\animals2\Birds\chicken\hen";
		displayName = "Hen";
		moves = "CfgMovesHen";
		wildAnimal = 0;
		humansDetectionRadius = 5;
		runDistanceMax = 10;
		minIdleTime = 2;
		maxIdleTime = 5;
		favouritezones = "(houses) * (1 - forest) * (1 - meadow) * (1 - sea)";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\animals2\Birds\chicken\data\hen.rvmat","ca\animals2\Birds\chicken\data\W1_hen.rvmat","ca\animals2\Birds\chicken\data\W2_hen.rvmat"};
		};
		class VariablesString
		{
			_sound1 = "chicken01";
			_sound2 = "chicken02";
			_sound3 = "chicken01";
		};
	};
};
