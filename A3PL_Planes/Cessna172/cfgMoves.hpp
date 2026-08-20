class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{cessna_pilot = "cessna_pilot";};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class cessna_pilot: Crew
		{
			file = "\a3pl_planes\cessna172\anim\cessnaPilot.rtm";
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1}; 			
			leftLegIKCurve[] = {1};
			rightLegIKCurve[] = {1};
			interpolateTo[] = {"",1};
			leaning = "crewShake_shoulders";
		};	
	};
};