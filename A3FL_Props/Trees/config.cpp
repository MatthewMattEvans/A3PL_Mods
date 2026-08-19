class CfgPatches
{
	class A3FL_Props_Trees
	{
		requiredAddons[]=
		{
			"A3_Structures_F",
			"A3_Data_F",
			"A3_Structures_F_Data"
		};
		units[]=
		{
			"Land_A3FL_Tree1",
			"Land_A3FL_Tree2",
			"Land_A3FL_Tree3"
			
		};
		weapons[]={};
		requiredVersion=1;
	};
};

class CfgVehicles
{
	class Static;
	class Land_A3FL_Tree1: Static
	{
		model="A3FL_Props\Trees\t_picea1s";
		displayName="A3FL Tree 1";
		destrType="DestructNo";
		scope=2;
		mapSize=8;
	};
	class Land_A3FL_Tree2: Land_A3FL_Tree1
	{
		model="A3FL_Props\Trees\t_picea2s";
		displayName="A3FL Tree 2";
	};
	class Land_A3FL_Tree3: Land_A3FL_Tree1
	{
		model="A3FL_Props\Trees\t_picea3f";
		displayName="A3FL Tree 3";
	};
};
