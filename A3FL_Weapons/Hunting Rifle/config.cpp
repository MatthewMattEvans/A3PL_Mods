////////////////////////////////////////////////////////////////////
//DeRap: Hunting Rifle\config.bin
//Produced from mikero's Dos Tools Dll version 9.61
//https://mikero.bytex.digital/Downloads
//'now' is Mon Oct 07 18:43:51 2024 : 'file' last modified on Mon Oct 07 18:43:51 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class EC_Huntingrifle
	{
		units[] = {};
		weapons[] = {"EC_Huntingrifle","EC_RifleBase"};
		requiredAddons[] = {"A3PL_Weapons2"};
		requiredVersion = 0.1;
		magazines[] = {"EC_10rnd_308"};
		ammo[] = {"EC_308"};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class EC_10rnd_308: CA_Magazine
	{
		ammo = "EC_308";
		count = 10;
		descriptionshort = "10 Round .308 Winchester";
		displayname = "10rnd .308 Magazine";
		initspeed = 854;
		lastroundstracer = 0;
		picture = "\A3FL_Weapons\Hunting Rifle\HRMag.paa";
		scope = 2;
		tracersevery = 0;
		mass = 8;
	};
};
class CfgAmmo
{
	class B_556x45_Ball;
	class EC_308: B_556x45_Ball
	{
		hit = 11.4;
		airFriction = -0.00096;
		typicalSpeed = 810;
		caliber = 2;
		deflecting = 21;
		visibleFire = 22;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1;
		indirecthit = 0;
		indirecthitrange = 0;
		nvgonly = 1;
		tracerendtime = 1;
		tracerscale = 1;
		tracerstarttime = 0.05;
		class CamShakeExplode
		{
			power = "(10^0.5)";
			duration = "((round (10^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((10^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 10;
			duration = "((round (10^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
};
class Mode_SemiAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class CfgWeapons
{
	class Rifle_Base_F;
	class arifle_SPAR_01_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class EC_RifleBase: Rifle_Base_F
	{
		scope = 2;
		author = "Davis Abrams";
		model = "";
		picture = "";
		discreteDistance[] = {};
		class Library
		{
			libTextDesc = "";
		};
		class BaseSoundModeType;
		class WeaponSlotsInfo
		{
			mass = 1;
			class MuzzleSlot: SlotInfo
			{
				compatibleItems[] = {};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
			allowedslots[] = {701,801,901};
		};
	};
	class EC_Huntingrifle: EC_RifleBase
	{
		magazines[] = {"EC_10rnd_308"};
		recoil = "recoil_m320";
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		maxZeroing = 101;
		author = "Davis Abrams";
		scope = 2;
		hasBipod = 0;
		cursor = "srifle";
		cursorAim = "EmptyCursor";
		model = "A3FL_Weapons\Hunting Rifle\EC_Huntingrifle.p3d";
		reloadAction = "GestureReloadLRR";
		descriptionShort = "";
		drySound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_dry",0.501187,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_reload",1,1,10};
		inertia = 0.47;
		dexterity = 1.1977026;
		aimTransitionSpeed = 0.83839184;
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		Picture = "\A3FL_Weapons\Hunting Rifle\HR.paa";
		displayName = "Savage Scout .308";
		discretedistance[] = {90,180,270,360,450,540,630,720,810,900,990,1010,1180,1280,1370,1460,1550,1640,1740,1810};
		discretedistanceinitindex = 2;
		handAnim[] = {"OFP2_ManSkeleton","\A3PL_Weapons\huntingrifle\data\M24.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 104;
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot{};
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		bullet1[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_01.wss",0.1,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_02.wss",0.1,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_03.wss",0.177828,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_04.wss",0.177828,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_01.wss",0.1,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_02.wss",0.1,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_03.wss",0.1,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_04.wss",0.1,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_01.wss",0.01,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_02.wss",0.01,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_03.wss",0.01,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_04.wss",0.01,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01",1.77828,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01",1.77828,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_short_01",2.51189,1,2200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_short_02",2.51189,1,2200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_forest",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_houses",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_interior",1.99526,1,2200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_meadows",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_trees",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
				soundsetshot[] = {"M320_Shot_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet"};
			};
			reloadTime = 1.6666666;
			dispersion = 0.000436332;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 150;
			minRangeProbab = 0.2;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.05;
		};
		class Library
		{
			libTextDesc = "";
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
	};
};
