////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.64
//https://mikero.bytex.digital/Downloads
//'now' is Tue Oct 29 09:25:05 2024 : 'file' last modified on Fri Jul 19 22:43:46 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class MM_Buildings_Pack_Base
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 3.2;
		requiredAddons[] = {};
	};
};
class CfgAnimationSourceSounds
{
	class MM_GenericGatesSound
	{
		class GateOpeningManual
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"\MM_Buildings_Pack_Base\Data\Sounds\MM_Gates_Manual_Opening.wss",1,1,30};
			sound[] = {"sound0",0.25};
		};
		class GateClosingManual
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"\MM_Buildings_Pack_Base\Data\Sounds\MM_Gates_Manual_Closing.wss",1,1,30};
			sound[] = {"sound0",0.25};
		};
	};
};
