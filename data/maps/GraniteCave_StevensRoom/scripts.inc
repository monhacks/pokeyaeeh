# 1 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 2 "data/maps/GraniteCave_StevensRoom/scripts.pory"
.set LOCALID_STEVEN, 1
# 3 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 4 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_MapScripts::
# 5 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.byte 0
# 6 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 7 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenBattle::
# 8 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	lock
# 9 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	faceplayer
# 10 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	trainerbattle_single TRAINER_STEVEN_GRANITE_CAVE, GraniteCave_StevensRoom_Text_MysticIntro, GraniteCave_StevensRoom_Text_MysticOutro, GraniteCave_StevensRoom_EventScript_Steven, NO_MUSIC
# 11 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 12 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 13 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven:
# 14 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe, MSGBOX_DEFAULT
# 15 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 16 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	givemon SPECIES_HERACROSS, 0, ITEM_TOXIC_ORB, ITEM_CHERISH_BALL, NATURE_ADAMANT, 1, MON_MALE, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE, TRUE
# 17 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_HERACROSS
# 18 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HERACROSS
# 19 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmessage
# 20 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 21 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call Common_EventScript_Nickname
# 22 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis, MSGBOX_DEFAULT
# 23 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_TM_SMART_STRIKE
# 24 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister, MSGBOX_DEFAULT
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 26 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven, MSGBOX_DEFAULT
# 29 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 30 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 31 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 32 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong, MSGBOX_DEFAULT
# 33 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 34 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, GraniteCave_StevensRoom_EventScript_StevenExitNorth
# 35 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, GraniteCave_StevensRoom_EventScript_StevenExitSouth
# 36 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 37 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 38 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 39 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject LOCALID_STEVEN
# 40 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_DELIVERED_STEVEN_LETTER
# 41 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGISTERED_STEVEN_POKENAV
# 42 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 43 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 44 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 45 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitNorth::
# 46 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 47 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 48 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 49 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 50 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitWestEast::
# 51 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 52 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 53 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 54 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 55 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 56 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitSouth::
# 57 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 58 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExitSouth
# 59 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 60 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 61 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 62 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BagFull::
# 63 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_OhBagIsFull, MSGBOX_DEFAULT
# 64 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 65 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 66 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExit:
# 67 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 68 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 69 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 70 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 71 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 72 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 73 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 74 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 75 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
# 76 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 77 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 78 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 79 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_faster_up
# 80 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 81 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 82 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExitSouth:
# 83 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 84 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 85 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 86 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 87 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_right
# 88 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 89 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 90 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 91 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 92 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 93 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_MysticIntro:
# 94 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Mystic: HIYAAA!$" 
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 96 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_MysticOutro:
# 97 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Aww. I'm dead beat!$"
# 98 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ImStevenLetterForMe:
# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Mystic: Oh, well…\p"
# 101 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I have lost.\p"
# 102 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "You can have this as a gift from me!\p"
# 103 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 104 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ReceivedHeracross:
# 105 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "{PLAYER} received a Heracross!$"
# 106 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 107 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ThankYouTakeThis:
# 108 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Also, take this as a kind gesture.$"
# 109 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 110 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister:
# 111 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Mystic: You look strong.\p"
# 112 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Give me your PokéNav.\p"
# 113 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "… … … … … …$"
# 114 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 115 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_RegisteredSteven:
# 116 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Registered Mystic\n"
# 117 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "in the PokéNav.$"
# 118 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 119 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_IveGotToHurryAlong:
# 120 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Now, I've got to hurry along.$"
# 121 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 122 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_OhBagIsFull:
# 123 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Oh, your Bag is full…\n"
# 124 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "That's too bad, then.$"
