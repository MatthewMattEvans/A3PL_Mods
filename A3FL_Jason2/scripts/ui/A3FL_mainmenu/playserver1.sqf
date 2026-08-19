[] spawn {
	ctrlActivate ((findDisplay 0) displayCtrl 105);

	params [["_IP","158.69.22.152"],["_PORT","2302"],["_PASS","Winter19"],["_TIMEOUT",10]];
	_this resize 0;
	onEachFrame format["
		private _allDisplays = allDisplays select 
		[
			allDisplays find findDisplay %5, 
			count allDisplays
		];
		reverse _allDisplays;
		{_x closeDisplay %4} forEach _allDisplays;
		
		onEachFrame 
		{
			findDisplay %6 closeDisplay  %4;
			findDisplay %7 closeDisplay  %4;
			
			onEachFrame
			{
				ctrlActivate (findDisplay %8 displayCtrl %9);
				
				onEachFrame
				{
					private _ctrlServerAddress = findDisplay %10 displayCtrl 2300;
					_ctrlServerAddress controlsGroupCtrl %11 ctrlSetText ""%1""; 
					_ctrlServerAddress controlsGroupCtrl %12 ctrlSetText ""%2"";
					ctrlActivate (_ctrlServerAddress controlsGroupCtrl %14);
					
					onEachFrame 
					{   
						findDisplay %8 displayCtrl %13 lbData 0 call 
						{
							if (diag_tickTime > %18) then
							{
								diag_log ""Timed Out - Server could be down."";
								onEachFrame {};
							};  
						
							if (_this isEqualTo ""%1:%2"") then
							{
								findDisplay %8 displayCtrl %13 lbSetCurSel 0;
								
								onEachFrame 
								{
									ctrlActivate (findDisplay %8 displayCtrl %15);
									
									onEachFrame 
									{                       
										if (diag_tickTime > %18) then
										{
											diag_log ""Timed Out - Server could be down."";
											onEachFrame {};
										};
										
										if (!isNull findDisplay %16) then
										{
											private _ctrlPassword = findDisplay %16 displayCtrl %17;
											_ctrlPassword ctrlSetTextColor [0,0,0,0];
											_ctrlPassword ctrlSetText ""%3"";
											ctrlActivate (findDisplay %16 displayCtrl %14);
										};
										
										if (getClientStateNumber >= 3) then
										{
											diag_log ""Connected"";
											onEachFrame {};
										};
									};
								};
							};
						};
					};
				};
			};
		};
	",_IP,_PORT,_PASS,2,46,50,70,8,166,19,101,102,102,1,105,64,101,diag_tickTime+_TIMEOUT];
};