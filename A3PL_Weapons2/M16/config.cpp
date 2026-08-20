class CfgPatches
{
	class A3PL_M16
	{
		units[]= {};
		weapons[]= {"A3PL_M16"};
		requiredAddons[]={"A3PL_Weapons2","A3PL_Cars"};
		requiredVersion=0.1;
		magazines[]= {"A3PL_M16_Mag"};
		ammo[]=	{"A3PL_M16_Ball"};
	};
};

class CfgMagazines {
	class CA_Magazine;
	class A3PL_M16_Mag: CA_Magazine
	{
		author="A3PL Winston";
		scope=2;
		type=16;
		model="\A3PL_Weapons2\M16\A3PL_M16_Mag";
		displayName="30rnd 5.56x45mm Mag";
		displayNameShort="5.56x45mm";
		picture="\A3PL_Weapons2\M16\M16_Mag.paa";
		ammo="A3PL_M16_Ball";
		count=30;
		initSpeed=997;
		descriptionShort="5.56x45mm";
		mass=10;
		tracersEvery=0;
		lastRoundsTracer=0;
	};
	class A3PL_M16_T_Mag: CA_Magazine
	{
		author="A3PL Winston";
		scope=2;
		type=16;
		model="\A3PL_Weapons2\M16\A3PL_M16_Mag";
		displayName="30rnd M16 Training Mag";
		displayNameShort="M16 Training Mag";
		picture="\A3PL_Weapons2\M16\M16_Mag.paa";
		ammo="A3PL_M16_BallT";
		count=30;
		initSpeed=997;
		descriptionShort="Magazine for training rifle";
		mass=5;
		tracersEvery=0;
		lastRoundsTracer=0;
	};
};

class CfgAmmo
{
	class B_556x45_Ball;
	class A3PL_M16_Ball: B_556x45_Ball
	{
		airFriction=-0.00126466;
		hit=12;
		caliber=0.80000001;
		deflecting=18;
		typicalSpeed=997;
		tracerScale=1;
		tracerStartTime=0.072999999;
		tracerEndTime=1.5712301;
	};
	class A3PL_M16_BallT: A3PL_M16_Ball {
		hit=1;
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class CfgWeapons {
	class Rifle_Base_F;
	class arifle_SPAR_01_base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class A3PL_M16: arifle_SPAR_01_base_F
	{
		scope=2;
		initSpeed=800;
		author="A3PL Winston";
		_generalMacro="A3PL_M16";
		model="\A3PL_Weapons2\M16\A3PL_M16";
		displayName="Colt M16A2";
		picture="\A3PL_Weapons2\M16\M16.paa";
		descriptionShort="Colt M16A2 5.56x45mm";
		magazines[]={"A3PL_M16_Mag"};
		reloadAction="GestureRldM16";
		recoil="recoil_spar";
		maxZeroing=500;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {};
				iconPosition[]={0.34999999,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_snds_m",
					"muzzle_snds_m_khk_F",
					"muzzle_snds_m_snd_F"
				};
				iconPosition[]={0,0.40000001};
				iconScale=0.2;
			};
			mass=80;
			allowedSlots[]={901};
		};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		distanceZoomMin=300;
		distanceZoomMax=400;
		inertia=0.5;
		dexterity=1.5;
		handAnim[]= {"OFP2_ManSkeleton","\A3PL_Weapons2\M16\data\handle.rtm"};		
		changeFiremodeSound[]= {"A3PL_Weapons2\M16\sounds\selector.wss",1.5,1,5};
		drySound[]= {"A3PL_Weapons2\M16\sounds\dryfire.wss",1.5,1,20};
		reloadMagazineSound[]= {"A3PL_Weapons2\M16\sounds\reload.wss",2,1,10};

		modes[]={"Single","Burst","single_medium_optics1","single_medium_optics2"};
		class Single: Mode_SemiAuto
		{
			sounds[]= {"StandardSound","SilencedSound"};
			class StandardSound
			{
				begin1[]={"\A3PL_Weapons2\M16\sounds\fire.wss",0.9,1.1,1200};
				soundBegin[]={"begin1",1};
				class SoundTails
				{
					class TailTrees
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",1.5848932,1,1200};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound {
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
			};
			reloadTime=0.1;
			dispersion=0.00073000003;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=5;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class Burst: Mode_Burst
		{
			sounds[]= {"StandardSound","SilencedSound"};
			class StandardSound
			{
				begin1[]={"\A3PL_Weapons2\M16\sounds\fire.wss",0.9,1.1,1200};
				soundBegin[]={"begin1",1};
				class SoundTails
				{
					class TailTrees
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",1.5848932,1,1200};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound {
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
			};
			burst=3;
			reloadTime=0.1;
			dispersion=0.00050000002;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
	};
	class A3PL_M16_Training : A3PL_M16 {
		displayName="Colt M16A2 (Training Rifle)";
		descriptionShort="Colt M16A2 (Red Training Rifle)";
		model="\A3PL_Weapons2\M16\A3PL_M16_Training";
		magazines[]={"A3PL_M16_T_Mag"};
		class Single: Mode_SemiAuto
		{
			sounds[]= {"StandardSound","SilencedSound"};
			class StandardSound
			{
				begin1[]={"\A3PL_Weapons2\M16\sounds\fire.wss",0.8,5,1200};
				soundBegin[]={"begin1",1};
				class SoundTails
				{
					class TailTrees
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",1.5848932,1,1200};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound {
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
			};
			reloadTime=0.1;
			dispersion=0.00073000003;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=5;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class Burst: Mode_Burst
		{
			sounds[]= {"StandardSound","SilencedSound"};
			class StandardSound
			{
				begin1[]={"\A3PL_Weapons2\M16\sounds\fire.wss",0.8,3,1200};
				soundBegin[]={"begin1",1};
				class SoundTails
				{
					class TailTrees
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",1.5848932,1,1200};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound {
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
			};
			burst=3;
			reloadTime=0.1;
			dispersion=0.00050000002;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
	};
};

class CfgMovesBasic
{
	class Default;
	class DefaultDie;
	class ManActions
	{
		GestureRldM16="GestureRldM16";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureRldM16[]=
			{
				"GestureRldM16",
				"Gesture"
			};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			GestureRldM16[]=
			{
				"GestureRld_M16_Prone",
				"Gesture"
			};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			GestureRldM16[]=
			{
				"GestureRldM16_Context",
				"Gesture"
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			GestureRldM16[]=
			{
				"GestureRldM16_Context",
				"Gesture"
			};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			GestureRldM16[]=
			{
				"GestureRldM16",
				"Gesture"
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureRld_M16_Prone: Default
		{
			file="\A3PL_Weapons2\M16\data\reload_prone.rtm";
			looped=0;
			speed=0.25;
			mask="handsWeapon";
			headBobStrength=0.050000001;
			headBobMode=2;
			leftHandIKBeg="true";
			leftHandIKCurve[]={0,1,0.07,0,0.81,0,0.86000001,1};
			leftHandIKEnd="true";
			rightHandIKBeg="true";
			rightHandIKCurve[]={0,1,0.079999998,0,0.14,0,0.17,1,0.56999999,1,0.68000001,0,0.77999997,1};
			rightHandIKEnd="true";
		};
		class GestureRldM16: Default
		{
			file="\A3PL_Weapons2\M16\data\reload.rtm";
			looped=0;
			speed=0.25;
			mask="handsWeapon";
			headBobStrength=0.050000001;
			headBobMode=2;
			leftHandIKBeg="true";
			leftHandIKCurve[]={0,1,0.07,0,0.81,0,0.86000001,1};
			leftHandIKEnd="true";
			rightHandIKBeg="true";
			rightHandIKCurve[]={0,1,0.079999998,0,0.14,0,0.17,1,0.56999999,1,0.68000001,0,0.77999997,1};
			rightHandIKEnd="true";
		};
		class GestureRldM16_Context: GestureRldM16
		{
			mask="handsWeapon_context";
		};
	};
};