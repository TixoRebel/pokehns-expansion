RuinsOfAlph1_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RuinsOfAlph1_OnFrame
	.byte 0

RuinsOfAlph1_OnFrame::
	map_script_2 VAR_RUINSOFALPH_STATE, 1, RuinsOfAlph1_EventScript_Presence
	.2byte 0

RuinsOfAlph1_EventScript_Presence::
	lock
	msgbox RuinsOfAlph1_Text_Presence, MSGBOX_DEFAULT
	closemessage
	setvar VAR_RUINSOFALPH_STATE, 0
	release
	end


RuinsOfAlph1_EventScript_Teacher::
	lock
	faceplayer
	msgbox RuinsOfAlph1_Text_Teacher, MSGBOX_DEFAULT
	release
	end

RuinsOfAlph1_EventScript_Hiker::
	lock
	faceplayer
	msgbox RuinsOfAlph1_Text_Hiker, MSGBOX_DEFAULT
	release
	end

RuinsOfAlph1_EventScript_Gramps::
	lock
	faceplayer
	msgbox RuinsOfAlph1_Text_Gramps, MSGBOX_DEFAULT
	release
	end

RuinsOfAlph2_EventScript_HelixFossil::
	finditem ITEM_HELIX_FOSSIL
	end

RuinsOfAlph2_EventScript_DomeFossil::
	finditem ITEM_DOME_FOSSIL
	end

RuinsOfAlph2_EventScript_OldAmber::
	finditem ITEM_OLD_AMBER
	end

RuinsOfAlph2_EventScript_GSBALL::
	finditem ITEM_GS_BALL
	end

RuinsOfAlph1_Text_Presence:
	.string "There is a strange presence here.$"

RuinsOfAlph1_Text_Hiker:
	.string "This is a big room, but there's\n"
	.string "nothing here.$"

RuinsOfAlph1_Text_Teacher:
	.string "This place has a mystical\n"
	.string "quality to it.\p"
	.string "It feels sort of ethereal\n"
	.string "even.$"

RuinsOfAlph1_Text_Gramps:
	.string "Ancient buildings are often\n"
	.string "tombs of kings.\p"
	.string "Like the pyramids, for\n"
	.string "instance.$"
