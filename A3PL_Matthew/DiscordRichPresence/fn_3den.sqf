switch _this do {
	case "onTerrainNew";
	case "onMissionPreviewEnd";
	case "init":{
		[] call A3PL_Matthew_fnc_init;
		"update" call A3PL_Matthew_fnc_3den;
	};
	case "onMissionLoad";
	case "onMissionNew";
	case "onMissionSave";
	case "update":{
		// Spawn to delay by a frame, allowing the briefingName to load when mode is onMissionLoad
		[] spawn {
			isNil {
				[
					["UpdateDetails",if (briefingName == "") then {
						"Eden 3D Editor"
					} else {
						"Eden 3D Editor: " + briefingName
					}],
					["UpdateState",getText(configFile >> "CfgWorlds" >> worldName >> "description")]
				] call A3PL_Matthew_fnc_update;
			};
		};
	};
};

nil
