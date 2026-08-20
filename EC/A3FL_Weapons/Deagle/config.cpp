class CfgPatches
{
	class A3FL_DesertEagle
	{
		units[]={};
		weapons[]=
		{
			"A3FL_DesertEagle",
			"A3FL_DesertEagleGold"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		magazines[]=
		{
			"A3FL_DesertEagle_Mag"
		};
		ammo[]=
		{
			"A3FL_DesertEagle_Ammo"
		};
	};
};
class CfgMagazines
{
	class 16Rnd_9x21_Mag;
	class A3FL_DesertEagle_Mag: 16Rnd_9x21_Mag
	{
		icon="\A3FL_Weapons\Deagle\mag.paa";
		displayName="7Rnd .50 Mag";
		author="A3FL Winston";
		scope=2;
		type=256;
		ammo="A3FL_DesertEagle_Ammo";
		count=7;
		initSpeed=240;
		mass=8;
		descriptionShort="Caliber: .50<br/>Rounds: 7<br/>Used in: Desert Eagle";
	};
};
class CfgAmmo
{
	class Default;
	class BulletCore;
	class BulletBase;
	class A3FL_DesertEagle_Ammo: BulletBase
	{
		hit=20;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_65_caseless";
		visibleFire=9;
		audibleFire=12;
		visibleFireTime=3;
		cost=50;
		caliber=3;
		deflecting=30;
		typicalSpeed=470;
		airFriction=-0.0016;
	};
};
class cfgRecoils
{
	A3FL_DesertEagle[]={0,0,0,0.5,0,0.079999998,0.40000001,0,0};
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
	class A3FL_DesertEagle: Pistol_Base_F
	{
		model="\A3FL_Weapons\Deagle\A3FL_DesertEagle.p3d";
		picture="\A3FL_Weapons\Deagle\Deagle.paa";
		Icon="\A3FL_Weapons\Deagle\Deagle.paa";
		displayname="Desert Eagle";
		descriptionShort="Desert Eagle .50";
		_generalMacro="A3FL_DesertEagle";
		baseWeapon="A3FL_DesertEagle";
		author="A3FL Winston";
		scope=2;
		inertia=0.30000001;
		initSpeed=380;
		dexterity=1;
		selectionFireAnim="zasleh";
		magazines[]=
		{
			"A3FL_DesertEagle_Mag"
		};
		recoil="recoil_pistol_zubr";
		class Library
		{
			libTextDesc="";
		};
		drySound[]=
		{
			"A3\Sounds_F\weapons\pistol_heavy_02\dry",
			0.69999999,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\A3FL_Weapons\Deagle\sounds\reload",
			1,
			1,
			10
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"\A3FL_Weapons\Deagle\sounds\fire",
					1,
					1,
					400
				};
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_interior",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_forest",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_houses",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			recoil="A3FL_DesertEagle";
			recoilProne="A3FL_DesertEagle";
			reloadTime=0.2;
			dispersion=0.0085000005;
			minRange=2;
			minRangeProbab=0.1;
			midRange=30;
			midRangeProbab=0.80000001;
			maxRange=50;
			maxRangeProbab=0.039999999;
			distanceZoomMin=56;
			distanceZoomMax=56;
			aiRateOfFire=2.9000001;
			aiRateOfFireDistance=50;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=35;
			class CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight_pistol"
				};
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
	class A3FL_DesertEagleGold: A3FL_DesertEagle
	{
		_generalMacro="A3FL_DesertEagleGold";
		displayname="Golden Desert Eagle";
		descriptionShort="Golden Desert Eagle .50";
		baseWeapon="A3FL_DesertEagleGold";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(1,0.843137,0,1.0,CO)"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3FL_Weapons\Deagle\data\golden_deagle.rvmat"
		};
	};
};
