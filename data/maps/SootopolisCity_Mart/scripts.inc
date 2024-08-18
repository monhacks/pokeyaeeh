# 1 "data/maps/SootopolisCity_Mart/scripts.pory"

# 2 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_MapScripts::
# 3 "data/maps/SootopolisCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_Mart/scripts.pory"

# 5 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_Clerk::
# 6 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 7 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/SootopolisCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/SootopolisCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemart 0
# 11 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 13 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 14 "data/maps/SootopolisCity_Mart/scripts.pory"

# 15 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_FatMan::
# 16 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 17 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 18 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_Mart_EventScript_FatManNoLegendaries
# 19 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_FatManNoLegendaries
# 20 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_TooScaryOutside, MSGBOX_DEFAULT
# 21 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 22 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 23 "data/maps/SootopolisCity_Mart/scripts.pory"

# 24 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_FatManNoLegendaries::
# 25 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_PPUpIsGreat, MSGBOX_DEFAULT
# 26 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 27 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 28 "data/maps/SootopolisCity_Mart/scripts.pory"

# 29 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_Gentleman::
# 30 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 31 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 32 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_Mart_EventScript_GentlemanNoLegendaries
# 33 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_GentlemanNoLegendaries
# 34 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_DidSomethingAwaken, MSGBOX_DEFAULT
# 35 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 36 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 37 "data/maps/SootopolisCity_Mart/scripts.pory"

# 38 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_GentlemanNoLegendaries::
# 39 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_FullRestoreItemOfDreams, MSGBOX_DEFAULT
# 40 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 41 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 42 "data/maps/SootopolisCity_Mart/scripts.pory"

# 43 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_PPUpIsGreat:
# 44 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "PP UP is great!\p"
# 45 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "It raises the Power Points, the PP,\n"
# 46 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "of a Pokémon move.$"
# 47 "data/maps/SootopolisCity_Mart/scripts.pory"

# 48 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_TooScaryOutside:
# 49 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "What…\n"
# 50 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "What is happening?\p"
# 51 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "I really want to know, but it's too\n"
# 52 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "scary to go outside.$"
# 53 "data/maps/SootopolisCity_Mart/scripts.pory"

# 54 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_FullRestoreItemOfDreams:
# 55 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Do you know Full Restore?\p"
# 56 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Full restoration of HP!\n"
# 57 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Eradication of all status problems!\p"
# 58 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "It's truly an item of your dreams!$"
# 59 "data/maps/SootopolisCity_Mart/scripts.pory"

# 60 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_DidSomethingAwaken:
# 61 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "This weather…\n"
# 62 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Did something awaken?$"
