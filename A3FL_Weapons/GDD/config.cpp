////////////////////////////////////////////////////////////////////
//DeRap: GDD\config.bin
//Produced from mikero's Dos Tools Dll version 9.61
//https://mikero.bytex.digital/Downloads
//'now' is Mon Oct 07 18:43:50 2024 : 'file' last modified on Mon Oct 07 18:43:50 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class A3FL_Weapons
	{
		units[] = {};
		weapons[] = {"A3PL_RifleBase","A3PL_PistolBase","MeleePistol","MeleeRifle","EC_DD"};
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3PL_Weapons","A3PL_Characters"};
		requiredVersion = 0.1;
		magazines[] = {"A3PL_Melee_Base","A3PL_Magazine_Base","EC_DDMag"};
		ammo[] = {"A3PL_BulletBase","A3PL_Melee","EC_DD_Bullet"};
	};
};
class SlotInfo;
class CowsSlot;
class PointerSlot;
class Mode_SemiAuto
{
	class BaseSoundModeType;
};
class Mode_FullAuto;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class A3PL_MeleeSingle: Mode_SemiAuto
{
	autoFire = 1;
	burst = 1;
	burstRangeMax = -1;
	canShootInWater = 0;
	dispersion = 0;
	displayName = "Melee";
	ffCount = 1;
	ffFrequency = 11;
	ffMagnitude = 0.5;
	flash = "";
	flashSize = 0.1;
	multiplier = 1;
	recoil = "recoil_empty";
	recoilProne = "recoil_empty";
	reloadTime = 0.07;
	requiredOpticType = -1;
	showToPlayer = 1;
	swing0[] = {"A3PL_Weapons\axe\sounds\swing_0",1.77828,1,30};
	swing1[] = {"A3PL_Weapons\axe\sounds\swing_1",1.77828,1,30};
	soundBegin[] = {"swing0",0.5,"swing1",0.5};
	sound[] = {"",10,1};
	soundBeginWater[] = {"sound",1};
	soundBurst = 0;
	soundClosure[] = {"sound",1};
	soundContinuous = 0;
	soundEnd[] = {};
	soundLoop[] = {};
	sounds[] = {"StandardSound"};
	class StandardSound
	{
		begin1[] = {"A3PL_Weapons\axe\sounds\swing_1",1.0,1,300};
		soundBegin[] = {"begin1",1};
	};
	textureType = "semi";
	useAction = 0;
	useActionTitle = "";
	weaponSoundEffect = "";
};
class CfgAmmo
{
	class B_9x21_Ball;
	class B_556x45_Ball;
	class B_9x21_Ball_Tracer_Green;
	class A3PL_BulletBase: B_9x21_Ball
	{
		author = "ArmA 3 Project Life";
	};
	class A3PL_Melee: A3PL_BulletBase
	{
		model = "\A3\Weapons_f\empty";
		hit = 0.001;
		soundEngine[] = {"",0,1};
		visibleFire = 0;
		audibleFire = 0;
		visibleFireTime = 0;
		maxControlRange = 1;
		cost = 1;
		tracerColor[] = {0,0,0,0};
		tracerColorR[] = {0,0,0,0};
		typicalSpeed = 0.1;
		maxSpeed = 0.1;
		caliber = 0.1;
		airFriction = -0.5;
		isCraterOriented = 0;
		craterShape = "";
		cartridge = "EmptyEffect";
		explosionEffects = "EmptyEffect";
		craterEffects = "EmptyEffect";
		muzzleEffect = "EmptyEffect";
		effectFly = "EmptyEffect";
		craterWaterEffects = "EmptyEffect";
		effectsMissile = "EmptyEffect";
		effectsMissileInit = "EmptyEffect";
		effectsSmoke = "EmptyEffect";
		effectsFire = "EmptyEffect";
		effectFlare = "EmptyEffect";
		mineJumpEffects = "EmptyEffect";
		explosionSoundEffect = "EmptyEffect";
		bulletFly1[] = {"",1.58489,1,30};
		bulletFly2[] = {"",1.58489,1,30};
		bulletFly3[] = {"",1.58489,1,30};
		bulletFly4[] = {"",1.58489,1,30};
		bulletFly5[] = {"",1.58489,1,30};
		bulletFly6[] = {"",1.58489,1,30};
		bulletFly7[] = {"",1.58489,1,30};
		bulletFly8[] = {"",1.58489,1,30};
		bulletFly9[] = {"",1.58489,1,30};
		bulletFly10[] = {"",1.58489,1,30};
		bulletFly11[] = {"",1.58489,1,30};
		bulletFly12[] = {"",1.58489,1,30};
		bulletFly[] = {"bulletFly1",0.083,"bulletFly2",0.083,"bulletFly3",0.083,"bulletFly4",0.083,"bulletFly5",0.083,"bulletFly6",0.083,"bulletFly7",0.083,"bulletFly8",0.083,"bulletFly9",0.083,"bulletFly10",0.083,"bulletFly11",0.083,"bulletFly12",0.083};
		supersonicCrackNear[] = {"",3.16228,1,200};
		supersonicCrackFar[] = {"",3.16228,1,200};
		soundSetSonicCrack[] = {"bulletFly1",0.083,"bulletFly2",0.083};
		soundFly[] = {"",0.251189,0.7};
		soundFall[] = {"",1,1};
		soundFakeFall[] = {"soundFall",1};
		class SuperSonicCrack
		{
			superSonicCrack[] = {"",3.16228,1,200};
			class SCrackForest
			{
				range[] = {0,500};
				sound1[] = {"",1,1,500};
				sound2[] = {"",1,1,500};
				sound3[] = {"",1,1,500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "forest";
			};
			class SCrackTrees: SCrackForest
			{
				trigger = "trees";
			};
			class SCrackMeadow: SCrackForest
			{
				trigger = "meadow max sea";
			};
			class SCrackHouses: SCrackForest
			{
				trigger = "houses max interior";
			};
		};
	};
	class EC_DD_Bullet: A3PL_Melee
	{
		hit = 5;
	};
};
class CfgRecoils
{
	A3PL_Melee[] = {0,0.06,-0.1,0,0.1,-0.12,0.1,0,0};
};
class CfgMagazines
{
	class 16Rnd_9x21_Mag;
	class 30Rnd_556x45_Stanag;
	class A3PL_Melee_Base: 16Rnd_9x21_Mag
	{
		scope = 2;
		ammo = "A3PL_Melee";
		author = "A3PL Development Team";
		count = 999999;
		descriptionShort = "";
		displayName = "A3PL_Melee_Base";
		displayNameShort = "";
		initSpeed = 0.1;
		mass = 6;
		maxLeadSpeed = 23;
		maxThrowHoldTime = 2;
		maxThrowIntensityCoef = 1.4;
		minThrowIntensityCoef = 0.3;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		modelSpecial = "";
		nameSound = "magazine";
		picture = "\A3PL_Characters\A3PL_Logo.paa";
		quickReload = 0;
		reloadAction = "";
		selectionFireAnim = "zasleh";
		simulation = "ProxyMagazines";
		tracersEvery = 0;
		type = 16;
		useAction = 0;
		useActionTitle = "";
		value = 1;
		weight = 0;
	};
	class A3PL_Magazine_Base: 16Rnd_9x21_Mag
	{
		scope = 2;
		ammo = "A3PL_Melee";
		author = "A3PL Development Team";
		count = 1000000;
		descriptionShort = "";
		displayName = "A3PL_Magazine_Base";
		displayNameShort = "";
		initSpeed = 410;
		mass = 6;
		picture = "\A3PL_Characters\A3PL_Logo.paa";
		quickReload = 0;
		reloadAction = "";
		simulation = "ProxyMagazines";
		tracersEvery = 0;
		type = 16;
		useAction = 0;
		useActionTitle = "";
		weight = 0;
	};
	class EC_DDMag: A3PL_Melee_Base
	{
		displayName = "Gerber Hammer Durability";
		author = "Davis Abrams";
		descriptionShort = "Used in: Gerber Hammer";
		ammo = "EC_DD_Bullet";
	};
};
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Pistol_Base_F;
	class A3PL_TestGun: Pistol_Base_F
	{
		displayName = "TestGun";
	};
	class HMG_M2;
	class A3PL_RifleBase: Rifle_Base_F
	{
		scope = 2;
		author = "ArmA 3 Project Life";
		model = "";
		picture = "\A3PL_Characters\A3PL_Logo.paa";
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
	class A3PL_PistolBase: Pistol_Base_F
	{
		scope = 2;
		author = "ArmA 3 Project Life";
		model = "";
		picture = "\A3PL_Characters\A3PL_Logo.paa";
		discreteDistance[] = {};
		class Library
		{
			libTextDesc = "";
		};
		class BaseSoundModeType;
		class WeaponSlotsInfo
		{
			mass = 1;
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot{};
			allowedslots[] = {701,801,901};
		};
	};
	class MeleePistol: A3PL_PistolBase
	{
		burst = 1;
		canDrop = 0;
		optics = 0;
		autoReload = 1;
		autofire = 1;
		modelOptics = "-";
		modes[] = {"Single"};
		magazines[] = {"A3PL_Melee_Base"};
		showToPlayer = 0;
		showSwitchAction = 0;
		dispersion = 0;
		sounds[] = {"StandardSound"};
		cursor = "EmptyCursor";
		cursoraim = "cursorAimOn";
		cursorSize = 1;
		discreteDistance[] = {};
		caseless[] = {};
		soundBullet[] = {"caseless",1};
		drySound[] = {"",0.562341,1,10};
		reloadMagazineSound[] = {"",1,1,10};
		changeFiremodeSound[] = {"",0.177828,1,5};
		soundContinuous = 0;
		sound[] = {};
		soundBegin[] = {"sound",1};
		soundBeginWater[] = {"sound",1};
		soundClosure[] = {"sound",1};
		soundEnd[] = {"sound",1};
		soundLoop[] = {"sound",1};
		weaponSoundEffect = "";
		soundBurst = 1;
		reloadSound[] = {"",1,1};
		emptySound[] = {"",1,1};
		fireLightDuration = 0;
		fireLightIntensity = 0;
		fireLightDiffuse[] = {0,0,0};
		fireLightAmbient[] = {0,0,0};
		class GunParticles{};
		class GunFire: WeaponFireGun
		{
			access = 0;
			cloudletDuration = 0;
			cloudletAnimPeriod = 0;
			cloudletSize = 0;
			cloudletAlpha = 0;
			cloudletGrowUp = 0;
			cloudletFadeIn = 0;
			cloudletFadeOut = 0;
			cloudletAccY = 0;
			cloudletMinYSpeed = 0;
			cloudletMaxYSpeed = 0;
			cloudletShape = "";
			cloudletColor[] = {0,0,0,0};
			cloudletDensityCoef = 0;
			interval = 0;
			size = 0;
			sourceSize = 0;
			timeToLive = 0;
			initT = 0;
			deltaT = 0;
		};
		class GunClouds: GunFire{};
		class BaseSoundModeType: BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"",1.0351422,1,30};
			closure2[] = {"",1.0351422,1.1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"",0.95,1,1000};
			soundBegin[] = {"begin1",1};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[] = {"",0.56234133,1,600};
			begin2[] = {"",0.56234133,1,600};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		class Single: A3PL_MeleeSingle
		{
			recoil = "A3PL_Melee";
			dispersion = 0;
			reloadTime = 1;
		};
	};
	class MeleeRifle: A3PL_RifleBase
	{
		burst = 1;
		canDrop = 0;
		optics = 0;
		autoReload = 1;
		autofire = 1;
		modelOptics = "-";
		modes[] = {"Single"};
		magazines[] = {"A3PL_Melee_Base"};
		showToPlayer = 0;
		showSwitchAction = 0;
		dispersion = 0;
		sounds[] = {"StandardSound"};
		cursor = "EmptyCursor";
		cursoraim = "cursorAimOn";
		cursorSize = 1;
		discreteDistance[] = {};
		caseless[] = {};
		soundBullet[] = {"caseless",1};
		drySound[] = {"",0.562341,1,10};
		reloadMagazineSound[] = {"",1,1,10};
		changeFiremodeSound[] = {"",0.177828,1,5};
		soundContinuous = 0;
		sound[] = {};
		soundBegin[] = {"sound",1};
		soundBeginWater[] = {"sound",1};
		soundClosure[] = {"sound",1};
		soundEnd[] = {"sound",1};
		soundLoop[] = {"sound",1};
		weaponSoundEffect = "";
		soundBurst = 1;
		reloadSound[] = {"",1,1};
		emptySound[] = {"",1,1};
		fireLightDuration = 0;
		fireLightIntensity = 0;
		fireLightDiffuse[] = {0,0,0};
		fireLightAmbient[] = {0,0,0};
		class GunParticles{};
		class GunFire: WeaponFireGun
		{
			access = 0;
			cloudletDuration = 0;
			cloudletAnimPeriod = 0;
			cloudletSize = 0;
			cloudletAlpha = 0;
			cloudletGrowUp = 0;
			cloudletFadeIn = 0;
			cloudletFadeOut = 0;
			cloudletAccY = 0;
			cloudletMinYSpeed = 0;
			cloudletMaxYSpeed = 0;
			cloudletShape = "";
			cloudletColor[] = {0,0,0,0};
			cloudletDensityCoef = 0;
			interval = 0;
			size = 0;
			sourceSize = 0;
			timeToLive = 0;
			initT = 0;
			deltaT = 0;
		};
		class GunClouds: GunFire{};
		class BaseSoundModeType: BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"",1.0351422,1,30};
			closure2[] = {"",1.0351422,1.1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"",0.95,1,1000};
			soundBegin[] = {"begin1",1};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[] = {"",0.56234133,1,600};
			begin2[] = {"",0.56234133,1,600};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		class Single: A3PL_MeleeSingle
		{
			recoil = "A3PL_Melee";
			dispersion = 0;
			reloadTime = 1;
		};
	};
	class EC_DD: MeleeRifle
	{
		scope = 2;
		model = "A3FL_Weapons\GDD\EC_DD.p3d";
		author = "Davis Abrams";
		picture = "\A3FL_Weapons\GDD\tex2\GDDUI.paa";
		Icon = "\A3FL_Weapons\GDD\tex2\GDDUI.paa";
		displayName = "Gerber Ding-Dong Breaching Tool";
		magazines[] = {"EC_DDMag"};
		handAnim[] = {"OFP2_ManSkeleton","\A3PL_Weapons\axe\anim\axe_hold.rtm"};
		class Library
		{
			libTextDesc = "Gerber Ding-Dong Breaching Tool";
		};
		descriptionShort = "Gerber Ding-Dong Breaching Tool";
	};
};
class CfgMovesBasic
{
	class ManActions
	{
		GestureSwing = "";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureSwing[] = {"GestureSwing","Gesture"};
		};
	};
};
