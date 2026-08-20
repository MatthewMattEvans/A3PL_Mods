class CfgPatches
{
	class A3FL_Benelli
	{
		addonRootClass="A3_Weapons_F";
		requiredAddons[]={"A3_Weapons_F","A3_Weapons_F_Enoch"};
		requiredVersion=0.1;
		units[]={};
		magazines[]={"A3FL_Benelli_Buck","A3FL_Benelli_Slug","A3FL_Benelli_Beanbag","A3FL_Benelli_Breach"};
		ammo[]={"A3FL_Benelli_Buck","A3FL_Benelli_Slug","A3FL_Benelli_Beanbag","A3FL_Benelli_Breach"};
		weapons[]={"A3FL_Benelli"};
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
	class A3FL_Benelli: sgun_HunterShotgun_01_base_F
	{
		dlc="";
		author="A3FL Winston";
		scope=2;
		displayname="Benelli M4";
		descriptionShort="Benelli M4";
		class Library {
			libTextDesc="Benelli M4";
		};
		picture="\A3FL_Weapons\Benelli\Benelli.paa";
		model="\A3FL_Weapons\Benelli\A3FL_Benelli";
		magazines[]={"A3FL_Benelli_Buck","A3FL_Benelli_Slug"};
		magazineWell[]={};
		reloadAction="GestureReloadM4SSAS";
		reloadMagazineSound[]= {"\A3FL_Weapons\Benelli\sounds\reload.wss",2,1,20};
		handAnim[]= {"OFP2_ManSkeleton","\A3\weapons_f\Machineguns\M200\data\Anim\M200.rtm"};
		dexterity=1.5;
		inertia=0.5;
		fireSpreadAngle=0.64999998;
		initSpeed = -0.22;
		class Single: Single {
			class StandardSound
			{
				begin1[]={"\A3FL_Weapons\Benelli\sounds\fire.ogg",1.5,1,900};
				soundBegin[]={"begin1",1};
			};
			reloadTime = 0.19;
			dispersion=0.001;
		};
		class Single_Close: Single_Close {
			class StandardSound
			{
				begin1[]={"\A3FL_Weapons\Benelli\sounds\fire.ogg",1.5,1,900};
				soundBegin[]={"begin1",1};
			};
			reloadTime = 0.19;
			dispersion=0.001;
		};
		delete Single_Far;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot;
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"optic_RMR_Tall",
					"optic_ACO_grn_smg",
					"optic_ACO_smg",
					"optic_Holosight_smg_blk_F"
					
				};
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
			};
			class MuzzleSlot {};
			mass=80;
		};
	};
};

class CfgAmmo
{
	class B_12Gauge_Pellets_Submunition;
	class B_12Gauge_Slug;
	class A3FL_Benelli_Buck: B_12Gauge_Pellets_Submunition
	{
		indirectHitRange = 10;
		initSpeed = 260;
		airFriction = -0.08;
	};
	class A3FL_Benelli_Slug: B_12Gauge_Slug
	{
		indirectHitRange = 10;
		initSpeed = 260;
		airFriction = -0.045;
	};
};

class CfgMagazines
{
	class CA_Magazine;
	class 2Rnd_12Gauge_Pellets: CA_Magazine {};
	class 2Rnd_12Gauge_Slug: 2Rnd_12Gauge_Pellets {};
	class A3FL_Benelli_Buck: 2Rnd_12Gauge_Pellets
	{
		dlc="";
		author="A3FL Winston";
		displayName="Benelli Buck Rounds Magazine";
		displayNameShort="Buckshot";
		descriptionShort="Caliber: 12 Gauge (Buckshot)<br/>Rounds: 8<br/>Used in: Benelli M4";
		ammo="A3FL_Benelli_Buck";
		count=8;
		initSpeed=195;
	};
	class A3FL_Benelli_Slug: 2Rnd_12Gauge_Slug
	{
		dlc="";
		author="A3FL Winston";
		displayName="Benelli Slug Rounds Magazine";
		displayNameShort="Slug";
		descriptionShort="Caliber: 12 Gauge (Slug)<br/>Rounds: 8<br/>Used in: Benelli M4";
		ammo="A3FL_Benelli_Slug";
		count=8;
		initSpeed=210;
	};
};