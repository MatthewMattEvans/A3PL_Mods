////////////////////////////////////////////////////////////////////
//DeRap: HM1\config.bin
//Produced from mikero's Dos Tools Dll version 9.61
//https://mikero.bytex.digital/Downloads
//'now' is Mon Oct 07 18:43:50 2024 : 'file' last modified on Mon Oct 07 18:43:50 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class A3FL_HM1
	{
		units[] = {};
		weapons[] = {"EC_HM1"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		magazines[] = {"EC_HM1_Mag"};
		ammo[] = {};
	};
};
class CfgMagazines
{
	class 16Rnd_9x21_Mag;
	class EC_HM1_Mag: 16Rnd_9x21_Mag
	{
		picture = "\A3FL_Weapons\HM1\tex\HM1Mag.paa";
		Icon = "A3FL_Weapons\HM1\tex\HM1Mag.paa";
		displayName = "3Rnd Homemade 9mm Mag";
		author = "Davis Abrams";
		scope = 2;
		type = 16;
		ammo = "A3FL_Glock_Ammo";
		count = 3;
		initSpeed = 300;
		mass = 6;
		descriptionShort = "Caliber: 9x19mm<br/>Rounds: 3<br/>Used in: Homemade Gun";
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CowsSlot;
class CowsSlot_Rail;
class CowsSlot_Rail_Pistol;
class CowsSlot_Pistol;
class CowsSlot_MSBS65;
class CowsSlot_Dovetail;
class CowsSlot_Dovetail_RPG;
class PointerSlot;
class MuzzleSlot;
class SlotInfo;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class EC_HM1: Pistol_Base_F
	{
		model = "\A3FL_Weapons\HM1\EC_HM1.p3d";
		picture = "\A3FL_Weapons\HM1\HM1.paa";
		Icon = "\A3FL_Weapons\HM1\HM1.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A3FL_Weapons\HM1\tex\hm1_co.paa"};
		displayname = "Homemade Handgun";
		descriptionShort = "Homemade Pipe Gun";
		_generalMacro = "EC_HM1";
		baseWeapon = "EC_HM1";
		author = "Davis Abrams";
		scope = 2;
		inertia = 0.3;
		dexterity = 1.7;
		initSpeed = 320;
		recoil = "recoil_pistol_rook40";
		selectionFireAnim = "zasleh";
		magazines[] = {"EC_HM1_Mag"};
		drySound[] = {"A3\Sounds_F\weapons\pistol_heavy_02\dry",0.22387211,1,20};
		reloadMagazineSound[] = {"\A3FL_Weapons\P227\sounds\reload",1,1,10};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultHandgun";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_5",1.0351422,1,30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_4",1.0351422,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\A3FL_Weapons\HM1\tex\hm1sounds.wss",1.5,0.9,400};
				soundBegin[] = {"begin1",1};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_interior",1.4125376,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_trees",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_forest",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_meadows",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_houses",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			dispersion = 0.00493;
			reloadTime = 1.0;
			recoil = "A3FL_HM1_Recoil";
			recoilProne = "A3FL_HM1_Recoil";
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot: CowsSlot_Pistol
			{
				iconPosition[] = {0.6,0.27};
				iconScale = 0.15;
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconPosition[] = {0.48,0.54};
				iconScale = 0.25;
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\a3\data_f\proxies\muzzle_flash\muzzle_flash_pistol_p07";
				compatibleItems[] = {};
				iconPosition[] = {0.3,0.38};
				iconScale = 0.2;
			};
		};
	};
};
class cfgRecoils
{
	A3FL_HM1_Recoil[] = {0,0.007,0.05,0.005,0.007,0.05,0.09,0,-0.01,0.1,0,0};
};
