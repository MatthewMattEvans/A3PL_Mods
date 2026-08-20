class CfgPatches
{
	class A3PL_P226
	{
		units[] = {};
		weapons[] = {"A3PL_P226"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		magazines[] = {"A3PL_P226_Mag"};
		ammo[] = {"A3PL_P226_Ammo"};
	};
};

class CfgMagazines
{
	class 16Rnd_9x21_Mag;
	class A3PL_P226_Mag: 16Rnd_9x21_Mag
	{
		picture	= "\A3PL_Weapons2\P226\P226_Mag.paa"; 
		Icon = "\A3PL_Weapons2\P226\P226_Mag.paa";
		displayName = "15Rnd 9x19mm P226 Mag";
		author="A3FL Winston";
		scope= 2;
		type = 256;
		ammo = "A3PL_P226_Ammo";
		count = 15;
		initSpeed = 360;
		mass = 4;
		descriptionShort="Caliber: 9x19mm<br/>Rounds: 15<br/>Used in: SIG P226";
	};
};

class CfgAmmo
{
	class B_9x21_Ball;
	class A3PL_P226_Ammo: B_9x21_Ball
	{
		hit = 5;
		indirectHit = 0;
		indirectHitRange = 0;
		deflecting = 20;
		initSpeed = 360;
		airFriction = -0.0016;
	};
};

class Mode_SemiAuto;
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
	class A3PL_P226: Pistol_Base_F
	{
		model = "\A3PL_Weapons2\P226\A3PL_P226.p3d";
		picture	= "\A3PL_Weapons2\P226\P226.paa";
		Icon = "\A3PL_Weapons2\P226\P226.paa";
		displayname="SIG P226";
		descriptionShort = "SIG P226 9x19mm";
		_generalMacro="A3PL_P226";
		baseWeapon="A3PL_P226";
		author="A3FL Winston";
		scope=2;
		inertia = 0.15;
		dexterity = 1.8;
		recoil = "recoil_pistol_rook40";
		selectionFireAnim = "zasleh";
		magazines[] = {"A3PL_P226_Mag"};
		drySound[]={"\A3PL_Weapons2\P226\sounds\dry",0.22387211,1,20};
		reloadMagazineSound[]={"\A3PL_Weapons2\P226\sounds\reload",1,1,10};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[]={"StandardSound"};
			class StandardSound
			{
				begin1[]={"\A3PL_Weapons2\P226\sounds\fire",0.7,1.65,400};
				soundBegin[]={"begin1",1};
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
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.1;
			dispersion = 0.00493;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=10;
			class CowsSlot{};
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