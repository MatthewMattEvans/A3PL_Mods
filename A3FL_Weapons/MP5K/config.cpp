class CfgPatches
{
	class A3FL_MP5K
	{
		units[] = {};
		weapons[] = {"A3FL_MP5K"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		magazines[] = {"A3FL_MP5K_Mag"};
		ammo[] = {"A3FL_MP5_Ammo"};
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
	};
	class A3FL_MP5K: Rifle_Short_Base_F
	{
		author="A3FL Winston";
		_generalMacro="A3FL_MP5K";
		scope=2;
		magazines[]={"A3FL_MP5K_Mag"};
		maxZeroing=150;
		reloadAction="GestureReloadSMG_01";
		recoil="recoil_smg_01";
		cursor="smg";
		discreteDistance[]={100,150};
		discreteDistanceInitIndex=0;
		aiDispersionCoefY=8;
		aiDispersionCoefX=9;
		descriptionShort="";
		displayName="HK MP5K";
		model="\A3FL_Weapons\MP5K\A3FL_MP5K";
		handAnim[]= {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\SMGs\SMG_05\Data\Anim\SMG_05.rtm"};
		picture	= "\A3FL_Weapons\MP5K\MP5K.paa";
		Icon = "\A3FL_Weapons\MP5K\MP5K.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]= {"muzzle_snds_acp"};
				iconPosition[]={0.1,0.40000001};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.40000001,0.30000001};
				iconScale=0.2;
			};
			class PointerSlot {};
			allowedSlots[]={701,801,901};
		};
		bullet1[]= {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.50118721,1,15};
		bullet2[]= {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.50118721,1,15};
		bullet3[]= {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.50118721,1,15};
		bullet4[]= {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.50118721,1,15};
		bullet5[]= {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.56234133,1,15};
		bullet6[]= {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.56234133,1,15};
		bullet7[]= {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.56234133,1,15};
		bullet8[]= {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.56234133,1,15};
		bullet9[]= {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.39810717,1,15};
		bullet10[]= {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.39810717,1,15};
		bullet11[]= {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.39810717,1,15};
		bullet12[]= {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.39810717,1,15};
		soundBullet[]= {"bullet1",0.082999997,"bullet2",0.082999997,"bullet3",0.082999997,"bullet4",0.082999997,"bullet5",0.082999997,"bullet6",0.082999997,"bullet7",0.082999997,"bullet8",0.082999997,"bullet9",0.082999997,"bullet10",0.082999997,"bullet11",0.082999997,"bullet12",0.082999997};
		distanceZoomMin=100;
		distanceZoomMax=100;
		modes[]= {"Single","FullAuto"};
		drySound[]= {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Dry_Vermin",0.50118721,1,10};
		reloadMagazineSound[]= {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\reload_vermin",1,1,10};
		changeFiremodeSound[]= {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\firemode_Vermin",0.25118864,1,5};
		class Single: Mode_SemiAuto
		{
			sounds[]={"StandardSound"};
			class StandardSound
			{
				begin1[]= {"\A3FL_Weapons\MP5K\data\fire.wss",1.1,1,1200};
				soundBegin[]= {"begin1",1};
				class SoundTails
				{
					class TailInterior
					{
						sound[]= {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_interior",1.5848932,1,1200};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]= {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_trees",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]= {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_forest",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]= {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_meadows",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]= {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_houses",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.050000001;
			dispersion=0.00131;
			recoil="recoil_single_SMG_01";
			recoilProne="recoil_single_prone_SMG_01";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]= {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[]= {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\closure_Vermin_01",0.56234133,1,10};
				closure2[]= {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\closure_Vermin_02",0.56234133,1.1,10};
				soundClosure[]= {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]= {"\A3FL_Weapons\MP5K\data\fire.wss",1.1,1,1200};
				soundBegin[]= {"begin1",0.33000001};
				class SoundTails
				{
					class TailInterior
					{
						sound[]= {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_interior",1.5848932,1,1200};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]= {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_trees",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]= {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_forest",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]= {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_meadows",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]= {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_houses",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.050000001;
			dispersion=0.00131;
			recoil="recoil_auto_smg_01";
			recoilProne="recoil_auto_prone_smg_01";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
			aiRateOfFireDistance=50;
		};
	};
};

class CfgMagazines
{
	class 16Rnd_9x21_Mag;
	class A3FL_MP5K_Mag: 16Rnd_9x21_Mag
	{
		picture	= "\A3FL_Weapons\P227\P227_Mag.paa"; 
		Icon = "\A3FL_Weapons\P227\P227_Mag.paa";
		displayName = "30Rnd 9mm MP5K Mag";
		author="A3FL Winston";
		scope= 2;
		type = 16;
		ammo = "A3FL_MP5_Ammo";
		count = 30;
		initSpeed = 280;
		mass = 6;
		descriptionShort="Caliber: 9mm<br/>Rounds: 30<br/>Used in: HK MP5K";
	};
};

class CfgAmmo
{
	class BulletBase;
	class A3FL_MP5_Ammo: BulletBase
	{
		hit=7;
		cartridge="cartridge_small";
		cost=100;
		typicalSpeed=390;
		airFriction=-0.0014;
		caliber=1.7;
		deflecting=45;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale=0.5;
		tracerStartTime=0.050000001;
		tracerEndTime=1;
		nvgOnly=1;
		visibleFire=3;
		audibleFire=5;
	};
};