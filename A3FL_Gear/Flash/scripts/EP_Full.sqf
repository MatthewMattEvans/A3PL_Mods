private ["_unit"];
_unit = _this;

if (_unit == player) then {
	playMusic "flashbang";
	sleep 0.01;
	
	FYD_PPEffect ppEffectAdjust [1, 1, -0.01, [1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1]];
	FYD_PPEffect ppEffectCommit 0.1;
	FYD_PPEffect ppEffectEnable true;
	
	_unit setFatigue 1; 
	5 fadeSound 0.1; 
	sleep 5;
	
	FYD_PPEffect ppEffectAdjust [1, 1, -0.02, [4.5, 3.5, 1.6, -0.02],[1.8, 1.6, 1.6, 1],[-1.5,0,-0.2,1]];
	//[1, 1, 0, [0,0,0,0], [1.1,0.7,1.1,1.1], [1.0,0.7,1.0,1.1]]
	FYD_PPEffect ppEffectCommit 10;
	sleep 5;
	15 fadeSound 1;
	sleep 5;
	FYD_PPEffect ppEffectEnable false;
};