#define PERMITTED_TASKS [\
	"UpdateDetails",\
	"UpdateState",\
	"UpdateLargeImageKey",\
	"UpdateLargeImageText",\
	"UpdateSmallImageKey",\
	"UpdateSmallImageText",\
	"UpdateStartTimestamp",\
	"UpdateEndTimestamp",\
	"UpdatePartySize",\
	"UpdatePartyMax",\
	"UpdateButtons"\
]

#define STRING_TASKS [\
	"UpdateDetails",\
	"UpdateState",\
	"UpdateLargeImageKey",\
	"UpdateLargeImageText",\
	"UpdateSmallImageKey",\
	"UpdateSmallImageText"\
]

if !(uiNamespace getVariable ["DiscordRichPresence_LoadSuccess",false]) exitwith {};
if (isNil "_this" || {!(_this isEqualType [])}) exitwith {};

// Update specific properties
{
	_x params [["_task","",[""]],["_value","",["",0,[]]]];
	if (_task in PERMITTED_TASKS) then {
		if (_task in STRING_TASKS) then {_value = text _value};
		if (_task == "UpdateButtons") then {_value = text(_value joinString toString[1])};
		"DiscordRichPresence" callExtension [_task,[_value]];
	};
} foreach _this;

// Send update to discord
"DiscordRichPresence" callExtension ["UpdatePresence",[]];
