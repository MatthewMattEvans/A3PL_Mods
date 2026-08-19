disableSerialization;
params["_display"];
['onLoad',_this,'RscDisplayMain','GUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');


_display displayaddeventhandler ["childdestroyed","
	disableSerialization;
	with uinamespace do {
		if(count(allDisplays) <= 2 && isNil 'EXITPLS') then {
			if(!isNil 'temp_abort') then {
				temp_abort = nil;
			} else {
				(findDisplay 0) createDisplay ""A3FL_MainMenu"";
			};
		};
	};
"];

_display createDisplay "A3FL_MainMenu";
