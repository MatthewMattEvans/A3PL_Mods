private ["_ammo", "_impactPos"];
_ammo = _this select 0;

if ((typeOf _ammo) == 'FYD_Flash_ammo') then {
	_impactPos = getPosATL _ammo;
	while {alive _ammo} do
	{
		_impactPos = getPosATL _ammo;
		sleep 0.1;
	};
	[[_impactPos],"FYD_fnc_CheckForEffect",true,false] call BIS_fnc_MP;
	//[[[_impactPos],"\A3FL_Gear\Flash\scripts\FB.sqf"],"BIS_fnc_execVM",true,false] spawn BIS_fnc_MP;
};