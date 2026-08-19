class CfgPatches
{
	class A3FL_TFR_Ext_Animations
	{
		author = "A3FL";
		url = "https://forums.arma3fisherslife.net"; 
		requiredVersion = 1.60; 
		requiredAddons[] = {"A3_Functions_F"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgMovesBasic
{
    class DefaultDie;
    class ManActions
    {
        A3FL_RadioAnim_01 = "A3FL_RadioAnim_01";
		A3FL_RadioAnim_02 = "A3FL_RadioAnim_02";
    };
        class Actions
        {
            class Default;
        class NoActions: ManActions
        {
            A3FL_RadioAnim_01[] = {"A3FL_RadioAnim_01","Gesture"};
			A3FL_RadioAnim_02[] = {"A3FL_RadioAnim_02","Gesture"};
        };
    };
};
class CfgGesturesMale
{
    skeletonName = "OFP2_ManSkeleton";
    class ManActions{};
    class Actions
    {
        class NoActions
        {
            turnSpeed = 0;
            upDegree = 0;
            limitFast = 1;
            useFastMove = 0;
            stance = "ManStanceUndefined";
        };
    };
    class Default
    {
        actions = "NoActions";
        file = "";
        looped = 1;
        speed = 0.5;
        static = 0;
        relSpeedMin = 1;
        relSpeedMax = 1;
        soundEnabled = 0;
        soundOverride = "";
        soundEdge[] = {0.5,1};
        terminal = 0;
        ragdoll = 0;
        equivalentTo = "";
        connectAs = "";
        connectFrom[] = {};
        connectTo[] = {};
        interpolateWith[] = {};
        interpolateTo[] = {};
        interpolateFrom[] = {};
        mask = "empty";
        interpolationSpeed = 6;
        interpolationRestart = 0;
        preload = 0;
        disableWeapons = 1;
        enableOptics = 0;
        showWeaponAim = 0;
        enableMissile = 1;
        enableBinocular = 1;
        showItemInHand = 0;
        showItemInRightHand = 0;
        showHandGun = 0;
        canPullTrigger = 1;
        Walkcycles = 1;
        headBobMode = 0;
        headBobStrength = 0;
        leftHandIKBeg = 1;
        leftHandIKEnd = 1;
        rightHandIKBeg = 1;
        rightHandIKEnd = 1;
        leftHandIKCurve[] = {1};
        rightHandIKCurve[] = {1};
        forceAim = 0;
    };
    class States
    {
		class A3FL_RadioAnim_Base: Default
		{
			canPullTrigger = 1;
			connectAs = "";
			connectFrom[] = {};
			connectTo[] = {};
			disableWeapons = 0;
			enableBinocular = 1;
			enableMissile = 1;
			enableOptics = 0;
			equivalentTo = "";
			forceAim = 0;
			headBobMode = 0;
			headBobStrength = 0;
			interpolateFrom[] = {};
			interpolateTo[] = {};
			interpolateWith[] = {};
			interpolationRestart = 0;
			interpolationSpeed = 6;
			looped = 0;
			mask = "a3fl_UpperBodyNoRArm";
			minPlayTime = 0.5;
			preload = 0;
			ragdoll = 0;
			relSpeedMax = 1;
			relSpeedMin = 1;
			showHandGun = 0;
			showItemInHand = 0;
			showItemInRightHand = 0;
			showWeaponAim = 1;
			soundEdge[] = {0.5,1};
			soundEnabled = 1;
			soundOverride = "";
			speed = 0.3;
			static = 0;
			terminal = 0;
			Walkcycles = 1;
			leftHandIKBeg=0;
            leftHandIKCurve[]={0};
            leftHandIKEnd=0;
            rightHandIKBeg=1;
            rightHandIKCurve[]={1};
            rightHandIKEnd=1;
		};
        class A3FL_RadioAnim_01: A3FL_RadioAnim_Base
        {
            file = "a3\anims_f_epa\data\anim\sdr\cts\custom\a_in\acts_listeningtoradioloop.rtm";
            minPlayTime= 2;
            disableWeaponsLong = 0;
            weaponLowered = 0;
            showWeaponAim = 1;
            canReload = 0;
            limitGunMovement = 0;
            preload = 1;
			headBobMode = 1;
			headBobStrength = 0.001;
        };
		class A3FL_RadioAnim_02: A3FL_RadioAnim_Base
		{
			file = "a3\anims_f_bootcamp\data\anim\sdr\cts\acts_kore_talkingoverradio_loop.rtm";
            disableWeaponsLong = 0;
            weaponLowered = 0;
            showWeaponAim = 1;
            canReload = 0;
            limitGunMovement = 0;
            preload = 1;
			headBobMode = 1;
			headBobStrength = 0.001;
		};
    };
    class BlendAnims
    {
		a3fl_UpperBody[] = 			{"Weapon",0,"Pelvis",0,"Spine",0,"Spine1",0,"Spine2",0,"Spine3",1,"Camera",0,"launcher",0,"neck",1,"neck1",1,"head",0,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"LeftUpLeg",0,"LeftUpLegRoll",0,"LeftLeg",0,"LeftLegRoll",0,"LeftFoot",0,"LeftToeBase",0,"RightUpLeg",0,"RightUpLegRoll",0,"RightLeg",0,"RightLegRoll",0,"RightFoot",0,"RightToeBase",0,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHana3pling",1,"LeftHana3pling1",1,"LeftHana3pling2",1,"LeftHana3pling3",1,"LeftHandThumb",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHana3pling",1,"RightHana3pling1",1,"RightHana3pling2",1,"RightHana3pling3",1,"RightHandThumb",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1};
		a3fl_UpperBodyNoRArm[] =	{"Weapon",0,"Pelvis",0,"Spine",0,"Spine1",0,"Spine2",1,"Spine3",1,"Camera",0,"launcher",0,"weapon",0,"launcher",0,"neck",1,"neck1",0,"head",0,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"RightShoulder",0,"RightArm",0,"RightArmRoll",0,"RightForeArm",0,"RightForeArmRoll",0,"RightHand",0,"LeftUpLeg",0,"LeftUpLegRoll",0,"LeftLeg",0,"LeftLegRoll",0,"LeftFoot",0,"LeftToeBase",0,"RightUpLeg",0,"RightUpLegRoll",0,"RightLeg",0,"RightLegRoll",0,"RightFoot",0,"RightToeBase",0,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHana3pling",1,"LeftHana3pling1",1,"LeftHana3pling2",1,"LeftHana3pling3",1,"LeftHandThumb",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightHandIndex1",0,"RightHandIndex2",0,"RightHandIndex3",0,"RightHandMiddle1",0,"RightHandMiddle2",0,"RightHandMiddle3",0,"RightHandPinky1",0,"RightHandPinky2",0,"RightHandPinky3",0,"RightHana3pling",0,"RightHana3pling1",0,"RightHana3pling2",0,"RightHana3pling3",0,"RightHandThumb",0,"RightHandThumb1",0,"RightHandThumb2",0,"RightHandThumb3",0};
    };
    class Interpolations{};
    transitionsInterpolated[] = {};
    transitionsSimple[] = {};
    transitionsDisabled[] = {};
};