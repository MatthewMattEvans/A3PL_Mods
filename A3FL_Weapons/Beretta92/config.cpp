class CfgPatches
{
	class A3PL_Beretta92
	{
		units[] = {};
		weapons[] = {"A3FL_Beretta92"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		magazines[] = {"A3FL_Beretta92_Mag"};
		ammo[] = {};
	};
};

class CfgMagazines
{
	class 16Rnd_9x21_Mag;
	class A3FL_Beretta92_Mag: 16Rnd_9x21_Mag
	{
		icon = "\A3PL_Weapons2\P226\P226_Mag.paa"; 
		displayName = "15Rnd 9x19mm Beretta Mag";
		author="A3FL Winston";
		scope= 2;
		type = 256;
		ammo = "A3PL_P226_Ammo";
		count = 15;
		initSpeed = 360;
		mass = 4;
		descriptionShort="Caliber: 9x19mm<br/>Rounds: 15<br/>Used in: Beretta 92";
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
	class A3FL_Beretta92: Pistol_Base_F
	{
		model = "\A3FL_Weapons\Beretta92\A3FL_Beretta92.p3d";
		picture	= "\A3FL_Weapons\Beretta92\Beretta92.paa";
		Icon = "\A3FL_Weapons\Beretta92\Beretta92.paa";
		displayname="Beretta 92";
		descriptionShort = "Beretta 92 9x19mm";
		_generalMacro="A3PL_Beretta92";
		baseWeapon="A3PL_Beretta92";
		author="A3FL Winston";
		scope=2;
		inertia = 0.15;
		dexterity = 1.8;
		recoil = "recoil_pistol_rook40";
		selectionFireAnim = "zasleh";
		magazines[] = {"A3FL_Beretta92_Mag"};
	
		class Library
		{
			libTextDesc = "";
		};

		drySound[]={"\A3FL_Weapons\Beretta92\sounds\dry",0.22387211,1,20};
		reloadMagazineSound[]={"\A3FL_Weapons\Beretta92\sounds\reload",1,1,10};
		
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[]={"StandardSound"};
			class BaseSoundModeType
			{
				closure1[]={"\A3FL_Weapons\Beretta92\sounds\cock",0.15848932,1,10};
				closure2[]={"\A3FL_Weapons\Beretta92\sounds\cock",0.15848932,1.1,10};
				soundClosure[]={"closure1",0.5,"closure2",0.5};
			};
			
			class StandardSound: BaseSoundModeType
			{
				begin1[]={"\A3FL_Weapons\Beretta92\sounds\fire",1.3,1.1,400};
				soundBegin[]={"begin1",1};
				class SoundTails
				{
					class TailInterior
					{
						sound[]={"\A3FL_Weapons\Beretta92\sounds\interior",1.4125376,1,400};
						frequency=1;
						volume="interior";
					};					
					class TailTrees
					{
						sound[]={"\A3FL_Weapons\Beretta92\sounds\woods",1,1,400};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]={"\A3FL_Weapons\Beretta92\sounds\woods",1,1,400};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]={"\A3FL_Weapons\Beretta92\sounds\woods",1,1,400};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]={"\A3FL_Weapons\Beretta92\sounds\interior",1,1,400};
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