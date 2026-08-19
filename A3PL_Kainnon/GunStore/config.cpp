////////////////////////////////////////////////////////////////////
//DeRap: GunStore1\config.bin
//Produced from mikero's Dos Tools Dll version 9.64
//https://mikero.bytex.digital/Downloads
//'now' is Fri Nov 01 17:29:59 2024 : 'file' last modified on Fri Jul 19 10:10:30 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class buildingGunStore1_F
	{
		units[] = {"Land_buildingGunStore1"};
		weapons[] = {};
		requiredVersion = 2.0;
		requiredAddons[] = {"A3_Structures_F"};
	};
};
class CfgVehicles
{
	class House;
	class House_F: House{};
	class Land_buildingGunStore1: House_F
	{
		scope = 2;
		displayName = "GunStore1";
		model = "a3pl_kainnon\gunstore\mesh\buildinggunstore1.p3d";
		vehicleclass = "GunStore1_F";
		mapSize = 8;
		class AnimationSources
		{
			class door_1_source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "GenericDoorsSound";
			};
			class door_2_source: door_1_source{};
			class door_3_source: door_1_source{};
			class door_4_source: door_1_source{};
			class door_5_source: door_1_source{};
			class door_6_source: door_1_source{};
			class door_7_source: door_1_source{};
		};
		class Reflectors{};
		ladders[] = {};
	};
};
