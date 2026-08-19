class CfgPatches
{
	class A3FL_AK110
	{
		units[]= {};
		weapons[]= {"A3FL_AK110"};
		requiredAddons[]={"A3PL_Weapons2","A3PL_Cars"};
		requiredVersion=0.1;
		magazines[] = {"A3FL_AK110_Mag"};
		ammo[] = {"A3FL_AK110_Ammo"};
	};
};

class CfgMagazines
{
	class 30Rnd_65x39_caseless_mag;
	class A3FL_AK110_Mag: 30Rnd_65x39_caseless_mag
	{
		picture="A3FL_Weapons\AK110\AK110_Mag.paa";
		Icon = "A3FL_Weapons\AK110\AK110_Mag.paa";
		displayName = "30Rnd 7.62mm AK-110 Mag";
		author="Andrew Axel";
		scope= 2;
		type = 16;
		ammo = "A3FL_AK110_Ammo";
		count = 30;
		initSpeed = 280;
		mass = 6;
		descriptionShort="Caliber: 7.62mm<br/>Rounds: 30<br/>Used in: AK-110 7.62 mm";
	};
};

class CfgAmmo
{
	class BulletBase;
	class A3FL_AK110_Ammo: BulletBase
	{
		hit=10;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_65";
		caliber=2.5999999;
		deflecting=45;
		visibleFire=5;
		audibleFire=9;
		cost=100;
		typicalSpeed=280;
		airFriction=-0.0018;
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
	class Rifle_Base_F;
	class arifle_AKM_base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class A3FL_AK110: arifle_AKM_base_F
	{
		scope=2;
		initSpeed=800;
		author="Andrew Axel";
		_generalMacro="A3FL_AK110";
		model="A3FL_Weapons\AK110\A3FL_AK110";
		displayName="AK-110 7.62 mm";
		picture="A3FL_Weapons\AK110\AK110.paa";
		class Library
		{
			libTextDesc="AK 7.62mm";
		};
		reloadAction="GestureReloadAKM";
		magazineReloadSwitchPhase=0.47999999;
		descriptionShort="AK-110 7.62 mm";
		magazineWell[]={};
		maxZeroing=400;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR"}; 
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.30000001};
				iconPinpoint="Bottom";
				iconScale=0.2;
			};
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
	};
};