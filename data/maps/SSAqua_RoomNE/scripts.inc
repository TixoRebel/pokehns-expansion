SSAqua_RoomNE_MapScripts::
	.byte 0

SSAquaRoomNE_EventScript_Noland::
	trainerbattle_single TRAINER_NOLAND SSAquaRoomNE_Text_HikerNolandSeen, SSAquaRoomNE_Text_HikerNolandBeaten
	msgbox SSAquaRoomNE_Text_HikerNolandAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAquaRoomNE_EventScript_Ethan::
	trainerbattle_single TRAINER_ETHAN SSAquaRoomNE_Text_PokemaniacEthanSeen, SSAquaRoomNE_Text_PokemaniacEthanBeaten
	msgbox SSAquaRoomNE_Text_PokemaniacEthanAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAquaRoomNE_Text_HikerNolandSeen:
    .string "Are you alone?\n"
    .string "Then let's battle!$"

SSAquaRoomNE_Text_HikerNolandBeaten:
    .string "That's too much to handle!$"

SSAquaRoomNE_Text_HikerNolandAfterBattle:
    .string "I wonder if there are any\n"
    .string "mountains worth climbing in KANTO?$"

SSAquaRoomNE_Text_PokemaniacEthanSeen:
    .string "Do you know LILY?\n"
    .string "She's a hot DJ in\n"
    .string "KANTO.$"

SSAquaRoomNE_Text_PokemaniacEthanBeaten:
    .string "Gyaaaah!$"

SSAquaRoomNE_Text_PokemaniacEthanAfterBattle:
    .string "LILY's nice, but\n"
    .string "MARY's the best!\n"
    .string "I want to check\n"
    .string "out JOHTO's radio\n"
    .string "programs!$"
