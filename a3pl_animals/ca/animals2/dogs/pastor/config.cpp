////////////////////////////////////////////////////////////////////
//DeRap: dogs\pastor\config.bin
//Produced from mikero's Dos Tools Dll version 10.10
//https://mikero.bytex.digital/Downloads
//'now' is Wed Jan 21 18:20:40 2026 : 'file' last modified on Fri Jan 11 20:39:38 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class A3PL_Animals_Dogs_Pastor
	{
		units[] = {"Pastor"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3PL_Animals_Dogs","A3PL_Animals_Anim_Config"};
	};
};
class CfgVehicles
{
	class Dog_Base_F;
	class Pastor: Dog_Base_F
	{
		scope = 2;
		model = "\ca\animals2\Dogs\Pastor\Pastor";
		displayName = "Alsatian";
		moves = "CfgMovesDog";
		wildAnimal = 0;
		humansDetectionRadius = 2;
		runDistanceMax = 10;
		minIdleTime = 10;
		maxIdleTime = 20;
		favouritezones = "(meadow) * (1 - forest) * (houses) * (1 - sea)";
		class VariablesString
		{
			_sound1 = "dog_01";
			_sound2 = "dog_02";
			_sound3 = "";
		};
	};
};
