CeladonCityApartments1_MapScripts::
	.byte 0

CeladonCityApartments1_EventScript_Manager::
	msgbox CeladonMansion_Text_Manager, MSGBOX_NPC
	end

CeladonCityApartments1_EventScript_Sign::
	msgbox CeladonMansion_Text_ManagersSuiteSign, MSGBOX_SIGN
	end

CeladonMansion_Text_Manager:
	.string "My dear POKéMON keep me company,\n"
	.string "so I don't ever feel lonely.\p"
	.string "MEOWTH even brings money home.$"

CeladonMansion_Text_ManagersSuiteSign:
	.string "CELADON MANSION MANAGER'S SUITE$"
