SSAqua10_MapScripts::
	.byte 0

SSAquaRoomSW_EventScript_Cassie::
	trainerbattle_single TRAINER_CASSIE SSAquaRoomSW_Text_BeautyCassieSeen, SSAquaRoomSW_Text_BeautyCassieBeaten
	msgbox SSAquaRoomSW_Text_BeautyCassieAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAquaRoomSW_EventScript_Clyde::
	trainerbattle_single TRAINER_CLYDE SSAquaRoomSW_Text_GuitaristClydeSeen, SSAquaRoomSW_Text_GuitaristClydeBeaten
	msgbox SSAquaRoomSW_Text_GuitaristClydeAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAquaRoomSW_Text_BeautyCassieSeen:
    .string "I'm trying to forget my woes.\n"
    .string "Let's battle!$"

SSAquaRoomSW_Text_BeautyCassieBeaten:
    .string "My heart weeps…$"

SSAquaRoomSW_Text_BeautyCassieAfterBattle:
    .string "A voyage is best for getting over\n"
    .string "a broken heart.\p"
    .string "But a FAST SHIP trip is too short\n"
    .string "for grieving.$"

SSAquaRoomSW_Text_GuitaristClydeSeen:
    .string "I'm going to audition my songs\n"
    .string "at GOLDENROD's RADIO STATION.$"

SSAquaRoomSW_Text_GuitaristClydeBeaten:
    .string "Yowza! Total distortion!$"

SSAquaRoomSW_Text_GuitaristClydeAfterBattleMobile:
    .string "I was going to make my debut at\n"
    .string "the BATTLE TOWER…\p"
    .string "I should go back to VERMILION and\n"
    .string "redo my training…$"

SSAquaRoomSW_Text_GuitaristClydeAfterBattle:
    .string "Speaking of the RADIO STATION,\n"
    .string "what's this week's lucky number?$"
