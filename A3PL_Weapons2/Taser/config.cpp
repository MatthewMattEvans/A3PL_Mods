class CfgPatches
{
	class A3PL_Taser2
	{
		units[] = {};
		weapons[] = {"A3PL_Taser2"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		magazines[] = {"A3PL_Taser2_Mag"};
		ammo[] = {"A3PL_Taser2_Ammo"};
	};
};

class Mode_SemiAuto;
class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class A3PL_Taser2_Mag: CA_Magazine
	{
		scope = 2;
		displayName = "Taser Pellets";
		ammo = "A3PL_Taser2_Ammo";
		count = 1;
		initSpeed = 100;
		model = "\A3PL_Weapons2\Taser\magazine";
		picture = "\A3PL_Weapons2\Taser\ico\cartridgeicon.paa";
		descriptionShort = "Taser Magazine";
		displayNameShort = "Taser Pellets";
	};
};
class CfgAmmo
{
	class BulletBase;
	class A3PL_Taser2_Ammo: BulletBase
	{
		simulation = "shotSpread";
		hit = 6;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_65_caseless";
		cost = 2;
		typicalSpeed = 60;
		visibleFire = 4;
		audibleFire = 6;
		airFriction=-0.15000001;
		caliber=0.30000001;
		fireSpreadAngle = 1;
		burst = 2;
		multiplier = 1.1;
		waterFriction = -0.00096;
		timeToLive = 1.3;
		effectFly = "AmmoUnderwater";
		class CamShakeFire
		{
			power = 0;
			duration = 0.3;
			frequency = 15;
			distance = 5;
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0.1;
			frequency = 5;
		};
		soundHit[] = {"\A3PL_Weapons2\Taser\sounds\shoot.wav",1,1};
		hitMan[] = {"soundhit",1};
	};
};
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class A3PL_Taser2: Pistol_Base_F
	{
		scope = 2;
		canShootInWater = 1;
		model = "\A3PL_Weapons2\Taser\taser.p3d";
		picture = "\A3PL_Weapons2\Taser\ico\Taser_ico.paa";
		UiPicture = "\A3PL_Weapons2\Taser\ico\Taser_ico.paa";
		magazines[] = {"A3PL_Taser2_Mag"};
		reloadAction = "GestureReloadPistol";
		displayname = "Taser";
		dexterity = 2;
		modes[] = {"Single"};
		reloadtime = 1.8;
		dispersion=0.0080000004;
		inertia = 0.1;
		initSpeed = 60;
		drySound[] = {"\A3PL_Weapons2\Taser\sounds\dry.wav",0.01,1,20};
		reloadMagazineSound[] = {"\A3PL_Weapons2\Taser\sounds\reload.wav",1,1,30};
		recoil = "assaultRifleBase";
		recoilProne = "assaultRifleBase";
		minRange = 5;
		minRangeProbab = 0.1;
		midRange = 7;
		midRangeProbab = 0.8;
		maxRange = 8;
		maxRangeProbab = 0.04;
		distanceZoomMin = 2;
		distanceZoomMax = 7;
		aiRateOfFire = 2.9;
		aiRateOfFireDistance = 5;
		class Library
		{
			libTextDesc = "Taser";
		};
		descriptionShort = "Taser";
		class ItemInfo
		{
			priority = 2;
			RMBhint = "Taser";
			onHoverText = "";
		};
		class Single: Mode_SemiAuto
		{
			aidispersioncoefx = 0.4;
			aidispersioncoefy = 0.7;
			airateoffire = 0.5;
			airateoffiredistance = 20;
			artillerycharge = 0.5;
			artillerydispersion = 0.5;
			autofire = 0.5;
			burst = 1;
			canshootinwater = 0;
			dispersion=0.0080000004;
			displayname = "Single";
			ffcount = 0.5;
			fffrequency = 5;
			ffmagnitude = 0.5;
			flash = "gunfire";
			flashsize = 0.1;
			minRange = 5;
			minRangeProbab = 0.1;
			midRange = 7;
			midRangeProbab = 0.8;
			maxRange = 8;
			maxRangeProbab = 0.04;
			multiplier = 1;
			recoil = "assaultRifleBase";
			recoilprone = "assaultRifleBase";
			reloadtime = 1.8;
			requiredoptictype = -1;
			showtoplayer = 1;
			sound[] = {"",10,1};
			soundbeginwater[] = {"sound",1};
			soundburst = 0;
			soundcontinuous = 0;
			soundend[] = {};
			soundloop[] = {};
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\A3PL_Weapons2\Taser\sounds\closure.wav",1,1,25};
				closure2[] = {"\A3PL_Weapons2\Taser\sounds\closure.wav",1,1.1,25};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\A3PL_Weapons2\Taser\sounds\fire.wav",0.794328,1,25};
				begin2[] = {"\A3PL_Weapons2\Taser\sounds\fire.wav",0.794328,1,25};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				beginwater1[] = {"\A3PL_Weapons2\Taser\sounds\fire.wav",0.794328,1,25};
				beginwater2[] = {"\A3PL_Weapons2\Taser\sounds\fire.wav",0.794328,1,25};
				soundBeginWater[] = {"beginwater1",0.33,"beginwater2",0.33};
			};
			texturetype = "semi";
			useaction = 0;
			useactiontitle = "";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=2;
			class CowsSlot {};
			class MuzzleSlot {};
		};
		cursor="A3PL_Weapons2\Taser\ico\taser_dot.paa";
		cursoraim="EmptyCursor";
		cursorSize=1;
		class FlashLight
		{
			color[]={7000,7500,10000};
			ambient[]={6,9,9};
			intensity=2;
			size=1;
			innerAngle=30;
			outerAngle=80;
			coneFadeCoef=5;
			position="flash_dir";
			direction="flash";
			useFlare=1;
			flareSize=0.64999998;
			flareMaxDistance="600";
			dayLight=1;
			class Attenuation
			{
				start=0.5;
				constant=0;
				linear=0;
				quadratic=1;
				hardLimitStart=200;
				hardLimitEnd=300;
			};
			scale[]={0};
		};
	};
};