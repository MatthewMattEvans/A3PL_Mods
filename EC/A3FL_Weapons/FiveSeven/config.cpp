class CfgPatches
{
	class A3FL_FiveSeven
	{
		units[] = {};
		weapons[] = {"A3FL_FiveSeven"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		magazines[] = {"A3FL_FiveSeven_Mag"};
		ammo[] = {"A3FL_FiveSeven_Ammo"};
	};
};

class CfgMagazines
{
	class 16Rnd_9x21_Mag;
	class A3FL_FiveSeven_Mag: 16Rnd_9x21_Mag
	{
		picture	= "\A3FL_Weapons\P227\P227_Mag.paa"; 
		Icon = "\A3FL_Weapons\P227\P227_Mag.paa";
		displayName = "20Rnd 5.7×28mm Five Seven Mag";
		author="A3FL Winston";
		scope= 2;
		type = 16;
		ammo = "A3FL_FiveSeven_Ammo";
		count = 20;
		initSpeed = 280;
		mass = 6;
		descriptionShort="Caliber: 5.7×28mm<br/>Rounds: 20<br/>Used in: FN Five-Seven";
	};
};

class CfgAmmo
{
	class BulletBase;
	class A3FL_FiveSeven_Ammo: BulletBase
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
	class A3FL_FiveSeven: Pistol_Base_F
	{
		model = "\A3FL_Weapons\FiveSeven\A3FL_FiveSeven.p3d";
		picture	= "\A3FL_Weapons\FiveSeven\A3FL_FiveSeven.paa";
		Icon = "\A3FL_Weapons\FiveSeven\A3FL_FiveSeven.paa";
		displayname="FN Five-Seven (Tan)";
		descriptionShort = "FN Five-Seven (Tan)";
		_generalMacro="A3FL_FiveSeven";
		baseWeapon="A3FL_FiveSeven";
		author="Winston";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A3FL_Weapons\FiveSeven\tex\seven_co.paa"};
		scope=2;
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=320;
		recoil="recoil_pistol_p07";
		selectionFireAnim = "zasleh";
		magazines[] = {"A3FL_FiveSeven_Mag"};
	
		class Library
		{
			libTextDesc = "";
		};

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
				begin1[]={"\A3FL_Weapons\FiveSeven\sounds\fire.wss",1.5,0.9,400};
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
			dispersion=0.006;
			reloadTime=0.050000001;
			recoil="A3FL_FiveSeven_Recoil";
			recoilProne="A3FL_FiveSeven_Recoil";
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
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
	class A3FL_FiveSeven_Black: A3FL_FiveSeven
	{
		_generalMacro="A3FL_FiveSeven_Black";
		baseWeapon="A3FL_FiveSeven_Black";
		displayName = "FN Five-Seven (Black)";
		descriptionShort = "FN Five-Seven (Black)";
		hiddenSelectionsTextures[] = {"A3FL_Weapons\FiveSeven\tex\seven_blk_co.paa"};
		picture	= "\A3FL_Weapons\FiveSeven\A3FL_FiveSeven_Blk.paa";
		Icon = "\A3FL_Weapons\FiveSeven\A3FL_FiveSeven_Blk.paa";
	};
	class A3FL_FiveSeven_Pink: A3FL_FiveSeven
	{
		_generalMacro="A3FL_FiveSeven_Pink";
		baseWeapon="A3FL_FiveSeven_Pink";
		displayName = "FN Five-Seven (Pink)";
		descriptionShort = "FN Five-Seven (Pink)";
		hiddenSelectionsTextures[] = {"A3FL_Weapons\FiveSeven\tex\seven_pnk_co.paa"};
		picture	= "\A3FL_Weapons\FiveSeven\A3FL_FiveSeven_Blk.paa";
		Icon = "\A3FL_Weapons\FiveSeven\A3FL_FiveSeven_Blk.paa";
	};
};

class cfgRecoils
{
	A3FL_FiveSeven_Recoil[]={0,0.0070000002,0.050000001,0.0049999999,0.0070000002,0.050000001,0.090000004,0,-0.0099999998,0.1,0,0};
};