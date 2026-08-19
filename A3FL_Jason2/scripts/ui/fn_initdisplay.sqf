private["_display","_folder","_file"];
params["_data","_class","_type"];
_params = _data;

if !(_data isEqualType []) then {
	_params = [_data];
};

_folder = "\A3FL_Jason2\Scripts\UI\" + _class + "\";
_file = _folder + _type + ".sqf";

_params call compile preprocessfilelinenumbers _file;