////////////////////////////////////////////////////////////////////
//DeRap: WID\config.bin
//Produced from mikero's Dos Tools Dll version 9.61
//https://mikero.bytex.digital/Downloads
//'now' is Mon Oct 07 18:43:55 2024 : 'file' last modified on Mon Oct 07 18:43:55 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class EC_PBP_ID
	{
		units[] = {};
		weapons[] = {"EC_PBP_ID"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		magazines[] = {"EC_ID_AMMO"};
		ammo[] = {"A3FL_Glock_T_Ammo"};
	};
};
class CfgMagazines
{
	class 16Rnd_9x21_Mag;
	class EC_ID_AMMO: 16Rnd_9x21_Mag
	{
		picture = "";
		Icon = "";
		displayName = "ID REEs";
		author = "Davis ABrams";
		scope = 2;
		type = 16;
		ammo = "A3FL_Glock_T_Ammo";
		count = 99999;
		initSpeed = 300;
		mass = 6;
		descriptionShort = "";
	};
};
class CfgAmmo
{
	class B_9x21_Ball;
	class A3FL_Glock_T_Ammo: B_9x21_Ball
	{
		airFriction = -0.00126466;
		hit = 1;
		caliber = 0.8;
		deflecting = 18;
		typicalSpeed = 997;
		tracerScale = 1;
		tracerStartTime = 0.073;
		tracerEndTime = 1.57123;
	};
};
class Mode_SemiAuto;
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
	class EC_PBP_ID: Pistol_Base_F
	{
		model = "\A3FL_Weapons\WID\EC_PBP_ID.p3d";
		picture = "\A3FL_Weapons\WID\AID.paa";
		Icon = "\A3FL_Weapons\WID\AID.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {""};
		displayname = "Autism ID";
		descriptionShort = "";
		_generalMacro = "EC_PBP_ID";
		baseWeapon = "EC_PBP_ID";
		author = "Davis Abrams";
		scope = 2;
		inertia = 0.3;
		dexterity = 1.7;
		handAnim[] = {"OFP2_ManSkeleton","A3FL_Weapons\WID\animations\fuck.rtm"};
		initSpeed = 320;
		selectionFireAnim = "zasleh";
		magazines[] = {"EC_ID_AMMO"};
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
				begin1[] = {"A3FL_Weapons\WID\tex\cardnoise.wss",1.5,0.9,400};
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
			reloadTime = 0.05;
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
