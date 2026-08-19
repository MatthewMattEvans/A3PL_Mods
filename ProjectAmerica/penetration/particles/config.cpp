class CfgPatches
{
	class cnd_particles
	{
		name="Project America Particles";
		author="Country Doggo";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_UI_F"
		};
		ammo[]=
		{
			"BulletBase"
		};
	};
};
class CfgCloudlets
{
	class Default;
	class cnd_IceShards: Default
	{
		interval=0.015;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="ProjectAmerica\penetration\particles\iceshard1.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=10;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=3.5;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 800",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 800)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 800"
		};
		rotationVelocity=2;
		weight=150;
		volume=0.050000001;
		rubbing=0;
		size[]={1.1};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=0.5;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={1,1,1};
		rotationVelocityVar=1;
		sizeVar=0.60000002;
		colorVar[]={0.2,0.2,0.2,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		bounceOnSurface=0.60000002;
		destroyOnWaterSurface=1;
	};
	class cnd_IceShards2: cnd_IceShards
	{
		particleShape="ProjectAmerica\penetration\particles\iceshard2.p3d";
	};
	class cnd_KelpLeaves: Default
	{
		interval=0.015;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="ProjectAmerica\penetration\particles\kelpleaf_single.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=10;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=6;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 1600",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 1600)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 1600"
		};
		rotationVelocity=0.25;
		weight=1.3;
		volume=1;
		rubbing=0;
		size[]={1.6};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=0.15000001;
		sizeVar=0.60000002;
		colorVar[]={0.30000001,0.30000001,0.30000001,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		bounceOnSurface=0;
		destroyOnWaterSurface=-1;
	};
	class cnd_drywallbits1: Default
	{
		interval=0.60000002;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="ProjectAmerica\penetration\particles\drywall_debris1.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=10;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=3;
		lifeTime=5;
		moveVelocity[]=
		{
			"(-inDirX*3 + surfNormalX * 2) * inSpeed / 2000",
			"2+((-inDirY*3 + surfNormalY * 2) * inSpeed / 2000)",
			"(-inDirZ*3 + surfNormalZ * 2) * inSpeed / 2000"
		};
		rotationVelocity=2;
		weight=150;
		volume=0.050000001;
		rubbing=0;
		size[]={1};
		sizeCoef=1;
		color[]=
		{
			{1,1,1,1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=0.5;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.5;
		position[]={0,0,0};
		positionVar[]={0.02,0.02,0.02};
		moveVelocityVar[]={1,1,1};
		rotationVelocityVar=0.5;
		sizeVar=0.5;
		colorVar[]={0.2,0.2,0.2,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		bounceOnSurface=0.2;
	};
	class cnd_drywallbits2: cnd_drywallbits1
	{
		particleShape="ProjectAmerica\penetration\particles\drywall_debris2.p3d";
	};
};
class cnd_ImpactIce
{
	class cnd_Impacticeshards1
	{
		simulation="particles";
		type="cnd_IceShards";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=0.1;
		interval=1;
		lifeTime=1;
	};
	class cnd_Impacticeshards2
	{
		simulation="particles";
		type="cnd_IceShards2";
		position[]={0,0,0};
		qualityLevel=1;
		intensity=0.1;
		interval=1;
		lifeTime=1;
	};
};
class cnd_ImpactKelp
{
	class cnd_Impactkelpleaves
	{
		simulation="particles";
		type="cnd_KelpLeaves";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=0.1;
		interval=1;
		lifeTime=1;
	};
};
class cnd_ImpactBeer
{
	class cnd_ImpactBeershards
	{
		simulation="particles";
		type="cnd_BeerShards";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=0.1;
		interval=1;
		lifeTime=1;
	};
	class cnd_ImpactBeershards2
	{
		simulation="particles";
		type="cnd_BeerShards2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=0.1;
		interval=1;
		lifeTime=1;
	};
	class cnd_ImpactBeershards3
	{
		simulation="particles";
		type="cnd_BeerShards3";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=0.1;
		interval=1;
		lifeTime=1;
	};
	class cnd_ImpactBeershards4
	{
		simulation="particles";
		type="cnd_BeerShards4";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=0.1;
		interval=1;
		lifeTime=1;
	};
	class cnd_ImpactBeerSplash
	{
		simulation="particles";
		type="cnd_BeerSplash";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=0.1;
		interval=1;
		lifeTime=1;
	};
	class cnd_ImpactBeerSplash_Faint
	{
		simulation="particles";
		type="cnd_BeerSplash_Faint";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=0.1;
		interval=1;
		lifeTime=1;
	};
};
class cnd_ImpactBeer_BottomHalf
{
	class cnd_ImpactBeershards2
	{
		simulation="particles";
		type="cnd_BeerShards2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=0.1;
		interval=1;
		lifeTime=1;
	};
	class cnd_ImpactBeershards5
	{
		simulation="particles";
		type="cnd_BeerShards5";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=0.1;
		interval=1;
		lifeTime=1;
	};
	class cnd_ImpactBeershards6
	{
		simulation="particles";
		type="cnd_BeerShards6";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=0.1;
		interval=1;
		lifeTime=1;
	};
};
class cnd_ImpactDryWall
{
	class ImpactDust
	{
		simulation="particles";
		type="ImpactDustWood";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class cnd_ImpactDryWall1
	{
		simulation="particles";
		type="cnd_drywallbits1";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=0.1;
		interval=1;
		lifeTime=1;
	};
	class cnd_ImpactDryWall2
	{
		simulation="particles";
		type="cnd_drywallbits2";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=0.1;
		interval=1;
		lifeTime=1;
	};
};
class CfgAmmo
{
	class Default;
	class BulletCore;
	class BulletBase: BulletCore
	{
		class HitEffects
		{
			cnd_hitIce="cnd_ImpactIce";
			cnd_hitKelp="cnd_ImpactKelp";
			cnd_hitBeer="cnd_ImpactBeer";
			cnd_hitBeer_BottomHalf="cnd_ImpactBeer_BottomHalf";
			cnd_hitDryWall="cnd_ImpactDryWall";
		};
	};
};
