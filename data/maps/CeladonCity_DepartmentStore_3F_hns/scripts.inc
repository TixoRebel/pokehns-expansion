CeladonCity_DepartmentStore_3F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CeladonDeptElevator_OnFrame
	.byte 0

CeladonDept3_EventScript_Youngster::
	msgbox CeladonDeptStore3F_Text_Youngster, MSGBOX_NPC
	end
CeladonDept3_EventScript_Gbakid1::
	msgbox CeladonDeptStore3F_Text_GameboyKid1, MSGBOX_NPC
	end
CeladonDept3_EventScript_Gbakid2::
	msgbox CeladonDeptStore3F_Text_GameboyKid2, MSGBOX_NPC
	end
CeladonDept3_EventScript_SuperNerd::
	msgbox CeladonDeptStore3F_Text_SuperNerd, MSGBOX_NPC
	end
CeladonDept3_EventScript_Directory::
	msgbox CeladonDeptStore3F_Text_Directory, MSGBOX_SIGN
	end

CeladonDeptStore3F_Text_Youngster:
	.string "I can't decide which POKéMON I\n"
	.string "should use this TM on…$"

CeladonDeptStore3F_Text_GameboyKid1:
	.string "Uh-oh! I traded my POKéMON without\n"
	.string "removing the UPGRADE from it.$"

CeladonDeptStore3F_Text_GameboyKid2:
	.string "Yeah! I'm finally getting a\n"
	.string "PORYGON!\p"
	.string "I'm no good at the slots, so I\n"
	.string "could never get enough coins…\p"
	.string "…Huh?\p"
	.string "The traded PORYGON turned into a\n"
	.string "different POKéMON!$"

CeladonDeptStore3F_Text_SuperNerd:
	.string "The TM SHOP sells some rare moves.$"

CeladonDeptStore3F_Text_Directory:
	.string "3F: TM SHOP\p"
	.string "Make Your POKéMON Stronger!$"

LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs:
	.2byte ITEM_TM_FIRE_BLAST
	.2byte ITEM_TM_THUNDER
	.2byte ITEM_TM_BLIZZARD
	.2byte ITEM_TM_HYPER_BEAM
	pokemartlistend
