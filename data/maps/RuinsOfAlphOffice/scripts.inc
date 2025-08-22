RuinsOfAlphOffice_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RuinsOfAlphOffice_OnTransition
	.byte 0

RuinsOfAlphOffice_OnTransition:
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	end

RuinsOfAlphOffice_EventScript_Scientist1::
	lock
	faceplayer
	msgbox RuinsOfAlphOffice_Text_Scientist1, MSGBOX_DEFAULT
	release
	end
RuinsOfAlphOffice_EventScript_Scientist2::
	lock
	faceplayer
	msgbox RuinsOfAlphOffice_Text_Scientist2, MSGBOX_DEFAULT
	release
	end
RuinsOfAlphOffice_EventScript_Fossils::
	lock
	msgbox RuinsOfAlphOffice_Text_Fossils, MSGBOX_DEFAULT
	closemessage
	release
	end

RuinsOfAlphOffice_Text_Scientist1:
	.string "The RUINS are about 1500 years old.\p"
	.string "But it's not known why they were\n"
	.string "built--or by whom.$"

RuinsOfAlphOffice_Text_Scientist2:
	.string "There are odd patterns drawn on\n"
	.string "on the walls of the RUINS.\p"
	.string "They must be the keys for\n"
	.string "unraveling the RUINS' mystery.$"

RuinsOfAlphOffice_Text_Fossils:
	.string "Fossils found within the RUINS.\n"
	.string "Maybe there are more somewhere...$"
