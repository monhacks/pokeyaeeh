# 1 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 2 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_MapScripts::
# 3 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 5 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_EventScript_Clerk::
# 6 "data/maps/LavaridgeTown_Mart/scripts.pory"
	lock
# 7 "data/maps/LavaridgeTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/LavaridgeTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/LavaridgeTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/LavaridgeTown_Mart/scripts.pory"
	pokemart 0
# 11 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/LavaridgeTown_Mart/scripts.pory"
	release
# 13 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 14 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 15 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_EventScript_ExpertM::
# 16 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox LavaridgeTown_Mart_Text_XSpeedFirstStrike, MSGBOX_NPC
# 17 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 18 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 19 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_EventScript_OldWoman::
# 20 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox LavaridgeTown_Mart_Text_LocalSpecialtyOnMtChimney, MSGBOX_NPC
# 21 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 22 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 23 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_Text_XSpeedFirstStrike:
# 24 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Use X Speed to add to a Pokémon's\n"
# 25 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Speed in battle.\p"
# 26 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "That will help it get in the first\n"
# 27 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "strike--a decided advantage!$"
# 28 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 29 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_Text_LocalSpecialtyOnMtChimney:
# 30 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "On Mt. Chimney's peak, there's a local\n"
# 31 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "specialty that you can buy only there.\p"
# 32 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Give it to a Pokémon--it will be elated.$"
