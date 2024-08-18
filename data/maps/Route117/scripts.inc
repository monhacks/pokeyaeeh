# 1 "data/maps/Route117/scripts.pory"

# 2 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MAN, 3
# 3 "data/maps/Route117/scripts.pory"

# 4 "data/maps/Route117/scripts.pory"
Route117_MapScripts::
# 5 "data/maps/Route117/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_OnTransition
# 6 "data/maps/Route117/scripts.pory"
	.byte 0
# 7 "data/maps/Route117/scripts.pory"

# 8 "data/maps/Route117/scripts.pory"
Route117_OnTransition:
# 9 "data/maps/Route117/scripts.pory"
	call Route117_EventScript_TryMoveDayCareMan
# 10 "data/maps/Route117/scripts.pory"
	end
# 11 "data/maps/Route117/scripts.pory"

# 12 "data/maps/Route117/scripts.pory"
Route117_EventScript_TryMoveDayCareMan::
# 13 "data/maps/Route117/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_StopMoveDayCareMan
# 14 "data/maps/Route117/scripts.pory"
	setobjectxyperm LOCALID_DAYCARE_MAN, 47, 6
# 15 "data/maps/Route117/scripts.pory"
Route117_EventScript_StopMoveDayCareMan::
# 16 "data/maps/Route117/scripts.pory"
	return
# 17 "data/maps/Route117/scripts.pory"

# 18 "data/maps/Route117/scripts.pory"
Route117_EventScript_Woman::
# 19 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_ArentTheseFlowersPretty, MSGBOX_NPC
# 20 "data/maps/Route117/scripts.pory"
	end
# 21 "data/maps/Route117/scripts.pory"

# 22 "data/maps/Route117/scripts.pory"
Route117_EventScript_LittleBoy::
# 23 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AirIsTastyHere, MSGBOX_NPC
# 24 "data/maps/Route117/scripts.pory"
	end
# 25 "data/maps/Route117/scripts.pory"

# 26 "data/maps/Route117/scripts.pory"
Route117_EventScript_Girl::
# 27 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
# 28 "data/maps/Route117/scripts.pory"
	end
# 29 "data/maps/Route117/scripts.pory"

# 30 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignVerdanturf::
# 31 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
# 32 "data/maps/Route117/scripts.pory"
	end
# 33 "data/maps/Route117/scripts.pory"

# 34 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignMauville::
# 35 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
# 36 "data/maps/Route117/scripts.pory"
	end
# 37 "data/maps/Route117/scripts.pory"

# 38 "data/maps/Route117/scripts.pory"
Route117_EventScript_DayCareSign::
# 39 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
# 40 "data/maps/Route117/scripts.pory"
	end
# 41 "data/maps/Route117/scripts.pory"

# 42 "data/maps/Route117/scripts.pory"
Route117_EventScript_Lydia::
# 43 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_LYDIA_1, Route117_Text_LydiaIntro, Route117_Text_LydiaDefeat, Route117_EventScript_RegisterLydia
# 44 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 45 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchLydia
# 46 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
# 47 "data/maps/Route117/scripts.pory"
	release
# 48 "data/maps/Route117/scripts.pory"
	end
# 49 "data/maps/Route117/scripts.pory"

# 50 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterLydia::
# 51 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 52 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 53 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
# 54 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_LYDIA_1
# 55 "data/maps/Route117/scripts.pory"
	release
# 56 "data/maps/Route117/scripts.pory"
	end
# 57 "data/maps/Route117/scripts.pory"

# 58 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchLydia::
# 59 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
# 60 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
# 61 "data/maps/Route117/scripts.pory"
	end
# 62 "data/maps/Route117/scripts.pory"

# 63 "data/maps/Route117/scripts.pory"
Route117_EventScript_Dylan::
# 64 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DYLAN_1, Route117_Text_DylanIntro, Route117_Text_DylanDefeat, Route117_EventScript_RegisterDylan
# 65 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 66 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchDylan
# 67 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
# 68 "data/maps/Route117/scripts.pory"
	release
# 69 "data/maps/Route117/scripts.pory"
	end
# 70 "data/maps/Route117/scripts.pory"

# 71 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterDylan::
# 72 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 73 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
# 75 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_DYLAN_1
# 76 "data/maps/Route117/scripts.pory"
	release
# 77 "data/maps/Route117/scripts.pory"
	end
# 78 "data/maps/Route117/scripts.pory"

# 79 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchDylan::
# 80 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
# 81 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
# 82 "data/maps/Route117/scripts.pory"
	end
# 83 "data/maps/Route117/scripts.pory"

# 84 "data/maps/Route117/scripts.pory"
Route117_EventScript_Maria::
# 85 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MARIA_1, Route117_Text_MariaIntro, Route117_Text_MariaDefeat, Route117_EventScript_RegisterMaria
# 86 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 87 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMaria
# 88 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
# 89 "data/maps/Route117/scripts.pory"
	release
# 90 "data/maps/Route117/scripts.pory"
	end
# 91 "data/maps/Route117/scripts.pory"

# 92 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMaria::
# 93 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 94 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
# 96 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_MARIA_1
# 97 "data/maps/Route117/scripts.pory"
	release
# 98 "data/maps/Route117/scripts.pory"
	end
# 99 "data/maps/Route117/scripts.pory"

# 100 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMaria::
# 101 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
# 102 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
# 103 "data/maps/Route117/scripts.pory"
	end
# 104 "data/maps/Route117/scripts.pory"

# 105 "data/maps/Route117/scripts.pory"
Route117_EventScript_Derek::
# 106 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DEREK, Route117_Text_DerekIntro, Route117_Text_DerekDefeat
# 107 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/Route117/scripts.pory"
	end
# 109 "data/maps/Route117/scripts.pory"

# 110 "data/maps/Route117/scripts.pory"
Route117_EventScript_Anna::
# 111 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaIntro, Route117_Text_AnnaDefeat, Route117_EventScript_RegisterAnna
# 112 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 113 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchAnna
# 114 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
# 115 "data/maps/Route117/scripts.pory"
	release
# 116 "data/maps/Route117/scripts.pory"
	end
# 117 "data/maps/Route117/scripts.pory"

# 118 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterAnna::
# 119 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 120 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 121 "data/maps/Route117/scripts.pory"
	release
# 122 "data/maps/Route117/scripts.pory"
	end
# 123 "data/maps/Route117/scripts.pory"

# 124 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchAnna::
# 125 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat
# 126 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
# 127 "data/maps/Route117/scripts.pory"
	end
# 128 "data/maps/Route117/scripts.pory"

# 129 "data/maps/Route117/scripts.pory"
Route117_EventScript_Meg::
# 130 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_ANNA_AND_MEG_1, Route117_Text_MegIntro, Route117_Text_MegDefeat, Route117_EventScript_RegisterMeg
# 131 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 132 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMeg
# 133 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
# 134 "data/maps/Route117/scripts.pory"
	release
# 135 "data/maps/Route117/scripts.pory"
	end
# 136 "data/maps/Route117/scripts.pory"

# 137 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMeg::
# 138 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 139 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 140 "data/maps/Route117/scripts.pory"
	release
# 141 "data/maps/Route117/scripts.pory"
	end
# 142 "data/maps/Route117/scripts.pory"

# 143 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMeg::
# 144 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat
# 145 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
# 146 "data/maps/Route117/scripts.pory"
	end
# 147 "data/maps/Route117/scripts.pory"

# 148 "data/maps/Route117/scripts.pory"
Route117_EventScript_Melina::
# 149 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MELINA, Route117_Text_MelinaIntro, Route117_Text_MelinaDefeat
# 150 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
# 151 "data/maps/Route117/scripts.pory"
	end
# 152 "data/maps/Route117/scripts.pory"

# 153 "data/maps/Route117/scripts.pory"
Route117_EventScript_Brandi::
# 154 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_BRANDI, Route117_Text_BrandiIntro, Route117_Text_BrandiDefeat
# 155 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 156 "data/maps/Route117/scripts.pory"
	end
# 157 "data/maps/Route117/scripts.pory"

# 158 "data/maps/Route117/scripts.pory"
Route117_EventScript_Aisha::
# 159 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_AISHA, Route117_Text_AishaIntro, Route117_Text_AishaDefeat
# 160 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 161 "data/maps/Route117/scripts.pory"
	end
# 162 "data/maps/Route117/scripts.pory"

# 163 "data/maps/Route117/scripts.pory"
Route117_Text_DayCarePokemonHadNewMove:
# 164 "data/maps/Route117/scripts.pory"
	.string "I left my Pokémon at the Day Care.\p"
# 165 "data/maps/Route117/scripts.pory"
	.string "When I got it back, it had a new move\n"
# 166 "data/maps/Route117/scripts.pory"
	.string "that I didn't teach it.\l"
# 167 "data/maps/Route117/scripts.pory"
	.string "I was really, really surprised.$"
# 168 "data/maps/Route117/scripts.pory"

# 169 "data/maps/Route117/scripts.pory"
Route117_Text_ArentTheseFlowersPretty:
# 170 "data/maps/Route117/scripts.pory"
	.string "What do you think?\n"
# 171 "data/maps/Route117/scripts.pory"
	.string "Aren't these flowers pretty?\p"
# 172 "data/maps/Route117/scripts.pory"
	.string "I planted them all!$"
# 173 "data/maps/Route117/scripts.pory"

# 174 "data/maps/Route117/scripts.pory"
Route117_Text_AirIsTastyHere:
# 175 "data/maps/Route117/scripts.pory"
	.string "The air is tasty here!$"
# 176 "data/maps/Route117/scripts.pory"

# 177 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignVerdanturf:
# 178 "data/maps/Route117/scripts.pory"
	.string "Route 117\n"
# 179 "data/maps/Route117/scripts.pory"
	.string "{LEFT_ARROW} Verdanturf Town$"
# 180 "data/maps/Route117/scripts.pory"

# 181 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignMauville:
# 182 "data/maps/Route117/scripts.pory"
	.string "Route 117\n"
# 183 "data/maps/Route117/scripts.pory"
	.string "{RIGHT_ARROW} Mauville City$"
# 184 "data/maps/Route117/scripts.pory"

# 185 "data/maps/Route117/scripts.pory"
Route117_Text_DayCareSign:
# 186 "data/maps/Route117/scripts.pory"
	.string "Pokémon Day Care\n"
# 187 "data/maps/Route117/scripts.pory"
	.string "“Let us raise your Pokémon.”$"

Route117_EventScript_Isaac2::
# 196 "data/maps/Route117/scripts.pory"
	msgbox Route117_EventScript_Isaac2_Text_0, MSGBOX_AUTOCLOSE
# 197 "data/maps/Route117/scripts.pory"
	givemon SPECIES_SNORLAX, 0, ITEM_LEFTOVERS, ITEM_CHERISH_BALL, 3, 2, MON_MALE, 252, 252, 0, 0, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FACADE, MOVE_SLACK_OFF, MOVE_SLEEP_TALK, MOVE_CRUNCH, TRUE
# 198 "data/maps/Route117/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SNORLAX
# 199 "data/maps/Route117/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SNORLAX
# 200 "data/maps/Route117/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 201 "data/maps/Route117/scripts.pory"
	message Route117_EventScript_Isaac2_Text_1
# 202 "data/maps/Route117/scripts.pory"
	waitmessage
# 203 "data/maps/Route117/scripts.pory"
	waitfanfare
# 204 "data/maps/Route117/scripts.pory"
	call Common_EventScript_Nickname
# 205 "data/maps/Route117/scripts.pory"
	msgbox Route117_EventScript_Isaac2_Text_2, MSGBOX_AUTOCLOSE
# 206 "data/maps/Route117/scripts.pory"
	msgbox Route117_EventScript_Isaac2_Text_3
# 207 "data/maps/Route117/scripts.pory"
	giveitem ITEM_TM_FACADE, 1
# 208 "data/maps/Route117/scripts.pory"
	setflag FLAG_ROUTE_117_BOSS_DEFEATED
# 209 "data/maps/Route117/scripts.pory"
	msgbox Route117_EventScript_Isaac2_Text_4, MSGBOX_AUTOCLOSE
	return


Route117_EventScript_Isaac::
# 213 "data/maps/Route117/scripts.pory"
	lock
# 214 "data/maps/Route117/scripts.pory"
	faceplayer
# 215 "data/maps/Route117/scripts.pory"
	checktrainerflag TRAINER_LYDIA_1
	goto_if 1, Route117_EventScript_Isaac_5
Route117_EventScript_Isaac_3:
# 230 "data/maps/Route117/scripts.pory"
	msgbox Route117_EventScript_Isaac_Text_0, MSGBOX_NPC
Route117_EventScript_Isaac_1:
# 232 "data/maps/Route117/scripts.pory"
	release
	end

Route117_EventScript_Isaac_2:
# 223 "data/maps/Route117/scripts.pory"
	setflag B_FLAG_NO_BAG_USE
# 224 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_ISAAC_1, Route117_Text_IsaacIntro, Route117_Text_IsaacDefeat, Route117_EventScript_Isaac2
# 225 "data/maps/Route117/scripts.pory"
	clearflag B_FLAG_NO_BAG_USE
# 226 "data/maps/Route117/scripts.pory"
	msgbox Route117_EventScript_Isaac2_Text_4, MSGBOX_AUTOCLOSE
	goto Route117_EventScript_Isaac_1

Route117_EventScript_Isaac_4:
# 217 "data/maps/Route117/scripts.pory"
	checktrainerflag TRAINER_MARIA_1
	goto_if 1, Route117_EventScript_Isaac_9
	goto Route117_EventScript_Isaac_3

Route117_EventScript_Isaac_5:
# 216 "data/maps/Route117/scripts.pory"
	checktrainerflag TRAINER_DYLAN_1
	goto_if 1, Route117_EventScript_Isaac_4
	goto Route117_EventScript_Isaac_3

Route117_EventScript_Isaac_8:
# 219 "data/maps/Route117/scripts.pory"
	checktrainerflag TRAINER_ANNA_AND_MEG_1
	goto_if 1, Route117_EventScript_Isaac_13
	goto Route117_EventScript_Isaac_3

Route117_EventScript_Isaac_9:
# 218 "data/maps/Route117/scripts.pory"
	checktrainerflag TRAINER_DEREK
	goto_if 1, Route117_EventScript_Isaac_8
	goto Route117_EventScript_Isaac_3

Route117_EventScript_Isaac_12:
# 221 "data/maps/Route117/scripts.pory"
	checktrainerflag TRAINER_BRANDI
	goto_if 1, Route117_EventScript_Isaac_16
	goto Route117_EventScript_Isaac_3

Route117_EventScript_Isaac_13:
# 220 "data/maps/Route117/scripts.pory"
	checktrainerflag TRAINER_MELINA
	goto_if 1, Route117_EventScript_Isaac_12
	goto Route117_EventScript_Isaac_3

Route117_EventScript_Isaac_16:
# 222 "data/maps/Route117/scripts.pory"
	checktrainerflag TRAINER_AISHA
	goto_if 1, Route117_EventScript_Isaac_2
	goto Route117_EventScript_Isaac_3


Route117_EventScript_Isaac2_Text_0:
# 196 "data/maps/Route117/scripts.pory"
	.string "Hey! That was nice!\pNow for your reward.$"

Route117_EventScript_Isaac2_Text_1:
# 201 "data/maps/Route117/scripts.pory"
	.string "{PLAYER} received a Snorlax!$"

Route117_EventScript_Isaac2_Text_2:
# 205 "data/maps/Route117/scripts.pory"
	.string "Snorlax is a beast!\pI hope you and he can win many battles\nin the future!$"

Route117_EventScript_Isaac2_Text_3:
# 206 "data/maps/Route117/scripts.pory"
	.string "And this, too!$"

Route117_EventScript_Isaac2_Text_4:
# 209 "data/maps/Route117/scripts.pory"
	.string "Facade is a move that doubles in damage\nif the Pokémon using it is suffering\lfrom status. Pretty neat, eh?\pPair with a Pokémon who has Guts,\nand you get massive damage!$"

Route117_EventScript_Isaac_Text_0:
# 230 "data/maps/Route117/scripts.pory"
	.string "Hello, there!\pHere for a battle, huh?\pHow about this? You beat everybody else\nhere and then face me?\pIf you beat me, I'll give you a\nlnice big reward?$"
