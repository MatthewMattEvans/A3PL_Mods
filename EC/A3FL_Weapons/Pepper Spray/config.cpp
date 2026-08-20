class CfgPatches
{
	class A3FL_PepperSpray
	{
		author="Anton Peters & Henry Indelicato";
		url="https://arma3fisherslife.net";
		units[]={};
		weapons[]={"A3FL_PepperSpray"};
		magazines[]={"A3FL_PepperSpray_Mag"};
		ammo[]={"A3FL_PepperSpray_Ball"};
		requiredAddons[]={"A3_Data_F","A3PL_FD","A3PL_Weapons"};
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
	class A3FL_PepperSpray: A3PL_High_Pressure
	{
		scope=2;
		author="Anton Peters";
		model="\A3FL_Weapons\Pepper Spray\A3FL_PepperSpray.p3d";
		displayname="Pepper Spray";
		magazines[]={"A3FL_PepperSpray_Mag"};
		class Library{libTextDesc="Pepper Spray";};
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
			maxRange=3;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
			inertia=0.2;
			dexterity=1.8;
			recoil="recoil_empty";
			maxZeroing=3;
			sounds[]={"StandardSound"};
			class BaseSoundModeType
			{
				closure1[]={"",0.12589253,1,30};
				closure2[]={"",0.12589253,1,30};
				soundClosure[]={"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]={"",1,1,600};
				begin2[]={"",1,1,600};
				begin3[]={"",1,1,600};
				soundBegin[]={"begin1",0.33000001,"begin2",0.33000001,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[]={"",1,1,600};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]={"",1,1,600};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]={"",1,1,600};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]={"",1,1,600};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]={"",1,1,600};
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
	class A3FL_PepperSpray_Mag: A3PL_Magazine_Base
	{
		displayName="Pepper Spray Refil";
		descriptionShort="Pepper Spray Refil";
		count=50;
		lastRoundsTracer=0;
		tracersEvery=0;
		timeToLive=4;
		initSpeed=5;
		ammo="A3FL_PepperSpray_Ball";
	};
};
class CfgAmmo
{
	class A3FL_Melee;
	class A3FL_Medium_Pressure_Water_Ball: A3FL_Melee
	{
		hit=3;
		indirectHit=0.5;
		indirectHitRange=0.5;
		dangerRadiusBulletClose=0;
		dangerRadiusHit=0;
		suppressionRadiusBulletClose=0;
		suppressionRadiusHit=0;
		displayName="Medium Pressure Water";
		caliber=0.2;
		deflecting=0;
		audibleFire=45;
		cost=100;
		cartridge = "EmptyEffect";
		typicalSpeed=20;
		airFriction=-0.04;
		tracerScale=0;
		tracerStartTime=0;
		tracerEndTime=0;
		muzzleEffect="EmptyEffect";
		effectFly="A3PL_Medium_Pressure_Water";
		explosionEffects = "EmptyEffect";
		craterEffects = "EmptyEffect";
		craterWaterEffects = "EmptyEffect";
		effectsMissile = "EmptyEffect";
		effectsMissileInit = "EmptyEffect";
		effectsSmoke = "EmptyEffect";
		effectsFire = "EmptyEffect";
		effectFlare = "EmptyEffect";
		mineJumpEffects = "EmptyEffect";
		explosionSoundEffect = "EmptyEffect";
		class HitEffects
		{
			Hit_Foliage_green="EmptyEffect";
			Hit_Foliage_Dead="EmptyEffect";
			Hit_Foliage_Green_big="EmptyEffect";
			Hit_Foliage_Palm="EmptyEffect";
			Hit_Foliage_Pine="EmptyEffect";
			hitFoliage="EmptyEffect";
			hitGlass="EmptyEffect";
			hitGlassArmored="EmptyEffect";
			hitWood="EmptyEffect";
			hitMetal="EmptyEffect";
			hitMetalPlate="EmptyEffect";
			hitBuilding="EmptyEffect";
			hitPlastic="EmptyEffect";
			hitRubber="EmptyEffect";
			hitTyre="EmptyEffect";
			hitConcrete="EmptyEffect";
			hitMan="EmptyEffect";
			hitGroundSoft="EmptyEffect";
			hitGroundRed="EmptyEffect";
			hitGroundHard="EmptyEffect";
			hitWater="EmptyEffect";
			hitVirtual="EmptyEffect";
		};
		soundImpactDefault1[]={"",1,1,500};
		soundDefault1[]={"",1,1,500};
		soundDefault2[]={"",1,1,500};
		soundDefault3[]={"",1,1,500};
		soundDefault4[]={"",1,1,500};
		soundDefault5[]={"",1,1,500};
		soundDefault6[]={"",1,1,500};
		soundDefault7[]={"",1,1,500};
		soundDefault8[]={"",1,1,500};
		soundGroundSoft1[]={"",1,1,500};
		soundGroundSoft2[]={"",1,1,500};
		soundGroundSoft3[]={"",1,1,500};
		soundGroundSoft4[]={"",1,1,500};
		soundGroundSoft5[]={"",1,1,500};
		soundGroundSoft6[]={"",1,1,500};
		soundGroundSoft7[]={"",1,1,500};
		soundGroundSoft8[]={"",1,1,500};
		soundGroundHard1[]={"",1,1,500};
		soundGroundHard2[]={"",1,1,500};
		soundGroundHard3[]={"",1,1,500};
		soundGroundHard4[]={"",1,1,500};
		soundGroundHard5[]={"",1,1,500};
		soundGroundHard6[]={"",1,1,500};
		soundGroundHard7[]={"",1,1,500};
		soundGroundHard8[]={"",1,1,500};
		soundGlass1[]={"",1,1,500};
		soundGlass2[]={"",1,1,500};
		soundGlass3[]={"",1,1,500};
		soundGlass4[]={"",1,1,500};
		soundGlass5[]={"",1,1,500};
		soundGlass6[]={"",1,1,500};
		soundGlass7[]={"",1,1,500};
		soundGlass8[]={"",1,1,500};
		soundGlassArmored1[]={"",1,1,500};
		soundGlassArmored2[]={"",1,1,500};
		soundGlassArmored3[]={"",1,1,500};
		soundGlassArmored4[]={"",1,1,500};
		soundGlassArmored5[]={"",1,1,500};
		soundGlassArmored6[]={"",1,1,500};
		soundGlassArmored7[]={"",1,1,500};
		soundGlassArmored8[]={"",1,1,500};
		soundMetal1[]={"",1,1,500};
		soundMetal2[]={"",1,1,500};
		soundMetal3[]={"",1,1,500};
		soundMetal4[]={"",1,1,500};
		soundMetal5[]={"",1,1,500};
		soundMetal6[]={"",1,1,500};
		soundMetal7[]={"",1,1,500};
		soundMetal8[]={"",1,1,500};
		soundVehiclePlate1[]={"",1,1,500};
		soundVehiclePlate2[]={"",1,1,500};
		soundVehiclePlate3[]={"",1,1,500};
		soundVehiclePlate4[]={"",1,1,500};
		soundVehiclePlate5[]={"",1,1,500};
		soundVehiclePlate6[]={"",1,1,500};
		soundVehiclePlate7[]={"",1,1,500};
		soundVehiclePlate8[]={"",1,1,500};
		soundWood1[]={"",1,1,500};
		soundWood2[]={"",1,1,500};
		soundWood3[]={"",1,1,500};
		soundWood4[]={"",1,1,500};
		soundWood5[]={"",1,1,500};
		soundWood6[]={"",1,1,500};
		soundWood7[]={"",1,1,500};
		soundWood8[]={"",1,1,500};
		soundHitBody1[]={"",1,1,500};
		soundHitBody2[]={"",1,1,500};
		soundHitBody3[]={"",1,1,500};
		soundHitBody4[]={"",1,1,500};
		soundHitBody5[]={"",1,1,500};
		soundHitBody6[]={"",1,1,500};
		soundHitBody7[]={"",1,1,500};
		soundHitBody8[]={"",1,1,500};
		soundHitBuilding1[]={"",1,1,500};
		soundHitBuilding2[]={"",1,1,500};
		soundHitBuilding3[]={"",1,1,500};
		soundHitBuilding4[]={"",1,1,500};
		soundHitBuilding5[]={"",1,1,500};
		soundHitBuilding6[]={"",1,1,500};
		soundHitBuilding7[]={"",1,1,500};
		soundHitBuilding8[]={"",1,1,500};
		soundHitFoliage1[]={"",1,1,500};
		soundHitFoliage2[]={"",1,1,500};
		soundHitFoliage3[]={"",1,1,500};
		soundHitFoliage4[]={"",1,1,500};
		soundHitFoliage5[]={"",1,1,500};
		soundHitFoliage6[]={"",1,1,500};
		soundHitFoliage7[]={"",1,1,500};
		soundHitFoliage8[]={"",1,1,500};
		soundPlastic1[]={"",1,1,500};
		soundPlastic2[]={"",1,1,500};
		soundPlastic3[]={"",1,1,500};
		soundPlastic4[]={"",1,1,500};
		soundPlastic5[]={"",1,1,500};
		soundPlastic6[]={"",1,1,500};
		soundPlastic7[]={"",1,1,500};
		soundPlastic8[]={"",1,1,500};
		soundConcrete1[]={"",1,1,500};
		soundConcrete2[]={"",1,1,500};
		soundConcrete3[]={"",1,1,500};
		soundConcrete4[]={"",1,1,500};
		soundConcrete5[]={"",1,1,500};
		soundConcrete6[]={"",1,1,500};
		soundConcrete7[]={"",1,1,500};
		soundConcrete8[]={"",1,1,500};
		soundTyre1[]={"",1,1,500};
		soundTyre2[]={"",1,1,500};
		soundTyre3[]={"",1,1,500};
		soundTyre4[]={"",1,1,500};
		soundTyre5[]={"",1,1,500};
		soundTyre6[]={"",1,1,500};
		soundTyre7[]={"",1,1,500};
		soundTyre8[]={"",1,1,500};
		soundRubber1[]={"",1,1,500};
		soundRubber2[]={"",1,1,500};
		soundRubber3[]={"",1,1,500};
		soundRubber4[]={"",1,1,500};
		soundRubber5[]={"",1,1,500};
		soundRubber6[]={"",1,1,500};
		soundWater1[]={"",1,1,500};
		soundWater2[]={"",1,1,500};
		soundWater3[]={"",1,1,500};
		soundWater4[]={"",1,1,500};
		soundWater5[]={"",1,1,500};
		soundWater6[]={"",1,1,500};
		soundWater7[]={"",1,1,500};
		soundWater8[]={"",1,1,500};
		soundMetalInt1[]={"",1,1,500};
		soundMetalInt2[]={"",1,1,500};
		soundMetalInt3[]={"",1,1,500};
		soundMetalInt4[]={"",1,1,500};
		soundMetalInt5[]={"",1,1,500};
		soundMetalInt6[]={"",1,1,500};
		soundVehiclePlateInt1[]={"",1,1,500};
		soundVehiclePlateInt2[]={"",1,1,500};
		soundVehiclePlateInt3[]={"",1,1,500};
		soundVehiclePlateInt4[]={"",1,1,500};
		soundVehiclePlateInt5[]={"",1,1,500};
		soundVehiclePlateInt6[]={"",1,1,500};
		soundVehiclePlateInt7[]={"",1,1,500};
		soundVehiclePlateInt8[]={"",1,1,500};
		soundVehiclePlateInt9[]={"",1,1,500};
		soundVehiclePlateInt10[]={"",1,1,500};
		soundVehiclePlateInt11[]={"",1,1,500};
		soundVehiclePlateInt12[]={"",1,1,500};
		soundVehiclePlateInt13[]={"",1,1,500};
		soundVehiclePlateInt14[]={"",1,1,500};
		soundVehiclePlateInt15[]={"",1,1,500};
	};
	class A3FL_PepperSpray_Ball: A3FL_Medium_Pressure_Water_Ball
	{
		displayName="A3FL_PepperSpray_Ball";
	};
};