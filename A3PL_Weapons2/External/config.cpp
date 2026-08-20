class CfgPatches
{
	class A3PL_Halloween_Weapons
	{
		units[]={};
		weapons[]={};
		requiredAddons[]={"A3PL_Weapons","A3_Data_F"};
		requiredVersion=0.1;
		magazines[]={};
		ammo[]=	{};
	};
};

class Mode_SemiAuto;
class PointerSlot;
class MuzzleSlot;
class CfgWeapons {
	class MeleeRifle;
	class A3PL_Scypthe: MeleeRifle
	{
		scope=2;
		model="\A3PL_Objects2\halloweenweapons\a3pl_scythe.p3d";
		displayName="Scypthe";
		magazines[]=
		{
			"A3PL_FireaxeMag"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3PL_Weapons\axe\anim\axe_hold.rtm"
		};
		class Library
		{
			libTextDesc="Scypthe";
		};
		descriptionShort="Scypthe";
	};
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class A3PL_Predator: Pistol_Base_F
	{
		scope=2;
		model = "\A3PL_Objects2\halloweenweapons\A3PL_Predator";
		picture	= "\A3PL_Weapons2\External\Predator.paa";
		Icon = "\A3PL_Weapons2\External\Predator.paa";
		displayname="Predator Gun";
		descriptionShort = "Halloween Gun";
		_generalMacro="A3PL_Predator";
		baseWeapon="A3PL_Predator";
		author="A3PL Winston";
		inertia = 0.15;
		dexterity = 1.8;
		recoil = "A3FL_Predator_Recoil";
		selectionFireAnim = "zasleh";
		magazines[] = {"A3PL_Predator_Mag"};
		class Library
		{
			libTextDesc = "A3FL Halloween event weapon";
		};
		drySound[]={"A3\Sounds_F\weapons\pistol_heavy_02\dry",0.22387211,1,20};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[]= {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultHandgun";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_handgun_5",
					1.0351422,
					1,
					30
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_handgun_4",
					1.0351422,
					1,
					30
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]={"\A3PL_Weapons2\External\shot.wss",1.5,0.9,400};
				soundBegin[]= {"begin1",1};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_interior",
							1.4125376,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_trees",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_meadows",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_houses",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			dispersion=0.011;
			reloadTime=0.6;
			recoil="A3FL_Predator_Recoil";
			recoilProne="A3FL_Predator_Recoil";
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
	};
};

class CfgMagazines
{
	class 16Rnd_9x21_Mag;
	class A3PL_Predator_Mag: 16Rnd_9x21_Mag
	{
		picture	= "\A3PL_Weapons2\External\Predator_Mag.paa"; 
		Icon = "\A3PL_Weapons2\External\Predator_Mag.paa";
		displayName = "Predator Mag";
		author="A3PL Winston";
		scope= 2;
		type = 256;
		ammo = "A3PL_Predator_Bullet";
		count = 10;
		initSpeed = 360;
		mass = 6;
		tracersEvery=0;
		lastRoundsTracer=200;
	};
};

class CfgAmmo
{
	class B_9x21_Ball;
	class A3PL_Predator_Bullet: B_9x21_Ball
	{
		hit = 4.4;
		indirectHit = 0;
		indirectHitRange = 0;
		deflecting = 30;
		initSpeed = 360;
		airFriction = -0.0016;
	};
};

class cfgRecoils
{
	A3FL_Predator_Recoil[]={0,0.0070000002,0.050000001,0.0049999999,0.0070000002,0.050000001,0.090000004,0,-0.0099999998,0.1,0,0};
};