MahoganyGym_MapScripts::
	.byte 0


MahoganyGym_EventScript_Statue::
	lock
	goto_if_set FLAG_DEFEATED_MAHOGANY_TOWN_GYM, CianwoodGym_EventScript_Statue2
	msgbox MahoganyGym_Text_GymStatue, MSGBOX_DEFAULT
	closemessage
	release
	end

MahoganyGym_EventScript_Statue2::
	msgbox MahoganyGym_Text_GymStatueCertified, MSGBOX_DEFAULT
	closemessage
	release
	end

MahoganyGym_Text_GymStatue:
	.string "MAHOGANY TOWN POKéMON GYM$"

MahoganyGym_Text_GymStatueCertified:
	.string "MAHOGANY TOWN POKéMON GYM\p"
	.string "PRYCE'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"


MahoganyGymEventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MAHOGANY_TOWN_GYM, MahoganyGym_EventScript_GymGuy2
	msgbox MahoganyGym_Text_Guide, MSGBOX_DEFAULT
	closemessage
	release
	end
	
MahoganyGym_EventScript_GymGuy2::
	msgbox MahoganyGym_Text_GuideWin, MSGBOX_DEFAULT
	release
	end	

MahoganyGym_EventScript_Ronald::
	trainerbattle_single TRAINER_RONALD MahoganyGym_Text_BoarderRonaldSeen, MahoganyGym_Text_BoarderRonaldBeaten
	msgbox MahoganyGym_Text_BoarderRonaldAfter, MSGBOX_AUTOCLOSE
	end

MahoganyGym_EventScript_Brad::
	trainerbattle_single TRAINER_BRAD MahoganyGym_Text_BoarderBradSeen, MahoganyGym_Text_BoarderBradBeaten
	msgbox MahoganyGym_Text_BoarderBradAfter, MSGBOX_AUTOCLOSE
	end

MahoganyGym_EventScript_Douglas::
	trainerbattle_single TRAINER_DOUGLAS MahoganyGym_Text_BoarderDouglasSeen, MahoganyGym_Text_BoarderDouglasBeaten
	msgbox MahoganyGym_Text_BoarderDouglasAfter, MSGBOX_AUTOCLOSE
	end

MahoganyGym_EventScript_Roxanne::
	trainerbattle_single TRAINER_ROXANNE MahoganyGym_Text_SkierRoxanneSeen, MahoganyGym_Text_SkierRoxanneBeaten
	msgbox MahoganyGym_Text_SkierRoxanneAfter, MSGBOX_AUTOCLOSE
	end

MahoganyGym_EventScript_Clarissa::
	trainerbattle_single TRAINER_CLARISSA MahoganyGym_Text_SkierClarissaSeen, MahoganyGym_Text_SkierClarissaBeaten
	msgbox MahoganyGym_Text_SkierClarissaAfter, MSGBOX_AUTOCLOSE
	end

MahoganyGym_EventScript_Pryce::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MAHOGANY_TOWN_GYM, MahoganyGym_EventScript_Pryce_Defeated
	msgbox MahoganyGym_Text_PryceIntro, MSGBOX_DEFAULT
	goto_if_set FLAG_DEFEATED_OLIVINE_CITY_GYM, MahoganyGym_EventScript_OlivineCheckCianwood
	goto_if_set FLAG_DEFEATED_CIANWOOD_GYM, MahoganyGym_EventScript_CianwoodCheckOlivine
	goto MahoganyGym_EventScript_Pryce_Battle1

MahoganyGym_EventScript_PryceVictory::
	message MahoganyGym_Text_ReceivedBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox MahoganyGym_Text_GlacierBadgeSpeech, MSGBOX_DEFAULT
	setflag FLAG_BADGE07_GET
	setflag FLAG_DEFEATED_MAHOGANY_TOWN_GYM
    addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 7
	call Common_EventScript_SetGymTrainers
	giveitem ITEM_TM_HAIL
	msgbox MahoganyGym_Text_HailSpeech, MSGBOX_DEFAULT
	setvar VAR_MAHOGANY_TOWN_STATE, 15
	closemessage
	release
	end

MahoganyGym_EventScript_OlivineCheckCianwood::
	goto_if_set FLAG_DEFEATED_CIANWOOD_GYM, MahoganyGym_EventScript_Pryce_Battle3
	goto MahoganyGym_EventScript_Pryce_Battle2

MahoganyGym_EventScript_CianwoodCheckOlivine::
	goto_if_set FLAG_DEFEATED_OLIVINE_CITY_GYM, MahoganyGym_EventScript_Pryce_Battle3
	goto MahoganyGym_EventScript_Pryce_Battle2
	
MahoganyGym_EventScript_Pryce_Battle1::
	trainerbattle_no_intro TRAINER_PRYCE_1, MahoganyGym_Text_PryceImpressed
	goto MahoganyGym_EventScript_PryceVictory

MahoganyGym_EventScript_Pryce_Battle2::
	trainerbattle_no_intro TRAINER_PRYCE_1_2, MahoganyGym_Text_PryceImpressed
	goto MahoganyGym_EventScript_PryceVictory

MahoganyGym_EventScript_Pryce_Battle3::
	trainerbattle_no_intro TRAINER_PRYCE_1_3, MahoganyGym_Text_PryceImpressed
	goto MahoganyGym_EventScript_PryceVictory

MahoganyGym_EventScript_Pryce_Defeated::
	msgbox MahoganyGym_Text_CherishPokemon, MSGBOX_DEFAULT
	closemessage
	release
	end

MahoganyGym_Text_PryceIntro:
    .string "POKéMON have many experiences\n"
    .string "in their lives, just like we do.\p"
    .string "I, too, have seen and suffered\n"
    .string "much in my life.\p"
    .string "Since I am your elder, let me\n"
    .string "show you what I mean.\p"
    .string "I have been with POKéMON since\n"
    .string "before you were born.\p"
    .string "I do not lose easily.\p"
    .string "I, PRYCE--the winter trainer--\n"
    .string "shall demonstrate my power!$"

MahoganyGym_Text_PryceImpressed:
    .string "Ah, I am impressed by your\n"
    .string "prowess.\p"
    .string "With your strong will, I know you\n"
    .string "will overcome all life's obstacles.\p"
    .string "You are worthy of this BADGE!$"

MahoganyGym_Text_ReceivedBadge:
    .string "{PLAYER} received GLACIERBADGE.$"

MahoganyGym_Text_GlacierBadgeSpeech:
    .string "That BADGE will raise the SPECIAL\n"
    .string "stats of POKéMON.\p"
    .string "It also lets your POKéMON use\n"
    .string "WHIRLPOOL to get across\l"
    .string "real whirlpools.\p"
    .string "And this… This is a gift from me!$"

MahoganyGym_Text_HailSpeech:
    .string "That TM contains HAIL.\p"
    .string "It inflicts damage every\n"
    .string "turn for 5 turns.\p"
    .string "It demonstrates the harshness\n"
    .string "of winter.$"

MahoganyGym_Text_CherishPokemon:
    .string "When the ice and snow melt,\n"
    .string "spring arrives.\p"
    .string "You and your POKéMON will be to-\n"
    .string "gether for many years to come.\p"
    .string "Cherish your time together!$"

MahoganyGym_Text_PryceRematch:
    .string "Ah, JOHTO CHAMPION!\p"
    .string "Your skills are indeed\n"
    .string "remarkable.\p"
    .string "I am impressed.\p"
    .string "But even now, there is much to\n"
    .string "learn from each other.\p"
    .string "I, PRYCE--the winter trainer--\n"
    .string "still have a few tricks left.\p"
    .string "Want to have a rematch with me?$"

MahoganyGym_Text_PryceRematchDefeat:
    .string "Ah, yet again I'm impressed by\n"
    .string "your prowess.\p"
    .string "With your strong will, I know you\n"
    .string "will overcome all life's obstacles.$"

MahoganyGym_Text_Guide:
    .string "PRYCE is a veteran who has\n"
    .string "trained POKéMON for some 50 years.\p"
    .string "He's got a solid lineup of\n"
    .string "POKéMON to cover whatever\l"
    .string "you bring his way.\p"
    .string "Fire is a good place to start,\n"
    .string "but watch out for the rain!$"

MahoganyGym_Text_GuideWin:
    .string "PRYCE is something, but you're\n"
    .string "something else!\p"
    .string "That was a hot battle that\n"
    .string "bridged the generation gap!$"

MahoganyGym_Text_BoarderRonaldSeen:
    .string "I'll freeze your POKéMON,\n"
    .string "so you can't do a thing!$"

MahoganyGym_Text_BoarderRonaldBeaten:
    .string "Darn. I couldn't do a thing.$"

MahoganyGym_Text_BoarderRonaldAfter:
    .string "I think there's a move a\n"
    .string "POKéMON can use while it's\l"
    .string "frozen.$"

MahoganyGym_Text_BoarderBradSeen:
    .string "This GYM has a slippery floor.\p"
    .string "It's fun, isn't it?\p"
    .string "But hey--we're not playing\n"
    .string "games here!$"

MahoganyGym_Text_BoarderBradBeaten:
    .string "Do you see how serious we are?$"

MahoganyGym_Text_BoarderBradAfter:
    .string "This GYM is great.\n"
    .string "I love boarding with my\l"
    .string "POKéMON!$"

MahoganyGym_Text_BoarderDouglasSeen:
    .string "I know PRYCE's secret.$"

MahoganyGym_Text_BoarderDouglasBeaten:
    .string "OK. I'll tell you PRYCE's secret.$"

MahoganyGym_Text_BoarderDouglasAfter:
    .string "The secret behind PRYCE's power…\p"
    .string "He meditates under a waterfall\n"
    .string "daily to strengthen his mind\l"
    .string "and body.$"

MahoganyGym_Text_SkierRoxanneSeen:
    .string "To get to PRYCE, our GYM LEADER,\n"
    .string "you need to think before you skate.$"

MahoganyGym_Text_SkierRoxanneBeaten:
    .string "I wouldn't lose to you in skiing!$"

MahoganyGym_Text_SkierRoxanneAfter:
    .string "If you don't skate with precision,\n"
    .string "you won't get far in this GYM.$"

MahoganyGym_Text_SkierClarissaSeen:
    .string "Check out my parallel turn!$"

MahoganyGym_Text_SkierClarissaBeaten:
    .string "No! You made me wipe out!$"

MahoganyGym_Text_SkierClarissaAfter:
    .string "I shouldn't have been bragging\n"
    .string "about my skiing…$"

