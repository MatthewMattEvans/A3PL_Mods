////////////////////////////////////////////////////////////////////
//DeRap: MP9\anim\config.bin
//Produced from mikero's Dos Tools Dll version 9.61
//https://mikero.bytex.digital/Downloads
//'now' is Mon Oct 07 18:43:54 2024 : 'file' last modified on Mon Oct 07 18:43:54 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class mp9hold
	{
		author = "Davis Abrams";
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Anims_F"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgMovesBasic
{
	class default;
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	class StandBase;
	class States
	{
		class mp9hold: StandBase
		{
			file = "A3FL_Weapons\MP9\anim\mp9hold1.rtm";
			looped = 1;
			speed = 1;
			mask = "bodyFullReal";
			rightHandIKCurve[] = {0};
			leftHandIKCurve[] = {0};
		};
		class mp9hold2: StandBase
		{
			file = "A3FL_Weapons\MP9\anim\mp9hold1.rtm";
			looped = 1;
			speed = 1;
			mask = "bodyFullReal";
			rightHandIKCurve[] = {0};
			leftHandIKCurve[] = {0};
		};
	};
};
