# 1 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
.set LOCALID_WOMAN, 7
# 3 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 4 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_MapScripts::
# 5 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LilycoveCity_DepartmentStore_5F_OnWarp
# 6 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.byte 0
# 7 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 8 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
@ During the abnormal weather from Kyogre/Groudon awakening the dept store rooftop is inaccessible
# 9 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
@ Likely done to avoid dealing with showing the weather. Technically the rooftop is indoors
# 10 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_OnWarp:
# 11 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
# 12 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 2, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
# 13 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 3, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
# 14 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 4, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
# 15 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte 0
# 16 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 17 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs::
# 18 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	setobjectxy LOCALID_WOMAN, 16, 2
# 19 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	turnobject LOCALID_WOMAN, DIR_NORTH
# 20 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 21 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 22 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_ClerkFarLeft::
# 23 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 24 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 25 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 26 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 27 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Dolls
# 28 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 29 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 30 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 31 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 32 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.align 2
# 33 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Dolls:
# 34 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_PICHU_DOLL
# 35 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_PIKACHU_DOLL
# 36 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 37 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_JIGGLYPUFF_DOLL
# 38 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_DUSKULL_DOLL
# 39 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_WYNAUT_DOLL
# 40 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_BALTOY_DOLL
# 41 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_KECLEON_DOLL
# 42 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 43 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 44 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SWABLU_DOLL
# 45 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_GULPIN_DOLL
# 46 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_NONE
# 47 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 48 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 49 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 50 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_ClerkMidLeft::
# 51 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 52 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 53 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 54 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 55 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Cushions
# 56 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 57 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 58 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 59 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 60 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.align 2
# 61 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Cushions:
# 62 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_PIKA_CUSHION
# 63 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_ROUND_CUSHION
# 64 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_ZIGZAG_CUSHION
# 65 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SPIN_CUSHION
# 66 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_DIAMOND_CUSHION
# 67 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_BALL_CUSHION
# 68 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_GRASS_CUSHION
# 69 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_FIRE_CUSHION
# 70 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_WATER_CUSHION
# 71 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_NONE
# 72 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 73 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 74 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 75 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_ClerkMidRight::
# 76 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 77 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 78 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 79 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 80 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Posters
# 81 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 82 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 83 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 84 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 85 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.align 2
# 86 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Posters:
# 87 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_BALL_POSTER
# 88 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_GREEN_POSTER
# 89 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_RED_POSTER
# 90 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_BLUE_POSTER
# 91 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_CUTE_POSTER
# 92 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_PIKA_POSTER
# 93 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_LONG_POSTER
# 94 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SEA_POSTER
# 95 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SKY_POSTER
# 96 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_NONE
# 97 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 98 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 99 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 100 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_ClerkFarRight::
# 101 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 102 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 103 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 104 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 105 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Mats
# 106 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 107 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 108 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 109 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 110 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.align 2
# 111 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Mats:
# 112 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SURF_MAT
# 113 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_THUNDER_MAT
# 114 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_FIRE_BLAST_MAT
# 115 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_POWDER_SNOW_MAT
# 116 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_ATTRACT_MAT
# 117 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_FISSURE_MAT
# 118 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SPIKES_MAT
# 119 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_GLITTER_MAT
# 120 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_JUMP_MAT
# 121 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SPIN_MAT
# 122 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_NONE
# 123 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 124 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 125 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 126 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_PokefanF::
# 127 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_PlaceFullOfCuteDolls, MSGBOX_NPC
# 128 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 129 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 130 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_Woman::
# 131 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lockall
# 132 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	applymovement LOCALID_WOMAN, Common_Movement_FacePlayer
# 133 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmovement 0
# 134 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal
# 135 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 5, LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal
# 136 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto LilycoveCity_DepartmentStore_5F_EventScript_WomanLegendaryWeather
# 137 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 138 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 139 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal::
# 140 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_SellManyCuteMatsHere, MSGBOX_DEFAULT
# 141 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	closemessage
# 142 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	releaseall
# 143 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 144 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 145 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_WomanLegendaryWeather::
# 146 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_ClosedRooftopForWeather, MSGBOX_DEFAULT
# 147 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	closemessage
# 148 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	applymovement LOCALID_WOMAN, Common_Movement_WalkInPlaceFasterUp
# 149 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmovement 0
# 150 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	releaseall
# 151 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 152 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 153 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_LittleGirl::
# 154 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_GettingDollInsteadOfPokemon, MSGBOX_NPC
# 155 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 156 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 157 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Text_PlaceFullOfCuteDolls:
# 158 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "This place is full of cute Dolls.\p"
# 159 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I should buy some for me, instead of\n"
# 160 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "just for my children.$"
# 161 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 162 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Text_GettingDollInsteadOfPokemon:
# 163 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I'm not big enough to raise Pokémon,\n"
# 164 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "so I'm getting a cute Doll instead.$"
# 165 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 166 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Text_SellManyCuteMatsHere:
# 167 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "They sell many cute Mats here.\p"
# 168 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I wonder which one I should get?\n"
# 169 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "Maybe I'll buy them all…$"
# 170 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 171 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Text_ClosedRooftopForWeather:
# 172 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I think they closed the rooftop\n"
# 173 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "because the weather is wild today.$"
