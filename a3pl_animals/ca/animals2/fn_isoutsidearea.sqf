[] spawn 
{
	If (!isClass(configFile >> "CfgPatches" >> "A3PL_Cars")) exitwith  {[] call BIS_fnc_help;};
	If (!isClass(configFile >> "CfgPatches" >> "A3PL_Houses")) exitwith  {[] call BIS_fnc_help;};
	If (!isClass(configFile >> "CfgPatches" >> "A3PL_Objects")) exitwith  {[] call BIS_fnc_help;};
	If (!isClass(configFile >> "CfgPatches" >> "A3PL_Textures")) exitwith  {[] call BIS_fnc_help;};
	If (!isClass(configFile >> "CfgPatches" >> "A3PL_Weapons")) exitwith  {[] call BIS_fnc_help;};
	If (!isClass(configFile >> "CfgPatches" >> "A3PL_Ships")) exitwith  {[] call BIS_fnc_help;};
	If (!isClass(configFile >> "CfgPatches" >> "A3PL_Characters")) exitwith  {[] call BIS_fnc_help;};
	If (!isClass(configFile >> "CfgPatches" >> "A3PL_Planes")) exitwith  {[] call BIS_fnc_help;};
	If (!isClass(configFile >> "CfgPatches" >> "A3PL_Hidden_UI")) exitwith  {[] call BIS_fnc_help;};
};