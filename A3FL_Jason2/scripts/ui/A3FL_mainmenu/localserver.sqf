[] spawn {	
	ctrlActivate ((findDisplay 0) displayCtrl 105);

	_this resize 0;

	onEachFrame format [
	"
	    private _allDisplays = allDisplays select 
	    [
	        allDisplays find findDisplay 46, 
	        count allDisplays
	    ];
	    
	    reverse _allDisplays;
	    {_x closeDisplay 2} forEach _allDisplays;
	    
	    onEachFrame 
	    {
	        findDisplay 50 closeDisplay  2;
	        findDisplay 70 closeDisplay  2;
	        
	        onEachFrame
	        {
	            ctrlActivate (findDisplay 8 displayCtrl 167);
	            
	            onEachFrame
	            {
	                private _serverName = findDisplay 132 displayCtrl 101;
	                _serverName ctrlSetText ""ArmA 3 Fishers Life - wwww.arma3fisherslife.net - Official""; 
	                ctrlActivate (findDisplay 132 displayCtrl 1);
	   				onEachFrame {};	
	            };
	        };
	    };
	",diag_tickTime];
};