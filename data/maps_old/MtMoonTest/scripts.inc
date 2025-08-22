MtMoonTest_MapScripts::
	.byte 0

MtMoon_EventScript_Moonstone::
	finditem ITEM_MOON_STONE
	end

MtMoonTest_EventScript_Sign::
	msgbox MtMoonTest_Text_DontLitterSign, MSGBOX_SIGN
	end

MtMoonTest_EventScript_Clefairy::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
	msgbox MtMoonTest_Text_Clefairy, MSGBOX_DEFAULT
	waitmoncry
	release
	end

MtMoonTest_Text_DontLitterSign:
	.string "MT.MOON SQUARE\n"
	.string "DON'T LITTER$"

MtMoonTest_Text_Clefairy:
    .string "CLEFAIRY: Pi pippippi!$"

