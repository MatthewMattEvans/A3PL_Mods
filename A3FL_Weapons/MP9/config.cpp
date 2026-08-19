////////////////////////////////////////////////////////////////////
//DeRap: MP9\config.bin
//Produced from mikero's Dos Tools Dll version 9.61
//https://mikero.bytex.digital/Downloads
//'now' is Mon Oct 07 18:43:54 2024 : 'file' last modified on Mon Oct 07 18:43:54 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class EC_MP9
	{
		units[] = {};
		weapons[] = {"EC_MP9"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		magazines[] = {"EC_MP9_Mag"};
		ammo[] = {};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class PointerSlot;
class MuzzleSlot;
class CowsSlot;
class SlotInfo;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class EC_MP9: Rifle_Short_Base_F
	{
		author = "Davis Abrams";
		_generalMacro = "EC_MP9";
		scope = 2;
		magazines[] = {"EC_MP9_Mag"};
		maxZeroing = 150;
		reloadAction = "GestureReloadSMG_01";
		recoil = "recoil_smg_01";
		cursor = "smg";
		discreteDistance[] = {100,150};
		discreteDistanceInitIndex = 0;
		aiDispersionCoefY = 8;
		aiDispersionCoefX = 9;
		descriptionShort = "";
		displayName = "BT MP9";
		model = "\A3FL_Weapons\MP9\EC_MP9.p3d";
		handAnim[] = {"OFP2_ManSkeleton","A3FL_Weapons\MP9\anim\mp9hold1.rtm"};
		picture = "\A3FL_Weapons\MP9\MP9.paa";
		Icon = "\A3FL_Weapons\MP9\MP9.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_acp"};
				iconPosition[] = {0.1,0.4};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"optic_RMR_Tall","optic_ACO_grn_smg","optic_ACO_smg","optic_Holosight_smg_blk_F"};
				iconPosition[] = {0.45,0.28};
				iconScale = 0.2;
			};
			class PointerSlot{};
			allowedSlots[] = {701,801,901};
		};
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.5011872,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.5011872,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.5011872,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.5011872,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.56234133,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.56234133,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.56234133,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.56234133,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.39810717,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.39810717,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.39810717,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.39810717,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		modes[] = {"Single","FullAuto"};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Dry_Vermin",0.5011872,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\reload_vermin",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\firemode_Vermin",0.25118864,1,5};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"\A3FL_Weapons\MP9\data\MP9A.wss",1.1,1,1200};
				soundBegin[] = {"begin1",1};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_interior",1.5848932,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.05;
			dispersion = 0.00131;
			recoil = "recoil_single_SMG_01";
			recoilProne = "recoil_single_prone_SMG_01";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
		};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\closure_Vermin_01",0.56234133,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\closure_Vermin_02",0.56234133,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\A3FL_Weapons\MP9\data\MP9A.wss",1.1,1,1200};
				soundBegin[] = {"begin1",0.33};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_interior",1.5848932,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.05;
			dispersion = 0.00131;
			recoil = "recoil_auto_smg_01";
			recoilProne = "recoil_auto_prone_smg_01";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			aiRateOfFireDistance = 50;
		};
	};
};
class CfgMagazines
{
	class 16Rnd_9x21_Mag;
	class EC_MP9_Mag: 16Rnd_9x21_Mag
	{
		picture = "\A3FL_Weapons\MP9\MP9Mag.paa";
		Icon = "\A3FL_Weapons\MP9\MP9Mag.paa";
		displayName = "30Rnd 9mm MP9 Mag";
		author = "Davis Abrams";
		scope = 2;
		type = 16;
		ammo = "A3PL_P226_Ammo";
		count = 30;
		initSpeed = 280;
		mass = 6;
		descriptionShort = "Caliber: 9mm<br/>Rounds: 30<br/>Used in: B&T MP9";
	};
};
