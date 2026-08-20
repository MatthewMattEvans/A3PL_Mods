#include "\fyd_common\script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "\fyd_common\XEH_PREP.hpp"
PREP_RECOMPILE_END;

[
    QGVAR(landSpeed),
    "LIST",
    [localize LSTRING(Speed_DisplayName), localize LSTRING(Speed_Description)],
    ["fyd", localize LSTRING(Land_DisplayName)],
    [
        [SPEED_KMH, SPEED_MPH, SPEED_KNOT, SPEED_MS, SPEED_FPS, SPEED_FFF],
        [LSTRING(Speed_KMH), LSTRING(Speed_MPH), LSTRING(Speed_KNOT), LSTRING(Speed_MS), LSTRING(Speed_FPS), LSTRING(Speed_FFF)],
    0]
] call CBA_settings_fnc_init;

[
    QGVAR(seaSpeed),
    "LIST",
    [localize LSTRING(Speed_DisplayName), localize LSTRING(Speed_Description)],
    ["fyd", localize "str_a3_rscdisplaygarage_tab_naval"],
    [
        [SPEED_KMH, SPEED_MPH, SPEED_KNOT, SPEED_MS, SPEED_FPS, SPEED_FFF],
        [LSTRING(Speed_KMH), LSTRING(Speed_MPH), LSTRING(Speed_KNOT), LSTRING(Speed_MS), LSTRING(Speed_FPS), LSTRING(Speed_FFF)],
    0]
] call CBA_settings_fnc_init;

[
    QGVAR(heliSpeed),
    "LIST",
    [localize LSTRING(Speed_DisplayName), localize LSTRING(Speed_Description)],
    ["fyd", localize "STR_A3_TIME_TRIALS_HELI_NAME"],
    [
        [SPEED_KMH, SPEED_MPH, SPEED_KNOT, SPEED_MS, SPEED_FPS, SPEED_FFF],
        [LSTRING(Speed_KMH), LSTRING(Speed_MPH), LSTRING(Speed_KNOT), LSTRING(Speed_MS), LSTRING(Speed_FPS), LSTRING(Speed_FFF)],
    0]
] call CBA_settings_fnc_init;

[
    QGVAR(heliAlt),
    "LIST",
    [localize LSTRING(Alt_DisplayName), localize LSTRING(Alt_Description)],
    ["fyd", localize "STR_A3_TIME_TRIALS_HELI_NAME"],
    [[ALT_M, ALT_F, ALT_Y, ALT_R, ALT_A], [LSTRING(Alt_M), LSTRING(Alt_F), LSTRING(Alt_Y), LSTRING(Alt_R), LSTRING(Alt_A)], 0]
] call CBA_settings_fnc_init;

[
    QGVAR(planeSpeed),
    "LIST",
    [localize LSTRING(Speed_DisplayName), localize LSTRING(Speed_Description)],
    ["fyd", localize "STR_A3_Showcase_FixedWings_Mission_Name"],
    [
        [SPEED_KMH, SPEED_MPH, SPEED_KNOT, SPEED_MS, SPEED_FPS, SPEED_FFF],
        [LSTRING(Speed_KMH), LSTRING(Speed_MPH), LSTRING(Speed_KNOT), LSTRING(Speed_MS), LSTRING(Speed_FPS), LSTRING(Speed_FFF)],
    0]
] call CBA_settings_fnc_init;

[
    QGVAR(planeAlt),
    "LIST",
    [localize LSTRING(Alt_DisplayName), localize LSTRING(Alt_Description)],
    ["fyd", localize "STR_A3_Showcase_FixedWings_Mission_Name"],
    [[ALT_M, ALT_F, ALT_Y, ALT_R, ALT_A], [LSTRING(Alt_M), LSTRING(Alt_F), LSTRING(Alt_Y), LSTRING(Alt_R), LSTRING(Alt_A)], 0]
] call CBA_settings_fnc_init;

ADDON = true;
