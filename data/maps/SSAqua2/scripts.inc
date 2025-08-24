.set LOCALID_SSAQUA2_SAILORLOOKING, 10

SSAqua2_MapScripts::
	.byte 0

SSAqua2_EventScript_Trigger::
	lock
	turnobject LOCALID_SSAQUA2_SAILORLOOKING, DIR_EAST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox SSAqua2_Text_FastShipOnDutySailor, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0 
	turnobject LOCALID_SSAQUA2_SAILORLOOKING, DIR_SOUTH
	release
	end

SSAqua2_EventScript_SailorLookingForBuddy::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_SSAQUA_SAILOR, SSAqua2_EventScript_SailorLookingFoundBuddy
	msgbox SSAqua2_Text_FastShipOnDutySailor, MSGBOX_DEFAULT
	closemessage
	release
	end

SSAqua2_EventScript_SailorLookingFoundBuddy::
	msgbox SSAqua2_Text_FastShipOnDutySailorThanks, MSGBOX_DEFAULT
	goto_if_lt VAR_SSAQUA_STATE, 5, SSAqua2_EventScript_SailorGirl
	closemessage
	release
	end
SSAqua2_EventScript_SailorGirl::
	msgbox SSAqua2_Text_FastShipOnDutySailorSawGirl, MSGBOX_DEFAULT
	closemessage
	release
	end

SSAqua2_EventScript_SleepySailor::
	msgbox SSAqua2_Text_FastShipOnDutySailorDirections, MSGBOX_NPC
	end

SSAqua2_EventScript_Barfcan::
	msgbox SSAqua2_Text_BarfCan, MSGBOX_SIGN
	end

SSAqua2_Text_BarfCan:
    .string "Yuck!\n"
    .string "Shouldn't have looked!$"

SSAqua2_Text_FastShipOnDutySailor:
	.string "Hey, kid. Could I get you to\n"
	.string "look for my buddy?\p"
	.string "He's goofing off somewhere,\n"
	.string "that lazy bum!\p"
	.string "I want to go find him, but I'm\n"
	.string "on duty right now.$"

SSAqua2_Text_FastShipOnDutySailorRefused:
	.string "Oh, gee…\p"
	.string "The CAPTAIN will be furious…$"

SSAqua2_Text_FastShipOnDutySailorThanks:
	.string "Thanks, kid! I chewed him out\n"
	.string "good so he'll quit slacking off!$"

SSAqua2_Text_FastShipOnDutySailorSawGirl:
	.string "A little girl?\p"
	.string "I may have seen her go by here.$"

SSAqua2_Text_FastShipOnDutySailorDirections:
	.string "The dining room is up ahead.\p"
	.string "The stairs at the end lead to\n"
	.string "the CAPTAIN's cabin.$"

SSAqua2_EventScript_Jeff::
	trainerbattle_single TRAINER_JEFF SSAqua2_Text_SailorJeffSeen, SSAqua2_Text_SailorJeffBeaten
	msgbox SSAqua2_Text_SailorJeffAfter, MSGBOX_AUTOCLOSE
	end

SSAqua2_Text_SailorJeffSeen:
	.string "Nothing beats a battle when\n"
	.string "I'm on my break.$"

SSAqua2_Text_SailorJeffBeaten:
	.string "Win or lose, my break's over!$"

SSAqua2_Text_SailorJeffAfter:
	.string "I guess I can't win if I don't\n"
	.string "get serious.$"

SSAqua2_EventScript_Debra::
	trainerbattle_single TRAINER_DEBRA SSAqua2_Text_PicnickerDebraSeen, SSAqua2_Text_PicnickerDebraBeaten
	msgbox SSAqua2_Text_PicnickerDebraAfter, MSGBOX_AUTOCLOSE
	end

SSAqua2_Text_PicnickerDebraSeen:
	.string "I'm so bored. Want to battle?$"

SSAqua2_Text_PicnickerDebraBeaten:
	.string "Yow! You're too strong!$"

SSAqua2_Text_PicnickerDebraAfter:
	.string "SAFFRON, CELADON… I hear there\n"
	.string "are many big cities in KANTO.$"

SSAqua2_EventScript_Fritz::
	trainerbattle_single TRAINER_FRITZ SSAqua2_Text_JugglerFritzSeen, SSAqua2_Text_JugglerFritzBeaten
	msgbox SSAqua2_Text_JugglerFritzAfter, MSGBOX_AUTOCLOSE
	end

SSAqua2_Text_JugglerFritzSeen:
	.string "Urrf… I'm seasick!$"

SSAqua2_Text_JugglerFritzBeaten:
	.string "I can't move anymore…$"

SSAqua2_Text_JugglerFritzAfter:
	.string "No more ships for me.\n"
	.string "Next time,\p"
	.string "I'm taking the MAGNET TRAIN.$"

SSAqua2_EventScript_Garrett::
	trainerbattle_single TRAINER_GARRETT SSAqua2_Text_SailorGarrettSeen, SSAqua2_Text_SailorGarrettBeaten
	msgbox SSAqua2_Text_SailorGarrettAfter, MSGBOX_AUTOCLOSE
	end

SSAqua2_Text_SailorGarrettSeen:
	.string "This is where we sailors work!$"

SSAqua2_Text_SailorGarrettBeaten:
	.string "I lost on my home field…$"

SSAqua2_Text_SailorGarrettAfter:
	.string "We get different passengers\n"
	.string "from VERMILION CITY to\p"
	.string "OLIVINE CITY.$"

SSAqua2_EventScript_Jonah::
	trainerbattle_single TRAINER_JONAH SSAqua2_Text_FisherJonahSeen, SSAqua2_Text_FisherJonahBeaten
	msgbox SSAqua2_Text_FisherJonahAfter, MSGBOX_AUTOCLOSE
	end

SSAqua2_Text_FisherJonahSeen:
	.string "Even though we're out on the\n"
	.string "sea, I can't fish!\p"
	.string "This is boring! Let's battle!$"

SSAqua2_Text_FisherJonahBeaten:
	.string "I… I'm not bored anymore…$"

SSAqua2_Text_FisherJonahAfter:
	.string "I plan to fish off\n"
	.string "VERMILION's pier.$"

SSAqua2_EventScript_Wai::
	trainerbattle_single TRAINER_WAI SSAqua2_Text_BlackbeltWaiSeen, SSAqua2_Text_BlackbeltWaiBeaten
	msgbox SSAqua2_Text_BlackbeltWaiAfter, MSGBOX_AUTOCLOSE
	end

SSAqua2_Text_BlackbeltWaiSeen:
	.string "I'm building up my legs by\n"
	.string "bracing\p"
	.string "against the ship's rocking!$"

SSAqua2_Text_BlackbeltWaiBeaten:
	.string "Rocked and rolled over!$"

SSAqua2_Text_BlackbeltWaiAfter:
	.string "I couldn't find the KARATE KING\n"
	.string "in JOHTO.\p"
	.string "He's supposed to be training in\n"
	.string "a cave somewhere.$"

SSAqua2_EventScript_Kenneth::
	trainerbattle_single TRAINER_KENNETH SSAqua2_Text_SailorKennethSeen, SSAqua2_Text_SailorKennethBeaten
	msgbox SSAqua2_Text_SailorKennethAfter, MSGBOX_AUTOCLOSE
	end

SSAqua2_Text_SailorKennethSeen:
	.string "I'm a sailor man!\p"
	.string "But I'm training POKéMON, so I\n"
	.string "can become the CHAMP!$"

SSAqua2_Text_SailorKennethBeaten:
	.string "My lack of training is obvious…$"

SSAqua2_Text_SailorKennethAfter:
	.string "Eight BADGES! They must prove\n"
	.string "that you've beaten\p"
	.string "GYM LEADERS.\p"
	.string "No wonder you're so good!$"

SSAqua2_EventScript_Shirley::
	trainerbattle_single TRAINER_SHIRLEY SSAqua2_Text_TeacherShirleySeen, SSAqua2_Text_TeacherShirleyBeaten
	msgbox SSAqua2_Text_TeacherShirleyAfter, MSGBOX_AUTOCLOSE
	end

SSAqua2_Text_TeacherShirleySeen:
	.string "Don't lay a finger on my\n"
	.string "students!$"

SSAqua2_Text_TeacherShirleyBeaten:
	.string "Aaack!$"

SSAqua2_Text_TeacherShirleyAfter:
	.string "We're on a field trip to the\n"
	.string "RUINS outside VIOLET.$"

SSAqua2_EventScript_Nate::
	trainerbattle_single TRAINER_NATE SSAqua2_Text_SchoolboyNateSeen, SSAqua2_Text_SchoolboyNateBeaten
	msgbox SSAqua2_Text_SchoolboyNateAfter, MSGBOX_AUTOCLOSE
	end

SSAqua2_Text_SchoolboyNateSeen:
	.string "Do you know the RUINS OF ALPH?$"

SSAqua2_Text_SchoolboyNateBeaten:
	.string "Yaargh!$"

SSAqua2_Text_SchoolboyNateAfter:
	.string "Radios pick up strange signals\n"
	.string "inside the RUINS.$"

SSAqua2_EventScript_Ricky::
	trainerbattle_single TRAINER_RICKY SSAqua2_Text_SchoolboyRickySeen, SSAqua2_Text_SchoolboyRickyBeaten
	msgbox SSAqua2_Text_SchoolboyRickyAfter, MSGBOX_AUTOCLOSE
	end

SSAqua2_Text_SchoolboyRickySeen:
	.string "There are some odd stone panels\n"
	.string "in the RUINS OF ALPH.$"

SSAqua2_Text_SchoolboyRickyBeaten:
	.string "I was done in!$"

SSAqua2_Text_SchoolboyRickyAfter:
	.string "I read that there are four of\n"
	.string "those stone panels.$"

