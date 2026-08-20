class CfgPatches
{
	class A3FL_ACR
	{
		units[]={};
		weapons[]=
		{
			"A3FL_ACR",
			"A3FL_ACR_Pnk",
			"A3FL_ACR_Weeb"
		};
		requiredAddons[]=
		{
			"A3PL_Weapons2"
		};
		requiredVersion=0.1;
		magazines[]=
		{
			"A3FL_ACR_Mag"
		};
		ammo[]=
		{
			"A3FL_ACR_Ammo"
		};
	};
};
class CfgMagazines
{
	class 30Rnd_65x39_caseless_mag;
	class A3FL_ACR_Mag: 30Rnd_65x39_caseless_mag
	{
		picture="\A3FL_Weapons\ACR\ACR_Mag.paa";
		Icon="\A3FL_Weapons\ACR\ACR_Mag.paa";
		displayName="30Rnd 6.8mm ACR Mag";
		author="A3FL Winters";
		scope=2;
		type=16;
		ammo="A3FL_ACR_Ammo";
		count=30;
		initSpeed=280;
		mass=6;
		descriptionShort="Caliber: 6.8mm<br/>Rounds: 30<br/>Used in: Magpul ACR 6.8mm";
	};
};
class CfgAmmo
{
	class BulletBase;
	class A3FL_ACR_Ammo: BulletBase
	{
		hit=14;
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
class CfgWeapons
{
	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class A3FL_ACR: arifle_MX_Base_F
	{
		scope=2;
		initSpeed=800;
		author="Winston";
		_generalMacro="A3FL_ACR";
		model="\A3FL_Weapons\ACR\A3FL_ACR";
		displayName="Magpul ACR";
		descriptionShort="Magpul ACR";
		picture="\A3FL_Weapons\ACR\ACR.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Weapons\ACR\data\acr_co.paa",
			"A3FL_Weapons\ACR\data\acr_co.paa"
		};
		class Library
		{
			libTextDesc="ACR 6.8mm";
		};
		magazines[]=
		{
			"A3FL_ACR_Mag"
		};
		magazineWell[]={};
		reloadAction="GestureReloadMX";
		recoil="recoil_mx";
		maxZeroing=400;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				displayName="$STR_A3_PointerSlot0";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"optic_RMR_Tall",
					"optic_ACO_grn",
					"optic_ACO",
					"optic_Holosight_blk_F",
					
				};
				iconPosition[]={0.44999999,0.28};
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
		distanceZoomMin=400;
		distanceZoomMax=400;
		inertia=0.5;
		dexterity=1.5;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3FL_Weapons\M4\data\handle.rtm"
		};
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.79432821,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.79432821,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.79432821,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.79432821,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.79432821,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.79432821,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.79432821,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.79432821,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.79432821,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.79432821,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.79432821,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.79432821,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		changeFiremodeSound[]=
		{
			"\A3FL_Weapons\ACR\sounds\selector.wss",
			1.5,
			1,
			5
		};
		drySound[]=
		{
			"\A3FL_Weapons\ACR\sounds\dryfire.wss",
			1.5,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\A3FL_Weapons\ACR\sounds\reload.wss",
			2,
			1,
			10
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"fullauto_medium",
			"single_medium_optics1",
			"single_far_optics2"
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
					"\A3FL_Weapons\ACR\sounds\fire.wss",
					1.1,
					1.2,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",
							1.5848932,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.086000003;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00086999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"\A3FL_Weapons\ACR\sounds\fire.wss",
					1.1,
					1.2,
					800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",
							1,
							1,
							800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",
							1,
							1,
							800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",
							1.5848932,
							1,
							800
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",
							1,
							1,
							800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",
							1,
							1,
							800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.096000001;
			dispersion=0.00086999999;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
	};
	class A3FL_ACR_Pnk: A3FL_ACR
	{
		_generalMacro="A3FL_ACR_Pnk";
		displayName="Magpul ACR (Pink)";
		descriptionShort="Magpul ACR (Pink)";
		hiddenSelectionsTextures[]=
		{
			"A3FL_Weapons\ACR\data\acr_pnk_co.paa",
			"A3FL_Weapons\ACR\data\acr_co.paa"
		};
	};
	class A3FL_ACR_Weeb: A3FL_ACR
	{
		_generalMacro="A3FL_ACR_Pnk";
		displayName="Magpul ACR (Weeb)";
		descriptionShort="Magpul ACR (Weeb)";
		hiddenSelectionsTextures[]=
		{
			"A3FL_Weapons\ACR\data\acr_weeb_co.paa",
			"A3FL_Weapons\ACR\data\acr_weeb_co.paa"
		};
	};
};
