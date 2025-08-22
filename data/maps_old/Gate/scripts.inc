Gate_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GateRocket_OnFrame
	.byte 0

GateRocket_OnFrame::
	map_script_2 VAR_TEMP_0, 0, GateRocketChecker
	.2byte 0

GateRocketChecker::
	setvar VAR_TEMP_0, 1
	goto_if_eq VAR_MAHOGANY_TOWN_STATE, 1, GateRocket_EventScript_Shakedown
	goto_if_eq VAR_MAHOGANY_TOWN_STATE, 2, GateRocket_EventScript_Shakedown
	goto_if_eq VAR_MAHOGANY_TOWN_STATE, 3, GateRocket_EventScript_Shakedown
	goto_if_eq VAR_MAHOGANY_TOWN_STATE, 4, GateRocket_EventScript_Shakedown
	goto_if_eq VAR_MAHOGANY_TOWN_STATE, 5, GateRocket_EventScript_Shakedown
	end

GateRocket_EventScript_Shakedown::
	lock
	showmoneybox 0, 0
	msgbox GateRocket_Text_TollFee, MSGBOX_DEFAULT
	checkmoney 500
	goto_if_eq VAR_RESULT, FALSE, GateRocket_EventScript_ShakedownBroke
	removemoney 500
	playse SE_SHOP
	updatemoneybox
	msgbox GateRocket_Text_ThankYou, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

GateRocket_EventScript_ShakedownBroke::
	msgbox GateRocket_Text_AllYouGot, MSGBOX_DEFAULT
	removemoney 99999
	playse SE_SHOP
	updatemoneybox
	msgbox GateRocket_Text_ThankYou, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

GateRocket_EventScript_Policeman::
	lock
	faceplayer
	goto_if_set FLAG_GOT_TM_FROM_MAHOGANY_COP, GateRocket_EventScript_PolicemanAfter
	msgbox Route43Gate_Text_OfficerFoundTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_SLUDGE_BOMB
	setflag FLAG_GOT_TM_FROM_MAHOGANY_COP
	closemessage
	release
	end

GateRocket_EventScript_PolicemanAfter::
	msgbox Route43Gate_Text_OfficerAvoidGrass, MSGBOX_DEFAULT
	closemessage
	release
	end

GateRocket_EventScript_Rockets::
	msgbox GateRocket_Text_MakingABundle, MSGBOX_NPC
	end

GateRocket_Text_TollFee:
    .string "Hold it there, kiddo!\p"
    .string "The toll is ¥500 to go\n"
    .string "through.$"

GateRocket_Text_ThankYou:
    .string "Thank you very much!$"

GateRocket_Text_AllYouGot:
    .string "Then pay what you have, please.$"

GateRocket_Text_MakingABundle:
    .string "He-he-he. We're making a bundle.\p"
    .string "Everyone wants to see what's going\n"
    .string "on up at LAKE OF RAGE.$"

Route43Gate_Text_OfficerFoundTM:
    .string "I got chased from my post by these\n"
    .string "thugs in black.\p"
    .string "They left this behind.\p"
    .string "It makes me uncomfortable. Could\n"
    .string "you take it away?$"

Text_ReceivedTM30:
    .string "{PLAYER} received TM36.$"

Route43Gate_Text_OfficerAvoidGrass:
    .string "Use this gate to avoid walking in\n"
    .string "the grass.$"
