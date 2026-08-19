#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

#define true	1
#define false	0

class CfgPatches {
	class A3FL_MOCAP_Movements {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Anims_F"};
		version = 0.01;
		magazines[] = {};
		ammo[] = {};
	};
};

class CfgMovesBasic {
	access = ReadAndCreate;
	skeletonName = "";
	class StandBase;	// External class reference
	
	class ManActions {
		MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct = "";
		MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct = "";
		MOCAP_Man_Act_Idle_Stay_CivPace_Non_Push_Kick_LeftLeg = "";
	};
	
	class Actions {
		class CivilStandActions {
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Right_Direct", "Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Left_Direct", "Gesture"};
			MOCAP_Man_Act_Idle_Stay_CivPace_Non_Push_Kick_LeftLeg = "MOCAP_Idle_Stay_CivPace_Non_Push_Kick_LeftLeg";
		};
		
		class CivilKneelActions {
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Right_Direct", "Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Left_Direct", "Gesture"};
		};
		
		class CivilProneActions {
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct = "";
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct = "";
		};
		
		class CivilStandSurrenderActions {
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct = "";
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct = "";
		};
		
		class CivilSiTactions {
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct = "";
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct = "";
		};
		
		class CivilStandSaluteActions {
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct = "";
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct = "";
		};
		
		class CivilEvasiveActions {
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Right_Direct", "Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Left_Direct", "Gesture"};
		};
		
		class CivilRunActions {
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Right_Direct", "Gesture"};
			MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct[] = {"MOCAP_Gesture_CivPace_Non_Punch_Hand_Left_Direct", "Gesture"};
		};
	};
};

class CfgMovesMaleSdr : CfgMovesBasic {
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	access = ReadAndCreate;
	
	class States {
		class AmovPercMstpSnonWnonDnon;	// External class reference
		class DeadState;	// External class reference
		
		class MOCAP_Idle_Stay_CivPace_Non_Push_Kick_LeftLeg : AmovPercMstpSnonWnonDnon {
			file = "\A3FL_Animations\punch\MOCAP\MOCAP_Idle_Stay_CivPace_Non_Push_Kick_LeftLeg.rtm";
			looped = false;
			speed = 0.7;
			duty = 0.7;
			mask = "BodyFull";
			leftHandIKBeg = false;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = false;
			rightHandIKBeg = false;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = false;
			weaponIK = 0;
			enableOptics = false;
			showWeaponAim = false;
			disableWeapons = false;
			disableWeaponsLong = false;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
			forceAim = 1;
			limitGunMovement = 9.1;
			headBobMode = 0;
			headBobStrength = 0;
			canPullTrigger = false;
			enableDirectControl = 0;
			weaponLowered = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPercMstpSnonWnonDnon", 9.02};
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.02};
			soundOverride = "rifle_to_handgun";
			soundEnabled = true;
		};
		
	};
};

class CfgGesturesMale {
	class ManActions;	// External class reference
	class Actions;	// External class reference
	class Default;	// External class reference
	
	class States {
		
		    class MOCAP_Gesture_CivPace_Non_Punch_Hand_Right_Direct : Default {
			file = "\A3FL_Animations\punch\MOCAP\MOCAP_Gesture_CivPace_Non_Punch_Hand_Right_Direct.rtm";
			looped = false;
			speed = 0.7;
			duty = 1.0;
			aimingBody = "aimingUpDefault";
			mask = "handsWeapon";
			leftHandIKBeg = false;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = false;
			rightHandIKBeg = false;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = false;
			weaponIK = 0;
			enableOptics = false;
			showWeaponAim = false;
			disableWeapons = true;
			disableWeaponsLong = true;
			canPullTrigger = false;
			soundOverride = "rifle_to_handgun";
		};
		
		class MOCAP_Gesture_CivPace_Non_Punch_Hand_Left_Direct : Default {
			file = "\A3FL_Animations\punch\MOCAP\MOCAP_Gesture_CivPace_Non_Punch_Hand_Left_Direct.rtm";
			looped = false;
			speed = 0.75;
			duty = 1.0;
			aimingBody = "aimingUpDefault";
			mask = "handsWeapon";
			leftHandIKBeg = false;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = false;
			rightHandIKBeg = false;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = false;
			weaponIK = 0;
			enableOptics = false;
			showWeaponAim = false;
			disableWeapons = true;
			disableWeaponsLong = true;
			canPullTrigger = false;
			InterpolateTo[] = {};
			interpolateFrom[] = {};
			soundOverride = "rifle_to_handgun";
		};
	};
};
