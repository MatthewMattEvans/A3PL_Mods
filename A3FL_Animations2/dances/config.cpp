class CfgPatches
{
	class A3FL_AnimDances
	{
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredAddons[]=
		{
			"A3PL_Common"
		};
		requiredVersion=6.6999998;
	};
};

class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	class States
	{
		class AmovPercMstpSnonWnonDnon;
		class AmovPercMstpSnonWnonDnon_falling;
		class CutSceneAnimationBase: AmovPercMstpSnonWnonDnon{};
		class A3FL_anim_DanceTwerking: CutSceneAnimationBase
		{
			file = "\A3FL_Animations2\dances\A3FL_anim_DanceTwerking.rtm";
			speed = -15.07;
			looped = 1;
			connectTo[] = {};
			interpolateFrom[] = {};
			interpolateTo[] = {};
			disableWeapons = 0;
		};
		class A3FL_anim_Cartwheel: CutSceneAnimationBase
		{
			file = "\A3FL_Animations2\dances\A3FL_anim_Cartwheel.rtm";
			speed = -3.16;
			looped = 0;
			connectTo[] = {};
			interpolateFrom[] = {};
			interpolateTo[] = {};
			disableWeapons = 0;
		};
		class A3FL_anim_YMCADance: CutSceneAnimationBase
		{
			file = "\A3FL_Animations2\dances\A3FL_anim_YMCADance.rtm";
			speed = -4.16;
			looped = 1;
			connectTo[] = {};
			interpolateFrom[] = {};
			interpolateTo[] = {};
			disableWeapons = 0;
		};
		class A3FL_anim_BellyDance: CutSceneAnimationBase
		{
			file = "\A3FL_Animations2\dances\A3FL_anim_BellyDance.rtm";
			speed = -25.11;
			looped = 1;
			connectTo[] = {};
			interpolateFrom[] = {};
			interpolateTo[] = {};
			disableWeapons = 0;
		};
		class A3FL_anim_GangnamStyle: CutSceneAnimationBase
		{
			file = "\A3FL_Animations2\dances\A3FL_anim_GangnamStyle.rtm";
			speed = -12.11;
			looped = 1;
			connectTo[] = {};
			interpolateFrom[] = {};
			interpolateTo[] = {};
			disableWeapons = 0;
		};
		class A3FL_anim_Macarena: CutSceneAnimationBase
		{
			file = "\A3FL_Animations2\dances\A3FL_anim_Macarena.rtm";
			speed = -8.08;
			looped = 1;
			connectTo[] = {};
			interpolateFrom[] = {};
			interpolateTo[] = {};
			disableWeapons = 0;
		};
		class A3FL_anim_ChickenDance: CutSceneAnimationBase
		{
			file = "\A3FL_Animations2\dances\A3FL_anim_ChickenDance.rtm";
			speed = -4.24;
			looped = 1;
			connectTo[] = {};
			interpolateFrom[] = {};
			interpolateTo[] = {};
			disableWeapons = 0;
		};
		class A3FL_anim_Dancing: CutSceneAnimationBase
		{
			file = "\A3FL_Animations2\dances\A3FL_anim_Dancing.rtm";
			speed = -16.9;
			looped = 1;
			connectTo[] = {};
			interpolateFrom[] = {};
			interpolateTo[] = {};
			disableWeapons = 0;
		};
		class A3FL_anim_CanCan: CutSceneAnimationBase
		{
			file = "\A3FL_Animations2\dances\A3FL_anim_CanCan.rtm";
			speed = -3.21;
			looped = 1;
			connectTo[] = {};
			interpolateFrom[] = {};
			interpolateTo[] = {};
			disableWeapons = 0;
		};
		class A3FL_anim_SnakeHipHop: CutSceneAnimationBase
		{
			file = "\A3FL_Animations2\dances\A3FL_anim_SnakeHipHop.rtm";
			speed = -15.07;
			looped = 1;
			connectTo[] = {};
			interpolateFrom[] = {};
			interpolateTo[] = {};
			disableWeapons = 0;
		};
		class A3FL_anim_RunningMan: CutSceneAnimationBase
		{
			file = "\A3FL_Animations2\dances\A3FL_anim_RunningMan.rtm";
			speed = -10.26;
			looped = 1;
			connectTo[] = {};
			interpolateFrom[] = {};
			interpolateTo[] = {};
			disableWeapons = 0;
		};
	};
};