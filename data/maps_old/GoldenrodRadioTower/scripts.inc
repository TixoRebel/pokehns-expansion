GoldenrodRadioTower_MapScripts::
	.byte 0

GoldenrodRadioTower4_EventScript_Sign1::
	lock
	msgbox GoldenrodRadioTower4_Text_Studio2Sign, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodRadioTower4_EventScript_Sign2::
	lock
	msgbox GoldenrodRadioTower4_Text_ProductionSign, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodRaidoTower4_EventScript_Grunt28::
	trainerbattle_single TRAINER_GRUNT_28 GoldenrodRadioTower4_Text_GruntF4Seen, GoldenrodRadioTower4_Text_GruntF4Beaten
	msgbox GoldenrodRadioTower4_Text_GruntF4After, MSGBOX_AUTOCLOSE
	end

GoldenrodRaidoTower4_EventScript_Grunt9::
	trainerbattle_single TRAINER_GRUNT_9 GoldenrodRadioTower4_Text_GruntM10Seen, GoldenrodRadioTower4_Text_GruntM10Beaten
	msgbox GoldenrodRadioTower4_Text_GruntM10After, MSGBOX_AUTOCLOSE
	end

GoldenrodRaidoTower4_EventScript_Proton::
	trainerbattle_single TRAINER_PROTON_2 GoldenrodRadioTower4_Text_Proton_Seen, GoldenrodRadioTower4_Text_Proton_Beaten
	msgbox GoldenrodRadioTower4_Text_Proton_After, MSGBOX_AUTOCLOSE
	end


GoldenrodRadioTower4_EventScript_Fisher::
	lock
	faceplayer
	msgbox GoldenrodRadioTower4_Text_Fisher, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodRadioTower4_EventScript_Scientist::
	trainerbattle_single TRAINER_RICH GoldenrodRadioTower4_Text_ScientistRichSeen, GoldenrodRadioTower4_Text_ScientistRichBeaten
	msgbox GoldenrodRadioTower4_Text_ScientistRichAfter, MSGBOX_AUTOCLOSE
	end


GoldenrodRadioTower4_EventScript_Mary::
	lock
	faceplayer
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 6, GoldenrodRadioTower4_EventScript_Mary2
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 7, GoldenrodRadioTower4_EventScript_Mary2
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 8, GoldenrodRadioTower4_EventScript_Mary2
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 9, GoldenrodRadioTower4_EventScript_Mary2
	goto_if_unset FLAG_GOT_MARY_BRIGHT_POWDER, GoldenrodRadioTower4_EventScript_Mary3
	msgbox GoldenrodRadioTower4_Text_DJMaryAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodRadioTower4_EventScript_Mary2::
	msgbox GoldenrodRadioTower4_Text_DJMary, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodRadioTower4_EventScript_Mary3::
	msgbox GoldenrodRadioTower4_Text_DJMaryCleared, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_BRIGHT_POWDER
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox GoldenrodRadioTower4_Text_DJMaryPinkBow, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_GOT_MARY_BRIGHT_POWDER
	closemessage
	release
	end

GoldenrodRadioTower4_EventScript_Meowth::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
	msgbox GoldenrodRadioTower4_Text_Meowth, MSGBOX_DEFAULT
	waitmoncry
	release
	end


GoldenrodRadioTower4_Text_Proton_Seen:
	.string "PROTON: Now wait just one second!\p"
	.string "Aren't you the one who got in our\n"
	.string "way at SLOWPOKE WELL?\p"
	.string "I see... You're doing all this\n"
	.string "because you want to make me angry.\l"
	.string "Be careful!\p"
	.string "But since you seem to wish it, I'll\n"
	.string "show you the full extent of a TEAM\l"
	.string "ROCKET EXECUTIVE'S wrath!$"

GoldenrodRadioTower4_Text_Proton_Beaten:
	.string "Phew...$"

GoldenrodRadioTower4_Text_Proton_After:
	.string "PROTON: You may have won this\n"
	.string "time... But all you did was make\p"
	.string "TEAM ROCKET's wrath grow.$"

GoldenrodRadioTower4_Text_Fisher:
	.string "I listened to the radio while I was\n"
	.string "at the RUINS.\p"
	.string "I heard a strange broadcast there.$"

GoldenrodRadioTower4_Text_DJMary:
	.string "MARY: Why? Why do I have to suffer\n"
	.string "through this?\p"
	.string "MEOWTH, help me!$"

GoldenrodRadioTower4_Text_DJMaryCleared:
	.string "MARY: Oh! You're my little savior!\p"
	.string "Will you take this as my thanks?$"

GoldenrodRadioTower4_Text_DJMaryPinkBow:
	.string "MARY: It's good for dodging the"
	.string "enemy's attacks.$"

GoldenrodRadioTower4_Text_DJMaryAfter:
	.string "MARY: Please tune into me on PROF.\n"
	.string "OAK'S POKéMON TALK show!$"

GoldenrodRadioTower4_Text_Meowth:
	.string "MEOWTH: Meowth…$"

GoldenrodRadioTower4_Text_GruntM10Seen:
	.string "You plan to rescue the DIRECTOR?\p"
	.string "That won't be possible because I'm\n"
	.string "going to beat you!$"

GoldenrodRadioTower4_Text_GruntM10Beaten:
	.string "No! Unbelievable!$"

GoldenrodRadioTower4_Text_GruntM10After:
	.string "I don't believe it! I was beaten!$"

GoldenrodRadioTower4_Text_ExecutiveM2Seen:
	.string "Stop! I'm known as the TEAM ROCKET\n"
	.string "fortress!\p"
	.string "You're not taking another step!$"

GoldenrodRadioTower4_Text_ExecutiveM2Beaten:
	.string "The fortress came down!$"

GoldenrodRadioTower4_Text_ExecutiveM2After:
	.string "You've earned my respect, so here's\n"
	.string "some advice.\p"
	.string "It's not too late. You can still turn\n"
	.string "back.$"

GoldenrodRadioTower4_Text_GruntF4Seen:
	.string "Don't I think POKéMON are cute?\p"
	.string "I'll think my POKéMON are cute--\p"
	.string "after they beat yours!$"

GoldenrodRadioTower4_Text_GruntF4Beaten:
	.string "Oh, no! They're so useless!$"

GoldenrodRadioTower4_Text_GruntF4After:
	.string "I love my beautiful self!\p"
	.string "Who cares about POKéMON?$"

GoldenrodRadioTower4_Text_ScientistRichSeen:
	.string "Most excellent.\p"
	.string "This RADIO TOWER will fulfill our\n"
	.string "grand design.$"

GoldenrodRadioTower4_Text_ScientistRichBeaten:
	.string "Hmmm…\p"
	.string "All grand plans come with snags.$"

GoldenrodRadioTower4_Text_ScientistRichAfter:
	.string "Do you honestly believe you can stop\n"
	.string "TEAM ROCKET?$"

GoldenrodRadioTower4_Text_ProductionSign:
	.string "4F PRODUCTION$"

GoldenrodRadioTower4_Text_Studio2Sign:
	.string "4F STUDIO 2$"
