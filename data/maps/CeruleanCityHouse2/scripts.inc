CeruleanCityHouse2_MapScripts::
	.byte 0

CeruleanCityHouse2_EventScript_Woman::
	msgbox CeruleanPolice_Text_PokefanF, MSGBOX_NPC
	end

CeruleanCityHouse2_EventScript_Man::
	msgbox CeruleanPolice_Text_FishingGuru, MSGBOX_NPC
	end

CeruleanCityHouse2_EventScript_Diglett::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DIGLETT, CRY_MODE_NORMAL
	msgbox CeruleanPolice_Text_Diglett, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CeruleanPolice_Text_FishingGuru:
	.string "I heard that some shady character\n"
	.string "is skulking about.\l"
	.string "I won't stand for it if he turns out\n"
	.string "to be a thief.$"

CeruleanPolice_Text_PokefanF:
	.string "We were held up by robbers before.$"

CeruleanPolice_Text_Diglett:
	.string "DIGLETT: Dug dug.$"
