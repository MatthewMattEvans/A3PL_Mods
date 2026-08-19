class CfgPatches
{
	class A3FL_FNX45
	{
		units[]={};
		weapons[]=
		{
			"A3FL_FNX45"
		};
		magazines[]=
		{
			"A3FL_FNX45_Mag"
		};
		ammo[]=
		{
			"A3FL_FNX45_Ammo"
		};
		requiredAddons[]=
		{
			"A3PL_Common"
		};
		requiredVersion=6.6999998;
	};
};
class SlotInfo;
class CowsSlot;
class PointerSlot;
class BaseSoundModeType;
class Mode_SemiAuto{class BaseSoundModeType;};
class Mode_FullAuto;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class A3PL_RifleBase;
class A3PL_MeleeSingle;
class A3PL_Machinery_Mode;
class A3FL_PistolBase;
class MuzzleSlot;
class CfgMagazines
{
	class 16Rnd_9x21_Mag;
	class A3FL_FNX45_Mag: 16Rnd_9x21_Mag
	{
		picture	= "\A3FL_Weapons\FNX45\FNX45_Mag.paa"; 
		Icon = "\A3FL_Weapons\FNX45\FNX45_Mag.paa";
		displayName = "15Rnd .45 FNX Mag";
		author="Andrew Axel";
		scope= 2;
		type = 16;
		ammo = "A3FL_FNX45_Ammo";
		count = 15;
		initSpeed = 280;
		mass = 6;
		descriptionShort="Caliber: .45<br/>Rounds: 12<br/>Used in: FN FNX .45";
	};
};
class CfgAmmo
{
	class BulletBase;
	class A3FL_FNX45_Ammo: BulletBase
	{
		hit=10;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="cartridge_small";
		caliber=2.5999999;
		deflecting=45;
		visibleFire=5;
		audibleFire=9;
		cost=100;
		typicalSpeed=280;
		airFriction=-0.0018;
	};
};

class CfgWeapons
{
	class Pistol_Base_F;
	class hgun_Pistol_heavy_01_F: Pistol_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class A3FL_FNX45: hgun_Pistol_heavy_01_F
	{
		model = "\A3FL_Weapons\FNX45\A3FL_FNX45.p3d";
		picture	= "A3FL_Weapons\FNX45\FNX45.paa";
		Icon = "A3FL_Weapons\FNX45\FNX45.paa";
		displayname="FN FNX .45";
		descriptionShort = "FN FNX .45";
		_generalMacro="A3FL_FNX45";
		baseWeapon="A3FL_FNX45";
		author="Andrew Axel";
		scope=2;
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=320;
		recoil="recoil_pistol_acpc2";
		selectionFireAnim = "zasleh";
		magazines[] = {"A3FL_FNX45_Mag"};
		drySound[]={"A3\Sounds_F\weapons\pistol_heavy_02\dry",0.22387211,1,20};
		reloadMagazineSound[]={"\A3FL_Weapons\FNX45\sounds\reload",1,1,10};
		
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