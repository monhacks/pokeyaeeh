
.set LOCALID_STEVEN, 1

GraniteCave_StevensRoom_MapScripts::
	.byte 0

GraniteCave_StevensRoom_EventScript_StevenBattle::
	lock
	faceplayer
	trainerbattle_single TRAINER_STEVEN_GRANITE_CAVE, GraniteCave_StevensRoom_Text_MysticIntro, GraniteCave_StevensRoom_Text_MysticOutro, GraniteCave_StevensRoom_EventScript_Steven, NO_MUSIC
	end

GraniteCave_StevensRoom_EventScript_Steven:
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	givemon SPECIES_HERACROSS, 0, ITEM_TOXIC_ORB, ITEM_CHERISH_BALL, NATURE_ADAMANT, 1, MON_MALE, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE, TRUE
	bufferspeciesname STR_VAR_1, SPECIES_HERACROSS
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HERACROSS
	waitmessage
	waitfanfare
	call Common_EventScript_Nickname
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_SMART_STRIKE
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister, MSGBOX_DEFAULT
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_NORTH, GraniteCave_StevensRoom_EventScript_StevenExitNorth
	call_if_eq VAR_FACING, DIR_SOUTH, GraniteCave_StevensRoom_EventScript_StevenExitSouth
	call_if_eq VAR_FACING, DIR_WEST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
	call_if_eq VAR_FACING, DIR_EAST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
	playse SE_EXIT
	removeobject LOCALID_STEVEN
	setflag FLAG_DELIVERED_STEVEN_LETTER
	setflag FLAG_REGISTERED_STEVEN_POKENAV
	release
	end

GraniteCave_StevensRoom_EventScript_StevenExitNorth::
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
	waitmovement 0
	return

GraniteCave_StevensRoom_EventScript_StevenExitWestEast::
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
	waitmovement 0
	return

GraniteCave_StevensRoom_EventScript_StevenExitSouth::
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExitSouth
	waitmovement 0
	return

GraniteCave_StevensRoom_EventScript_BagFull::
	msgbox GraniteCave_StevensRoom_Text_OhBagIsFull, MSGBOX_DEFAULT
	return

GraniteCave_StevensRoom_Movement_StevenExit:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	delay_8
	step_end

GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
	delay_16
	delay_16
	delay_16
	walk_in_place_faster_up
	step_end

GraniteCave_StevensRoom_Movement_StevenExitSouth:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	delay_8
	step_end

GraniteCave_StevensRoom_Text_MysticIntro:
	.string "Mystic: HIYAAA!$" 

GraniteCave_StevensRoom_Text_MysticOutro:
	.string "Aww. I'm dead beat!$"

GraniteCave_StevensRoom_Text_ImStevenLetterForMe:
	.string "Mystic: Oh, well…\p"
	.string "I have lost.\p"
	.string "You can have this as a gift from me!\p"

GraniteCave_StevensRoom_Text_ReceivedHeracross:
	.string "{PLAYER} received a Heracross!$"

GraniteCave_StevensRoom_Text_ThankYouTakeThis:
	.string "Also, take this as a kind gesture.$"

GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister:
	.string "Mystic: You look strong.\p"
	.string "Give me your PokéNav.\p"
	.string "… … … … … …$"

GraniteCave_StevensRoom_Text_RegisteredSteven:
	.string "Registered Mystic\n"
	.string "in the PokéNav.$"

GraniteCave_StevensRoom_Text_IveGotToHurryAlong:
	.string "Now, I've got to hurry along.$"

GraniteCave_StevensRoom_Text_OhBagIsFull:
	.string "Oh, your Bag is full…\n"
	.string "That's too bad, then.$"
