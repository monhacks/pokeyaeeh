# 1 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 2 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_MapScripts::
# 3 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 5 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Clerk::
# 6 "data/maps/VerdanturfTown_Mart/scripts.pory"
	lock
# 7 "data/maps/VerdanturfTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/VerdanturfTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/VerdanturfTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemart 0
# 11 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/VerdanturfTown_Mart/scripts.pory"
	release
# 13 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 14 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 15 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Boy::
# 16 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_XSpecialIsCrucial, MSGBOX_NPC
# 17 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 18 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 19 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_ExpertF::
# 20 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent, MSGBOX_NPC
# 21 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 22 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 23 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Lass::
# 24 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon, MSGBOX_NPC
# 25 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 26 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 27 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Text_XSpecialIsCrucial:
# 28 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "For any Pokémon match, X Special\n"
# 29 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "is crucial.\p"
# 30 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "It jacks up the power of some moves\n"
# 31 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "even though it's only for one battle.$"
# 32 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 33 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent:
# 34 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "They don't seem to sell any winning\n"
# 35 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "strategy guides for the Battle Tent…\p"
# 36 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "It seems one must rely on one's\n"
# 37 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "own wits after all…$"
# 38 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 39 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon:
# 40 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "The Nest Ball works better on\n"
# 41 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "weakened Pokémon.\p"
# 42 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Verdanturf is the only place you can\n"
# 43 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "buy it.$"
