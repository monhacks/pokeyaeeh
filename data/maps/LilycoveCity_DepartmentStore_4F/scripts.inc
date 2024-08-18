# 1 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_MapScripts::
# 3 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 5 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Gentleman::
# 6 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_AttackOrStatusTM, MSGBOX_NPC
# 7 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 8 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 9 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Woman::
# 10 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_OneFiftyDifferentTMs, MSGBOX_NPC
# 11 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 12 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 13 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Youngster::
# 14 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves, MSGBOX_NPC
# 15 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 16 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 17 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft::
# 18 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	lock
# 19 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	faceplayer
# 20 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	message gText_HowMayIServeYou
# 21 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 22 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs
# 23 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 24 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 25 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 26 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 27 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.align 2
# 28 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs:
# 29 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_BLIZZARD
# 30 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_HYPER_BEAM
# 31 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 32 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_FIRE_BLAST
# 33 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_SOLAR_BEAM
# 34 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_HYDRO_PUMP
# 35 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_SLUDGE_WAVE
# 36 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_HURRICANE
# 37 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_POLTERGEIST
# 38 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_POWER_WHIP
# 39 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_GUNK_SHOT
# 40 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_NONE
# 41 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 42 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 43 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 44 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight::
# 45 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	lock
# 46 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	faceplayer
# 47 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	message gText_HowMayIServeYou
# 48 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 49 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_StatusTMs
# 50 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 51 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 52 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 53 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 54 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.align 2
# 55 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Pokemart_StatusTMs:
# 56 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 57 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_LIGHT_SCREEN
# 58 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_SAFEGUARD
# 59 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_WORK_UP
# 60 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_ROOST
# 61 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_AGILITY
# 62 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_SUBSTITUTE
# 63 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_TRICK_ROOM
# 64 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_MAGIC_ROOM
# 65 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_WONDER_ROOM
# 66 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_NONE
# 67 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 68 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 69 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 70 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Text_AttackOrStatusTM:
# 71 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Hmm…\p"
# 72 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "An attacking move…\n"
# 73 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Or a status move…\p"
# 74 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "It's no easy matter to decide which TM\n"
# 75 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "moves should be taught to Pokémon…$"
# 76 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 77 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Text_OneFiftyDifferentTMs:
# 78 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "There are so many different kinds of\n"
# 79 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "TM moves.\p"
# 80 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "A catalog I read said there are one fifty\n"
# 81 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "different kinds.$"
# 82 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 83 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves:
# 84 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "I'd like to get all the different TMs,\n"
# 85 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "but a Pokémon learns only four moves.$"
