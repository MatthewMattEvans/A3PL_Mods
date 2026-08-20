class CfgPatches
{
	class A3FL_Thompson
	{
		units[]= {};
		weapons[]= {"A3FL_Thompson"};
		requiredAddons[]={"A3PL_Weapons2","A3PL_Cars"};
		requiredVersion=0.1;
		magazines[]= {};
		ammo[]=	{};
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
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class A3FL_Thompson: Rifle_Base_F
	{
		scope=2;
		initSpeed=375;
		author="A3FL Winston";
		_generalMacro="A3FL_Thompson";
		model="\A3FL_Weapons\Thompson\A3FL_Thompson";
		displayName="Colt Thompson";
		picture="\A3FL_Weapons\Thompson\Thompson.paa";
		descriptionShort="Colt Thompson";
		magazines[]= {"A3FL_Thompson_Mag"};
		reloadAction="GestureRldM16";
		recoil="recoil_mk20";
		maxZeroing=150;
		discreteDistance[]={100,150};
		discreteDistanceInitIndex=0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot {};
			class CowsSlot {};
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
		distanceZoomMin=100;
		distanceZoomMax=100;
		inertia=0.40000001;
		dexterity=1.6;
		handAnim[]= {"OFP2_ManSkeleton","A3FL_Weapons\Thompson\data\ThompsonHold.rtm"};
		bullet1[]= {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.79432821,1,15};
		bullet2[]= {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.79432821,1,15};
		bullet3[]= {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.79432821,1,15};
		bullet4[]= {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.79432821,1,15};
		bullet5[]= {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.79432821,1,15};
		bullet6[]= {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.79432821,1,15};
		bullet7[]= {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.79432821,1,15};
		bullet8[]= {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.79432821,1,15};
		bullet9[]= {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.79432821,1,15};
		bullet10[]= {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.79432821,1,15};
		bullet11[]= {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.79432821,1,15};
		bullet12[]= {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.79432821,1,15};
		soundBullet[]=
		{
			"bullet1", 0.082999997,
			"bullet2", 0.082999997,
			"bullet3", 0.082999997,
			"bullet4", 0.082999997,
			"bullet5", 0.082999997,
			"bullet6", 0.082999997,
			"bullet7", 0.082999997,
			"bullet8", 0.082999997,
			"bullet9", 0.082999997,
			"bullet10", 0.082999997,
			"bullet11",	0.082999997,
			"bullet12",	0.082999997
		};
		modes[]= {"Single","FullAuto"};
		changeFiremodeSound[]= {"\A3FL_Weapons\M4\sounds\selector.wss",1.5,1,5};
		drySound[]= {"\A3FL_Weapons\M4\sounds\dryfire.wss",1.5,1,20};
		reloadMagazineSound[]= {"\A3FL_Weapons\M4\sounds\reload.wss",2,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[]= {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.70794576,1,10};
				closure2[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.70794576,1.1,10};
				soundClosure[]= {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]={"\A3FL_Weapons\Thompson\sounds\fire.wss",0.6,1.4,1200};
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
			reloadTime=0.075000003;
			dispersion=0.00030000001;
			recoil="recoil_single_mk20";
			recoilProne="recoil_single_prone_mk20";
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]= {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.70794576,1,10};
				closure2[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.70794576,1.1,10};
				soundClosure[]= {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]={"\A3FL_Weapons\Thompson\sounds\fire.wss",0.6,1.4,1200};
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
			reloadTime=0.082758598;
			dispersion=0.0057999999;
			recoil="recoil_single_mk20";
			recoilProne="recoil_single_prone_mk20";
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
			aiRateOfFire=1e-006;
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
	};
};

class CfgMagazines
{
	class 16Rnd_9x21_Mag;
	class A3FL_Thompson_Mag: 16Rnd_9x21_Mag
	{
		displayName = "20Rnd .45 Thompson Mag";
		author="A3FL Winston";
		scope= 2;
		type = 16;
		ammo = "A3FL_Thompson_Ammo";
		count = 20;
		initSpeed = 280;
		mass = 6;
		descriptionShort="Caliber: .45<br/>Rounds: 20<br/>Used in: Colt Thompson";
	};
};

class CfgAmmo
{
	class BulletBase;
	class A3FL_Thompson_Ammo: BulletBase
	{
		hit=10;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_65_caseless";
		caliber=2.5999999;
		deflecting=45;
		visibleFire=5;
		audibleFire=9;
		cost=100;
		typicalSpeed=280;
		airFriction=-0.0018;
	};
};