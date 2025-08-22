PowerPlant2_MapScripts::
	.byte 0


PowerPlant2_EventScript_Manager::
	lock
	faceplayer
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 0, PowerPlant2_EventScript_ManagerInitial
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 1, PowerPlant2_EventScript_ManagerDuringRocket
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 2, PowerPlant2_EventScript_ManagerDuringRocket
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 3, PowerPlant2_EventScript_ManagerDuringRocket
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 4, PowerPlant2_EventScript_ManagerDuringRocket
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 5, PowerPlant2_EventScript_ManagerDuringRocket
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 6, PowerPlant2_EventScript_ManagerCheckPart
	goto_if_ge VAR_KANTO_ROCKET_STORY_STATE, 7, PowerPlant2_EventScript_ManagerDone
	msgbox PowerPlant2_Text_ManagerMyBelovedGenerator, MSGBOX_DEFAULT
	closemessage
	release
	end

PowerPlant2_EventScript_ManagerInitial::
	msgbox PowerPlant2_Text_ManagerWhoWouldRuinMyGenerator, MSGBOX_DEFAULT
	closemessage
	setvar VAR_KANTO_ROCKET_STORY_STATE, 1
	release
	end

PowerPlant2_EventScript_ManagerDuringRocket::
	msgbox PowerPlant2_Text_ManagerIWontForgiveCulprit, MSGBOX_DEFAULT
	closemessage
	release
	end

PowerPlant2_EventScript_ManagerCheckPart::
	checkitem ITEM_MACHINE_PART
	goto_if_eq VAR_RESULT, FALSE, PowerPlant2_EventScript_ManagerDuringRocket
	removeitem ITEM_MACHINE_PART
	msgbox PowerPlant2_Text_ManagerThatsThePart, MSGBOX_DEFAULT
	msgbox PowerPlant2_Text_ManagerTakeThisTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_THUNDER
	msgbox PowerPlant2_Text_ManagerTM07IsZapCannon, MSGBOX_DEFAULT
	closemessage
	setvar VAR_KANTO_ROCKET_STORY_STATE, 7
	clearflag FLAG_HIDE_ROUTE25_MISTY
	setvar VAR_CERULEAN_CITY_STATE, 2
	setflag FLAG_HIDE_POWER_PLANT_ENGINEER
	setflag FLAG_RETURNED_MACHINE_PART
	release
	end

PowerPlant2_EventScript_ManagerDone::
	msgbox PowerPlant2_Text_ManagerMyBelovedGenerator, MSGBOX_DEFAULT
	closemessage
	release
	end

PowerPlant2_EventScript_Engineer::
	msgbox PowerPlant2_Text_Engineer, MSGBOX_NPC
	end

PowerPlant2_Text_ManagerWhoWouldRuinMyGenerator:
	.string "MANAGER: I, I, I'm ready to blast\n"
	.string "someone!\p"
	.string "Who would dare ruin my\n"
	.string "generator?\p"
	.string "I spent so much time on it!\p"
	.string "If I catch him, he's going to\n"
	.string "get a taste of my ZAP CANNON!$"

PowerPlant2_Text_ManagerIWontForgiveCulprit:
	.string "MANAGER: I won't forgive him!\p"
	.string "The culprit can cry and\n"
	.string "apologize,\p"
	.string "but I'll still hammer him!\p"
	.string "Gahahahah!$"

PowerPlant2_Text_ManagerThatsThePart:
	.string "MANAGER: Ah! Yeah!\p"
	.string "That's the missing PART from my\n"
	.string "beloved generator! You found it?$"

PowerPlant2_Text_ManagerTakeThisTM:
	.string "Wahah! Thanks!\p"
	.string "Here! Take this TM as a reward!$"

PowerPlant2_Text_ManagerTM07IsZapCannon:
	.string "MANAGER: That TM is THUNDER.\p"
	.string "It's a powerful technique!\p"
	.string "It's not what anyone would\n"
	.string "consider accurate, but it packs a\l"
	.string "wallop!$"

PowerPlant2_Text_ManagerMyBelovedGenerator:
	.string "MANAGER: My beloved generator!\p"
	.string "Keep pumping the electricity out!$"

PowerPlant2_Text_Engineer:
	.string "This door is unsafe without power.$"

