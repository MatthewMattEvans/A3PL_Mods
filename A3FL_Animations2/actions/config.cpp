class CfgPatches
{
	class A3FL_AnimActions
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

class CfgMovesBasic
{
	class ManActions
	{
		A3FL_anim_PhoneAway="A3FL_anim_PhoneAway";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			A3FL_anim_PhoneAway[]={"A3FL_anim_PhoneAway","Gesture"};
		};
	};
};
class CfgGesturesMale
{
	class ManActions{};
	class Actions
	{
		class NoActions
		{
			turnSpeed = 0;
			upDegree = 0;
			limitFast = 1;
			useFastMove = 0;
		};
	};
	class Default;
	class BlendAnims
	{
		Skeleton[]=
		{
			"neck",
			1,
			"neck1",
			1,
			"head",
			1,
			"LeftShoulder",
			1,
			"LeftArm",
			1,
			"LeftArmRoll",
			1,
			"LeftForeArm",
			1,
			"LeftForeArmRoll",
			1,
			"LeftHand",
			1,
			"LeftHandIndex1",
			1,
			"LeftHandIndex2",
			1,
			"LeftHandIndex3",
			1,
			"LeftHandMiddle1",
			1,
			"LeftHandMiddle2",
			1,
			"LeftHandMiddle3",
			1,
			"LeftHandPinky1",
			1,
			"LeftHandMiddle2",
			1,
			"LeftHandMiddle3",
			1,
			"LeftHandPinky1",
			1,
			"LeftHandPinky2",
			1,
			"LeftHandPinky3",
			1,
			"LeftHandRing",
			1,
			"LeftHandRing1",
			1,
			"LeftHandRing2",
			1,
			"LeftHandRing3",
			1,
			"LeftHandThumb1",
			1,
			"LeftHandThumb2",
			1,
			"LeftHandThumb3",
			1,
			"RightShoulder",
			1,
			"RightArm",
			1,
			"RightArmRoll",
			1,
			"RightForeArm",
			1,
			"RightForeArmRoll",
			1,
			"RightHand",
			1,
			"RightHandIndex1",
			1,
			"RightHandIndex2",
			1,
			"RightHandIndex3",
			1,
			"RightHandMiddle1",
			1,
			"RightHandMiddle2",
			1,
			"RightHandMiddle3",
			1,
			"RightHandPinky1",
			1,
			"RightHandMiddle2",
			1,
			"RightHandMiddle3",
			1,
			"RightHandPinky1",
			1,
			"RightHandPinky2",
			1,
			"RightHandPinky3",
			1,
			"RightHandRing",
			1,
			"RightHandRing1",
			1,
			"RightHandRing2",
			1,
			"RightHandRing3",
			1,
			"RightHandThumb1",
			1,
			"RightHandThumb2",
			1,
			"RightHandThumb3",
			1
		};
	};
	class States
	{
		class a3fl_animation_base: Default
		{
			actions="NoActions";
			canPullTrigger=0;
			connectAs="";
			connectFrom[]={};
			connectTo[]={};
			disableWeapons=0;
			enableBinocular=1;
			enableMissile=1;
			enableOptics=0;
			equivalentTo="";
			file="\A3\anims_f\Data\Anim\Sdr\gst\GestureHi.rtm";
			forceAim=0;
			headBobMode=0;
			headBobStrength=0;
			interpolateFrom[]={};
			interpolateTo[]={};
			interpolateWith[]={};
			interpolationRestart=0;
			interpolationSpeed=6;
			looped=0;
			mask="Skeleton";
			minPlayTime=0.5;
			preload=0;
			ragdoll=0;
			relSpeedMax=1;
			relSpeedMin=1;
			showHandGun=0;
			showItemInHand=0;
			showItemInRightHand=0;
			showWeaponAim=1;
			soundEdge[]={0.5,1};
			soundEnabled=1;
			soundOverride="";
			speed=-2;
			static=0;
			terminal=0;
			Walkcycles=1;
			weaponIK=1;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,0.1,0,0.80000001,0,1,1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={1};
			rightHandIKEnd=1;
		};
		class A3FL_anim_PhoneAway: a3fl_animation_base
		{
			file = "\A3FL_Animations2\actions\A3FL_anim_PhoneAway.rtm";
			speed = -1.50;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			head = "headNo";
			forceAim = 1;
			blockMobileSwitching = 1;
			headBobMode = 5;
			headBobStrength = -1;
			interpolateFrom[]={"A3FL_anim_PhoneHold",0.5,"AmovPercMstpSnonWnonDnon",0.5};
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	class States
	{
		class AmovPercMstpSnonWnonDnon;
		class AmovPercMstpSnonWnonDnon_falling;
		class CutSceneAnimationBase: AmovPercMstpSnonWnonDnon{};
		class A3FL_anim_Smoking: CutSceneAnimationBase
		{
			file = "\A3FL_Animations2\actions\A3FL_anim_Smoking.rtm";
			speed = -20;
			looped = 0;
			canBlendStep = 1;
			connectTo[] = {};
			interpolateFrom[] = {};
			interpolateTo[] = {};
			disableWeapons = 0;
		};
		class A3FL_anim_JumpingJackStart: CutSceneAnimationBase
		{
			file = "\A3FL_Animations2\actions\A3FL_anim_JumpingJackStart.rtm";
			speed = -1;
			looped = 0;
			connectTo[] = {};
			interpolateFrom[] = {};
			interpolateTo[] = {};
			disableWeapons = 0;
		};
		class A3FL_anim_JumpingJack: CutSceneAnimationBase
		{
			file = "\A3FL_Animations2\actions\A3FL_anim_JumpingJack.rtm";
			speed = -1;
			looped = 1;
			connectTo[] = {};
			interpolateFrom[] = {};
			interpolateTo[] = {};
			disableWeapons = 0;
		};
		class A3FL_anim_CrowbarPry: CutSceneAnimationBase
		{
			file = "\A3FL_Animations2\actions\A3FL_anim_CrowbarPry.rtm";
			speed = -3;
			looped = 0;
			connectTo[] = {};
			interpolateFrom[] = {};
			interpolateTo[] = {};
			disableWeapons = 0;
		};
		class A3FL_anim_MopFloor: CutSceneAnimationBase
		{
			file = "\A3FL_Animations2\actions\A3FL_anim_MopFloor.rtm";
			speed = -1.09;
			looped = 1;
			connectTo[] = {};
			interpolateFrom[] = {};
			interpolateTo[] = {};
			disableWeapons = 0;
		};
		class A3FL_anim_PhoneHold: CutSceneAnimationBase
		{
			file = "\A3FL_Animations2\actions\A3FL_anim_PhoneHold.rtm";
			speed = -1.50;
			looped = 0;
			connectTo[] = {};
			interpolateFrom[] = {"AmovPercMstpSnonWnonDnon",0.5};
			interpolateTo[] = {"A3FL_anim_PhoneAway",0.5};
			disableWeapons = 0;
		};
	};
};