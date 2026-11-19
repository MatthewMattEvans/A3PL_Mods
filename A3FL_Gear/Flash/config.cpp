class CfgPatches
{
	class FYD_Flash
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_characters_F","A3_Data_F"};
		magazines[] = {};
		ammo[] = {"FYD_Flash_ammo"};
	};
};
class CfgMusic
{
	class flashbang
	{
		name = "flashbang";
		sound[] = {"\A3FL_Gear\Flash\music\flashbang.wss",1.0,1.0};
		duration = 3;
	};
	class flashbang2
	{
		name = "flashbang2";
		sound[] = {"\A3FL_Gear\Flash\sounds\flashbang2.wss",1.0,1.0};
		duration = 2;
	};
};
class CfgSounds
{
	class flashbang2
	{
		name = "flashbang2";
		sound[] = {"\A3FL_Gear\Flash\sounds\flashbang2.wss",4.0,1.0};
		duration = 2;
	};
};
class CfgCloudlets
{
	class Default;
	class FYD_flashExp: Default
	{
		interval = 0.0007;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angle = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.05;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 1;
		volume = 0.8;
		rubbing = 0.3;
		size[] = {0.04,0.05};
		color[] = {{1,1,1,-1.6},{1,1,1,-1.6},{1,1,1,-1.6},{1,1,1,0}};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 0;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0.001;
		randomDirectionIntensityVar = 1;
	};
	class FYD_flashSmoke: Default
	{
		circleVelocity[] = {0,0,0};
		moveVelocity[] = {0,0,1};
		size[] = {0.5,1};
		color[] = {{0.1,0.1,0.1,0.8},{0.25,0.25,0.25,0.5},{0.5,0.5,0.5,0},{0.9,1,0.83,0}};
		animationSpeed[] = {0.02};
		positionVar[] = {1.2,0.6,1.2};
		MoveVelocityVar[] = {0,0,1};
		colorVar[] = {0,0,0,0.1};
		interval = 0.01;
		circleRadius = 0;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		rotationVelocity = 0;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.15;
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		rotationVelocityVar = 0.1;
		sizeVar = 0.3;
		randomDirectionPeriodVar = 0.01;
		randomDirectionIntensityVar = 0.02;
	};
};
class CfgLights
{
	class FYD_flashLight
	{
		color[] = {10,10,9.37};
		ambient[] = {0.35,0.35,0.35};
		brightness = 1;
		diffuse[] = {0,0,0};
		position[] = {0,0,0};
	};
};
class FYD_flashExplosion
{
	class Light1
	{
		position[] = {0,0,0};
		simulation = "light";
		type = "FYD_flashLight";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class GrenadeExp1
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "FYD_flashExp";
		intensity = 0.5;
		interval = 1;
		lifeTime = 1;
	};
	class GrenadeSmoke1
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "FYD_flashExp";
		intensity = 0.5;
		interval = 1;
		lifeTime = 1;
	};
};
class CfgAmmo
{
	class GrenadeHand;
	class FYD_flash_ammo: GrenadeHand
	{
		scope = 1;
		hit = 0.001;
		indirectHit = 0.001;
		indirectHitRange = 0.01;
		model = "\A3FL_Gear\Flash\flash.p3d";
		visibleFire = 0.5;
		audibleFire = 0.05;
		visibleFireTime = 1;
		fuseDistance = 5;
		ExplosionEffects = "FYD_flashExplosion";
		soundHit1[] = {"\A3FL_Gear\Flash\sounds\flashbang2.wss",1,1};
		soundHit2[] = {"\A3FL_Gear\Flash\sounds\flashbang2.wss",1,1};
		soundHit3[] = {"\A3FL_Gear\Flash\sounds\flashbang2.wss",1,1};
		soundHit4[] = {"\A3FL_Gear\Flash\sounds\flashbang2.wss",1,1};
		soundHit5[] = {"\A3FL_Gear\Flash\sounds\flashbang2.wss",1,1};
		soundHit6[] = {"\A3FL_Gear\Flash\sounds\flashbang2.wss",1,1};
		soundHit[] = {"\A3FL_Gear\Flash\sounds\flashbang2.wss",1,1};
		explosionSoundEffect = "flashbang2";
		explosionTime = 1.5;
	};
};
class cfgMagazines
{
	class Default;
	class CA_Magazine: Default{};
	class HandGrenade: CA_Magazine{};
	class FYD_flash: HandGrenade
	{
		model = "\A3FL_Gear\Flash\flash.p3d";
		displayName = "Model 7290 FlashBang";
		picture = "\A3FL_Gear\Flash\M700UI.paa";
		displayNameShort = "FlashBang";
		ammo = "FYD_flash_ammo";
		mass = 5;
	};
};
class CfgWeapons
{
	class Default;
	class GrenadeLauncher: Default{};
	class Throw: GrenadeLauncher
	{
		muzzles[] += {"FYD_flash_Muzzle"};
		class ThrowMuzzle;
		class FYD_flash_Muzzle: ThrowMuzzle
		{
			magazines[] = {"FYD_flash"};
		};
	};
};
class CfgFunctions
{
	class EC
	{
		class FlashBang
		{
			class InitFlashBang
			{
				file = "\A3FL_Gear\Flash\init.sqf";
				postInit = 1;
			};
			class HandleWindows
			{
				file = "\A3FL_Gear\Flash\scripts\window.sqf";
			};
			class EffectOnPlayerFull
			{
				file = "\A3FL_Gear\Flash\scripts\EP_Full.sqf";
			};
			class EffectOnPlayerLight
			{
				file = "\A3FL_Gear\Flash\scripts\EP_Light.sqf";
			};
			class EffectOnAI
			{
				file = "\A3FL_Gear\Flash\scripts\effectonAI.sqf";
			};
			class FiredEH
			{
				file = "\A3FL_Gear\Flash\FB.sqf";
			};
			class CheckForEffect
			{
				file = "\A3FL_Gear\Flash\scripts\FB.sqf";
			};
		};
	};
};
