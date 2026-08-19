class cfgPatches
{
	class A3PL_Objects_Medical
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3PL_Cars"};
	};	
};
class cfgVehicles
{
	class A3PL_Objects;
	class A3PL_Medical_Cast: A3PL_Objects
	{
		_generalMacro = "A3PL_Medical_Cast";
        model = "\A3PL_Objects\medical\A3PL_Cast.p3d";
        displayName = "A3PL Cast";
	};
	class A3PL_Medical_Endotracheal: A3PL_Objects
	{
		_generalMacro = "A3PL_Medical_Endotracheal";
        model = "\A3PL_Objects\medical\A3PL_Endotracheal.p3d";
        displayName = "A3PL Endotracheal";
	};
	class A3PL_Medical_Icepack: A3PL_Objects
	{
		_generalMacro = "A3PL_Medical_Icepack";
        model = "\A3PL_Objects\medical\A3PL_Icepack.p3d";
        displayName = "A3PL Icepack";
	};
	class A3PL_Medical_Kit: A3PL_Objects
	{
		_generalMacro = "A3PL_Medical_Kit";
        model = "\A3PL_Objects\medical\A3PL_Kit.p3d";
        displayName = "A3PL Kit";
	};
	class A3PL_Medical_OxygenMask: A3PL_Objects
	{
		_generalMacro = "A3PL_Medical_OxygenMask";
        model = "\A3PL_Objects\medical\A3PL_OxygenMask.p3d";
        displayName = "A3PL Oxygen Mask";
	};
	class A3PL_Medical_Splint: A3PL_Objects
	{
		_generalMacro = "A3PL_Medical_Splint";
        model = "\A3PL_Objects\medical\A3PL_Splint.p3d";
        displayName = "A3PL Splint";
	};	
};