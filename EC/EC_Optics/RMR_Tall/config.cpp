class CfgPatches
{
	class EC_Optics_RMR_Tall
	{
		addonRootClass="EC_Optics";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Items"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"optic_RMR_Tall",
			"Zasleh2"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class Zasleh2: ItemCore
	{
		scope=2;
		model="A3\weapons_f\data\zaslehsdl_proxy.p3d";
	};
	class muzzle_snds_H: ItemCore
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="muzzle_snds_H";
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=2;
		displayName="$STR_A3_cfgWeapons_muzzle_snds_H0";
		picture="\a3\Weapons_F\acc\Data\UI\icon_muzzle_snds_H_ca.paa";
		model="\A3\weapons_f\acc\acca_snds_h_F";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=10;
			class MagazineCoef
			{
				initSpeed=1.05;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.30000001;
				audibleFire=0.039999999;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
			};
			soundTypeIndex=1;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef=0.80000001;
				artilleryDispersionCoef=1;
				fireLightCoef=0.1;
				recoilCoef=1;
				recoilProneCoef=1;
				minRangeCoef=1;
				minRangeProbabCoef=1;
				midRangeCoef=1;
				midRangeProbabCoef=1;
				maxRangeCoef=1;
				maxRangeProbabCoef=1;
			};
		};
		inertia=0.2;
	};
	class muzzle_snds_L: muzzle_snds_H
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="muzzle_snds_L";
		displayName="$STR_A3_cfgWeapons_muzzle_snds_L0";
		picture="\a3\Weapons_F\acc\Data\UI\icon_muzzle_snds_L_ca.paa";
		model="\A3\weapons_f\acc\acca_snds_l_F";
		class ItemInfo: ItemInfo
		{
			mass=6;
			class MagazineCoef
			{
				initSpeed=1.05;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.30000001;
				audibleFire=0.029999999;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
			};
			soundTypeIndex=1;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef=0.80000001;
				artilleryDispersionCoef=1;
				fireLightCoef=0.1;
				recoilCoef=1;
				recoilProneCoef=1;
				minRangeCoef=1;
				minRangeProbabCoef=1;
				midRangeCoef=1;
				midRangeProbabCoef=1;
				maxRangeCoef=1;
				maxRangeProbabCoef=1;
			};
		};
		inertia=0.1;
	};
	class muzzle_snds_M: muzzle_snds_H
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="muzzle_snds_M";
		displayName="$STR_A3_cfgWeapons_muzzle_snds_M0";
		model="\A3\Weapons_F\Acc\acca_snds_lmg_blk_F.p3d";
		picture="\a3\Weapons_F\acc\Data\UI\icon_muzzle_snds_M_ca.paa";
		class ItemInfo: ItemInfo
		{
			mass=8;
			class MagazineCoef
			{
				initSpeed=1.05;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.30000001;
				audibleFire=0.039999999;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
			};
			soundTypeIndex=1;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef=0.80000001;
				artilleryDispersionCoef=1;
				fireLightCoef=0.1;
				recoilCoef=1;
				recoilProneCoef=1;
				minRangeCoef=1;
				minRangeProbabCoef=1;
				midRangeCoef=1;
				midRangeProbabCoef=1;
				maxRangeCoef=1;
				maxRangeProbabCoef=1;
			};
		};
		inertia=0.1;
	};
	class muzzle_snds_B: muzzle_snds_H
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="muzzle_snds_B";
		displayName="$STR_A3_cfgWeapons_muzzle_snds_B0";
		picture="\a3\Weapons_F\acc\Data\UI\icon_muzzle_snds_B_ca.paa";
		model="\A3\weapons_f\acc\acca_snds_h_F";
		class ItemInfo: ItemInfo
		{
			mass=12;
			class MagazineCoef
			{
				initSpeed=1.05;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.30000001;
				audibleFire=0.039999999;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
			};
			soundTypeIndex=1;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef=0.80000001;
				artilleryDispersionCoef=1;
				fireLightCoef=0.1;
				recoilCoef=1;
				recoilProneCoef=1;
				minRangeCoef=1;
				minRangeProbabCoef=1;
				midRangeCoef=1;
				midRangeProbabCoef=1;
				maxRangeCoef=1;
				maxRangeProbabCoef=1;
			};
		};
		inertia=0.2;
	};
	class muzzle_snds_H_MG: muzzle_snds_H
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="muzzle_snds_H_MG";
		scope=1;
		displayName="$STR_A3_cfgWeapons_muzzle_snds_H_MG0";
		picture="\a3\Weapons_F\acc\Data\UI\icon_muzzle_snds_H_MG_ca.paa";
		model="\A3\Weapons_F\Machineguns\M200\lmg_suppressor";
		class ItemInfo: ItemInfo
		{
			mass=10;
			class MagazineCoef
			{
				initSpeed=1.05;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.30000001;
				audibleFire=0.039999999;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
			};
			soundTypeIndex=1;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef=0.80000001;
				artilleryDispersionCoef=1;
				fireLightCoef=0.1;
				recoilCoef=1;
				recoilProneCoef=1;
				minRangeCoef=1;
				minRangeProbabCoef=1;
				midRangeCoef=1;
				midRangeProbabCoef=1;
				maxRangeCoef=1;
				maxRangeProbabCoef=1;
			};
		};
		inertia=0.2;
	};
	class muzzle_snds_H_SW: muzzle_snds_H_MG
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="muzzle_snds_H_SW";
		scope=1;
		class ItemInfo: ItemInfo
		{
			mass=10;
			class MagazineCoef
			{
				initSpeed=1.05;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.30000001;
				audibleFire=0.039999999;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
			};
			soundTypeIndex=1;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef=0.80000001;
				artilleryDispersionCoef=1;
				fireLightCoef=0.1;
				recoilCoef=1;
				recoilProneCoef=1;
				minRangeCoef=1;
				minRangeProbabCoef=1;
				midRangeCoef=1;
				midRangeProbabCoef=1;
				maxRangeCoef=1;
				maxRangeProbabCoef=1;
			};
		};
		inertia=0.2;
	};
	class muzzle_snds_acp: muzzle_snds_H
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="muzzle_snds_acp";
		displayName="$STR_A3_cfgWeapons_muzzle_snds_acp0";
		picture="\A3\weapons_F\Data\UI\gear_acca_snds_l_CA.paa";
		model="\A3\weapons_f\acc\acca_snds_l_F";
		class ItemInfo: ItemInfo
		{
			mass=6;
			class MagazineCoef
			{
				initSpeed=1.05;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.30000001;
				audibleFire=0.039999999;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
			};
			soundTypeIndex=1;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef=0.80000001;
				artilleryDispersionCoef=1;
				fireLightCoef=0.1;
				recoilCoef=1;
				recoilProneCoef=1;
				minRangeCoef=1;
				minRangeProbabCoef=1;
				midRangeCoef=1;
				midRangeProbabCoef=1;
				maxRangeCoef=1;
				maxRangeProbabCoef=1;
			};
		};
		inertia=0.1;
	};
	class optic_RMR_Tall: ItemCore
	{
		author="Davis Abrams";
		_generalMacro="optic_RMR_Tall";
		scope=2;
		displayName="Trijicon RMR";
		picture="\EC_Optics\RMR_Tall\Data\ui\trijrmr.paa";
		model="EC_Optics\RMR_Tall\Trij_RMR_tall.p3d";
		descriptionShort="Pistol Red Dot";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=2;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=50;
					distanceZoomMax=50;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"Default"
					};
				};
			};
		};
		inertia=0;
	};
};
class RCWSOptics
{
	initAngleX=0;
	minAngleX=-30;
	maxAngleX=30;
	initAngleY=0;
	minAngleY=-100;
	maxAngleY=100;
	initFov=0.4375;
	minFov=0.034820002;
	maxFov=0.4375;
	visionMode[]=
	{
		"Normal",
		"NVG",
		"Ti"
	};
	thermalMode[]={0,1};
	minMoveX=0;
	maxMoveX=0;
	minMoveY=0;
	maxMoveY=0;
	minMoveZ=0;
	maxMoveZ=0;
};
