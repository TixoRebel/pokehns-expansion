SeafoamIslands2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SeafoamIslands2_OnTransition
	.byte 0

SeafoamIslands2_OnTransition: 
	setflag FLAG_TEMP_1
	end

SeafoamIslands2_EventScript_Blaine::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_CINNABAR_GYM, SeafoamIslands2_EventScript_Blaine_Defeated
	msgbox SeafoamIslands2_Text_BlaineIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_BLAINE, SeafoamIslands2_Text_BlaineWinLoss
	message SeafoamIslands2_Text_ReceivedVolcanoBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox SeafoamIslands2_Text_TM, MSGBOX_DEFAULT
	giveitem ITEM_TM_OVERHEAT
	setflag FLAG_BADGE15_GET
	setflag FLAG_DEFEATED_CINNABAR_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 15
	clearflag FLAG_HIDE_SEAFOAM_GYMGUY
	call Common_EventScript_SetGymTrainers
	closemessage
	release
	end

SeafoamIslands2_EventScript_Blaine_Defeated::
	msgbox SeafoamIslands2_Text_BlaineAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

SeafomIslands2_EventScript_GymGuide::
	goto_if_set FLAG_TEMP_2, SeafomIslands2_EventScript_GymGuide2
	msgbox SeafoamIslands2_Text_GymGuideWin, MSGBOX_NPC
	setflag FLAG_TEMP_2
	end
SeafomIslands2_EventScript_GymGuide2::
	msgbox SeafoamIslands2_Text_GymGuideWin2, MSGBOX_NPC
	end

SeafoamIslands2_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE15_GET, SeafoamIslands2_EventScript_GymStatuePostVictory
	msgbox SeafoamIslands2_Text_GymStatue
	releaseall
	end

SeafoamIslands2_EventScript_GymStatuePostVictory::
	msgbox SeafoamIslands2_Text_GymStatuePlayerWon
	releaseall
	end

SeafoamIslands2_Text_GymStatue::
    .string "CINNABAR POKéMON GYM\n"
    .string "LEADER: BLAINE\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED$"

SeafoamIslands2_Text_GymStatuePlayerWon::
    .string "CINNABAR POKéMON GYM\n"
    .string "LEADER: BLAINE\p"
    .string "WINNING TRAINERS:\n"
	.string "BLUE, RED, {PLAYER}$"

SeafoamIslands2_Text_TM:
	.string "Take this too. This TM contains\n"
	.string "the awesome OVERHEAT.\p"
	.string "I hope your next opponent has an\n"
	.string "extra BURN HEAL! Waaah!$"
SeafoamIslands2_Text_BlaineIntro:
	.string "BLAINE: Waaah!\p"
	.string "My GYM in CINNABAR burned down.\p"
	.string "My fire-breathing POKéMON and I are\n"
	.string "homeless because of the volcano.\p"
	.string "Waaah!\p"
	.string "But I'm back in business as a GYM\n"
	.string "LEADER here in this cave.\p"
	.string "If you can beat me, I'll give you\n"
	.string "a BADGE.\p"
	.string "Ha! You'd better have BURN HEAL!$"

SeafoamIslands2_Text_BlaineWinLoss:
	.string "BLAINE: Awesome. I've burned out…\p"
	.string "You've earned VOLCANOBADGE!$"

SeafoamIslands2_Text_ReceivedVolcanoBadge:
	.string "{PLAYER} received VOLCANOBADGE.$"

SeafoamIslands2_Text_BlaineAfterBattle:
	.string "BLAINE: I did lose this time, but\n"
	.string "I'm going to win the next time.\p"
	.string "When I rebuild my CINNABAR GYM,\n"
	.string "we'll have to have a rematch.$"

SeafoamIslands2_Text_BlaineFightDone:
	.string "BLAINE: My fire POKéMON will be\n"
	.string "even stronger.\p"
	.string "Just you watch!$"

SeafoamIslands2_Text_BlaineRematch:
	.string "BLAINE: Whoa!\p"
	.string "I see you've become the KANTO\n"
	.string "CHAMPION!\p"
	.string "That's blazing!\p"
	.string "Your skills are top-notch.\p"
	.string "I'm always up for a battle.\p"
	.string "Want to have a rematch with me?$"

SeafoamIslands2_Text_BlaineRematchDefeat:
	.string "BLAINE: Your skills are truly fiery!\p"
	.string "You've burned right through my\n"
	.string "defenses.$"

SeafoamIslands2_Text_GymGuideWin:
	.string "Yo!\p"
	.string "… Huh? It's over already?\p"
	.string "Sorry, sorry!\p"
	.string "CINNABAR GYM was gone, so I didn't\n"
	.string "know where to find you.\p"
	.string "But, hey, you're plenty strong even\n"
	.string "without my advice. I knew you'd win!$"

SeafoamIslands2_Text_GymGuideWin2:
	.string "A POKéMON GYM can be anywhere as\n"
	.string "long as the GYM LEADER is there.\p"
	.string "There's no need for a building.$"
