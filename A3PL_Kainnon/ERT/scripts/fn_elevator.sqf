/////////////////////
// 28 = elevator
// 27 = inside right elev_inside_right
// 26 = inside left elev_inside_left
// 25 = top right elev_top_right
// 24 = top left elev_top_left
// 23 = front right elev_bot_right
// 22 = front left elev_bot_left
/////////////////////

params [
	["_building", objNull, [objNull]],
	["_mode", "down", [""]]
];

switch (_mode) do {
	case "up": {
		_building animateSource ["elev_inside_source", 0];
		_building animateSource ["elev_top_source", 0];
		_building animateSource ["elev_bot_source", 0];

		waitUntil { sleep 0.5; (_building animationSourcePhase "elev_inside_source") == 0; };
		_building animateSource ["elevator_source", 1];
		waitUntil { sleep 0.5; (_building animationSourcePhase "elevator_source") == 1; };

		_building animateSource ["elev_inside_source", 1];
		_building animateSource ["elev_top_source", 1];
		_building animateSource ["elev_bot_source", 0];
	};
	case "down": {
		_building animateSource ["elev_inside_source", 0];
		_building animateSource ["elev_top_source", 0];
		_building animateSource ["elev_bot_source", 0];

		waitUntil { sleep 0.5; (_building animationSourcePhase "elev_inside_source") == 0; };
		_building animateSource ["elevator_source", 0];
		waitUntil { sleep 0.5; (_building animationSourcePhase "elevator_source") == 0; };

		_building animateSource ["elev_inside_source", 1];
		_building animateSource ["elev_top_source", 0];
		_building animateSource ["elev_bot_source", 1];
	};
	default {};
};