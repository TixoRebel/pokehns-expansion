.set LOCALID_UNION_CAVE_LAPRAS, 6

UnionCave3_MapScripts::
	.byte 0

UnionCave3_EventScript_CooltrainerNick::
	trainerbattle_single TRAINER_NICK, UnionCave3_Text_CooltrainermNickSeen, UnionCave3_Text_CooltrainermNickBeaten
	msgbox UnionCave3_Text_CooltrainermNickAfter, MSGBOX_AUTOCLOSE
	end

UnionCave3_EventScript_CooltrainerfGwen::
	trainerbattle_single TRAINER_GWEN, UnionCave3_Text_CooltrainerfGwenSeen, UnionCave3_Text_CooltrainerfGwenBeaten
	msgbox UnionCave3_Text_CooltrainerfGwenAfter, MSGBOX_AUTOCLOSE
	end

UnionCave3_EventScript_CooltrainerfEmma::
	trainerbattle_single TRAINER_EMMA, UnionCave3_Text_CooltrainerfEmmaSeen, UnionCave3_Text_CooltrainerfEmmaBeaten
	msgbox UnionCave3_Text_CooltrainerfEmmaAfter, MSGBOX_AUTOCLOSE
	end

UnionCave3_EventScript_Lapras::
	lock
	faceplayer
	playmoncry SPECIES_LAPRAS, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setvar VAR_LAST_TALKED, LOCALID_UNION_CAVE_LAPRAS
	setwildbattle SPECIES_LAPRAS, 20
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, UnionCave3_EventScript_Defeated_Lapras
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, UnionCave3_EventScript_Defeated_Lapras
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, UnionCave3_EventScript_Defeated_Lapras
	release
UnionCave3_EventScript_Defeated_Lapras::
	setflag FLAG_HIDE_UNION_CAVE_LAPRAS
	goto Common_EventScript_RemoveStaticPokemon
	end


UnionCave3_EventScript_Item_Ether::
	finditem ITEM_ETHER
	end

UnionCave3_EventScript_Item_HyperPotion::
	finditem ITEM_HYPER_POTION
	end

UnionCave3_EventScript_Item_MaxRevive::
	finditem ITEM_MAX_REVIVE
	end

UnionCave3_Text_CooltrainermNickSeen:
	.string "There are two kinds of people.\p"
	.string "Those who have style, and those\n"
	.string "who don't.\p"
	.string "What kind of person are you?$"

UnionCave3_Text_CooltrainermNickBeaten:
	.string "You've got dazzling style!$"

UnionCave3_Text_CooltrainermNickAfter:
	.string "Your POKéMON style is stunning and\n"
	.string "colorful, I admit.\p"
	.string "You'll just keep getting better!$"

UnionCave3_Text_CooltrainerfGwenSeen:
	.string "I'm in training. Care for a round?$"

UnionCave3_Text_CooltrainerfGwenBeaten:
	.string "Aww, no! You're too good for me.$"

UnionCave3_Text_CooltrainerfGwenAfter:
	.string "I'm going to train by myself until I\n"
	.string "improve.$"

UnionCave3_Text_CooltrainerfEmmaSeen:
	.string "If the POKéMON I liked were there,\n"
	.string "I'd go anywhere.\p"
	.string "That's what a real trainer does.$"

UnionCave3_Text_CooltrainerfEmmaBeaten:
	.string "I'd rather pet my babies than this!$"

UnionCave3_Text_CooltrainerfEmmaAfter:
	.string "Just once a week, a POKéMON comes to\n"
	.string "the water's edge.\p"
	.string "I wanted to see that POKéMON…$"
