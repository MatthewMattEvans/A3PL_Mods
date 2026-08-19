////////////////////////////////////////////////////////////////////
//DeRap: goat\config.bin
//Produced from mikero's Dos Tools Dll version 10.10
//https://mikero.bytex.digital/Downloads
//'now' is Wed Jan 21 18:20:40 2026 : 'file' last modified on Fri Jan 11 20:39:39 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class A3PL_Animals_Goat
	{
		units[] = {"Goat","Goat02","Goat03"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3PL_Animals","A3PL_Animals_Anim_Config"};
	};
};
class CfgVehicles
{
	class CAAnimalBase;
	class Goat: CAAnimalBase
	{
		scope = 2;
		model = "\ca\animals2\Goat\Goat";
		displayName = "Goat";
		moves = "CfgMovesGoat";
		wildAnimal = 0;
		humansDetectionRadius = 2;
		runDistanceMax = 10;
		minIdleTime = 10;
		maxIdleTime = 15;
		favouritezones = "(meadow) * (1 - forest) * (1 - houses) * (1 - sea)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"ca\animals2\Goat\data\goat_co.PAA"};
		class VariablesString
		{
			_sound1 = "goat_01";
			_sound2 = "goat_02";
			_sound3 = "goat_03";
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\animals2\Goat\data\goat.rvmat","ca\animals2\Goat\data\W1_goat.rvmat","ca\animals2\Goat\data\W2_goat.rvmat"};
		};
	};
	class Goat02: Goat
	{
		displayName = "Goat (Black)";
		hiddenSelectionsTextures[] = {"ca\animals2\Goat\data\ta_goat_co.PAA"};
	};
	class Goat03: Goat
	{
		displayName = "Goat (Brown)";
		hiddenSelectionsTextures[] = {"ca\animals2\Goat\data\ta_goat2_co.PAA"};
	};
};
