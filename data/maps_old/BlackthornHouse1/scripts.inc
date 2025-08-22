BlackthornHouse1_MapScripts::
	.byte 0

BlackthornHouse1EventScript_Granny::
	msgbox BlackthornHouse1_Text_Granny, MSGBOX_NPC
	end

BlackthornHouse1EventScript_Dratini::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DRATINI, CRY_MODE_NORMAL
	msgbox BlackthornHouse1_Text_Dratini, MSGBOX_DEFAULT
	waitmoncry
	release
	end

BlackthornHouse1_Text_Granny:
	.string "A clan of trainers who can freely\n"
	.string "command dragons live right here in\l"
	.string "BLACKTHORN.\p"
	.string "As a result, there are many legends\n"
	.string "about dragons in this town.$"

BlackthornHouse1_Text_Dratini:
	.string "DRATINI: Draa!$"
