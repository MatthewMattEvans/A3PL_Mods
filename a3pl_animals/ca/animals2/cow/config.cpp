////////////////////////////////////////////////////////////////////
//DeRap: cow\config.bin
//Produced from mikero's Dos Tools Dll version 10.10
//https://mikero.bytex.digital/Downloads
//'now' is Wed Jan 21 18:20:39 2026 : 'file' last modified on Fri Jan 11 20:39:38 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class A3PL_Animals_Cow
	{
		units[] = {"Cow01","Cow02","Cow03","Cow04","Cow05"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3PL_Animals","A3PL_Animals_Anim_Config"};
	};
};
class CfgVehicles
{
	class CAAnimalBase;
	class Cow: CAAnimalBase
	{
		scope = 0;
		model = "\ca\animals2\cow\cow";
		displayName = "Cow";
		moves = "CfgMovesCow";
		runDistanceMax = 10;
		minIdleTime = 20;
		maxIdleTime = 40;
		extCameraPosition[] = {0,0.75,-3.0};
		hiddenSelections[] = {"Camo"};
		class VariablesString
		{
			_sound1 = "cow_01";
			_sound2 = "cow_02";
			_sound3 = "cow_03";
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\animals2\Cow\data\Cow.rvmat","Ca\animals2\Cow\data\W1_Cow.rvmat","Ca\animals2\Cow\data\W2_Cow.rvmat"};
		};
	};
	class Cow01: Cow
	{
		scope = 2;
		accuracy = 1000;
		model = "\ca\animals2\cow\cow";
		displayName = "Cow (Brown/White)";
		hiddenSelectionsTextures[] = {"ca\animals2\cow\data\cow_co.PAA"};
	};
	class Cow02: Cow01
	{
		displayName = "Cow (Brown/White)";
		hiddenSelectionsTextures[] = {"ca\animals2\cow\data\cow2_co.PAA"};
	};
	class Cow03: Cow01
	{
		displayName = "Cow (Black)";
		hiddenSelectionsTextures[] = {"ca\animals2\cow\data\cow3_co.PAA"};
	};
	class Cow04: Cow01
	{
		displayName = "Cow (Black/White)";
		hiddenSelectionsTextures[] = {"ca\animals2\cow\data\cow4_co.PAA"};
	};
	class Cow05: Cow01
	{
		displayName = "Cow (White)";
		hiddenSelectionsTextures[] = {"ca\animals2\cow\data\tak_cow_co.PAA"};
	};
};
