//maxjoiner's script don't modify or use without my permission//
//to deactive random cloths and identity,insert in init unit:
// this setVariable ["not_Random",true];

private ["_unit","_clothes","_wearing","_setidentity","_identity"];


_unit = _this select 0;

sleep 0.01;

if (_unit getvariable ["not_Random", false])exitWith {};

_setidentity = ["max_female1","max_female2","max_female3", 
"max_female4","max_female5","max_female6","max_female7","max_female8",
"max_female9","max_female10","max_female11","max_female12","max_female13",
"max_female14","max_female15"];

_identity = _setidentity select floor (random (count _setidentity));

_unit setidentity _identity;

_clothes = ["\a3fl_women\data3\sportswoman1_co.paa", 
"a3fl_women\data3\sportswoman2_co.paa","a3fl_women\data3\sportswoman3_co.paa", 
"a3fl_women\data3\sportswoman4_co.paa","a3fl_women\data3\sportswoman5_co.paa"];
_wearing = _clothes select floor (random (count _clothes));

_unit setObjectTextureGlobal [0, _wearing];