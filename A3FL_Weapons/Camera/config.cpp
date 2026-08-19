class CfgPatches
{
	class A3FL_Camera
	{
		units[] = {};
		weapons[] = {"A3FL_Camera"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		magazines[] = {};
		ammo[] = {};
	};
};

class Mode_SemiAuto;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class A3FL_Camera: Pistol_Base_F
	{
		model = "\A3FL_Weapons\Camera\A3FL_Camera.p3d";
		picture	= "\A3FL_Weapons\Camera\Camera.paa";
		Icon = "\A3FL_Weapons\Camera\Camera.paa";
		displayname="4k Hand Camera";
		descriptionShort = "Glock 17";
		_generalMacro="A3FL_Camera";
		baseWeapon="A3FL_Camera";
		author="A3FL Winston";
		scope=2;
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=320;
		recoil="";
		selectionFireAnim = "";
		magazines[] = {};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[]= {};
			class BaseSoundModeType {
				weaponSoundEffect="DefaultHandgun";
				soundClosure[]={};
			};
			dispersion=0.011;
			reloadTime=0.050000001;
			recoil="";
			recoilProne="";
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
			class CowsSlot {};
			class PointerSlot {};
			class MuzzleSlot {};
		};
	};
};