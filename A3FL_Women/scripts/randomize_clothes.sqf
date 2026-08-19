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

_clothes = ["\a3fl_women\data\baker_co1.paa", 
"\a3fl_women\data\baker_co2.paa","\a3fl_women\data\baker_co3.paa", 
"\a3fl_women\data\baker_co4.paa","\a3fl_women\data\baker_co5.paa",
"\a3fl_women\data\baker_co6.paa","\a3fl_women\data\europ_co1.paa", 
"\a3fl_women\data\europ_co2.paa","\a3fl_women\data\europ_co3.paa", 
"\a3fl_women\data\europ_co4.paa","\a3fl_women\data\europ_co5.paa", 
"\a3fl_women\data\europ_co6"];
_wearing = _clothes select floor (random (count _clothes));

_unit setObjectTextureGlobal [0, _wearing];