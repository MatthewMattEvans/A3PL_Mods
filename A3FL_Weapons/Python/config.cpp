class CfgPatches
{
	class A3FL_P227
	{
		units[] = {};
		weapons[] = {"A3FL_P227"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		magazines[] = {"A3FL_P227_Mag"};
		ammo[] = {"A3FL_P227_Ammo"};
	};
};

class PointerSlot;
class CfgWeapons
{
	class Pistol_Base_F;
	class hgun_Pistol_heavy_02_F: Pistol_Base_F {
		class WeaponSlotsInfo;
		class Single;
	};
	class A3FL_Python: hgun_Pistol_heavy_02_F
	{
		scope=2;
		baseWeapon = "A3FL_Python";
		author="A3FL Winston";
		_generalMacro="A3FL_Python";
		model = "\A3FL_Weapons\Python\A3FL_Python";
		picture	= "\A3FL_Weapons\Python\Python.paa";
		Icon = "\A3FL_Weapons\Python\Python.paa";
		displayname="Colt Python .357";
		descriptionShort = "Colt Python .357 Magnum";
		magazines[] = {"A3FL_Python_Mag"};
		magazineWell[]={};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=25;
			holsterScale=0.85000002;
			class CowsSlot {};
			class MuzzleSlot {};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
		};
	};
	class A3FL_PythonGold : A3FL_Python {
		baseWeapon = "A3FL_PythonGold";
		_generalMacro="A3FL_PythonGold";
		displayname="Golden Colt Python .357";
		descriptionShort = "Golden Colt Python .357 Magnum";
		hiddenSelections[]={"gold"};
		hiddenSelectionsTextures[]={"#(argb,8,8,3)color(1,0.843137,0,1.0,CO)"};
		hiddenSelectionsMaterials[]={"\A3FL_Weapons\Python\data\golden_python.rvmat"};
	};
};

class CfgMagazines
{
	class 6Rnd_45ACP_Cylinder;
	class A3FL_Python_Mag: 6Rnd_45ACP_Cylinder
	{
		scope= 2;
		displayName = "6Rnd .357 Magnum";
		author="A3FL Winston";
		ammo = "A3FL_Python_Ammo";
		count = 6;
		initSpeed = 320;
		mass = 6;
		descriptionShort="Caliber: .357 Magnum<br/>Rounds: 6<br/>Used in: Colt Python";
	};
};

class CfgAmmo
{
	class BulletBase;
	class A3FL_Python_Ammo: BulletBase
	{
		hit=12;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="cartridge_small";
		caliber=2.5999999;
		deflecting=45;
		visibleFire=5;
		audibleFire=9;
		cost=100;
		typicalSpeed=320;
		airFriction=-0.0018;
	};
};