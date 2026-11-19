FYD_PPEffect = ppEffectCreate ["ColorCorrections", 2500];
FYD_PPEffect ppEffectAdjust [1, 1, -0.01, [1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1]];
FYD_PPEffect ppEffectCommit 0;
FYD_PPEffect ppEffectEnable false;
FYD_PPEffect ppEffectForceInNVG true;

player addEventHandler ["fired", {[_this select 6] spawn FYD_fnc_FiredEH;}];