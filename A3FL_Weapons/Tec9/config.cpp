////////////////////////////////////////////////////////////////////
//DeRap: Tec9\config.bin
//Produced from mikero's Dos Tools Dll version 9.61
//https://mikero.bytex.digital/Downloads
//'now' is Mon Oct 07 18:43:55 2024 : 'file' last modified on Mon Oct 07 18:43:55 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class EC_TEC9
	{
		units[] = {};
		weapons[] = {"EC_TEC9"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		magazines[] = {"EC_TEC9_Mag"};
		ammo[] = {};
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class ProxyMagazine: ProxyWeapon
	{
		model = "\A3FL_Weapons\Tec9\Mag\TEC9Mag.p3d";
		simulation = "magazine";
	};
};
class CfgMagazines
{
	class 16Rnd_9x21_Mag;
	class EC_TEC9_Mag: 16Rnd_9x21_Mag
	{
		picture = "\A3FL_Weapons\Tec9\Tec9MagUI.paa";
		Icon = "\A3FL_Weapons\Tec9\Tec9MagUI.paa";
		displayName = "32Rnd 9mm TEC-9 Magazine";
		modelSpecial = "\A3FL_Weapons\Tec9\Mag\TEC9Mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\A3FL_Weapons\Tec9\Mag\TEC9Mag.p3d";
		author = "Davis Abrams";
		scope = 2;
		type = 16;
		ammo = "A3PL_P226_Ammo";
		count = 32;
		initSpeed = 300;
		mass = 6;
		descriptionShort = "Caliber: 9x19mm<br/>Rounds: 32<br/>Used in: TEC-9";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
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
	class EC_TEC9: Pistol_Base_F
	{
		model = "\A3FL_Weapons\Tec9\EC_TEC9.p3d";
		picture = "\A3FL_Weapons\Tec9\Tec9UI.paa";
		Icon = "\A3FL_Weapons\Tec9\Tec9UI.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {""};
		displayname = "TEC-9";
		descriptionShort = "Intratec TEC-9 Machine Pistol";
		_generalMacro = "EC_TEC9";
		baseWeapon = "EC_TEC9";
		author = "Davis Abrams";
		scope = 2;
		inertia = 0.3;
		dexterity = 1.7;
		initSpeed = 320;
		handAnim[] = {"OFP2_ManSkeleton","A3FL_Weapons\Tec9\anim\TEC9Hold.rtm"};
		recoil = "recoil_pistol_rook40";
		selectionFireAnim = "zasleh";
		magazines[] = {"EC_TEC9_Mag"};
		drySound[] = {"A3\Sounds_F\weapons\pistol_heavy_02\dry",0.22387211,1,20};
		reloadMagazineSound[] = {"\A3FL_Weapons\P227\sounds\reload",1,1,10};
		modes[] = {"Single","Burst","FullAuto"};
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
				begin1[] = {"\A3FL_Weapons\Tec9\tex\Tec9Sounds.wss","db+30",0.9,400};
				soundBegin[] = {"begin1",1};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_interior",1,1,1400};
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
			reloadTime = 0.05;
			recoil = "EC_TEC9_Recoil";
			recoilProne = "EC_TEC9_Recoil";
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class Burst: Mode_Burst
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
				begin1[] = {"\A3FL_Weapons\Tec9\tex\Tec9Sounds.wss","db+30",0.9,400};
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
			soundBurst = 0;
			textureType = "dual";
			burst = 2;
			reloadTime = 0.05;
			dispersion = 0.00131;
			recoil = "EC_TEC9_AutoRecoil";
			recoilProne = "EC_TEC9_AutoRecoil";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 250;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_6",1.0351422,1,30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_6",1.0351422,1.1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				weaponSoundEffect = "DefaultHandgun";
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\A3FL_Weapons\Tec9\tex\Tec9Sounds.wss","db+30",0.9,400};
				soundBegin[] = {"begin1",1};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_interior",1,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			soundContinuous = 0;
			multiplier = 1;
			burst = 1;
			dispersion = 0.07;
			reloadTime = 0.05;
			recoil = "EC_TEC9_AutoRecoil";
			recoilProne = "EC_TEC9_AutoRecoil";
			aiRateOfFire = 0.001;
			aiRateOfFireDistance = 10;
			minRange = 2;
			minRangeProbab = 0.7;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 15;
			maxRangeProbab = 0.2;
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
	EC_TEC9_Recoil[] = {0,0.007,0.05,0.005,0.007,0.05,0.09,0,-0.01,0.1,0,0};
	EC_TEC9_AutoRecoil[] = {0,0.007,0.02,0.005,0.007,0.02,0.09,0,-0.0014000001,0.1,0,0};
};
