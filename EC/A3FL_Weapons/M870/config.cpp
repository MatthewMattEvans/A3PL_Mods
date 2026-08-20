class CfgPatches
{
	class A3FL_M870
	{
		addonRootClass="A3_Weapons_F";
		requiredAddons[]={"A3_Weapons_F","A3_Weapons_F_Enoch","A3FL_Benelli"};
		requiredVersion=0.1;
		units[]={};
		magazines[]={"A3FL_M870_Buck","A3FL_M870_Slug","A3FL_M870_Beanbag","A3FL_M870_Breach"};
		ammo[]={"A3FL_M870_Breach","A3FL_M870_Beanbag"};
		weapons[]={"A3FL_M870"};
	};
};

class Mode_SemiAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class CfgWeapons
{
	class Rifle_Long_Base_F;
	class sgun_HunterShotgun_01_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
		class Single;
		class Single_Close;
	};
	class A3FL_M870: sgun_HunterShotgun_01_base_F
	{
		author="A3FL Winston";
		scope=2;
		displayname="Remington M870";
		descriptionShort="Remington M870";
		class Library {
			libTextDesc="Remington M870";
		};
		picture="\A3FL_Weapons\M870\M870.paa";
		model="\A3FL_Weapons\M870\A3FL_M870";
		magazines[]={"A3FL_M870_Buck","A3FL_M870_Slug","A3FL_M870_Beanbag","A3FL_M870_Breach"};
		magazineWell[]={};
		reloadAction="GestureReloadM4SSAS";
		reloadMagazineSound[]= {"\A3FL_Weapons\Benelli\sounds\reload.wss",2,1,20};
		handAnim[]={"OFP2_ManSkeleton","\A3FL_Weapons\M870\data\M870.rtm"};
		dexterity=1.5;
		inertia=0.5;
		initSpeed=-0.80000001;
		fireSpreadAngle=1.2;
		class Single: Single {
			class StandardSound
			{
				begin1[]={"\A3FL_Weapons\Benelli\sounds\fire.ogg",1.5,1,900};
				soundBegin[]={"begin1",1};
			};
			reloadTime=1.05;
			dispersion=0.00185;
			minRange=1;
			minRangeProbab=0.1;
			midRange=10;
			midRangeProbab=0.80000001;
			maxRange=50;
			maxRangeProbab=0.15000001;
		};
		class Single_Close: Single_Close {
			class StandardSound
			{
				begin1[]={"\A3FL_Weapons\Benelli\sounds\fire.ogg",1.5,1,900};
				soundBegin[]={"begin1",1};
			};
			reloadTime=1.05;
			showToPlayer=0;
			minRange=50;
			minRangeProbab=0.1;
			midRange=140;
			midRangeProbab=0.80000001;
			maxRange=200;
			maxRangeProbab=0.15000001;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot;
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"optic_RMR_Tall",
					"optic_Holosight_blk_F",
					
				};
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
			};
			class MuzzleSlot {};
			mass=60;
		};
	};
};

class CfgAmmo
{
	class B_12Gauge_Pellets_Submunition;
	class B_12Gauge_Slug;
	class A3FL_M870_Buck: B_12Gauge_Pellets_Submunition {
		indirectHitRange = 10;
		initSpeed = 280;
		airFriction = -4.5;
	};
	class A3FL_M870_Slug: B_12Gauge_Slug
	{
		indirectHitRange = 10;
		initSpeed = 280;
		airFriction = -0.005;
	};
	class A3FL_M870_Beanbag: A3FL_M870_Slug 
	{
		hit=3;
		airFriction = -0.1;
	};
	class A3FL_M870_Breach: A3FL_M870_Slug 
	{
		hit=1;
		airFriction = -0.1;
	};
};

class CfgMagazines
{
	class CA_Magazine;
	class 2Rnd_12Gauge_Pellets: CA_Magazine {};
	class 2Rnd_12Gauge_Slug: 2Rnd_12Gauge_Pellets {};
	class A3FL_M870_Buck: 2Rnd_12Gauge_Pellets
	{
		dlc="";
		author="A3FL Winston";
		displayName="M870 Buck Rounds Magazine";
		displayNameShort="Buckshot";
		descriptionShort="Caliber: 12 Gauge (Buckshot)<br/>Rounds: 8<br/>Used in: Remington M870";
		ammo="A3FL_M870_Buck";
		count=8;
		initSpeed=195;
	};
	class A3FL_M870_Slug: 2Rnd_12Gauge_Slug
	{
		dlc="";
		author="A3FL Winston";
		displayName="M870 Slug Rounds Magazine";
		displayNameShort="Slug";
		descriptionShort="Caliber: 12 Gauge (Slug)<br/>Rounds: 8<br/>Used in: Remington M870";
		ammo="A3FL_M870_Slug";
		count=8;
		initSpeed=210;
	};
	class A3FL_M870_Beanbag: A3FL_M870_Slug {
		displayName="M870 Beanbag Magazine";
		displayNameShort="Beanbag";
		descriptionShort="Caliber: 12 Gauge<br/>Rounds: 8<br/>Used in: Remington M870";
		ammo="A3FL_M870_Beanbag";
		initSpeed=150;
	};
	class A3FL_M870_Breach: A3FL_M870_Slug {
		displayName="M870 Breach Rounds Magazine";
		displayNameShort="Breach Rounds";
		descriptionShort="Caliber: 12 Gauge<br/>Rounds: 8<br/>Used in: Remington M870";
		ammo="A3FL_M870_Breach";
		initSpeed=50;
	};
};