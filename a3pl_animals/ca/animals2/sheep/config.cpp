////////////////////////////////////////////////////////////////////
//DeRap: sheep\config.bin
//Produced from mikero's Dos Tools Dll version 10.10
//https://mikero.bytex.digital/Downloads
//'now' is Wed Jan 21 18:20:41 2026 : 'file' last modified on Fri Jan 11 20:39:39 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class A3PL_Animals_Sheep
	{
		units[] = {"Sheep","Sheep02","Sheep03"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3PL_Animals","A3PL_Animals_Anim_Config"};
	};
};
class CfgVehicles
{
	class CAAnimalBase;
	class Sheep: CAAnimalBase
	{
		scope = 2;
		model = "\ca\animals2\Sheep\Sheep";
		displayName = "Sheep";
		moves = "CfgMovesSheep";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\animals2\sheep\data\sheep.rvmat","ca\animals2\sheep\data\W1_sheep.rvmat","ca\animals2\sheep\data\W2_sheep.rvmat"};
		};
		wildAnimal = 0;
		humansDetectionRadius = 2;
		runDistanceMax = 10;
		minIdleTime = 15;
		maxIdleTime = 20;
		idleSpecialAnim = "Sheep_Eat";
		favouritezones = "(meadow) * (1 - forest) * (1 - houses) * (1 - sea)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"ca\animals2\sheep\data\sheep_co"};
		class VariablesString
		{
			_sound1 = "sheep_01";
			_sound2 = "sheep_02";
			_sound3 = "sheep_03";
		};
	};
	class Sheep02: Sheep
	{
		displayName = "Sheep (Brown)";
		hiddenSelectionsTextures[] = {"ca\animals2\sheep\data\ta_sheep_co"};
	};
	class Sheep03: Sheep
	{
		displayName = "Sheep (Yellow)";
		hiddenSelectionsTextures[] = {"ca\animals2\sheep\data\ta_sheep_2_co"};
	};
};
class CfgSounds
{
	class Sheep_Danger
	{
		sound[] = {"\ca\animals2\sheep\data\sound\danger.wss",1,1};
		titles[] = {"Sheep - danger."};
	};
	class Sheep_IdleComm
	{
		sound[] = {"\ca\animals2\sheep\data\sound\idleComm",1,1};
		titles[] = {"Sheep - idle communication."};
	};
};
