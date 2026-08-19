class CfgPatches
{
	class A3FL_M4
	{
		units[]= {};
		weapons[]= {"A3FL_M4"};
		requiredAddons[]={"A3PL_Weapons2","A3PL_Cars"};
		requiredVersion=0.1;
		magazines[]= {};
		ammo[]=	{};
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class CfgWeapons {
	class Rifle_Base_F;
	class arifle_SPAR_01_base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class A3FL_M4: arifle_SPAR_01_base_F
	{
		scope=2;
		initSpeed=800;
		author="A3FL Winston";
		_generalMacro="A3FL_M4";
		model="\A3FL_Weapons\M4\A3FL_M4";
		displayName="Colt M4A1";
		picture="\A3FL_Weapons\M4\M4.paa";
		descriptionShort="Colt M4A1 5.56x45mm";
		magazines[]= {"A3PL_M16_Mag","A3PL_M16_T_Mag"};
		magazineWell[]={};
		reloadAction="GestureReloadSPAR_01";
		recoil="recoil_spar";
		maxZeroing=400;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR"};
				iconPosition[]={0.34999999,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"optic_CompM5","optic_RMR_Tall","optic_Holosight_blk_F","optic_MRCO"};
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_snds_m",
					"muzzle_snds_m_khk_F",
					"muzzle_snds_m_snd_F"
				};
				iconPosition[]={0,0.40000001};
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
		distanceZoomMin=300;
		distanceZoomMax=300;
		inertia=0.5;
		dexterity=1.5;
		handAnim[]= {"OFP2_ManSkeleton","\A3FL_Weapons\M4\data\handle.rtm"};
		changeFiremodeSound[]= {"\A3FL_Weapons\M4\sounds\selector.wss",1.5,1,5};
		drySound[]= {"\A3FL_Weapons\M4\sounds\dryfire.wss",1.5,1,20};
		reloadMagazineSound[]= {"\A3FL_Weapons\M4\sounds\reload.wss",2,1,10};

		class Single: Mode_SemiAuto
		{
			sounds[]= {"StandardSound","SilencedSound"};
			class StandardSound
			{
				begin1[]={"\A3FL_Weapons\M4\sounds\fire.wss",2.5,1.2,1200};
				soundBegin[]={"begin1",1};
				class SoundTails
				{
					class TailTrees
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",1.5848932,1,1200};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound {
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
			};
			reloadTime=0.07;
			dispersion=0.00073000003;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=5;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]= {"StandardSound","SilencedSound"};
			class StandardSound
			{
				begin1[]={"\A3FL_Weapons\M4\sounds\fire.wss",2.5,1.2,1200};
				soundBegin[]={"begin1",1};
				class SoundTails
				{
					class TailTrees
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",1.5848932,1,1200};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",1,1,1200};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound {
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
			};
			reloadTime=0.07;
			dispersion=0.00073000003;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
		};
	};
};