class CfgPatches
{
	class A3FL_Weapons
	{
		author="A3FL Development Team";
		units[]={};
		weapons[]={"A3FL_RifleBase","A3FL_PistolBase","MeleePistol","MeleeRifle","A3FL_BaseballBat","A3FL_GolfDriver","A3FL_PoliceBaton","A3FL_DickStick","A3FL_Crowbar"};
		requiredAddons[]={"A3_Data_F","A3_Weapons_F","A3PL_Weapons","A3PL_Characters","A3PL_Objects"};
		requiredVersion=0.1;
		magazines[]={"A3FL_Melee_Base","A3FL_Magazine_Base","A3FL_BaseballBatMag","A3FL_GolfDriverMag","A3FL_PoliceBatonMag","A3FL_DickStick_Mag","A3FL_Crowbar_Mag"};
		ammo[]={"A3FL_BulletBase","A3FL_Melee","A3FL_BaseballBat_Bullet","A3FL_GolfDriver_Bullet","A3FL_PoliceBaton_Bullet","A3FL_DickStick_Bullet","A3FL_Crowbar_Bullet"};
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
class A3FL_MeleeSingle: Mode_SemiAuto
{
	autoFire=1;
	burst=1;
	burstRangeMax=-1;
	canShootInWater=0;
	dispersion=0;
	displayName="Melee";
	ffCount=1;
	ffFrequency=11;
	ffMagnitude=0.5;
	flash="";
	flashSize=0.1;
	multiplier=1;
	recoil="recoil_empty";
	recoilProne="recoil_empty";
	reloadTime=0.07;
	requiredOpticType=-1;
	showToPlayer=1;
	swing0[]={"A3PL_Weapons\axe\sounds\swing_0",1.77828,1,30};
	swing1[]={"A3PL_Weapons\axe\sounds\swing_1",1.77828,1,30};
	soundBegin[]={"swing0",0.5,"swing1",0.5};
	sound[]={"",10,1};
	soundBeginWater[]={"sound",1};
	soundBurst=0;
	soundClosure[]={"sound",1};
	soundContinuous=0;
	soundEnd[]={};
	soundLoop[]={};
	sounds[]={"StandardSound"};
	class StandardSound
	{
		begin1[]={"A3PL_Weapons\axe\sounds\swing_1",1,1,300};
		soundBegin[]={"begin1",1};
	};
	textureType="semi";
	useAction=0;
	useActionTitle="";
	weaponSoundEffect="";
};
class CfgAmmo
{
	class B_9x21_Ball;
	class LaserBombCore;
	class A3FL_BulletBase: B_9x21_Ball
	{
		author="Arma 3 Fishers Life";
	};
	class A3FL_Melee: A3FL_BulletBase
	{
		model="\A3\Weapons_f\empty";
		hit=0.001;
		soundEngine[]={"",0,1};
		visibleFire=0;
		audibleFire=0;
		visibleFireTime=0;
		maxControlRange=4;
		cost=1;
		tracerColor[]={0,0,0,0};
		tracerColorR[]={0,0,0,0};
		typicalSpeed=0.2;
		maxSpeed=0.25;
		caliber=0.1;
		airFriction=-0.3;
		isCraterOriented=0;
		craterShape="";
		cartridge="EmptyEffect";
		explosionEffects="EmptyEffect";
		craterEffects="EmptyEffect";
		muzzleEffect="EmptyEffect";
		effectFly="EmptyEffect";
		craterWaterEffects="EmptyEffect";
		effectsMissile="EmptyEffect";
		effectsMissileInit="EmptyEffect";
		effectsSmoke="EmptyEffect";
		effectsFire="EmptyEffect";
		effectFlare="EmptyEffect";
		mineJumpEffects="EmptyEffect";
		explosionSoundEffect="EmptyEffect";
		bulletFly1[]={"",1.58489,1,30};
		bulletFly2[]={"",1.58489,1,30};
		bulletFly3[]={"",1.58489,1,30};
		bulletFly4[]={"",1.58489,1,30};
		bulletFly5[]={"",1.58489,1,30};
		bulletFly6[]={"",1.58489,1,30};
		bulletFly7[]={"",1.58489,1,30};
		bulletFly8[]={"",1.58489,1,30};
		bulletFly9[]={"",1.58489,1,30};
		bulletFly10[]={"",1.58489,1,30};
		bulletFly11[]={"",1.58489,1,30};
		bulletFly12[]={"",1.58489,1,30};
		bulletFly[]={"bulletFly1",0.082999997,"bulletFly2",0.082999997,"bulletFly3",0.082999997,"bulletFly4",0.082999997,"bulletFly5",0.082999997,"bulletFly6",0.082999997,"bulletFly7",0.082999997,"bulletFly8",0.082999997,"bulletFly9",0.082999997,"bulletFly10",0.082999997,"bulletFly11",0.082999997,"bulletFly12",0.082999997};
		supersonicCrackNear[]={"",3.1622801,1,200};
		supersonicCrackFar[]={"",3.1622801,1,200};
		soundSetSonicCrack[]={"bulletFly1",0.082999997,"bulletFly2",0.082999997};
		soundFly[]={"",0.25118899,0.69999999};
		soundFall[]={"",1,1};
		soundFakeFall[]={"soundFall",1};
		class SuperSonicCrack
		{
			superSonicCrack[]={"",3.1622801,1,200};
			class SCrackForest
			{
				range[]={0,500};
				sound1[]={"",1,1,500};
				sound2[]={"",1,1,500};
				sound3[]={"",1,1,500};
				sounds[]={"sound1",0.333,"sound2",0.333,"sound3",0.333};
				frequency="((speed factor [330, 930]) * 0.1) + 1.05";
				trigger="forest";
			};
			class SCrackTrees: SCrackForest
			{
				trigger="trees";
			};
			class SCrackMeadow: SCrackForest
			{
				trigger="meadow max sea";
			};
			class SCrackHouses: SCrackForest
			{
				trigger="houses max interior";
			};
		};
	};
	class A3FL_BaseballBat_Bullet: A3FL_Melee
	{
		caliber=1;
		hit = 8;
	};
	class A3FL_GolfDriver_Bullet: A3FL_BaseballBat_Bullet{};
	class A3FL_PoliceBaton_Bullet: A3FL_BaseballBat_Bullet{};
	class A3FL_DickStick_Bullet: A3FL_BaseballBat_Bullet{};
	class A3FL_Crowbar_Bullet: A3FL_BaseballBat_Bullet{};
};
class CfgGesturesMale
{
	skeletonName="OFP2_ManSkeleton";
	class ManActions;
	class Default;
	class Actions
	{
		class NoActions
		{
			turnSpeed=0;
			upDegree=0;
			limitFast=1;
			useFastMove=0;
		};
	};
	class States
	{
		class A3FLGestureSwing: Default
		{
			file="\A3PL_Weapons\axe\anim\axe_swing.rtm";
			looped=0;
			speed=1.28205;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKBeg=0;
			rightHandIKEnd=0;
		};
	};
	class BlendAnims
	{
		handsWeapon[]={"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.2,"Spine1",0.30000001,"Spine2",1,"Spine3",1};
	};
};
class CfgRecoils
{
	A3FL_Melee[]={0,0.059999999,-0.1,0,0.1,-0.12,0.1,0,0};
};
class CfgMagazines
{
	class 16Rnd_9x21_Mag;
	class A3FL_Melee_Base: 16Rnd_9x21_Mag
	{
		scope=2;
		ammo="A3FL_Melee";
		author="A3FL Development Team";
		count=3000;
		descriptionShort="";
		displayName="A3FL_Melee_Base";
		displayNameShort="";
		initSpeed=3;
		mass=6;
		maxLeadSpeed=25;
		maxThrowHoldTime=2;
		maxThrowIntensityCoef=1.4;
		minThrowIntensityCoef=0.30000001;
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		modelSpecial="";
		nameSound="magazine";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		quickReload=0;
		reloadAction="";
		selectionFireAnim="zasleh";
		simulation="ProxyMagazines";
		tracersEvery=0;
		type=16;
		useAction=0;
		useActionTitle="";
		value=1;
		weight=0;
	};
	class A3FL_Magazine_Base: 16Rnd_9x21_Mag
	{
		scope=2;
		ammo="A3FL_Melee";
		author="A3FL Development Team";
		count=3000;
		descriptionShort="";
		displayName="A3FL_Magazine_Base";
		displayNameShort="";
		initSpeed=420;
		mass=6;
		picture="\A3PL_Characters\A3PL_Logo.paa";
		quickReload=0;
		reloadAction="";
		simulation="ProxyMagazines";
		tracersEvery=0;
		type=16;
		useAction=0;
		useActionTitle="";
		weight=0;
	};
	class A3FL_Crowbar_Mag: A3FL_Melee_Base {
		displayName = "Crowbar Ammo";
		descriptionShort="Used in: Crowbar";
		ammo = "A3FL_Crowbar_Bullet";
	};
	class A3FL_DickStick_Mag: A3FL_Melee_Base {
		displayName = "Dick Stick Ammo";
		descriptionShort="Used in: Dick Stick";
		ammo = "A3FL_DickStick_Bullet";
	};
	class A3FL_BaseballBatMag: A3FL_Melee_Base
	{
		displayName="Baseball Bat Durability";
		descriptionShort="Used in: Baseball Bat";
		ammo="A3FL_BaseballBat_Bullet";
	};
	class A3FL_GolfDriverMag: A3FL_Melee_Base
	{
		displayName="Golf Driver Durability";
		descriptionShort="Used in: Golf Driver";
		ammo="A3FL_GolfDriver_Bullet";
	};
	class A3FL_PoliceBatonMag: A3FL_Melee_Base
	{
		displayName="Police Baton Durability";
		descriptionShort="Used in: Police Baton";
		ammo="A3FL_PoliceBaton_Bullet";
	};
};

class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Pistol_Base_F;
	class A3FL_RifleBase: Rifle_Base_F
	{
		scope=2;
		author="Arma 3 Fishers Life";
		model="";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		discreteDistance[]={};
		class Library
		{
			libTextDesc="";
		};
		class BaseSoundModeType;
		class WeaponSlotsInfo
		{
			mass=1;
			class MuzzleSlot: SlotInfo
			{
				compatibleItems[]={};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			allowedslots[]={701,801,901};
		};
	};
	class A3FL_PistolBase: Pistol_Base_F
	{
		scope=2;
		author="Arma 3 Fishers Life";
		model="";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		discreteDistance[]={};
		class Library
		{
			libTextDesc="";
		};
		class BaseSoundModeType;
		class WeaponSlotsInfo
		{
			mass=1;
			class MuzzleSlot {};
			class CowsSlot {};
			class PointerSlot {};
			allowedslots[]={701,801,901};
		};
	};
	class MeleePistol: A3FL_PistolBase
	{
		burst=1;
		canDrop=0;
		optics=0;
		autoReload=1;
		autofire=1;
		modelOptics="-";
		modes[]={"Single"};
		magazines[]={"A3FL_Melee_Base"};
		showToPlayer=0;
		showSwitchAction=0;
		dispersion=0;
		sounds[]={"StandardSound"};
		cursor="EmptyCursor";
		cursoraim="cursorAimOn";
		cursorSize=1;
		discreteDistance[]={};
		caseless[]={};
		soundBullet[]={"caseless",1};
		drySound[]={"",0.56234097,1,10};
		reloadMagazineSound[]={"",1,1,10};
		changeFiremodeSound[]={"",0.177828,1,5};
		soundContinuous=0;
		sound[]={};
		soundBegin[]= {"sound",1};
		soundBeginWater[]= {"sound",1};
		soundClosure[]= {"sound",1};
		soundEnd[]= {"sound",1};
		soundLoop[]= {"sound",1};
		weaponSoundEffect="";
		soundBurst=1;
		reloadSound[]={"",1,1};
		emptySound[]={"",1,1};
		fireLightDuration=0;
		fireLightIntensity=0;
		fireLightDiffuse[]={0,0,0};
		fireLightAmbient[]={0,0,0};
		class GunParticles {};
		class GunFire: WeaponFireGun
		{
			access=0;
			cloudletDuration=0;
			cloudletAnimPeriod=0;
			cloudletSize=0;
			cloudletAlpha=0;
			cloudletGrowUp=0;
			cloudletFadeIn=0;
			cloudletFadeOut=0;
			cloudletAccY=0;
			cloudletMinYSpeed=0;
			cloudletMaxYSpeed=0;
			cloudletShape="";
			cloudletColor[]={0,0,0,0};
			cloudletDensityCoef=0;
			interval=0;
			size=0;
			sourceSize=0;
			timeToLive=0;
			initT=0;
			deltaT=0;
		};
		class GunClouds: GunFire {};
		class BaseSoundModeType: BaseSoundModeType
		{
			weaponSoundEffect="DefaultRifle";
			closure1[]={"",1.0351422,1,30};
			closure2[]={"",1.0351422,1.1,30};
			soundClosure[]={"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[]={"",0.94999999,1,1000};
			soundBegin[]={"begin1",1};
		};
		class Single: A3FL_MeleeSingle
		{
			recoil="A3FL_Melee";
			dispersion=0;
			reloadTime=1;
		};
	};
	class MeleeRifle: A3FL_RifleBase
	{
		burst=1;
		canDrop=0;
		optics=0;
		autoReload=1;
		autofire=1;
		modelOptics="-";
		modes[]={"Single"};
		magazines[]={"A3FL_Melee_Base"};
		showToPlayer=0;
		showSwitchAction=0;
		dispersion=0;
		sounds[]={"StandardSound"};
		cursor="EmptyCursor";
		cursoraim="cursorAimOn";
		cursorSize=1;
		discreteDistance[]={};
		caseless[]={};
		soundBullet[]={"caseless",1};
		drySound[]={"",0.56234097,1,10};
		reloadMagazineSound[]={"",1,1,10};
		changeFiremodeSound[]={"",0.177828,1,5};
		soundContinuous=0;
		sound[]={};
		soundBegin[]={"sound",1};
		soundBeginWater[]={"sound",1};
		soundClosure[]={"sound",1};
		soundEnd[]={"sound",1};
		soundLoop[]={"sound",1};
		weaponSoundEffect="";
		soundBurst=1;
		reloadSound[]={"",1,1};
		emptySound[]={"",1,1};
		fireLightDuration=0;
		fireLightIntensity=0;
		fireLightDiffuse[]={0,0,0};
		fireLightAmbient[]={0,0,0};
		class GunParticles{};
		class GunFire: WeaponFireGun
		{
			access=0;
			cloudletDuration=0;
			cloudletAnimPeriod=0;
			cloudletSize=0;
			cloudletAlpha=0;
			cloudletGrowUp=0;
			cloudletFadeIn=0;
			cloudletFadeOut=0;
			cloudletAccY=0;
			cloudletMinYSpeed=0;
			cloudletMaxYSpeed=0;
			cloudletShape="";
			cloudletColor[]={0,0,0,0};
			cloudletDensityCoef=0;
			interval=0;
			size=0;
			sourceSize=0;
			timeToLive=0;
			initT=0;
			deltaT=0;
		};
		class GunClouds: GunFire
		{
		};
		class BaseSoundModeType: BaseSoundModeType
		{
			weaponSoundEffect="DefaultRifle";
			closure1[]= {"",1.0351422,1,30};
			closure2[]= {"",1.0351422,1.1,30};
			soundClosure[]= {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[]={"",0.94999999,1,1000};
			soundBegin[]={"begin1",1};
		};
		class Single: A3FL_MeleeSingle
		{
			recoil="A3FL_Melee";
			dispersion=0;
			reloadTime=1;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=3;
			midRangeProbab=0.60000002;
			maxRange=4;
			maxRangeProbab=0.1;
		};
	};
	class A3FL_BaseballBat: MeleeRifle
	{
		scope=2;
		author="Henry Indelicato";
		model="\A3FL_Weapons\Melee\A3FL_BaseballBat";
		displayName="Baseball Bat";
		magazines[]={"A3FL_BaseballBatMag"};
		handAnim[]={"OFP2_ManSkeleton","\A3PL_Weapons\axe\anim\axe_hold.rtm"};
		class Library
		{
			libTextDesc="Baseball Bat";
		};
		descriptionShort="Baseball Bat";
	};
	class A3FL_BaseballBatGold: A3FL_BaseballBat
	{
		displayName="Golden Baseball Bat";
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"#(argb,8,8,3)color(1,0.843137,0,1.0,CO)"};
		hiddenSelectionsMaterials[]={"\A3FL_Weapons\Melee\data\BaseBallBatGold.rvmat"};
	};
	class A3FL_GolfDriver: MeleeRifle
	{
		scope=2;
		author="Henry Indelicato";
		model="\A3FL_Weapons\Melee\A3FL_GolfDriver";
		displayName="Golf Driver";
		magazines[]={"A3FL_GolfDriverMag"};
		handAnim[]={"OFP2_ManSkeleton","\A3PL_Weapons\axe\anim\axe_hold.rtm"};
		class Library
		{
			libTextDesc="Golf Driver";
		};
		descriptionShort="Golf Driver";
	};
	class A3FL_PoliceBaton: MeleeRifle
	{
		scope=2;
		author="Henry Indelicato";
		model="\A3FL_Weapons\Melee\A3FL_PoliceBaton";
		displayName="Police Baton";
		magazines[]={"A3FL_PoliceBatonMag"};
		handAnim[]={"OFP2_ManSkeleton","\A3PL_Weapons\axe\anim\axe_hold.rtm"};
		class Library
		{
			libTextDesc="Police Baton";
		};
		descriptionShort="Police Baton";
	};
	class A3FL_DickStick: MeleeRifle
	{
		scope=2;
		author="Andrew Axel";
		model="\A3FL_Weapons\Melee\A3FL_DickStick";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		displayName="Dick Stick";
		magazines[]=
		{
			"A3FL_DickStick_Mag"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3PL_Weapons\axe\anim\axe_hold.rtm"
		};
		class Library
		{
			libTextDesc="Dick Stick";
		};
		descriptionShort="Dick Stick";
	};
	class A3FL_Crowbar: MeleeRifle
	{
		scope=2;
		author="Andrew Axel";
		model="\A3FL_Weapons\Melee\A3FL_Crowbar";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		displayName="Crowbar";
		magazines[]=
		{
			"A3FL_Crowbar_Mag"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3PL_Weapons\axe\anim\axe_hold.rtm"
		};
		class Library
		{
			libTextDesc="Crowbar";
		};
		descriptionShort="Crowbar";
	};
};
class CfgMovesBasic
{
	class ManActions
	{
		A3FLGestureSwing="";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			A3FLGestureSwing[]=
			{
				"A3FLGestureSwing",
				"Gesture"
			};
		};
	};
};