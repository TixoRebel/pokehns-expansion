UnionCave1_MapScripts::
	.byte 0


UnionCave1_Trigger_Monview::
	special SpawnCameraObject
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight
	waitmovement 0
	message Route29_Text_PressAorB
	waitbuttonpress
	closemessage
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
	waitmovement 0
	special RemoveCameraObject
	applymovement2 LOCALID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	end


UnionCave1_EventScript_HikerRussell::
	trainerbattle_single TRAINER_RUSSELL, UnionCave1_Text_HikerRussellSeen, UnionCave1_Text_HikerRussellBeaten
	msgbox UnionCave1_Text_HikerRussellAfter, MSGBOX_AUTOCLOSE
	end

UnionCave1_EventScript_PokemaniacLarry::
	trainerbattle_single TRAINER_LARRY, UnionCave1_Text_PokemaniacLarrySeen, UnionCave1_Text_PokemaniacLarryBeaten
	msgbox UnionCave1_Text_PokemaniacLarryAfter, MSGBOX_AUTOCLOSE
	end

UnionCave1_EventScript_HikerDaniel::
	trainerbattle_single TRAINER_DANIEL, UnionCave1_Text_HikerDanielSeen, UnionCave1_Text_HikerDanielBeaten
	msgbox UnionCave1_Text_HikerDanielAfter, MSGBOX_AUTOCLOSE
	end

UnionCave1_EventScript_FirebreatherBill::
	trainerbattle_single TRAINER_BILL, UnionCave1_Text_FirebreatherBillSeen, UnionCave1_Text_FirebreatherBillBeaten
	msgbox UnionCave1_Text_FirebreatherBillAfter, MSGBOX_AUTOCLOSE
	end

UnionCave1_EventScript_FirebreatherRay::
	trainerbattle_single TRAINER_RAY, UnionCave1_Text_FirebreatherRaySeen, UnionCave1_Text_FirebreatherRayBeaten
	msgbox UnionCave1_Text_FirebreatherRayAfter, MSGBOX_AUTOCLOSE
	end	

UnionCave1_EventScript_Item_Potion::
	finditem ITEM_POTION
	end

UnionCave1_EventScript_Item_GreatBall::
	finditem ITEM_GREAT_BALL
	end

UnionCave1_EventScript_Item_Xattack::
	finditem ITEM_X_ATTACK
	end

UnionCave1_EventScript_Item_Awakening::
	finditem ITEM_AWAKENING
	end

UnionCave1_Text_HikerRussellSeen:
	.string "You're headed to AZALEA, are you?\p"
	.string "Let my POKéMON see if you are good\n"
	.string "enough to battle.$"

UnionCave1_Text_HikerRussellBeaten:
	.string "Oh, oh, oh!$"

UnionCave1_Text_HikerRussellAfter:
	.string "All right, then! I've decided.\p"
	.string "I'm not leaving until my POKéMON\n"
	.string "get tougher!$"

UnionCave1_Text_PokemaniacLarrySeen:
	.string "I roam far and wide in search of\n"
	.string "POKéMON.\p"
	.string "Are you looking for POKéMON too?\p"
	.string "Then you're my collecting rival!$"

UnionCave1_Text_PokemaniacLarryBeaten:
	.string "Ugh. My poor POKéMON…$"

UnionCave1_Text_PokemaniacLarryAfter:
	.string "Every Friday, you can hear POKéMON\n"
	.string "roars from deep inside the cave.$"

UnionCave1_Text_HikerDanielSeen:
	.string "Whoa! What a surprise!\p"
	.string "I didn't expect to see anyone here!$"

UnionCave1_Text_HikerDanielBeaten:
	.string "Whoa! I'm beaten big time!$"

UnionCave1_Text_HikerDanielAfter:
	.string "I was conned into buying a\n"
	.string "SLOWPOKETAIL.\p"
	.string "I feel sorry for the poor POKéMON.$"

UnionCave1_Text_FirebreatherBillSeen:
	.string "ZUBAT's SUPERSONIC keeps confusing\n"
	.string "my POKéMON.\p"
	.string "I'm seriously upset about that!$"

UnionCave1_Text_FirebreatherBillBeaten:
	.string "I flamed out!$"

UnionCave1_Text_FirebreatherBillAfter:
	.string "On weekends, you can hear strange\n"
	.string "roars from deep in the cave.$"

UnionCave1_Text_FirebreatherRaySeen:
	.string "If it's light, a cave isn't scary.\p"
	.string "If you're strong, POKéMON aren't\n"
	.string "scary.$"

UnionCave1_Text_FirebreatherRayBeaten:
	.string "FLASH!$"

UnionCave1_Text_FirebreatherRayAfter:
	.string "It's my POKéMON's fire that lights\n"
	.string "up this cave.$"
