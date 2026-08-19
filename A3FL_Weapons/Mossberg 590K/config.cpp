class CfgPatches
{
	class A3FL_Mossberg_590K
	{
		addonRootClass="A3_Weapons_F";
		requiredAddons[]={"A3_Weapons_F"};
		requiredVersion=0.1;
		units[]={};
		magazines[]={"A3FL_Mossberg_590K_8Rnd_buck","A3FL_Mossberg_590K_Beanbag","A3FL_Mossberg_590K_8Rnd_Breach"};
		ammo[]={"A3FL_Mossberg_590K_buck","A3FL_Mossberg_590K_Beanie","A3FL_Mossberg_590K_Breach"};
		weapons[]={"A3FL_Mossberg_590K"};
	};
};

class Mode_SemiAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class CfgWeapons
{
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class A3FL_Mossberg_590K_Flashlight: ItemCore
	{
		author="A3FL Development Team";
		_generalMacro="A3FL_Mossberg_590K_Flashlight";
		scope=2;
		displayName="A3FL Mossberg 590K Flashlight";
		descriptionUse="Mossberg 590K Flashlight";
		picture="\A3FL_Weapons\Mossberg 590K\UI\Flashlight.paa";
		model="\A3FL_Weapons\Mossberg 590K\A3FL_Mossberg_590K_Flashlight.p3d";
		descriptionShort="Mossberg 590K Flashlight";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=3;
			class FlashLight
			{
				color[]={180,160,130};
				ambient[]={0.89999998,0.81,0.69999999};
				intensity=100;
				size=1;
				innerAngle=5;
				outerAngle=100;
				coneFadeCoef=8;
				position="flash_dir";
				direction="flash_pos";
				useFlare=1;
				flareSize=1.4;
				flareMaxDistance=100;
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=0.5;
					linear=0.1;
					quadratic=0.2;
					hardLimitStart=27;
					hardLimitEnd=34;
				};
				scale[]={0};
			};
		};
		inertia=0.1;
	};
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class A3FL_Mossberg_590K: Rifle_Base_F
	{
		author="A3FL Development Team";
		scope=2;
		displayname="Mossberg 590K";
		descriptionShort="Mossberg 590K";
		cursor="A3FL_Weapons\Mossberg 590K\UI\cursor.paa";
		class Library {
			libTextDesc="Mossberg 590K";
		};
		picture="\A3FL_Weapons\Mossberg 590K\UI\Mossberg.paa";
		model="\A3FL_Weapons\Mossberg 590K\A3FL_Mossberg_590K.p3d";
		magazines[]={"A3FL_Mossberg_590K_8Rnd_buck","A3FL_Mossberg_590K_Beanbag","A3FL_Mossberg_590K_8Rnd_Breach"};
		maxZeroing=10;
		reloadAction="GestureReloadM4SSAS";
		reloadMagazineSound[]= {"\A3FL_Weapons\Mossberg 590K\sounds\reload.wss",2,1,30};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3FL_Weapons\Mossberg 590K\data\Mossberg.rtm"
		};
		bullet1[]= {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.39810699,1,15};
		bullet2[]= {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.39810699,1,15};
		bullet3[]= {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.39810699,1,15};
		bullet4[]= {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.39810699,1,15};
		bullet5[]= {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.281838,1,15};
		bullet6[]= {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.281838,1,15};
		bullet7[]= {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.281838,1,15};
		bullet8[]= {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.281838,1,15};
		bullet9[]= {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.281838,1,15};
		bullet10[]= {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.281838,1,15};
		bullet11[]= {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.281838,1,15};
		bullet12[]= {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.281838,1,15};
		soundBullet[]= {"bullet1",0.082999997,"bullet2",0.082999997,"bullet3",0.082999997,"bullet4",0.082999997,"bullet5",0.082999997,"bullet6",0.082999997,"bullet7",0.082999997,"bullet8",0.082999997,"bullet9",0.082999997,"bullet10",0.082999997,"bullet11",0.082999997,"bullet12",0.082999997};
		modes[]={"Single"};
		recoil="recoil_m320";
		class Single: Mode_SemiAuto
		{
			sounds[]={"StandardSound"};
			class StandardSound
			{
				begin1[]= {"\A3FL_Weapons\Mossberg 590K\sounds\fire.wss",1,1,1000};
				soundBegin[]= {"begin1",0.33000001};
			};
			recoil="recoil_single_gm6";
			recoilProne="recoil_single_prone_gm6";
			reloadTime=1.05;
			dispersion=3.9999999e-005;
			minRange=1;
			minRangeProbab=0.1;
			midRange=1;
			midRangeProbab=0.1;
			maxRange=1;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		caseless[]= {"",1,1,1};
		drySound[]= {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\dry_Zubr",0.39810717,1,20};
		dexterity=1.7;
		fireSpreadAngle=1.75;
		class GunParticles: GunParticles
		{
			class RifleAmmoCloud
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="A3FL_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="A3FL_RifleSmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot {};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={"A3FL_Mossberg_590K_Flashlight"};
				iconPinpoint="Center";
				iconPosition[]={0.30000001,0.44999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot {};
			mass=80;
		};
		inertia=0.15000001;
		initSpeed=0;
	};
};

class CfgCloudlets
{
	class Default;
	class A3FL_RifleAmmoCloud: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.44999999;
		moveVelocity[]=
		{
			"-0.15*directionX",
			"-0.15*directionY",
			"-0.15*directionZ"
		};
		rotationVelocity=1;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.1;
		size[]={0.25,0.5};
		color[]=
		{
			{0.1,0.1,0.1,0.30000001},
			{0.1,0.1,0.1,0.15000001},
			{0.1,0.1,0.1,0.059999999},
			{0.1,0.1,0.1,0.0099999998}
		};
		animationSpeed[]={1.2};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.079999998;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		blockAIVisibility=0;
		sizeCoef=0.2;
		colorCoef[]={1,1,1,0.60000002};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.029999999,0.029999999,0.029999999};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class A3FL_RifleSmokeTrail: Default
	{
		interval=0.059999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=0.5;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]=
		{
			"-directionX/1",
			"-directionY/1",
			"-directionZ/1"
		};
		rotationVelocity=1;
		weight=6;
		volume=1;
		rubbing=0;
		size[]={1.8};
		color[]=
		{
			{0.89999998,0.89999998,0.89999998,0.039999999},
			{0.89999998,0.89999998,0.89999998,0.017999999},
			{0.89999998,0.89999998,0.89999998,0.0060000001},
			{0.89999998,0.89999998,0.89999998,0.001}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.12;
		blockAIVisibility=0;
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.15000001,0.15000001,0.15000001};
		rotationVelocityVar=1;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
};
class A3FL_RifleAmmoCloud
{
	class A3FL_RifleAmmoCloud
	{
		simulation="particles";
		type="A3FL_RifleAmmoCloud";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class A3FL_RifleSmokeTrail
{
	class A3FL_RifleSmokeTrail
	{
		simulation="particles";
		type="A3FL_RifleSmokeTrail";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};

class CfgAmmo
{
	class B_12Gauge_Slug;
	class A3FL_Mossberg_590K_Beanie: B_12Gauge_Slug
	{
		hit=0.1;
		indirectHit=0;
		indirectHitRange=0;
		caliber=0.3048;
		cartridge="FxCartridge_slug";
		typicalSpeed=475.48999;
		airFriction=-0.0020419999;
		class CamShakeFire
		{
			power=2;
			duration=0.3;
			frequency=20;
			distance=5;
		};
		class CamShakePlayerFire
		{
			power=0.15000001;
			duration=0.1;
			frequency=20;
		};
	};
	class A3FL_Mossberg_590K_Breach: B_12Gauge_Slug
	{
		hit=0.1;
		indirectHit=0;
		indirectHitRange=0;
		caliber=0.3048;
		cartridge="FxCartridge_slug";
		typicalSpeed=475.48999;
		airFriction=-0.0020419999;
		class CamShakeFire
		{
			power=2;
			duration=0.3;
			frequency=20;
			distance=5;
		};
		class CamShakePlayerFire
		{
			power=0.15000001;
			duration=0.1;
			frequency=20;
		};
	};

	class B_12Gauge_Pellets;
	class A3FL_Mossberg_590K_buck: B_12Gauge_Pellets
	{
		simulation="shotSpread";
		hit=8;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_slug";
		typicalSpeed=403.85999;
		airFriction=-0.0063399998;
		caliber=0.23999999;
		class CamShakeFire
		{
			power=3;
			duration=0.5;
			frequency=20;
			distance=30;
		};
		class CamShakePlayerFire
		{
			power=0.15000001;
			duration=0.1;
			frequency=20;
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class A3FL_Mossberg_590K_8Rnd_buck: CA_Magazine
	{
		scope=2;
		displayName="12 Gauge 7+1 Rnd Buckshot";
		displayNameShort="Buckshot";
		descriptionShort="Caliber: 12 Gauge<br/>Rounds: 8<br/>Used in: M870";
		picture="\A3FL_Weapons\Mossberg 590K\UI\Buckshot.paa";
		author="A3FL Development Team";
		model="\A3\weapons_f\ammo\cartridge_slug.p3d";
		ammo="A3FL_Mossberg_590K_buck";
		count=8;
		mass=15;
		initspeed=250;
	};
	class A3FL_Mossberg_590K_Beanbag: CA_Magazine
	{
		scope=2;
		displayName="Beanbag (Non Lethal)";
		displayNameShort="Beanbag";
		descriptionShort="Caliber: 12 Gauge<br/>Rounds: 8<br/>Used in: M870";
		picture="\A3FL_Weapons\Mossberg 590K\UI\Beanbag.paa";
		author="A3FL Development Team";
		model="\A3\weapons_f\ammo\cartridge_slug.p3d";
		ammo="A3FL_Mossberg_590K_Beanie";
		count=8;
		mass=15;
		initspeed=120;
	};
	class A3FL_Mossberg_590K_8Rnd_Breach: CA_Magazine
	{
		scope=2;
		displayName="12 Gauge 7+1 Rnd Breachshot";
		displayNameShort="Breachshot";
		descriptionShort="Caliber: 12 Gauge<br/>Rounds: 8<br/>Used in: M870";
		picture="\A3FL_Weapons\Mossberg 590K\UI\Buckshot.paa";
		author="A3FL Development Team";
		model="\A3\weapons_f\ammo\cartridge_slug.p3d";
		ammo="A3FL_Mossberg_590K_Breach";
		count=8;
		mass=15;
		initspeed=250;
	};
};