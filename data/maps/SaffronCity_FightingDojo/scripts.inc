SaffronCity_FightingDojo_MapScripts::
	.byte 0

SaffronCity_FightingDojo_EventScript_StatueLeft::
	msgbox FightingDojo_Text_Sign1, MSGBOX_SIGN
	end
SaffronCity_FightingDojo_EventScript_StatueRight::
	msgbox FightingDojo_Text_Sign2, MSGBOX_SIGN
	end

SaffronCity_FightingDojo_EventScript_BlackBelt::
	msgbox FightingDojo_Text_BlackBelt, MSGBOX_NPC
	end

SaffronCity_FightingDojo_EventScript_Cooltrainer::
	msgbox FightingDojo_Text_Cooltrainer, MSGBOX_NPC
	end

FightingDojo_Text_BlackBelt:
	.string "You enter the FIGHTING DOJO!\p"
	.string "Here, you may hone the stats of\n"
	.string "of your POKéMON.$"

FightingDojo_Text_Sign1:
	.string "Left: HP, DEF, SDEF$"

FightingDojo_Text_Sign2:
	.string "RIGHT: ATK, SPATK, SPD$"

FightingDojo_Text_Cooltrainer::
	.string "Only trainers with all KANTO badges\n"
	.string "may enter the VIP lounge.$"
