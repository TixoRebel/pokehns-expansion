FuchsiaCityHouse3_MapScripts::
	.byte 0

FuchsiaCityHouse3_EventScript_Granddaughter::	
	goto_if_set FLAG_TEMP_1, FuchsiaCityHouse3_EventScript_Granddaughter2
	msgbox FuchsiaCityHouse3_Text_WardensGranddaughter1, MSGBOX_NPC
	setflag FLAG_TEMP_1
	end

FuchsiaCityHouse3_EventScript_Granddaughter2::
	msgbox FuchsiaCityHouse3_Text_WardensGranddaughter2, MSGBOX_NPC
	end

FuchsiaCityHouse3_EventScript_Photo::
	msgbox FuchsiaCityHouse3_Text_WardenPhoto, MSGBOX_NPC
	end

FuchsiaCityHouse3_Text_WardensGranddaughter1:
	.string "My grandpa is the SAFARI ZONE WAR-\n"
	.string "DEN.\p"
	.string "At least he was…\p"
	.string "He decided to go on a vacation and\n"
	.string "took off overseas all by himself.\p"
	.string "He quit running SAFARI ZONE just\n"
	.string "like that.$"

FuchsiaCityHouse3_Text_WardensGranddaughter2:
	.string "Many people were disappointed that\n"
	.string "SAFARI ZONE closed down, but Grandpa\l"
	.string "is so stubborn…$"

FuchsiaCityHouse3_Text_WardenPhoto:
	.string "It's a photo of a grinning old man\n"
	.string "who's surrounded by POKéMON.$"

FuchsiaCityHouse3_Text_SafariZonePhoto:
	.string "It's a photo of a huge grassy plain\n"
	.string "with rare POKéMON frolicking in it.$"
