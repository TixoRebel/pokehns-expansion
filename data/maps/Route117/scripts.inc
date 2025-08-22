.set LOCALID_DAYCARE_MON_0, 25
.set LOCALID_DAYCARE_MON_1, 26

Route117_MapScripts::

Route117_OnTransition:

Route117_EventScript_ShowDaycareMon1:
Route117_EventScript_ShowDaycareMon0:

Route117_EventScript_DaycareMonIncompatible: @ mons never face each other

Route117_EventScript_DaycareMonMedCompatibility: @ down and towards each other

Route117_EventScript_DaycareMonMaxCompatibility: @ facing; walk in place

Route117_EventScript_TryMoveDayCareMan::
Route117_EventScript_StopMoveDayCareMan::

Route117_EventScript_Woman::

Route117_EventScript_LittleBoy::

Route117_EventScript_Girl::

Route117_EventScript_RouteSignVerdanturf::

Route117_EventScript_RouteSignMauville::

Route117_EventScript_DayCareSign::

Route117_EventScript_Isaac::

Route117_EventScript_RegisterIsaac::

Route117_EventScript_RematchIsaac::

Route117_EventScript_Lydia::

Route117_EventScript_RegisterLydia::

Route117_EventScript_RematchLydia::

Route117_EventScript_Dylan::

Route117_EventScript_RegisterDylan::

Route117_EventScript_RematchDylan::

Route117_EventScript_Maria::

Route117_EventScript_RegisterMaria::

Route117_EventScript_RematchMaria::

Route117_EventScript_Derek::

Route117_EventScript_Anna::

Route117_EventScript_RegisterAnna::

Route117_EventScript_RematchAnna::

Route117_EventScript_Meg::

Route117_EventScript_RegisterMeg::

Route117_EventScript_RematchMeg::

Route117_EventScript_Melina::

Route117_EventScript_Brandi::

Route117_EventScript_Aisha::

Route117_Text_DayCarePokemonHadNewMove:
	.string "I left my POKéMON at the DAY CARE.\p"
	.string "When I got it back, it had a new move\n"
	.string "that I didn't teach it.\l"
	.string "I was really, really surprised.$"

Route117_Text_ArentTheseFlowersPretty:
	.string "What do you think?\n"
	.string "Aren't these flowers pretty?\p"
	.string "I planted them all!$"

Route117_Text_AirIsTastyHere:
	.string "The air is tasty here!$"

Route117_Text_RouteSignVerdanturf:
	.string "ROUTE 117\n"
	.string "{LEFT_ARROW} VERDANTURF TOWN$"

Route117_Text_RouteSignMauville:
	.string "ROUTE 117\n"
	.string "{RIGHT_ARROW} MAUVILLE CITY$"

Route117_Text_DayCareSign:
	.string "POKéMON DAY CARE\n"
	.string "“Let us raise your POKéMON.”$"
