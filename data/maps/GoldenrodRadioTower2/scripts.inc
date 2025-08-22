GoldenrodRadioTower2_MapScripts::
	.byte 0

GoldenrodRaidoTower2_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_3 GoldenrodRadioTower2_Text_GruntM4Seen, GoldenrodRadioTower2_Text_GruntM4Beaten
	msgbox GoldenrodRadioTower2_Text_GruntM4After, MSGBOX_AUTOCLOSE
	end
GoldenrodRaidoTower2_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_4 GoldenrodRadioTower2_Text_GruntM5Seen, GoldenrodRadioTower2_Text_GruntM5Beaten
	msgbox GoldenrodRadioTower2_Text_GruntM5After, MSGBOX_AUTOCLOSE
	end
GoldenrodRaidoTower2_EventScript_Grunt5::
	trainerbattle_single TRAINER_GRUNT_5 GoldenrodRadioTower2_Text_GruntM6Seen, GoldenrodRadioTower2_Text_GruntM6Beaten
	msgbox GoldenrodRadioTower2_Text_GruntM6After, MSGBOX_AUTOCLOSE
	end
GoldenrodRaidoTower2_EventScript_GruntF2::
	trainerbattle_single TRAINER_GRUNT_26 GoldenrodRadioTower2_Text_GruntF2Seen, GoldenrodRadioTower2_Text_GruntF2Beaten
	msgbox GoldenrodRadioTower2_Text_GruntF2After, MSGBOX_AUTOCLOSE
	end

GoldenrodRadioTower2_EventScript_Sign1::
	lock
	msgbox GoldenrodRadioTower2_Text_SalesSign, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodRadioTower2_EventScript_Sign2::
	lock
	msgbox GoldenrodRadioTower2_Text_OakTalkSign, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodRadioTower2_EventScript_Boy::
	lock
	faceplayer
	msgbox GoldenrodRadioTower2_Text_SuperNerd, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodRadioTower2_EventScript_Policeman::
	lock
	faceplayer
	msgbox GoldenrodRadioTower2_Text_Policeman, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodRadioTower2_EventScript_Buena::
	lock
	faceplayer
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 6, GoldenrodRadioTower2_EventScript_Buena2
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 7, GoldenrodRadioTower2_EventScript_Buena2
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 8, GoldenrodRadioTower2_EventScript_Buena2
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 9, GoldenrodRadioTower2_EventScript_Buena2
	msgbox GoldenrodRadioTower2_Text_BuenaShowPromo, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodRadioTower2_EventScript_Buena2::
	msgbox RadioTower2FBuenaPasswordIsHelpText, MSGBOX_DEFAULT
	closemessage
	release
	end


GoldenrodRadioTower2_EventScript_Teacher::
	lock
	faceplayer
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 6, GoldenrodRadioTower2_EventScript_Teacher2
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 7, GoldenrodRadioTower2_EventScript_Teacher2 
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 8, GoldenrodRadioTower2_EventScript_Teacher2 
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 9, GoldenrodRadioTower2_EventScript_Teacher2 
	msgbox GoldenrodRadioTower2_Text_Teacher, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodRadioTower2_EventScript_Teacher2::
	msgbox GoldenrodRadioTower2_Text_TeacherRockets, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodRadioTower2_EventScript_Jigglypuff::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_JIGGLYPUFF, CRY_MODE_NORMAL
	msgbox GoldenrodRadioTower2_Text_Jigglypuff, MSGBOX_DEFAULT
	waitmoncry
	release
	end

RadioTower2FBuenaPasswordIsHelpText:
	.string "BUENA: Huh? Today's password?\n"
	.string "HELP, of course!$"

GoldenrodRadioTower2_Text_SuperNerd:
	.string "You can listen to the radio\n"
	.string "anywhere. Tune in!$"

GoldenrodRadioTower2_Text_Policeman:
	.string "Restricted access beyond this\n"
	.string "point.$"

GoldenrodRadioTower2_Text_Teacher:
	.string "Lullabies on the radio may make\n"
	.string "POKéMON sleep.$"

GoldenrodRadioTower2_Text_TeacherRockets:
	.string "Why would they want to take over\n"
	.string "the RADIO TOWER?$"

GoldenrodRadioTower2_Text_Jigglypuff:
	.string "JIGGLYPUFF: Jiggly…$"

GoldenrodRadioTower2_Text_BlackBelt1:
	.string "Sorry. Authorized personnel only\n"
	.string "beyond this point.\p"
	.string "It wasn't that way before.\p"
	.string "There's something wrong with the\n"
	.string "DIRECTOR…$"

GoldenrodRadioTower2_Text_BlackBelt2:
	.string "Feel free to look around anywhere.\p"
	.string "The DIRECTOR is nice again, just\n"
	.string "as he was before.$"

GoldenrodRadioTower2_Text_GruntM4Seen:
	.string "Three years ago, TEAM ROCKET was\n"
	.string "forced to disband.\p"
	.string "But we're making a comeback here!$"

GoldenrodRadioTower2_Text_GruntM4Beaten:
	.string "Gwah! Don't get cute!$"

GoldenrodRadioTower2_Text_GruntM4After:
	.string "We won't let you ruin our plans\n"
	.string "for our comeback!$"

GoldenrodRadioTower2_Text_GruntM5Seen:
	.string "We're TEAM ROCKET, the exploiters\n"
	.string "of POKéMON!\p"
	.string "We love being evil! Scared?$"

GoldenrodRadioTower2_Text_GruntM5Beaten:
	.string "You think you're a hero?$"

GoldenrodRadioTower2_Text_GruntM5After:
	.string "We're not always evil. We just do\n"
	.string "whatever we like.$"

GoldenrodRadioTower2_Text_GruntM6Seen:
	.string "Hey, hey! Keep out of our way!$"

GoldenrodRadioTower2_Text_GruntM6Beaten:
	.string "Arggh. I give up.$"

GoldenrodRadioTower2_Text_GruntM6After:
	.string "Our EXECUTIVES are trying to take\n"
	.string "this place over.\p"
	.string "They have some big plan. I wonder\n"
	.string "what that is?$"

GoldenrodRadioTower2_Text_GruntF2Seen:
	.string "Hahaha!\p"
	.string "How boring. It was far too easy\n"
	.string "to take over this place!\p"
	.string "Come on, keep me amused!$"

GoldenrodRadioTower2_Text_GruntF2Beaten:
	.string "Wh-who are you?$"

GoldenrodRadioTower2_Text_GruntF2After:
	.string "You beat me, and I won't forget\n"
	.string "it!$"

GoldenrodRadioTower2_Text_BuenaShowPromo:
	.string "BUENA: Tune in to my PASSWORD\n"
	.string "SHOW!$"

GoldenrodRadioTower2_Text_SalesSign:
	.string "2F SALES$"

GoldenrodRadioTower2_Text_OakTalkSign:
	.string "PROF.OAK'S POKéMON TALK\p"
	.string "The Hottest Show on the Air!$"

GoldenrodRadioTower2_Text_PokemonRadioSign:
	.string "Anywhere, Anytime POKéMON Radio$"
