#include "basicdefines_A3.hpp"

class CfgPatches 
{
	class A3FL_Cars_Anim
	{
		requiredVersion = 0.100000;
		requiredAddons[]= {"A3_Functions_F"};
		units[]= {};
		weapons[]= {};
	};
};

class CfgMovesBasic 
{
	class Default;
	class DefaultDie;
	class ManActions
	{
		A3FL_Kenworth_Anim="A3FL_Kenworth_Anim";
		A3FL_DriverExplorer19="A3FL_DriverExplorer19";
		A3FL_PassangerExplorer19="A3FL_PassangerExplorer19";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic 
{
	class States 
	{
		class Truck_02_Driver;
		class driver_offroad01;
		class passenger_low01;
		class A3FL_Kenworth_Anim: Truck_02_Driver
		{
			file="\A3FL_Cars\common\anim\A3FL_Kenworth_Anim.rtm";
		};
		class A3FL_DriverExplorer19: driver_offroad01
		{
			file="\A3FL_Cars\common\anim\A3FL_DriverExplorer19.rtm";
		};
		class A3FL_PassangerExplorer19: passenger_low01
		{
			file="\A3FL_Cars\common\anim\A3FL_PassangerExplorer19.rtm";
		};
		class Crew: Default
		{
			actions="CargoActions";
			file="\A3\anims_f\Data\Anim\Sdr\Mov\Sit\stp\non\non\AmovPsitMstpSnonWnonDnon";
			speed=1e+010;
			soundEnabled=0;
			collisionShape="A3\anims_f\Data\Geom\Sdr\geom_empty.p3d";
			useIdles=0;
			canPullTrigger=0;
			leaning="crewShake";
			mask="empty";
			forceAim=1;
			disableWeapons=1;
			disableWeaponsLong=1;
			rightHandIKCurve[]={1};
			leftHandIKCurve[]={1};
			rightLegIKCurve[]={1};
			leftLegIKCurve[]={1};
			InterpolateTo[]=
			{
				"Unconscious",
				0.1
			};
		};
	};
};
