MtMoonHouse_MapScripts::
	.byte 0

MtMoonHouse_EventScript_Lass::
	msgbox MtMoonHouse_Text_GiftShopLass, MSGBOX_NPC
	end

MtMoonHouse_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart MtMoonHouse_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
MtMoonHouse_Pokemart:
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_REPEL
	.2byte ITEM_NONE
	release
	end

MtMoonHouse_Text_GiftShopLass:
	.string "When the sun goes down, CLEFAIRY\n"
	.string "come out to play.$"

