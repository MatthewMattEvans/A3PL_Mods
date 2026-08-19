////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 10.10
//https://mikero.bytex.digital/Downloads
//'now' is Wed Jan 21 18:20:39 2026 : 'file' last modified on Fri Jan 11 20:39:38 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class A3PL_Animals
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Modules_F_Sites"};
	};
};
class CfgMovesAnimal
{
	skeletonName = "";
	class ManActions{};
	class States{};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
};
class CfgMovesBird
{
	access = 0;
	collisionVertexPattern[] = {};
	collisionGeomCompPattern[] = {};
	skeletonName = "BirdSkeleton";
	class ManActions
	{
		default = "";
		open = "";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			upDegree = -1;
			turnSpeed = 1;
			limitFast = 5;
			useFastMove = 0;
		};
		class DefaultActions: NoActions
		{
			default = "Fly";
			open = "Open";
			upDegree = 0;
		};
	};
	class default
	{
		actions = "DefaultActions";
		file = "";
		looped = 1;
		reversed = 0;
		autocenter = 0;
		speed = 0.5;
		onLandBeg = 0;
		onLandEnd = 0;
		predictSpeedCoef = 1;
		relSpeedMin = 1.0;
		relSpeedMax = 1.0;
		soundEnabled = 1;
		soundOverride = "";
		soundEdge[] = {0.5,1};
		terminal = 0;
		equivalentTo = "";
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		interpolationSpeed = 6;
		interpolationRestart = 0;
		preload = 0;
		controlHead = 0;
		headBobMode = 0;
		headBobStrength = 0;
		walkcycles = 1;
	};
	class States
	{
		class Fly: default
		{
			file = "\ca\animals2\birds\data\anim\flying.rtm";
			looped = 1;
			speed = -0.25;
		};
		class Open: default
		{
			file = "\ca\animals2\birds\data\anim\land.rtm";
			looped = 0;
			speed = -1;
			connectFrom[] = {"Fly",1};
			connectTo[] = {"Fly",1};
		};
	};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
};
class cfgNonAiVehicles
{
	class bird;
	class SeaGull: bird
	{
		model = "\Ca\animals2\Birds\crow\crow";
		singSound[] = {"\Ca\sounds\animals\crow2_3",0.0017782794,1,100};
		moves = "CfgMovesBird";
		canBeShot = 0;
	};
	class SeaGull2: SeaGull
	{
		model = "\Ca\animals2\Birds\Seagull\Seagull";
		singSound[] = {"\ca\animals\Data\Sound\gullsb",0.0017782794,1,100};
		moves = "CfgMovesBird";
	};
	class Crow: SeaGull
	{
		model = "\Ca\animals2\Birds\crow\crow";
		singSound[] = {"\Ca\sounds\animals\crow2_3",0.0017782794,1,100};
	};
};
class CfgVehicles
{
	class Animal_Base_F;
	class CAAnimalBase: Animal_Base_F
	{
		boneHead = "head";
		bonePrimaryWeapon = "head";
		picture = "";
		icon = "\Ca\animals2\data\mapicon_animals_ca.paa";
		moves = "CfgMovesAnimal";
		memoryPointHeadAxis = "head_axis";
		hasGeometry = 1;
		faceType = "Default";
		boneLEye = "l_eye";
		boneREye = "r_eye";
		boneLEyelidUp = "eye_upl";
		boneREyelidUp = "eye_upr";
		boneLEyelidDown = "eye_lwl";
		boneREyelidDown = "eye_lwr";
		boneLPupil = "l_pupila";
		boneRPupil = "r_pupila";
		memoryPointAim = "aimPoint";
		memoryPointCameraTarget = "camera";
		extCameraPosition[] = {0,0.5,-2.5};
	};
};
class CfgTasks
{
	class AnimalMainTask
	{
		name = "Animal Main Task";
		fsm = "\ca\animals2\Data\scripts\main.fsm";
		condition = "\ca\animals2\Data\scripts\createSingleTask.sqf";
		description = "Animal master task";
		destination = "";
		resources[] = {};
	};
};
class CfgSounds
{
	class cow_01
	{
		sound[] = {"\CA\animals2\data\sounds\cow01",0.1,1,80};
		titles[] = {};
	};
	class cow_02
	{
		sound[] = {"\CA\animals2\data\sounds\cow02",0.1,1,80};
		titles[] = {};
	};
	class cow_03
	{
		sound[] = {"\CA\animals2\data\sounds\cow03",0.1,1,80};
		titles[] = {};
	};
	class chicken01
	{
		sound[] = {"\CA\animals2\data\sounds\chicken01",0.1,1,30};
		titles[] = {};
	};
	class chicken02
	{
		sound[] = {"\CA\animals2\data\sounds\chicken02",0.1,1,30};
		titles[] = {};
	};
	class chicken03
	{
		sound[] = {"\CA\animals2\data\sounds\chicken03",0.1,1,30};
		titles[] = {};
	};
	class sheep_01
	{
		sound[] = {"\CA\animals2\data\sounds\sheep01",0.1,1,50};
		titles[] = {};
	};
	class sheep_02
	{
		sound[] = {"\CA\animals2\data\sounds\sheep02",0.1,1,50};
		titles[] = {};
	};
	class sheep_03
	{
		sound[] = {"\CA\animals2\data\sounds\sheep03",0.1,1,50};
		titles[] = {};
	};
	class goat_01
	{
		sound[] = {"\CA\animals2\data\sounds\goat01",0.1,1,50};
		titles[] = {};
	};
	class goat_02
	{
		sound[] = {"\CA\animals2\data\sounds\goat02",0.1,1,50};
		titles[] = {};
	};
	class goat_03
	{
		sound[] = {"\CA\animals2\data\sounds\goat03",0.1,1,50};
		titles[] = {};
	};
	class dog_01
	{
		sound[] = {"\CA\animals2\data\sounds\dog01",0.1,1,40};
		titles[] = {};
	};
	class dog_02
	{
		sound[] = {"\CA\animals2\data\sounds\dog02",0.1,1,40};
		titles[] = {};
	};
};
class Extended_Init_EventHandlers
{
	class Man
	{
		Player_Help_init = "[] call BIS_fnc_IsOutsideArea;";
	};
};
class CfgFunctions
{
	class A3_EPA
	{
		class IsOutsideArea
		{
			file = "\ca\animals2";
			class IsOutsideArea
			{
				preinit = 1;
			};
		};
	};
};
