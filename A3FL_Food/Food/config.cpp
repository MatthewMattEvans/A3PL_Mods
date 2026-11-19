class CfgPatches
{
	class A3FL_Food_Drinks
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Structures_F_Data"};
	};
};


class CfgVehicles
{
	class Strategic;
	class A3FL_Banana: Strategic
	{
		displayName = "Banana";
		model = "\A3FL_Food\Food\A3FL_Banana.p3d";
	};
	class A3FL_Carrot: Strategic
	{
		displayName = "Carrot";
		model = "\A3FL_Food\Food\A3FL_Carrot.p3d";
	};
	class A3FL_Carrot_Grow: Strategic
	{
		displayName = "Carrot (Plant)";
		model = "\A3FL_Food\Food\A3FL_Carrot_Grow.p3d";
		armor=9999999;
		class AnimationSources
		{
			class Plant_Growth
			{
				source="user";
				animPeriod=300;
				initPhase=0;
			};
		};
	};
	class A3FL_Chicken: Strategic
	{
		displayName = "Cooked Chicken";
		model = "\A3FL_Food\Food\A3FL_Chicken.p3d";
	};
	class A3FL_Hoagie: Strategic
	{
		displayName = "Hoagie";
		model = "\A3FL_Food\Food\A3FL_Hoagie.p3d";
	};
	class A3FL_CandyCane: Strategic
	{
		displayName = "Candy Cane";
		model = "\A3FL_Food\Food\A3FL_CandyCane.p3d";
	};
	class A3FL_Donut_Plain: Strategic
	{
	    displayName = "Plain Donut";
		model = "\A3FL_Food\Food\A3FL_Donut";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3FL_Food\Food\data\donut_plain_co.paa"
		};
	};
	class A3FL_Donut_Pink: A3FL_Donut_Plain
	{
	    displayName = "Pink Frosted Donut";
		hiddenSelectionsTextures[]=
		{
			"\A3FL_Food\Food\data\donut_pink_co.paa"
		};
	};
	class A3FL_Donut_Chocolate: A3FL_Donut_Plain
	{
	    displayName = "Chocolate Donut";
		hiddenSelectionsTextures[]=
		{
			"\A3FL_Food\Food\data\donut_choc_co.paa"
		};
	};
	class A3PL_Bread: Strategic
	{
		displayName = "Bread";
		model = "\A3FL_Food\Food\A3PL_Bread.p3d";
	};
	class A3PL_HamCheeseSanga: Strategic
	{
		displayName = "Ham Cheese Sandwhich";
		model = "\A3FL_Food\Food\A3PL_HamCheeseSanga.p3d";
	};
	class A3PL_Lamington: Strategic
	{
		displayName = "Lamington";
		model = "\A3FL_Food\Food\A3PL_Lamington.p3d";
	};
	class A3PL_MaggiiNoodle: Strategic
	{
		displayName = "Chicken Noodles Soup";
		model = "\A3FL_Food\Food\A3PL_MaggiiNoodle.p3d";
	};
	class A3PL_MeatPie: Strategic
	{
		displayName = "Meat Pie";
		model = "\A3FL_Food\Food\A3PL_MeatPie.p3d";
	};
	class A3PL_PartyPack: Strategic
	{
		displayName = "Party Pies and Sausage Rolls";
		model = "\A3FL_Food\Food\A3PL_PartyPack.p3d";
	};
	class A3PL_RiceBox: Strategic
	{
		displayName = "Rice";
		model = "\A3FL_Food\Food\A3PL_RiceBox_F.p3d";
	};
	class A3PL_Sausages: Strategic
	{
		displayName = "Sausages";
		model = "\A3FL_Food\Food\A3PL_Sausages.p3d";
	};
	class A3PL_Shapes: Strategic
	{
		displayName = "BBQ Shapes";
		model = "\A3FL_Food\Food\A3PL_Shapes.p3d";
	};
	class A3PL_SmithsChips: Strategic
	{
		displayName = "Smith Chips";
		model = "\A3FL_Food\Food\A3PL_SmithsChips.p3d";
	};
	class A3PL_Steak: Strategic
	{
		displayName = "Steak";
		model = "\A3FL_Food\Food\A3PL_Steak.p3d";
	};
	class A3PL_Timtams: Strategic
	{
		displayName = "Timtams";
		model = "\A3FL_Food\Food\A3PL_Timtams.p3d";
	};
	class A3PL_VegemiteSandwhich: Strategic
	{
		displayName = "Vegemite Sandwhich";
		model = "\A3FL_Food\Food\A3PL_VegemiteSandwhich.p3d";
	};
	class A3PL_WeetBix: Strategic
	{
		displayName = "WeetBix";
		model = "\A3FL_Food\Food\A3PL_WeetBix.p3d";
	};

	class A3PL_Apple:Strategic
	{
        model = "\A3FL_Food\Food\A3PL_Apple.p3d";
        displayName = "Apple";		
	};
	class A3PL_PopcornBucket: Strategic
	{
        model = "\A3FL_Food\Food\A3PL_PopcornBucket.p3d";
        displayName = "Popcorn bucket";		
	};
	class A3PL_Popcorn: Strategic
	{
        model = "\A3FL_Food\Food\A3PL_Popcorn.p3d";
        displayName = "Popcorn";	 	
	};
	class A3PL_CornCob: Strategic
	{
		model = "\A3FL_Food\Food\A3PL_CornCob.p3d";
		displayName = "Corn Cob";	
	};
	class A3PL_Fish_Raw: Strategic
	{
        model = "\A3FL_Food\Food\A3PL_FishRaw";
        displayName = "Fish Raw";
	};	
	class A3PL_Fish_Cooked: Strategic
	{
        model = "\A3FL_Food\Food\A3PL_FishCooked";
        displayName = "Fish Cooked";
	};	
	class A3PL_Fish_Burned: Strategic
	{
		model = "\A3FL_Food\Food\A3PL_FishBurned";
        displayName = "Fish Burned";
	};
	class A3PL_LettuceItem: Strategic
	{
		model = "\A3FL_Food\Food\A3PL_Lettuce.p3d";
		displayName = "Lettuce";	
	};	
	class A3PL_Salad: Strategic
	{
		model = "\A3FL_Food\Food\A3PL_Salad.p3d";
		displayName = "Salad";	
	};

	//Burger Stuff
	class A3PL_Burger_Bun: Strategic
	{
        model = "\A3FL_Food\Food\A3PL_Burger_Bun.p3d";
        displayName = "Burger Bun";		
	};
	class A3PL_Burger_Raw: Strategic
	{
        model = "\A3FL_Food\Food\A3PL_Burger_Raw.p3d";
        displayName = "Burger Raw";
	};
	class A3PL_Burger_Cooked: Strategic
	{
        model = "\A3FL_Food\Food\A3PL_Burger_Cooked.p3d";
        displayName = "Burger Cooked";
	};
	class A3PL_Burger_Burnt: Strategic
	{
        model = "\A3FL_Food\Food\A3PL_Burger_Burnt.p3d";
        displayName = "Burger Burnt";		
	};
	class A3PL_Burger_Full: Strategic
	{
        model = "\A3FL_Food\Food\A3PL_Burger_Full.p3d";
        displayName = "Burger Full";		
	};

	//Taco
	class A3PL_TacoShell: Strategic
	{
		model = "\A3FL_Food\Food\A3PL_TacoShell.p3d";
		displayName = "Taco Shell";	
	};	
	class A3PL_Taco: Strategic
	{
		model = "\A3FL_Food\Food\A3PL_Taco.p3d";
		displayName = "Taco";	
	};
};