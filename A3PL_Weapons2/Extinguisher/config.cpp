class CfgPatches
{
	class A3PL_Extinguisher
	{
		units[]={};
		weapons[]=
		{
			"A3PL_FireExtinguisher"
		};
		magazines[]=
		{
			"A3PL_Extinguisher_Water_Mag"
		};
		ammo[]=
		{
			"A3PL_Extinguisher_Water_Ball"
		};
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3PL_FD",
			"A3PL_Weapons"
		};
		requiredVersion=0.1;
	};
};
class SlotInfo;
class CowsSlot;
class PointerSlot;
class Mode_SemiAuto
{
	class BaseSoundModeType;
};
class Mode_FullAuto;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;

class CfgWeapons {
	class A3PL_PistolBase;
	class A3PL_High_Pressure: A3PL_PistolBase {};
	class A3PL_FireExtinguisher: A3PL_High_Pressure
	{
		scope=2;
		author="Winston - A3PL France";
		model="\A3PL_Weapons2\Extinguisher\A3PL_FireExtinguisher.p3d";
		displayname="Extincteur";
		magazines[]=
		{
			"A3PL_Extinguisher_Water_Mag"
		};
		class Library
		{
			libTextDesc="used to extinguish fires obviously";
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3PL_Weapons2\Extinguisher\anim\FireExtHold.rtm"
		};
		class Single: Mode_FullAuto
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=5;
			reloadTime=0.17;
			dispersion=0;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=2.5;
			midRangeProbab=0.69999999;
			maxRange=5;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
			inertia=0.2;
			dexterity=1.8;
			recoil="recoil_empty";
			maxZeroing=3;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"",
					0.12589253,
					1,
					30
				};
				closure2[]=
				{
					"",
					0.12589253,
					1,
					30
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"",
					1,
					1,
					600
				};
				begin2[]=
				{
					"",
					1,
					1,
					600
				};
				begin3[]=
				{
					"",
					1,
					1,
					600
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"",
							1,
							1,
							600
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"",
					1,
					1,
					600
				};
				begin2[]=
				{
					"",
					1,
					1,
					600
				};
				begin3[]=
				{
					"",
					1,
					1,
					600
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"",
							1,
							1,
							600
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
		};
	};
};

class CfgMagazines
{
	class A3PL_Magazine_Base;
	class A3PL_Extinguisher_Water_Mag: A3PL_Magazine_Base
	{
		displayName="Extinguisher Water";
		descriptionShort="Very Low Pressure";
		count=150;
		lastRoundsTracer=0;
		tracersEvery=0;
		timeToLive=20;
		initSpeed=15;
		ammo="A3PL_Extinguisher_Water_Ball";
	};
};
class CfgAmmo
{
	class A3PL_High_Pressure_Water_Ball;
	class A3PL_Extinguisher_Water_Ball: A3PL_High_Pressure_Water_Ball
	{
		displayName="Extinguisher Water";
		typicalSpeed=10;
		airFriction=-0.02;
		hit=3;
	};
};