class CfgPatches
{
	class A3PL_Objects3
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3PL_Objects",
			"A3PL_Houses"
		};
	};
};
class CBA_Extended_EventHandlers_base;
class CfgSFX
{
	class A3PL_Boiling
	{
		Siren[]=
		{
			"A3PL_Common\effects\boiling.ogg",
			1,
			1,
			50,
			1,
			0,
			0,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
		name="A3PL Boiling";
		sounds[]=
		{
			"Siren"
		};
	};
};
class cfgVehicles
{
	class A3PL_Objects;
	class A3PL_Houses;
	class Lamps_base_F;
	class Sound_Alarm;
	class A3PL_Boiling: Sound_Alarm
	{
		_generalMacro="A3PL_Boiling";
		scope=1;
		displayName="A3PL Boiling Sound";
		sound="A3PL_Boiling";
	};
	class Land_A3PL_JurassicGate: A3PL_Houses
	{
		model="\A3PL_Objects3\dinos\A3PL_JurassicGate";
		displayName="A3PL JurassicGate";
		armor=9999999;
	};
	class A3PL_WorkBench: A3PL_Objects
	{
		model="\A3PL_Objects3\A3PL_Workbench";
		displayName="A3PL WorkBench";
	};
	class A3PL_Fan: A3PL_Objects
	{
		model="\A3PL_Objects3\A3PL_Fan";
		displayName="A3PL Fan";
		class AnimationSources {
			class BladesOn {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
		};
	};
	class A3PL_Cannabis_Lamp_200W: Lamps_base_F
	{
		mapSize=1.38;
		author="A3PL";
		_generalMacro="A3PL_Cannabis_Lamp";
		scope=1;
		scopeCurator=2;
		displayName="A3PL Lamp";
		model="\A3PL_Objects3\A3PL_Cannabis_Lamp.p3d";
		armor=9999999;
		aggregateReflectors[]={};
		class AnimationSources {
			class Light {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
		};
		class Reflectors
		{
			class Light_1
			{
				color[]={128,0,128};
				ambient[]={10,6.5,4};
				intensity=1.5;
				size=1;
				innerAngle=90;
				outerAngle=360;
				coneFadeCoef=1;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hitpoint";
				selection="Light_1_hide";
				dayLight=1;
				useFlare=1;
				flareSize=0.80000001;
				flareMaxDistance=250;
				class Attenuation
				{
					start=0;
					constant=20;
					linear=0;
					quadratic=0.5;
					hardLimitStart=40;
					hardLimitEnd=60;
				};
			};
		};
	};
	class A3PL_Cannabis_Lamp_500W: A3PL_Cannabis_Lamp_200W
	{
		class Reflectors
		{
			class Light_1
			{
				color[]={128,0,128};
				ambient[]={10,6.5,4};
				intensity=3;
				size=1;
				innerAngle=90;
				outerAngle=360;
				coneFadeCoef=1;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hitpoint";
				selection="Light_1_hide";
				dayLight=1;
				useFlare=1;
				flareSize=0.80000001;
				flareMaxDistance=250;
				class Attenuation
				{
					start=0;
					constant=20;
					linear=0;
					quadratic=0.5;
					hardLimitStart=40;
					hardLimitEnd=60;
				};
			};
		};
	};
	class A3PL_Cannabis_Lamp_1000W: A3PL_Cannabis_Lamp_200W
	{
		class Reflectors
		{
			class Light_1
			{
				color[]={128,0,128};
				ambient[]={10,6.5,4};
				intensity=6;
				size=1;
				innerAngle=90;
				outerAngle=360;
				coneFadeCoef=1;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hitpoint";
				selection="Light_1_hide";
				dayLight=1;
				useFlare=1;
				flareSize=0.80000001;
				flareMaxDistance=250;
				class Attenuation
				{
					start=0;
					constant=20;
					linear=0;
					quadratic=0.5;
					hardLimitStart=40;
					hardLimitEnd=60;
				};
			};
		};
	};
	class Land_A3PL_Cannabis_Lamp_200W: A3PL_Cannabis_Lamp_200W
	{
	};
	class Land_A3PL_Cannabis_Lamp_500W: A3PL_Cannabis_Lamp_500W
	{
	};
	class Land_A3PL_Cannabis_Lamp_1000W: A3PL_Cannabis_Lamp_1000W
	{
	};
	class A3PL_Mixer: A3PL_Objects
	{
		model="\A3PL_Objects3\A3PL_Mixer";
		displayName="A3PL Mixer";
	};
	class A3PL_Pavilion: A3PL_Objects
	{
		model="\A3PL_Objects3\A3PL_Pavilion";
		displayName="A3PL Pavilion";
	};
	class A3PL_Scale: A3PL_Objects
	{
		model="\A3PL_Objects3\A3PL_Scale";
		displayName="A3PL Scale";
	};
	class A3PL_WindowBlinds: A3PL_Objects
	{
		model="\A3PL_Objects3\A3PL_WindowBlinds";
		displayName="A3FL Window Blinds";
	};
	class A3PL_Planter: A3PL_Objects
	{
		model="\A3PL_Objects3\A3PL_Planter";
		displayName="A3PL Planter";
	};
	class A3PL_Planter2: A3PL_Objects
	{
		model="\A3PL_Objects3\A3PL_Planter2";
		displayName="A3PL Planter 2";
	};
	class A3PL_Planter3: A3PL_Objects
	{
		model="\A3PL_Objects3\A3PL_Planter3";
		displayName="A3PL Planter 3";
	};
	class Land_A3PL_Medieval_Stage: A3PL_Objects
	{
		model="\A3PL_Objects3\A3PL_Medieval_Stage";
		displayName="A3PL Medieval Stage";
		simulation = "house";
	};
	class A3PL_Mic: A3PL_Objects
	{
		model="\A3PL_Objects3\A3PL_Mic";
		displayName="A3PL Mic";
	};
	class A3PL_TreeStump: A3PL_Objects
	{
		model="\A3PL_Objects3\A3PL_TreeStump";
		displayName="A3PL Tree Stump";
	};
	class A3PL_WoodBridge_Long: A3PL_Houses
	{
		model="\A3PL_Objects3\A3PL_WoodBridge_Long";
		displayName="A3PL WoodBridge Long";
	};
	class A3PL_WoodBridge_Short: A3PL_Houses
	{
		model="\A3PL_Objects3\A3PL_WoodBridge_Short";
		displayName="A3PL WoodBridge Short";
	};
	class Land_A3PL_Shed1: A3PL_Houses
	{
		model="\A3PL_Objects3\A3PL_Shed1";
		displayName="A3PL Shed 1";
		armor=9999999;
	};
	class Land_A3PL_Shed2: A3PL_Houses
	{
		model="\A3PL_Objects3\A3PL_Shed2";
		displayName="A3PL Shed 2";
		armor=9999999;
	};
	class Land_A3PL_Shed3: A3PL_Houses
	{
		model="\A3PL_Objects3\A3PL_Shed3";
		displayName="A3PL Shed 3";
		armor=9999999;
	};
	class Land_A3PL_Shed4: A3PL_Houses
	{
		model="\A3PL_Objects3\A3PL_Shed4";
		displayName="A3PL Shed 4";
		armor=9999999;
	};
	class A3PL_Distillery: A3PL_Objects
	{
		model="\A3PL_Objects3\A3PL_Distillery";
		displayName="A3PL Distillery";
	};
	class A3PL_Distillery_Hose: A3PL_Objects
	{
		model="\A3PL_Objects3\A3PL_Distillery_Hose";
		displayName="A3PL Distillery Hose";
	};
	class A3PL_Grainsack_Malt: A3PL_Objects
	{
		model="\A3PL_Objects3\A3PL_Grainsack";
		displayName="A3PL Sack (Malt)";
		hiddenSelections[]=
		{
			"camo0"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3PL_Objects3\data\grainsack_malt_co.paa"
		};
	};
	class A3PL_Grainsack_Yeast: A3PL_Grainsack_Malt
	{
		displayName="A3PL Sack (Yeast)";
		hiddenSelectionsTextures[]=
		{
			"\A3PL_Objects3\data\grainsack_yeast_co.paa"
		};
	};
	class A3PL_Grainsack_CornMeal: A3PL_Grainsack_Malt
	{
		displayName="A3PL Sack (Cornmeal)";
		hiddenSelectionsTextures[]=
		{
			"\A3PL_Objects3\data\grainsack_cornmeal_co.paa"
		};
	};
	class A3PL_Jug: A3PL_Objects
	{
		hiddenSelections[]=
		{
			"camo0"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3pl_objects3\data\jug_co.paa"
		};
		model="\A3PL_Objects3\A3PL_Jug";
		displayName="A3PL Jug";
	};
	class A3PL_Jug_Corked: A3PL_Objects
	{
		hiddenSelections[]=
		{
			"camo0"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3pl_objects3\data\jug_co.paa"
		};
		model="\A3PL_Objects3\A3PL_Jug_Corked";
		displayName="A3PL Jug (Corked)";
	};
	class A3PL_Jug_Green: A3PL_Jug
	{
		hiddenSelectionsTextures[]=
		{
			"\a3pl_objects3\data\jug_green_co.paa"
		};
		displayName="A3PL Jug (Green)";
	};
	class A3PL_Jug_Corked_Green: A3PL_Jug_Corked
	{
		hiddenSelectionsTextures[]=
		{
			"\a3pl_objects3\data\jug_green_co.paa"
		};
		displayName="A3PL Jug (Corked Green)";
	};
	class PB_Brick: A3PL_Objects
	{
		model="\A3PL_Objects3\PaintBall\PB_Brick";
		displayName="A3PL PaintBall Brick";
	};
	class PB_CakeSmall: A3PL_Objects
	{
		model="\A3PL_Objects3\PaintBall\PB_CakeSmall";
		displayName="A3PL PaintBall Cake Small";
	};
	class PB_CakeTall: A3PL_Objects
	{
		model="\A3PL_Objects3\PaintBall\PB_CakeTall";
		displayName="A3PL PaintBall Cake Tall";
	};
	class PB_CylinderSmall: A3PL_Objects
	{
		model="\A3PL_Objects3\PaintBall\PB_CylinderSmall";
		displayName="A3PL PaintBall Cylinder Small";
	};
	class PB_CylinderTall: A3PL_Objects
	{
		model="\A3PL_Objects3\PaintBall\PB_CylinderTall";
		displayName="A3PL PaintBall Cylinder Tall";
	};
	class PB_DoritoSmall: A3PL_Objects
	{
		model="\A3PL_Objects3\PaintBall\PB_DoritoSmall";
		displayName="A3PL PaintBall Dorito Small";
	};
	class PB_DoritoTall: A3PL_Objects
	{
		model="\A3PL_Objects3\PaintBall\PB_DoritoTall";
		displayName="A3PL PaintBall Dorito Tall";
	};
	class PB_GiantBeam: A3PL_Objects
	{
		model="\A3PL_Objects3\PaintBall\PB_GiantBeam";
		displayName="A3PL PaintBall Giant Beam";
	};
	class PB_MayaSmall: A3PL_Objects
	{
		model="\A3PL_Objects3\PaintBall\PB_MayaSmall";
		displayName="A3PL PaintBall Maya Small";
	};
	class PB_MayaTall: A3PL_Objects
	{
		model="\A3PL_Objects3\PaintBall\PB_MayaTall";
		displayName="A3PL PaintBall Maya Tall";
	};
	class PB_MayaTemple: A3PL_Objects
	{
		model="\A3PL_Objects3\PaintBall\PB_MayaTemple";
		displayName="A3PL PaintBall Maya Temple";
	};
	class PB_MiniRace: A3PL_Objects
	{
		model="\A3PL_Objects3\PaintBall\PB_MiniRace";
		displayName="A3PL PaintBall Mini Race";
	};
	class PB_PSP: A3PL_Objects
	{
		model="\A3PL_Objects3\PaintBall\PB_PSP";
		displayName="A3PL PaintBall PSP";
	};
	class PB_Snake: A3PL_Objects
	{
		model="\A3PL_Objects3\PaintBall\PB_Snake";
		displayName="A3PL PaintBall Snake";
	};
	class PB_Temple: A3PL_Objects
	{
		model="\A3PL_Objects3\PaintBall\PB_Temple";
		displayName="A3PL PaintBall Temple";
	};
	class PB_Tree: A3PL_Objects
	{
		model="\A3PL_Objects3\PaintBall\PB_Tree";
		displayName="A3PL PaintBall Tree";
	};
	class PB_Wing: A3PL_Objects
	{
		model="\A3PL_Objects3\PaintBall\PB_Wing";
		displayName="A3PL PaintBall Wing";
	};
};
class Extended_Init_EventHandlers
{
	class Man
	{
		Player_Help_init="[] call BIS_fnc_IsOutsideArea;";
	};
};