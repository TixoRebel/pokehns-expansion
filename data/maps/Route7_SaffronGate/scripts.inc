Route7_SaffronGate_MapScripts::
	.byte 0

Route7_SaffronGate_EventScript_Guard::
	goto_if_set FLAG_RETURNED_MACHINE_PART, Route7_SaffronGate_EventScript_GuardReturnedPart
	msgbox Route7_Text_SaffronGuard_PowerPlant, MSGBOX_NPC
	end

Route7_SaffronGate_EventScript_GuardReturnedPart::
	msgbox Route7_Text_SaffronGuard_Serious, MSGBOX_NPC
	end

Route7_Text_SaffronGuard_PowerPlant:
	.string "Did you hear about the accident\n"
	.string "at the POWER PLANT?\p"
	.string "It's located in the East, close\n"
	.string "to LAVENDER TOWN.$"

Route7_Text_SaffronGuard_Serious:
	.string "I take my GUARD job seriously.\p"
	.string "Hey! You have a POKéDEX.\p"
	.string "OK. You can go through.$"
