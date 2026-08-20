class CfgPatches
{
	class A3FL_Glock17
	{
		units[] = {};
		weapons[] = {"A3FL_Glock17","A3FL_Glock17_T","A3FL_Glock17_MRD","A3FL_Glock17_RMR"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		magazines[] = {"A3FL_Glock17_Mag"};
		ammo[] = {};
	};
};

class CfgMagazines
{
	class 16Rnd_9x21_Mag;
	class A3FL_Glock17_Mag: 16Rnd_9x21_Mag
	{
		picture	= "\A3FL_Weapons\P227\P227_Mag.paa"; 
		Icon = "\A3FL_Weapons\P227\P227_Mag.paa";
		displayName = "17Rnd 9mm Glock17 Mag";
		author="A3FL Winston";
		scope= 2;
		type = 16;
		ammo = "A3FL_Glock_Ammo";
		count = 17;
		initSpeed = 300;
		mass = 6;
		descriptionShort="Caliber: 9x19mm<br/>Rounds: 17<br/>Used in: Glock 17";
	};
	class A3FL_Glock17_T_Mag: A3FL_Glock17_Mag
	{
		picture	= "\A3FL_Weapons\P227\P227_Mag.paa"; 
		Icon = "\A3FL_Weapons\P227\P227_Mag.paa";
		displayName = "Glock17 Training Mag";
		author="A3FL Winston";
		scope= 2;
		type = 16;
		ammo = "A3FL_Glock_T_Ammo";
		count = 17;
		initSpeed = 300;
		mass = 6;
		descriptionShort="Caliber: 9x19mm<br/>Rounds: 17<br/>Used in: Glock 17 Training";
	};
};
class CfgAmmo
{
	class B_9x21_Ball;
	class A3FL_Glock_T_Ammo: B_9x21_Ball
	{
		airFriction=-0.00126466;
		hit=1;
		caliber=0.80000001;
		deflecting=18;
		typicalSpeed=997;
		tracerScale=1;
		tracerStartTime=0.072999999;
		tracerEndTime=1.5712301;
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
	class A3FL_Glock17: Pistol_Base_F
	{
		model = "\A3FL_Weapons\Glock17\A3FL_Glock17.p3d";
		picture	= "\A3FL_Weapons\Glock17\Glock17.paa";
		Icon = "\A3FL_Weapons\Glock17\Glock17.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A3FL_Weapons\Glock17\tex\glock17_co.paa"};
		displayname="Glock 17";
		descriptionShort = "Glock 17";
		_generalMacro="A3FL_Glock17";
		baseWeapon="A3FL_Glock17";
		author="A3FL Winston & Davis";
		scope=2;
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=320;
		recoil="recoil_pistol_rook40";
		selectionFireAnim = "zasleh";
		magazines[] = {"A3FL_Glock17_Mag"};
		drySound[]={"A3\Sounds_F\weapons\pistol_heavy_02\dry",0.22387211,1,20};
		reloadMagazineSound[]={"\A3FL_Weapons\P227\sounds\reload",1,1,10};
		
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[]= {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultHandgun";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_handgun_5",
					1.0351422,
					1,
					30
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_handgun_4",
					1.0351422,
					1,
					30
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]={"\A3FL_Weapons\Glock17\tex\glonksounds.wss",1.5,0.9,400};
				soundBegin[]= {"begin1",1};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_interior",
							1.4125376,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_trees",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_meadows",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_houses",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			dispersion=0.00493;
			reloadTime=0.050000001;
			recoil="A3FL_Glock17_Recoil";
			recoilProne="A3FL_Glock17_Recoil";
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
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
					"optic_MRD",
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
	class A3FL_Glock17_MRD: Pistol_Base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="A3FL_Glock17_MRD";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRD";
			};
		};
	};
	class A3FL_Glock17_Tan: A3FL_Glock17 {
		displayname="Glock 17 (Tan)";
		descriptionShort = "Glock 17 (Tan)";
		_generalMacro="A3FL_Glock17_Tan";
		baseWeapon="A3FL_Glock17_Tan";
		hiddenSelectionsTextures[] = {"A3FL_Weapons\Glock17\tex\glock17_tan_co.paa"};
	};
	class A3FL_Glock17_T: A3FL_Glock17 {
		displayname="Glock 17 Training";
		descriptionShort = "Glock 17 Training";
		_generalMacro="A3FL_Glock17_T";
		baseWeapon="A3FL_Glock17_T";
		magazines[] = {"A3FL_Glock17_T_Mag"};
		hiddenSelectionsTextures[] = {"A3FL_Weapons\Glock17\tex\glock17_t_co.paa"};
	};
};

class cfgRecoils
{
	A3FL_Glock17_Recoil[]={0,0.0070000002,0.050000001,0.0049999999,0.0070000002,0.050000001,0.090000004,0,-0.0099999998,0.1,0,0};
};