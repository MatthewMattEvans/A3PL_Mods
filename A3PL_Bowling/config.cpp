class DefaultEventhandlers;
class CfgPatches
{
	class A3PL_Bowling
	{
		units[]=
		{
			"Land_KarmaLanes"
		};
		weapons[]={};
		requiredVersion=0.2;
		requiredAddons[]=
		{
			"A3_Soft_F",
			"A3PL_Houses"
		};
	};
};
class CfgSounds
{
	class BowlingAmbient
	{
		name="Bowling Ambient";
		sound[]=
		{
			"\A3PL_Bowling\sounds\ambient.ogg",
			1,
			1,
			50
		};
		titles[]=
		{
			0,
			""
		};
	};
	class BowlingStrike
	{
		name="Bowling Strike";
		sound[]=
		{
			"\A3PL_Bowling\sounds\strike.ogg",
			1,
			1,
			40
		};
		titles[]=
		{
			0,
			""
		};
	};
};
class CfgVehicles
{
	class All
	{
	};
	class Static: All
	{
	};
	class Building: Static
	{
	};
	class Land_KarmaLanes: Building
	{
		model="\A3PL_Bowling\KarmaLanes\KarmaLanes";
		scope=2;
		displayName="kArmA Lanes";
		vehicleclass="A3PL_Houses";
		placement="vertical";
		hiddenSelections[]=
		{
			"1-CurrentPlayer",
			"1-BallNumber",
			"1-BallScoreOne",
			"1-BallScoreTwo",
			"1-TurnScore",
			"1-TurnNumber",
			"1-BallScoreOnePrev",
			"1-BallScoreTwoPrev",
			"1-TurnScorePrev",
			"1-TotalScore1",
			"1-TotalScore2",
			"1-TotalScore3",
			"2-CurrentPlayer",
			"2-BallNumber",
			"2-BallScoreOne",
			"2-BallScoreTwo",
			"2-TurnScore",
			"2-TurnNumber",
			"2-BallScoreOnePrev",
			"2-BallScoreTwoPrev",
			"2-TurnScorePrev",
			"2-TotalScore1",
			"2-TotalScore2",
			"2-TotalScore3",
			"3-CurrentPlayer",
			"3-BallNumber",
			"3-BallScoreOne",
			"3-BallScoreTwo",
			"3-TurnScore",
			"3-TurnNumber",
			"3-BallScoreOnePrev",
			"3-BallScoreTwoPrev",
			"3-TurnScorePrev",
			"3-TotalScore1",
			"3-TotalScore2",
			"3-TotalScore3",
			"4-CurrentPlayer",
			"4-BallNumber",
			"4-BallScoreOne",
			"4-BallScoreTwo",
			"4-TurnScore",
			"4-TurnNumber",
			"4-BallScoreOnePrev",
			"4-BallScoreTwoPrev",
			"4-TurnScorePrev",
			"4-TotalScore1",
			"4-TotalScore2",
			"4-TotalScore3",
			"5-CurrentPlayer",
			"5-BallNumber",
			"5-BallScoreOne",
			"5-BallScoreTwo",
			"5-TurnScore",
			"5-TurnNumber",
			"5-BallScoreOnePrev",
			"5-BallScoreTwoPrev",
			"5-TurnScorePrev",
			"5-TotalScore1",
			"5-TotalScore2",
			"5-TotalScore3",
			"6-CurrentPlayer",
			"6-BallNumber",
			"6-BallScoreOne",
			"6-BallScoreTwo",
			"6-TurnScore",
			"6-TurnNumber",
			"6-BallScoreOnePrev",
			"6-BallScoreTwoPrev",
			"6-TurnScorePrev",
			"6-TotalScore1",
			"6-TotalScore2",
			"6-TotalScore3"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class AnimationSources
		{
			class Sweeper1_Back
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Sweeper1_Down
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Sweeper2_Back: Sweeper1_Back
			{
			};
			class Sweeper2_Down: Sweeper1_Down
			{
			};
			class Sweeper3_Back: Sweeper1_Back
			{
			};
			class Sweeper3_Down: Sweeper1_Down
			{
			};
			class Sweeper4_Back: Sweeper1_Back
			{
			};
			class Sweeper4_Down: Sweeper1_Down
			{
			};
			class Sweeper5_Back: Sweeper1_Back
			{
			};
			class Sweeper5_Down: Sweeper1_Down
			{
			};
			class Sweeper6_Back: Sweeper1_Back
			{
			};
			class Sweeper6_Down: Sweeper1_Down
			{
			};
			class door1
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class door2: door1
			{
			};
		};
		class Useractions
		{
		};
		class EventHandlers
		{
			init="if (isNil 'A3PL_BowlingAlleys') then {A3PL_BowlingAlleys = [];}; A3PL_BowlingAlleys = A3PL_BowlingAlleys + [(_this select 0)];";
		};
		class Reflectors
		{
			class Ref1
			{
				color[]={1,1,1};
				ambient[]={10,10,10};
				intensity=270;
				size=8;
				innerAngle=1;
				outerAngle=150;
				coneFadeCoef=6;
				position="Light2_pos";
				direction="Light2_dir";
				hitpoint="Lights";
				selection="Light2";
				useFlare=1;
				flareSize=25;
				flareMaxDistance=20;
				blinking=0;
				dayLight=1;
				class Attenuation
				{
					start=10;
					constant=0;
					linear=0;
					quadratic=1;
				};
			};
			class Ref4: Ref1
			{
				position="Light4_pos";
				direction="Light4_dir";
				selection="Light4";
			};
			class Ref5: Ref1
			{
				position="Light5_pos";
				direction="Light5_dir";
				selection="Light5";
			};
			class Ref8: Ref1
			{
				position="Light8_pos";
				direction="Light8_dir";
				selection="Light8";
			};
			class Ref9: Ref1
			{
				position="Light9_pos";
				direction="Light9_dir";
				selection="Light9";
			};
			class Ref11: Ref1
			{
				position="Light11_pos";
				direction="Light11_dir";
				selection="Light11";
			};
		};
	};
	class Land_CampingChair_V1_F;
	class A3PL_Pin: Land_CampingChair_V1_F
	{
		_generalMacro="A3PL_Pin";
		scope=1;
		displayName="A3PL Pin";
		price=1000;
		photo="";
		model="\A3PL_Bowling\A3PL_Pin";
		author="AP3L - Kane";
	};
	class A3PL_Ball: Land_CampingChair_V1_F
	{
		_generalMacro="A3PL_Ball";
		scope=1;
		displayName="A3PL Green Ball";
		price=1000;
		photo="";
		model="\A3PL_Bowling\A3PL_Ball";
		author="AP3L - Kane";
		class Useractions
		{
		};
	};
};
