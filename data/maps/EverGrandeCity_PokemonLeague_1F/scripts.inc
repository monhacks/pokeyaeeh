# 1 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 2 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
.set LOCALID_GUARD_1, 3
# 4 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
.set LOCALID_GUARD_2, 4
# 5 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 6 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_MapScripts::
# 7 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PokemonLeague_1F_OnTransition
# 8 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 9 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.byte 0
# 10 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 11 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_OnTransition:
# 12 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY_POKEMON_LEAGUE
# 13 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
# 14 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call_if_unset FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor
# 15 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 16 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 17 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor::
# 18 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setobjectxyperm LOCALID_GUARD_1, 9, 2
# 19 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setobjectxyperm LOCALID_GUARD_2, 10, 2
# 20 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	return
# 21 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 22 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_Nurse::
# 23 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 24 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 25 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 26 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitbuttonpress
# 27 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
# 28 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 29 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 30 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_Clerk::
# 31 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 32 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 33 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message gText_HowMayIServeYou
# 34 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 35 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, EverGrandeCity_PokemonLeague_1F_Pokemart_Postgame
# 36 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_1F_Pokemart
# 37 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 38 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
# 39 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 40 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 41 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.align 2
# 42 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Pokemart:
# 43 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 44 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 45 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 46 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 47 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 48 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_REVIVE
# 49 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 50 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_NONE
# 51 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
# 52 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 53 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 54 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.align 2
# 55 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Pokemart_Postgame:
# 56 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ADAMANT_ORB
# 57 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
    .2byte ITEM_ADAMANT_CRYSTAL
# 58 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
    .2byte ITEM_LUSTROUS_ORB
# 59 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
    .2byte ITEM_LUSTROUS_GLOBE
# 60 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
    .2byte ITEM_GRISEOUS_ORB
# 61 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
    .2byte ITEM_GRISEOUS_CORE
# 62 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_DOUSE_DRIVE
# 63 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SHOCK_DRIVE
# 64 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_BURN_DRIVE
# 65 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_CHILL_DRIVE
# 66 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ULTRANECROZIUM_Z
# 67 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_RUSTED_SWORD
# 68 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_RUSTED_SHIELD
# 69 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
# 70 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 71 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 72 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ The door guards only check for FLAG_BADGE06_GET because Winonas badge is the only one that can be skipped
# 73 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ Its assumed the player has the remaining badges
# 74 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard::
# 75 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lockall
# 76 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_set FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GoForth
# 77 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 78 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call_if_ge VAR_TEMP_0, 11, EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight
# 79 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call_if_le VAR_TEMP_0, 8, EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft
# 80 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges
# 81 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 82 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	delay 120
# 83 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges
# 84 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 85 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_GUARD_1, EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay
# 86 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_GUARD_2, EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay
# 87 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 88 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	delay 10
# 89 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 90 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_Text_GoForth
# 91 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 92 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitfanfare
# 93 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 94 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	copyobjectxytoperm LOCALID_GUARD_1
# 95 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	copyobjectxytoperm LOCALID_GUARD_2
# 96 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setflag FLAG_ENTERED_ELITE_FOUR
# 97 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 98 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 99 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 100 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight::
# 101 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight
# 102 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 103 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	return
# 104 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 105 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft::
# 106 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft
# 107 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 108 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	return
# 109 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 110 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges::
# 111 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	playse SE_FAILURE
# 112 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges, MSGBOX_DEFAULT
# 113 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 114 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 115 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 116 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_GoForth::
# 117 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 118 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 119 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_GoForth, MSGBOX_DEFAULT
# 120 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 121 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 122 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 123 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 124 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 125 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 126 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight:
# 127 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_down
# 128 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_left
# 129 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_up
# 130 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 131 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 132 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft:
# 133 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_down
# 134 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_right
# 135 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_up
# 136 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 137 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 138 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay:
# 139 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_left
# 140 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_down
# 141 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 142 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 143 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay:
# 144 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_right
# 145 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_down
# 146 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 147 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 148 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges:
# 149 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Beyond this point, only those Trainers\n"
# 150 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "who have collected all the Gym Badges\l"
# 151 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "are permitted to enter.\p"
# 152 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Trainer, let us confirm that you have\n"
# 153 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "all the Gym Badges.$"
# 154 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 155 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges:
# 156 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "You haven't obtained all the Badges.\p"
# 157 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "If you're bound for the Pokémon\n"
# 158 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "League, you must return with them.$"
# 159 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 160 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_GoForth:
# 161 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Trainer! Believe in yourself and your\n"
# 162 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Pokémon, and go forth!$"
