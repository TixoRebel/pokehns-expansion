Mahogany_43Gate_MapScripts::
	.byte 0

Mahogany_43Gate_EventScript_Cop::
	goto_if_ge VAR_GOLDENROD_CITY_STATE, 11, Mahogany_43Gate_EventScript_CopAfter
	msgbox Route43MahoganyGate_Text_Officer, MSGBOX_NPC
	end

Mahogany_43Gate_EventScript_CopAfter::
	msgbox Route43MahoganyGate_Text_Officer_RocketsCleared, MSGBOX_NPC
	end

Route43MahoganyGate_Text_Officer:
    .string "Only people headed up to LAKE OF\n"
    .string "RAGE have been through here lately.$"

Route43MahoganyGate_Text_Officer_RocketsCleared:
    .string "Nobody goes up to LAKE OF RAGE\n"
    .string "these days.$"

