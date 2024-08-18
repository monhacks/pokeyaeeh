# 1 "data/maps/FallarborTown_Mart/scripts.pory"

# 2 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_MapScripts::
# 3 "data/maps/FallarborTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown_Mart/scripts.pory"

# 5 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Clerk::
# 6 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 7 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/FallarborTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemart 0
# 11 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 13 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 14 "data/maps/FallarborTown_Mart/scripts.pory"

# 15 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Woman::
# 16 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_DecidingSkittyEvolve, MSGBOX_NPC
# 17 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 18 "data/maps/FallarborTown_Mart/scripts.pory"

# 19 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_PokefanM::
# 20 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_SellNuggetIFound, MSGBOX_NPC
# 21 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 22 "data/maps/FallarborTown_Mart/scripts.pory"

# 23 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Skitty::
# 24 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 25 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 26 "data/maps/FallarborTown_Mart/scripts.pory"
	waitse
# 27 "data/maps/FallarborTown_Mart/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 28 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_Skitty, MSGBOX_DEFAULT
# 29 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmoncry
# 30 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 31 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 32 "data/maps/FallarborTown_Mart/scripts.pory"

# 33 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_DecidingSkittyEvolve:
# 34 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I'm having a hard time deciding if I\n"
# 35 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "should make my Skitty evolve or not.\p"
# 36 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I only have to use this Moon Stone,\n"
# 37 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "but it's so hard to decide…\p"
# 38 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "If I make it evolve, it will become\n"
# 39 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "much stronger.\p"
# 40 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "But it will look so different, too.$"
# 41 "data/maps/FallarborTown_Mart/scripts.pory"

# 42 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_Skitty:
# 43 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Skitty: Miyao?$"
# 44 "data/maps/FallarborTown_Mart/scripts.pory"

# 45 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_SellNuggetIFound:
# 46 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "This Nugget I found here…\n"
# 47 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I suppose I'll have to sell it, seeing\l"
# 48 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "as how it has no other use.$"
