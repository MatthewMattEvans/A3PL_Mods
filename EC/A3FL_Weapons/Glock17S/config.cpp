class CfgPatches
{
	class A3FL_Glock17S
	{
		units[] = {};
		weapons[] = {"A3FL_Glock17S"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		magazines[] = {"A3FL_Glock17_Mag"};
		ammo[] = {};
	};
};

class CfgAmmo
{
	class BulletBase;
	class A3FL_Glock_Ammo: BulletBase
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
	};
	class A3FL_Glock17S: Pistol_Base_F
	{
		model = "\A3FL_Weapons\Glock17S\Glock17S.p3d";
		picture	= "\A3FL_Weapons\Glock17S\Glock18.paa";
		Icon = "\A3FL_Weapons\Glock17S\Glock18.paa";
		displayname="Glock 17 SEAR";
		descriptionShort = "Glock 17 With Auto SEAR";
		_generalMacro="A3FL_Glock17S";
		baseWeapon="A3FL_Glock17S";
		author="Davis Abrams";
		scope=2;
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=320;
		recoil="recoil_pistol_p07";
		selectionFireAnim = "zasleh";
		magazines[] = {"A3FL_Glock17_Mag"};
	
		class Library
		{
			libTextDesc = "";
		};

		drySound[]={"A3\Sounds_F\weapons\pistol_heavy_02\dry",0.22387211,1,20};
		reloadMagazineSound[]={"\A3FL_Weapons\P227\sounds\reload",1,1,10};
		
		modes[]={"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			sounds[]={"StandardSound"};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_handgun_6",
					1.0351422,
					1,
					30
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_handgun_6",
					1.0351422,
					1.1,
					30
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
				weaponSoundEffect="DefaultHandgun";
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]={"\A3FL_Weapons\Glock17\tex\glonksounds.wss",1.5,0.9,400};
				soundBegin[]=
				{
					"begin1",
					1
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_interior",
							1,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_trees",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_forest",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_meadows",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_houses",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			soundContinuous=0;
			multiplier=1;
			burst=1;
			dispersion=0.07;
			reloadTime=0.050000001;
			recoil="A3FL_Glock18Auto_Recoil";
			recoilProne="A3FL_Glock18Auto_Recoil";
			aiRateOfFire=0.001;
			aiRateOfFireDistance=10;
			minRange=2;
			minRangeProbab=0.69999999;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=15;
			maxRangeProbab=0.2;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=20;
			class CowsSlot: CowsSlot_Pistol
			{
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
				compatibleItems[]=
				{
					"optic_MRD_black",
					"optic_RMR"
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={"acc_flashlight_pistol"};
				iconPosition[]={0.47999999,0.54000002};
				iconScale=0.25;
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\a3\data_f\proxies\muzzle_flash\muzzle_flash_pistol_p07";
				compatibleItems[]={};
				iconPosition[]={0.30000001,0.38};
				iconScale=0.2;
			};
		};
	};
};

class cfgRecoils
{
	A3FL_Glock18_Recoil[]={0,0.0070000002,0.050000001,0.0049999999,0.0070000002,0.050000001,0.090000004,0,-0.0099999998,0.1,0,0};
	A3FL_Glock18Auto_Recoil[]={0,0.0070000002,0.019999999,0.0049999999,0.0070000002,0.019999999,0.090000004,0,-0.0014000001,0.1,0,0};
};