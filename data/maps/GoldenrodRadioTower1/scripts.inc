.set LOCALID_GOLDENROD_RADIOTOWER_WHITNEY, 6
.set LOCALID_GOLDENROD_RADIOTOWER_GRUNT, 3

GoldenrodRadioTower1_MapScripts::
	.byte 0

RadioTower1F_EventScript_Grunt::
	lock
	faceplayer
	msgbox RadioTower1F_Text_GruntM3Seen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_2,  RadioTower1F_Text_GruntM3Beaten
	msgbox RadioTower1F_Text_GruntM3After, MSGBOX_AUTOCLOSE
	turnobject LOCALID_GOLDENROD_RADIOTOWER_GRUNT, DIR_EAST
	applymovement2 LOCALID_GOLDENROD_RADIOTOWER_GRUNT, RadioTower1F_Movement_Rocket
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_GOLDENROD_RADIOTOWER_GRUNT
	setflag FLAG_HIDE_ROCKET_GOLDENROD_RADIOTOWER_1
	release
	end

RadioTower1F_Movement_Rocket::
	walk_in_place_right
	step_end

RadioTower1F_EventScript_Lass::
	lock
	faceplayer
	msgbox RadioTower1F_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_Youngster::
	lock
	faceplayer
	msgbox RadioTower1F_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_Whitney::
	lock
	faceplayer
	msgbox RadioTower1F_Text_Whitney1, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_GOLDENROD_RADIOTOWER_WHITNEY, DIR_SOUTH
	release
	end

RadioTower1F_Text_Whitney1::
	.string "WHITNEY: Hi!\p"
	.string "My name is WHITNEY!\p"
	.string "I heard about the Quiz to win a\n"
	.string "RADIO, so I came here to get\l"
	.string "one...\p"
	.string "But this Quiz is so hard!$"

RadioTower1F_Text_Whitney2::
	.string "WHITNEY: Wow, you did it!\p"
	.string "I thought the answer to the third\n"
	.string "question was surely apricorns!\l"
	.string "Oops!\p"
	.string "It's time to go back to the GYM!$"

RadioTower1F_EventScript_Reception::
	lock
	faceplayer
	msgbox RadioTower1F_Text_ReceptionistWelcome, MSGBOX_DEFAULT
	goto_if_unset FLAG_ENABLE_RADIO, RadioTower1F_EventScript_ReceptionOfferQuiz
	msgbox RadioTower1F_Text_ReceptionistNoTours, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_ReceptionOfferQuiz::
	msgbox RadioTower1F_Text_RadioCardWomanOfferQuiz, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, RadioTower1F_EventScript_ReceptionQuiz1
	msgbox RadioTower1F_Text_DeclineQuiz, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_ReceptionQuiz1::
	msgbox RadioTower1F_Text_QuizQuestion1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, RadioTower1F_EventScript_ReceptionQuiz2
	msgbox RadioTower1F_Text_WrongAnswer, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_ReceptionQuiz2::
	msgbox RadioTower1F_Text_QuizQuestion2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, RadioTower1F_EventScript_ReceptionQuiz3
	msgbox RadioTower1F_Text_WrongAnswer, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_ReceptionQuiz3::
	msgbox RadioTower1F_Text_QuizQuestion3, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, RadioTower1F_EventScript_ReceptionQuiz4
	msgbox RadioTower1F_Text_WrongAnswer, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_ReceptionQuiz4::
	msgbox RadioTower1F_Text_QuizQuestion4, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, RadioTower1F_EventScript_ReceptionQuiz5
	msgbox RadioTower1F_Text_WrongAnswer, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_ReceptionQuiz5::
	msgbox RadioTower1F_Text_QuizQuestion5, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, RadioTower1F_EventScript_ReceptionGiveRadio
	msgbox RadioTower1F_Text_WrongAnswer, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_ReceptionGiveRadio::
	msgbox RadioTower1F_Text_QuizWin, MSGBOX_DEFAULT
	closemessage
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_RADIO
	waitfanfare
	msgbox RadioTower1F_Text_TuneIn, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_GOLDENROD_RADIOTOWER_WHITNEY, Common_Movement_ExclamationMark
	delay 60
	turnobject LOCALID_GOLDENROD_RADIOTOWER_WHITNEY, DIR_EAST
	delay 20
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox RadioTower1F_Text_Whitney2, MSGBOX_DEFAULT
	closemessage
	applymovement2 LOCALID_GOLDENROD_RADIOTOWER_WHITNEY, GoldenrodRadioTower_Movement_WhitneyLeave
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_GOLDENROD_RADIOTOWER_WHITNEY
	setflag FLAG_ENABLE_RADIO
	setflag FLAG_HIDE_GOLDENROD_BEAUTY
	setvar VAR_GOLDENROD_CITY_STATE, 2
	release
	end

GoldenrodRadioTower_Movement_WhitneyLeave:
	face_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_in_place_down
	step_end

GoldenrodRadioTower1_EventScript_Sign::
	lock
	msgbox RadioTower1F_Text_Directory, MSGBOX_SIGN
	closemessage
	release
	end

RadioTower1F_Text_ReceptionistWelcome:
    .string "Welcome!$"

RadioTower1F_Text_ReceptionistNoTours:
    .string "Hello. I'm sorry, but we're not\n"
    .string "offering any tours today.$"

RadioTower1F_Text_RadioCardWomanOfferQuiz:
    .string "We have a special quiz campaign on\n"
    .string "right now.\p"
    .string "Answer five questions correctly to\n"
    .string "win a RADIO.\p"
    .string "You and your POKéMON can use it to\n"
    .string "play music anytime, anywhere.\p"
    .string "Would you like to take the quiz?$"

RadioTower1F_Text_QuizQuestion1:
    .string "Question 1:\p"
    .string "Is there a POKéMON that appears only\n"
    .string "in the daytime?$"

RadioTower1F_Text_QuizQuestion2:
    .string "Correct!\n"
    .string "Question 2:\p"
    .string "Is this statement correct?\p"
    .string "You can't buy a BERRY at a MART.$"

RadioTower1F_Text_QuizQuestion3:
    .string "Bull's-eye!\n"
    .string "Question 3:\p"
    .string "Kurt, the POKéBALL creator, uses\n"
	.string "apricorns as ingredients?$"

RadioTower1F_Text_QuizQuestion4:
    .string "So far so good!\n"
    .string "Question 4:\p"
    .string "Is FALKNER the VIOLET GYM LEADER\n"
    .string "who uses bird POKéMON?$"

RadioTower1F_Text_QuizQuestion5:
    .string "Wow! Right again!\n"
    .string "Here's the final question:\p"
    .string "Do GOLDENROD GAME CORNER's slots\n"
    .string "have CHARMANDER on their reels?$"

RadioTower1F_Text_QuizWin:
    .string "Bingo! You got it!\n"
    .string "Congratulations!\p"
    .string "Here's your prize, a RADIO!$"

RadioTower1F_Text_PokegearRadio:
    .string "{PLAYER}'s POKéGEAR can now double as\n"
    .string "a radio!$"

RadioTower1F_Text_TuneIn:
    .string "Please tune in to our radio shows.$"

RadioTower1F_Text_WrongAnswer:
    .string "Oh, dear.\n"
    .string "Sorry, but you got it wrong.\p"
    .string "Please try again!$"

RadioTower1F_Text_DeclineQuiz:
    .string "Oh. I see. Please see me if you\n"
    .string "change your mind.$"

RadioTower1F_Text_Lass:
    .string "BEN is a fabulous DJ.\p"
    .string "His sweet voice makes me melt!$"

RadioTower1F_Text_Youngster:
    .string "I love MARY, from POKéMON TALK.\p"
    .string "I only know what she sounds like,\n"
    .string "though.$"

RadioTower1F_Text_GruntM3Seen:
    .string "We've finally taken over the\n"
    .string "RADIO TOWER!\p"
    .string "Now everyone will get to experience\n"
    .string "the true terror of TEAM ROCKET!\p"
    .string "We'll show you how scary we are!$"

RadioTower1F_Text_GruntM3Beaten:
    .string "Too strong! I'm sorry boss…$"

RadioTower1F_Text_GruntM3After:
    .string "You're too strong.\p"
    .string "Our plan could be ruined. I must\n"
    .string "warn the others…$"

RadioTower1F_Text_Directory:
    .string "1F RECEPTION\n"
    .string "2F SALES\p"
    .string "3F PERSONNEL\n"
    .string "4F PRODUCTION\p"
    .string "5F DIRECTOR'S OFFICE$"
