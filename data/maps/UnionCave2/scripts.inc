UnionCave2_MapScripts::
	.byte 0

UnionCave2_EventScript_HikerPhillip::
	trainerbattle_single TRAINER_PHILLIP, UnionCave2_Text_HikerPhillipSeen, UnionCave2_Text_HikerPhillipBeaten
	msgbox UnionCave2_Text_HikerPhillipAfter, MSGBOX_AUTOCLOSE
	end

UnionCave2_EventScript_HikerLeonard::
	trainerbattle_single TRAINER_LEONARD, UnionCave2_Text_HikerLeonardSeen, UnionCave2_Text_HikerLeonardBeaten
	msgbox UnionCave2_Text_HikerLeonardAfter, MSGBOX_AUTOCLOSE
	end

UnionCave2_EventScript_PokemaniacAndrew::
	trainerbattle_single TRAINER_ANDREW, UnionCave2_Text_PokemaniacAndrewSeen, UnionCave2_Text_PokemaniacAndrewBeaten
	msgbox UnionCave2_Text_PokemaniacAndrewAfter, MSGBOX_AUTOCLOSE
	end

UnionCave2_EventScript_PokemaniacCalvin::
	trainerbattle_single TRAINER_CALVIN, UnionCave2_Text_PokemaniacCalvinSeen, UnionCave2_Text_PokemaniacCalvinBeaten
	msgbox UnionCave2_Text_PokemaniacCalvinAfter, MSGBOX_AUTOCLOSE
	end

UnionCave2_EventScript_Item_SecretPower::
	finditem ITEM_TM_SECRET_POWER
	end

UnionCave2_EventScript_Item_Xdefend::
	finditem ITEM_X_DEFEND
	end

UnionCave2_Text_HikerPhillipSeen:
	.string "It's been a while since I last saw\n"
	.string "another person.\p"
	.string "Don't be shy. Let's battle!$"

UnionCave2_Text_HikerPhillipBeaten:
	.string "Uurggh…$"

UnionCave2_Text_HikerPhillipAfter:
	.string "I've been lost for a long time…\p"
	.string "I don't mind it here, but I am\n"
	.string "soooo hungry!$"

UnionCave2_Text_HikerLeonardSeen:
	.string "What do you know! A visitor!$"

UnionCave2_Text_HikerLeonardBeaten:
	.string "Wahahah! You're a feisty one!$"

UnionCave2_Text_HikerLeonardAfter:
	.string "I live down here.\p"
	.string "You can, too, if you'd like.\p"
	.string "There's plenty of room, you see.$"

UnionCave2_Text_PokemaniacAndrewSeen:
	.string "Who's there?\p"
	.string "Leave me and my POKéMON alone!$"

UnionCave2_Text_PokemaniacAndrewBeaten:
	.string "Go… Go away!$"

UnionCave2_Text_PokemaniacAndrewAfter:
	.string "Just me and my POKéMON. I'm de-\n"
	.string "lirious with joy.$"

UnionCave2_Text_PokemaniacCalvinSeen:
	.string "I came all the way here to conduct\n"
	.string "my POKéMON research.\p"
	.string "Let me demonstrate my findings in a\n"
	.string "real battle!$"

UnionCave2_Text_PokemaniacCalvinBeaten:
	.string "You demonstrated on me!$"

UnionCave2_Text_PokemaniacCalvinAfter:
	.string "I should compile and announce my\n"
	.string "study findings.\p"
	.string "I might even become famous like\n"
	.string "PROF.ELM.$"
