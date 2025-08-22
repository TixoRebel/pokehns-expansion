GoldenrodRadioTower3_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, GoldenrodRadioTower3_OnLoad
	.byte 0

GoldenrodRadioTower3_OnLoad::
	call_if_set FLAG_HIDE_RADIOTOWER_GATE, GoldenrodRadioTower3_HideGate
	end
	
GoldenrodRadioTower3_HideGate::
	setmetatile 25, 8, 0x335, FALSE
	setmetatile 25, 9, 0x335, FALSE

	setmetatile 26, 8, 0X334, FALSE
	setmetatile 26, 9, 0X334, FALSE

	setmetatile 27, 8, 0X334, FALSE
	setmetatile 27, 9, 0X334, FALSE

	setmetatile 28, 8, 0X334, FALSE
	setmetatile 28, 9, 0X334, FALSE

	setmetatile 29, 8, 0X334, FALSE
	setmetatile 29, 9, 0X334, FALSE

	setmetatile 30, 8, 0X334, FALSE
	setmetatile 30, 9, 0X334, FALSE

	setmetatile 31, 8, 0X334, FALSE
	setmetatile 31, 9, 0X334, FALSE
	return


GoldenrodRaidoTower3_EventScript_Grunt6::
	trainerbattle_single TRAINER_GRUNT_6 GoldenrodRadioTower3_Text_GruntM7Seen, GoldenrodRadioTower3_Text_GruntM7Beaten
	msgbox GoldenrodRadioTower3_Text_GruntM7After, MSGBOX_AUTOCLOSE
	end

GoldenrodRaidoTower3_EventScript_Grunt7::
	trainerbattle_single TRAINER_GRUNT_7 GoldenrodRadioTower3_Text_GruntM8Seen, GoldenrodRadioTower3_Text_GruntM8Beaten
	msgbox GoldenrodRadioTower3_Text_GruntM8After, MSGBOX_AUTOCLOSE
	end

GoldenrodRaidoTower3_EventScript_Grunt8::
	trainerbattle_single TRAINER_GRUNT_8 GoldenrodRadioTower3_Text_GruntM9Seen, GoldenrodRadioTower3_Text_GruntM9Beaten
	msgbox GoldenrodRadioTower3_Text_GruntM9After, MSGBOX_AUTOCLOSE
	end

GoldenrodRaidoTower3_EventScript_Scientist::
	trainerbattle_single TRAINER_MARC GoldenrodRadioTower3_Text_ScientistMarcSeen, GoldenrodRadioTower3_Text_ScientistMarcBeaten
	msgbox GoldenrodRadioTower3_Text_ScientistMarcAfter, MSGBOX_AUTOCLOSE
	end


GoldenrodRadioTower3_EventScript_Cooltrainer::
	lock
	faceplayer
	goto_if_set FLAG_GOT_SKILL_SWAP, GoldenrodRadioTower3_EventScript_Cooltrainer3
	goto_if_ge VAR_GOLDENROD_CITY_STATE, 10, GoldenrodRadioTower3_EventScript_Cooltrainer2

	msgbox GoldenrodRadioTower3_Text_CooltrainerFPleaseSave, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodRadioTower3_EventScript_Cooltrainer2::
	lock
	faceplayer
	msgbox GoldenrodRadioTower3_Text_CooltrainerFHeroGift, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_TM_SKILL_SWAP
	setflag FLAG_GOT_SKILL_SWAP
	msgbox GoldenrodRadioTower3_Text_CooltrainerFSunnyDay, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodRadioTower3_EventScript_Cooltrainer3::
	msgbox GoldenrodRadioTower3_Text_CooltrainerFMarvelous, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodRadioTower3_EventScript_Nerd::
	lock
	faceplayer
	msgbox GoldenrodRadioTower3_Text_SuperNerd, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodRadioTower3_EventScript_Gate::
	lock
	msgbox GoldenrodRadioTower3_Text_CardKeySlot, MSGBOX_SIGN
	goto_if_set FLAG_HIDE_RADIOTOWER_GATE, GoldenrodRadioTower3_EventScript_GateOpened
	checkitem ITEM_CARD_KEY
	goto_if_eq VAR_RESULT, TRUE, GoldenrodRadioTower3_EventScript_OpenGate
	closemessage
	release
	end


GoldenrodRadioTower3_EventScript_GateOpened::
	msgbox GoldenrodRadioTower3_Text_Open, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodRadioTower3_EventScript_OpenGate::
	msgbox GoldenrodRadioTower3_Text_InsertedCardKey, MSGBOX_SIGN
	call GoldenrodRadioTower3_HideGate
	playse SE_CLICK
	special DrawWholeMapView
	msgbox GoldenrodRadioTower3_Text_Open, MSGBOX_SIGN
	setflag FLAG_HIDE_RADIOTOWER_GATE
	closemessage
	release
	end

GoldenrodRadioTower3_EventScript_Sign1::
	lock
	msgbox GoldenrodRadioTower3_Text_PersonnelSign, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodRadioTower3_EventScript_Sign2::
	lock
	msgbox GoldenrodRadioTower3_Text_PokemonMusicSign, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodRadioTower3_Text_CardKeySlot:
	.string "It's the CARD KEY slot.$"

GoldenrodRadioTower3_Text_InsertedCardKey:
	.string "{PLAYER} inserted the CARD KEY.$"
 
GoldenrodRadioTower3_Text_Open:
	.string "The gate is open.$"

GoldenrodRadioTower3_Text_PersonnelSign:
	.string "3F PERSONNEL$"

GoldenrodRadioTower3_Text_PokemonMusicSign:
	.string "POKéMON MUSIC with Host DJ BEN$"

GoldenrodRadioTower3_Text_SuperNerd:
	.string "We have recordings of the cries\n"
	.string "of all POKéMON that have been\l"
	.string "found.\p"
	.string "We must have about 400 kinds.$"

GoldenrodRadioTower3_Text_GymGuideRockets:
	.string "To trainers, POKéMON are their\n"
	.string "beloved partners.\p"
	.string "It's terrible how TEAM ROCKET is\n"
	.string "trying to control POKéMON.$"

GoldenrodRadioTower3_Text_GymGuide:
	.string "We run 24 hours a day to broadcast\n"
	.string "entertaining programs.\p"
	.string "I'll do my best to run around the\n"
	.string "clock too!$"

GoldenrodRadioTower3_Text_CooltrainerFPleaseSave:
	.string "The TEAM ROCKET boss has locked\n"
	.string "himself in.\p"
	.string "But the DIRECTOR can open it.\p"
	.string "He's up on the fifth floor.\p"
	.string "Please save him!$"

GoldenrodRadioTower3_Text_CooltrainerFDirectorSafe:
	.string "Is the DIRECTOR safe?$"

GoldenrodRadioTower3_Text_CooltrainerFHeroGift:
	.string "Thank you! You're my hero!\p"
	.string "This is a token of my appreciation.$"

GoldenrodRadioTower3_Text_CooltrainerFSunnyDay:
	.string "It's SKILL SWAP. It swaps the ability\n"
	.string "of one POKéMON with another's.$"

GoldenrodRadioTower3_Text_CooltrainerFMarvelous:
	.string "You were simply marvelous!$"

GoldenrodRadioTower3_Text_GruntM7Seen:
	.string "I've been given strict orders.\p"
	.string "I'm to crush anyone who challenges\n"
	.string "TEAM ROCKET!$"

GoldenrodRadioTower3_Text_GruntM7Beaten:
	.string "What?!$"

GoldenrodRadioTower3_Text_GruntM7After:
	.string "I failed in my duties…\p"
	.string "ARCHER will be so upset...$"

GoldenrodRadioTower3_Text_GruntM8Seen:
	.string "It feels great ordering POKéMON\n"
	.string "to commit crimes.$"

GoldenrodRadioTower3_Text_GruntM8Beaten:
	.string "You're kidding!$"

GoldenrodRadioTower3_Text_GruntM8After:
	.string "I feel lousy over losing!\p"
	.string "Darn it! I hate useless POKéMON!$"

GoldenrodRadioTower3_Text_GruntM9Seen:
	.string "Why did the shutter open? Did you\n"
	.string "have something to do with this?$"

GoldenrodRadioTower3_Text_GruntM9Beaten:
	.string "I'm done for!$"

GoldenrodRadioTower3_Text_GruntM9After:
	.string "What?! You made it past our men in\n"
	.string "the UNDERGROUND?\p"
	.string "How could you?$"

GoldenrodRadioTower3_Text_ScientistMarcSeen:
	.string "An unknown child wandering here?\p"
	.string "Who are you?$"

GoldenrodRadioTower3_Text_ScientistMarcBeaten:
	.string "Tch! I took you too lightly!$"

GoldenrodRadioTower3_Text_ScientistMarcAfter:
	.string "Bwahahaha…\p"
	.string "I can transmit as strong a signal\n"
	.string "as I need from here.$"

