PewterCityHouse1_MapScripts::
	.byte 0

PewterCityHouse1_EventScript_Nerd::
	msgbox PewterCityHouse1_Text_SuperNerd, MSGBOX_NPC
	end

PewterCityHouse1_EventScript_Nidorian::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_NIDORAN_M, CRY_MODE_NORMAL
	msgbox PewterCityHouse1_Text_Nidoran, MSGBOX_DEFAULT
	waitmoncry
	release
	end

PewterCityHouse1_Text_SuperNerd:
	.string "NIDORAN, shake!$"

PewterCityHouse1_Text_Nidoran:
	.string "NIDORAN: Gau gau!$"
