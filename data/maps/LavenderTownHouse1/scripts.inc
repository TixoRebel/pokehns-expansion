LavenderTownHouse1_MapScripts::
	.byte 0

LavenderTownHouse1_EventScript_Girl::
	msgbox LavenderTownHouse1_Text_Girl, MSGBOX_NPC
	end

LavenderTownHouse1_EventScript_Guy::
	msgbox LavenderTownHouse1_Text_Guy, MSGBOX_NPC
	end

LavenderTownHouse1_EventScript_Marowak::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MAROWAK, CRY_MODE_NORMAL
	msgbox LavenderTownHouse1_Text_Marowak, MSGBOX_DEFAULT
	waitmoncry
	msgbox LavenderTownHouse1_Text_Marowak2, MSGBOX_DEFAULT
	closemessage
	release
	end

LavenderTownHouse1_Text_Girl:
	.string "Can you believe it?\p"
	.string "Some people get bored with taking\n"
	.string "care of POKéMON.\p"
	.string "GRANPDA takes in such poor homeless\n"
	.string "POKéMON and takes care of them.$"
LavenderTownHouse1_Text_Guy:
	.string "MR. FUJI does live here but he's\n"
	.string "away now. He should be at the\l"
	.string "SOUL HOUSE.$"
LavenderTownHouse1_Text_Marowak:
	.string ".............................$"

LavenderTownHouse1_Text_Marowak2:
	.string "The MAROWAK is quiet, though it\n"
	.string "appears quite happy.$"

