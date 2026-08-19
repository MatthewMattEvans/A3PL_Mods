class CfgPatches
{
	class A3FL_Movements
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Anims_F"};
		version = 0.01;
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgSounds
{
	sounds[] = {"punch"};
	class punch
	{
		name = "punch";
		sound[] = {"A3FL_Animations\punch\punch.ogg",1.0,1};
		titles[] = {};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		A3FL_anim_PunchRandom = "A3FL_anim_PunchRandom";
		A3FL_anim_Punch1 = "A3FL_anim_Punch1";
		A3FL_anim_Punch2 = "A3FL_anim_Punch2";
		A3FL_anim_Punch3 = "A3FL_anim_Punch3";
		A3FL_anim_Punch4 = "A3FL_anim_Punch4";
		A3FL_anim_Receive1a = "A3FL_anim_Receive1a";
		A3FL_anim_Receive1b = "A3FL_anim_Receive1b";
		A3FL_anim_Receive2a = "A3FL_anim_Receive2a";
		A3FL_anim_Receive2b = "A3FL_anim_Receive2b";
		A3FL_anim_Receive3a = "A3FL_anim_Receive3a";
		A3FL_anim_Receive3b = "A3FL_anim_Receive3b";
		A3FL_anim_Receive3c = "A3FL_anim_Receive3c";
		A3FL_anim_Receive4 = "A3FL_anim_Receive4";
		A3FL_anim_Knockout1In = "A3FL_anim_Knockout1In";
		A3FL_anim_Knockout1End = "A3FL_anim_Knockout1End";
		A3FL_anim_Knockout2In = "A3FL_anim_Knockout2In";
		A3FL_anim_Knockout2End = "A3FL_anim_Knockout2End";
		A3FL_anim_WeaponHit = "A3FL_anim_WeaponHit";
	};
	class Actions
	{
		class NoActions: ManActions{};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class AmovPercMstpSnonWnonDnon;
		
		class A3FL_anim_PunchRandom: AmovPercMstpSnonWnonDnon
		{
			variantsPlayer[] = {"A3FL_anim_Punch1",0.25,"A3FL_anim_Punch2",0.25,"A3FL_anim_Punch3",0.25,"A3FL_anim_Punch4",0.25};
			variantAfter[] = {1,5,10};
			speed = 0.55;
			file = "A3FL_Animations\punch\A3FL_anim_Punch1.rtm";
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 0;
			minPlayTime = 1;
			ConnectTo[] = {};
			InterpolateFrom[] = {"amovpercmstpsnonwnondnon",0.1};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.1,"AmovPercMstpSnonWnonDnon",0.1,"AmovPercMstpSrasWpstDnon",0.1,"Unconscious",0.2};
		};
		class A3FL_anim_Punch1: A3FL_anim_PunchRandom
		{
			variantsPlayer[] = {};
			file = "A3FL_Animations\punch\A3FL_anim_Punch1.rtm";
			speed = 0.55;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 0;
			minPlayTime = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.1,"AmovPercMstpSnonWnonDnon",0.1,"AmovPercMstpSrasWpstDnon",0.1,"Unconscious",0.2};
		};
		class A3FL_anim_Punch2: A3FL_anim_PunchRandom
		{
			variantsPlayer[] = {};
			file = "A3FL_Animations\punch\A3FL_anim_Punch2.rtm";
			speed = 0.55;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 0;
			minPlayTime = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.1,"AmovPercMstpSnonWnonDnon",0.1,"AmovPercMstpSrasWpstDnon",0.1,"Unconscious",0.2};
		};
		class A3FL_anim_Punch3: A3FL_anim_PunchRandom
		{
			variantsPlayer[] = {};
			file = "A3FL_Animations\punch\A3FL_anim_Punch3.rtm";
			speed = 0.55;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 0;
			minPlayTime = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.1,"AmovPercMstpSnonWnonDnon",0.1,"AmovPercMstpSrasWpstDnon",0.1,"Unconscious",0.2};
		};
		class A3FL_anim_Punch4: A3FL_anim_PunchRandom
		{
			variantsPlayer[] = {};
			file = "A3FL_Animations\punch\A3FL_anim_Punch4.rtm";
			speed = 0.55;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 0;
			minPlayTime = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.1,"AmovPercMstpSnonWnonDnon",0.1,"AmovPercMstpSrasWpstDnon",0.1,"Unconscious",0.2};
		};
		class A3FL_anim_Receive1a: A3FL_anim_PunchRandom
		{
			variantsPlayer[] = {};
			file = "A3FL_Animations\punch\A3FL_anim_Receive1a.rtm";
			speed = 0.3;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 0;
			minPlayTime = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.1,"AmovPercMstpSnonWnonDnon",0.1,"AmovPercMstpSrasWpstDnon",0.1,"Unconscious",0.2};
		};
		class A3FL_anim_Receive1b: A3FL_anim_PunchRandom
		{
			variantsPlayer[] = {};
			file = "A3FL_Animations\punch\A3FL_anim_Receive1b.rtm";
			speed = 0.3;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 0;
			minPlayTime = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.1,"AmovPercMstpSnonWnonDnon",0.1,"AmovPercMstpSrasWpstDnon",0.1,"Unconscious",0.2};
		};
		class A3FL_anim_Receive2a: A3FL_anim_PunchRandom
		{
			variantsPlayer[] = {};
			file = "A3FL_Animations\punch\A3FL_anim_Receive2a.rtm";
			speed = 0.3;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 0;
			minPlayTime = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.1,"AmovPercMstpSnonWnonDnon",0.1,"AmovPercMstpSrasWpstDnon",0.1,"Unconscious",0.2};
		};
		class A3FL_anim_Receive2b: A3FL_anim_PunchRandom
		{
			variantsPlayer[] = {};
			file = "A3FL_Animations\punch\A3FL_anim_Receive2b.rtm";
			speed = 0.3;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 0;
			minPlayTime = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.1,"AmovPercMstpSnonWnonDnon",0.1,"AmovPercMstpSrasWpstDnon",0.1,"Unconscious",0.2};
		};
		class A3FL_anim_Receive3a: A3FL_anim_PunchRandom
		{
			variantsPlayer[] = {};
			file = "A3FL_Animations\punch\A3FL_anim_Receive3a.rtm";
			speed = 0.45;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 0;
			minPlayTime = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.1,"AmovPercMstpSnonWnonDnon",0.1,"AmovPercMstpSrasWpstDnon",0.1,"Unconscious",0.2};
		};
		class A3FL_anim_Receive3b: A3FL_anim_PunchRandom
		{
			variantsPlayer[] = {};
			file = "A3FL_Animations\punch\A3FL_anim_Receive3b.rtm";
			speed = 0.3;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 0;
			minPlayTime = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.1,"AmovPercMstpSnonWnonDnon",0.1,"AmovPercMstpSrasWpstDnon",0.1,"Unconscious",0.2};
		};
		class A3FL_anim_Receive3c: A3FL_anim_PunchRandom
		{
			variantsPlayer[] = {};
			file = "A3FL_Animations\punch\A3FL_anim_Receive3c.rtm";
			speed = 0.3;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 0;
			minPlayTime = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.1,"AmovPercMstpSnonWnonDnon",0.1,"AmovPercMstpSrasWpstDnon",0.1,"Unconscious",0.2};
		};
		class A3FL_anim_Receive4: A3FL_anim_PunchRandom
		{
			variantsPlayer[] = {};
			file = "A3FL_Animations\punch\A3FL_anim_Receive4.rtm";
			speed = 0.3;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 0;
			minPlayTime = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.1,"AmovPercMstpSnonWnonDnon",0.1,"AmovPercMstpSrasWpstDnon",0.1,"Unconscious",0.2};
		};
		class A3FL_anim_Knockout1In: A3FL_anim_PunchRandom
		{
			variantsPlayer[] = {};
			file = "A3FL_Animations\punch\A3FL_anim_Knockout1In.rtm";
			speed = 0.27;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 0;
			minPlayTime = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"A3FL_anim_Knockout1End",0.1,"Unconscious",0.2};
		};
		class A3FL_anim_Knockout1End: A3FL_anim_PunchRandom
		{
			variantsPlayer[] = {};
			file = "A3FL_Animations\punch\A3FL_anim_Knockout1End.rtm";
			speed = 0.27;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 0;
			minPlayTime = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.1,"AmovPercMstpSnonWnonDnon",0.1,"AmovPercMstpSrasWpstDnon",0.1,"Unconscious",0.2};
		};
		class A3FL_anim_Knockout2In: A3FL_anim_PunchRandom
		{
			variantsPlayer[] = {};
			file = "A3FL_Animations\punch\A3FL_anim_Knockout2In.rtm";
			speed = 0.3;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 0;
			minPlayTime = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"A3FL_anim_Knockout2End",0.1,"Unconscious",0.2};
		};
		class A3FL_anim_Knockout2End: A3FL_anim_PunchRandom
		{
			variantsPlayer[] = {};
			file = "A3FL_Animations\punch\A3FL_anim_Knockout2End.rtm";
			speed = 0.25;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 0;
			minPlayTime = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.1,"AmovPercMstpSnonWnonDnon",0.1,"AmovPercMstpSrasWpstDnon",0.1,"Unconscious",0.2};
		};
		class A3FL_anim_WeaponHit: A3FL_anim_PunchRandom
		{
			variantsPlayer[] = {};
			file = "A3FL_Animations\punch\A3FL_anim_WeaponHit.rtm";
			speed = 0.25;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 0;
			minPlayTime = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.1,"AmovPercMstpSrasWpstDnon",0.1,"Unconscious",0.2};
		};
	};
};
