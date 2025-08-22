.set LOCALID_DRAGONSDEN2_CLAIR, 5
.set LOCALID_DEN_CLAIR, 35

DragonsDen2_MapScripts::
	@map_script MAP_SCRIPT_ON_FRAME_TABLE, DragonsDen2_OnFrame
	.byte 0

DragonsDen2_OnFrame::
	map_script_2 VAR_BLACKTHORN_CITY_STATE, 3, DragonsDen2_EventScript_Clair
	.2byte 0

DragonsDen_EventScript_ClairRematch::
    lock
    faceplayer
    msgbox DragonsDen_Text_Clair, MSGBOX_DEFAULT
    closemessage
    fadescreenswapbuffers FADE_TO_BLACK
    setflag FLAG_HIDE_DEN_CLAIR
    removeobject LOCALID_DEN_CLAIR
    fadescreenswapbuffers FADE_FROM_BLACK
    clearflag FLAG_HIDE_DOJO_CLAIR
    release
    end

DragonsDen_Text_Clair:
    .string "{PLAYER}… So you're here.\p"
	.string "If you think you can keep up,\n"
	.string "with me, come to the FIGHTING\l"
	.string "DOJO in SAFFRON.$"

DragonsDen2_Trigger_ClairLeft::
	lock 
	playse SE_PIN
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, Common_Movement_ExclamationMark
	delay 60
	call DragonsDen2_EventScript_Clair
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, DragonsDen2_Movement_ClairLeaveLeft
	waitmovement 0
	setflag FLAG_HIDE_DRAGONS_DEN2_CLAIR
	removeobject LOCALID_DRAGONSDEN2_CLAIR
	playse SE_EXIT
	setvar VAR_BLACKTHORN_CITY_STATE, 4
	release
	end

DragonsDen2_Trigger_ClairMid::
	lock 
	playse SE_PIN
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, Common_Movement_ExclamationMark
	delay 60
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, Common_Movement_WalkRight1
	call DragonsDen2_EventScript_Clair
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, DragonsDen2_Movement_ClairLeaveMid
	waitmovement 0
	setflag FLAG_HIDE_DRAGONS_DEN2_CLAIR
	removeobject LOCALID_DRAGONSDEN2_CLAIR
	playse SE_EXIT
	setvar VAR_BLACKTHORN_CITY_STATE, 4
	release
	end

DragonsDen2_Trigger_ClairRight::
	lock 
	playse SE_PIN
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, Common_Movement_ExclamationMark
	delay 60
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, Common_Movement_WalkRight1
	waitmovement 0
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, Common_Movement_WalkRight1
	call DragonsDen2_EventScript_Clair
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, DragonsDen2_Movement_ClairLeaveRight
	waitmovement 0
	setflag FLAG_HIDE_DRAGONS_DEN2_CLAIR
	removeobject LOCALID_DRAGONSDEN2_CLAIR
	playse SE_EXIT
	setvar VAR_BLACKTHORN_CITY_STATE, 4
	release
	end


DragonsDen2_EventScript_Clair::
	turnobject LOCALID_PLAYER, DIR_WEST
	msgbox DragonsDen2_Text_ClairGiveDragonclaw, MSGBOX_DEFAULT
	giveitem ITEM_TM_DRAGON_CLAW
	msgbox DragonsDen2_Text_ClairDescribeDragonclaw, MSGBOX_DEFAULT
	closemessage
	delay 30
	msgbox DragonsDen2_Text_ClairWhatsTheMatter, MSGBOX_DEFAULT
	closemessage
	delay 10
	clearflag FLAG_GOT_DRATINI
	return

DragonsDen2_Movement_ClairLeaveLeft:
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DragonsDen2_Movement_ClairLeaveMid:
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DragonsDen2_Movement_ClairLeaveRight:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DragonsDen2_Text_ClairGiveDragonclaw:
    .string "CLAIR: WAIT!\p"
	.string "I'm sorry about this.\n"
    .string "Here, take this as my apology.$"

DragonsDen2_Text_ClairDescribeDragonclaw:
    .string "That contains DRAGON CLAW.\p"
    .string "No, it doesn't have anything to\n"
    .string "do with my nails.\p"
    .string "If you don't want it, you don't\n"
    .string "have to take it.$"

DragonsDen2_Text_ClairWhatsTheMatter:
    .string "What's the matter? Aren't\n"
    .string "you going on to the POKéMON\l"
    .string "LEAGUE?\p"
    .string "After you become CHAMPION, you\n"
    .string "can rematch any GYM LEADER you\l"
    .string "want.\p"
    .string "Go to the POKéMON LEAGUE.\p"
    .string "Do you know how to get there?\p"
    .string "From here, go to NEW BARK TOWN.\p"
    .string "Then SURF east to POKéMON LEAGUE.\p"
    .string "The route there is very tough.\p"
    .string "Don't you dare lose at the POKéMON\n"
    .string "LEAGUE!\p"
    .string "If you do, I'll feel even worse\n"
    .string "about having lost to you!\p"
    .string "Give it everything you've got.$"

DragonsDen2_EventScript_Darin::
	trainerbattle_single TRAINER_DARIN DragonsDen2_Text_CooltrainermDarinSeen, DragonsDen2_Text_CooltrainermDarinBeaten
	msgbox DragonsDen2_Text_CooltrainermDarinAfter, MSGBOX_AUTOCLOSE
	end

DragonsDen2_EventScript_Cara::
	trainerbattle_single TRAINER_CARA DragonsDen2_Text_CooltrainerfCaraSeen, DragonsDen2_Text_CooltrainerfCaraBeaten
	msgbox DragonsDen2_Text_CooltrainerfCaraAfter, MSGBOX_AUTOCLOSE
	end

DragonsDen2_EventScript_TwinLea::
	trainerbattle_double TRAINER_LEA_AND_PIA, DragonsDen2_Text_TwinsLeaandPia1Seen, DragonsDen2_Text_TwinsLeaandPia1Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox DragonsDen2_Text_TwinsLeaandPia1After, MSGBOX_DEFAULT
	release
	end
	
DragonsDen2_EventScript_TwinPia::
	trainerbattle_double TRAINER_LEA_AND_PIA, DragonsDen2_Text_TwinsLeaandPia2Seen, DragonsDen2_Text_TwinsLeaandPia2Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox DragonsDen2_Text_TwinsLeaandPia2After, MSGBOX_DEFAULT
	release
	end

DragonsDen2_EventScript_Item_Dragon_Fang::
	finditem ITEM_DRAGON_FANG
	end
DragonsDen2_EventScript_Item_Max_Potion::
	finditem ITEM_MAX_POTION
	end
DragonsDen2_EventScript_Item_PP_Max::
	finditem ITEM_PP_MAX
	end



DragonsDen2_Text_DragonShrineSign:
    .string "DRAGON SHRINE\p"
    .string "A shrine honoring the dragon\n"
    .string "POKéMON\p"
    .string "said to have lived in DRAGON'S\n"
    .string "DEN.$"

DragonsDen2_Text_SilverTraining1:
    .string "…\n"
    .string "What? {PLAYER}?\p"
    .string "…No, I won't battle you now…\p"
    .string "My POKéMON aren't ready to beat\n"
    .string "you.\p"
    .string "I can't push them too hard now.\p"
    .string "I have to be disciplined to become\n"
    .string "the greatest POKéMON trainer…$"

DragonsDen2_Text_SilverTraining2:
    .string "…\p"
    .string "Whew…\p"
    .string "Learn to stay out of my way…$"

DragonsDen2_Text_CooltrainermDarinSeen:
    .string "You! How dare you enter\n"
    .string "uninvited!$"

DragonsDen2_Text_CooltrainermDarinBeaten:
    .string "S-strong!$"

DragonsDen2_Text_CooltrainermDarinAfter:
    .string "The SHRINE ahead is home to the\n"
    .string "MASTER of our dragon-user clan.\p"
    .string "You're not allowed to just go in!$"

DragonsDen2_Text_CooltrainerfCaraSeen:
    .string "You shouldn't be in here!$"

DragonsDen2_Text_CooltrainerfCaraBeaten:
    .string "Oh yikes, I lost!$"

DragonsDen2_Text_CooltrainerfCaraAfter:
    .string "Soon I'm going to get permission\n"
    .string "from our MASTER to use dragons.\p"
    .string "When I do, I'm going to become an\n"
    .string "admirable dragon trainer and gain\l"
    .string "our MASTER's approval.$"

DragonsDen2_Text_TwinsLeaandPia1Seen:
    .string "It's a stranger we don't know.$"

DragonsDen2_Text_TwinsLeaandPia1Beaten:
    .string "Ouchies.$"

DragonsDen2_Text_TwinsLeaandPia1After:
    .string "It was like having to battle\n"
    .string "LANCE.$"

DragonsDen2_Text_TwinsLeaandPia2Seen:
    .string "Who are you?$"

DragonsDen2_Text_TwinsLeaandPia2Beaten:
    .string "Meanie.$"

DragonsDen2_Text_TwinsLeaandPia2After:
    .string "We'll tell on you.\p"
    .string "MASTER will be angry with you.$"
