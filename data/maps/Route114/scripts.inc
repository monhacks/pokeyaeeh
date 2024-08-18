# 1 "data/maps/Route114/scripts.pory"

# 2 "data/maps/Route114/scripts.pory"
.set LOCALID_LENNY, 3
# 3 "data/maps/Route114/scripts.pory"

# 4 "data/maps/Route114/scripts.pory"
Route114_MapScripts::
# 5 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_OnTransition
# 6 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_OnLoad
# 7 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route114_OnFrame
# 8 "data/maps/Route114/scripts.pory"
	.byte 0
# 9 "data/maps/Route114/scripts.pory"

# 10 "data/maps/Route114/scripts.pory"
Route114_OnTransition:
# 11 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 12 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_StartGroudonWeather
# 13 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_StartGroudonWeather
# 14 "data/maps/Route114/scripts.pory"
	call_if_set FLAG_ROUTE_114_BOSS_DEFEATED, Route114_EventScript_LennyCoords
# 15 "data/maps/Route114/scripts.pory"
	end
# 16 "data/maps/Route114/scripts.pory"

# 17 "data/maps/Route114/scripts.pory"
Route114_OnLoad:
# 18 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute114North
# 19 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute114South
# 20 "data/maps/Route114/scripts.pory"
	end
# 21 "data/maps/Route114/scripts.pory"

# 22 "data/maps/Route114/scripts.pory"
Route114_OnFrame:
# 23 "data/maps/Route114/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 24 "data/maps/Route114/scripts.pory"
	.2byte 0
# 25 "data/maps/Route114/scripts.pory"

# 26 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man::
# 27 "data/maps/Route114/scripts.pory"
	lock
# 28 "data/maps/Route114/scripts.pory"
	faceplayer
# 29 "data/maps/Route114/scripts.pory"
	dotimebasedevents
# 30 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_ReceivedBerry
# 31 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
# 32 "data/maps/Route114/scripts.pory"
	random NUM_ROUTE_114_MAN_BERRIES
# 33 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, NUM_ROUTE_114_MAN_BERRIES_SKIPPED
# 34 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 35 "data/maps/Route114/scripts.pory"
	giveitem VAR_RESULT
# 36 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 37 "data/maps/Route114/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 38 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
# 39 "data/maps/Route114/scripts.pory"
	release
# 40 "data/maps/Route114/scripts.pory"
	end
# 41 "data/maps/Route114/scripts.pory"

# 42 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedBerry::
# 43 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
# 44 "data/maps/Route114/scripts.pory"
	release
# 45 "data/maps/Route114/scripts.pory"
	end
# 46 "data/maps/Route114/scripts.pory"

# 47 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman::
# 48 "data/maps/Route114/scripts.pory"
	lock
# 49 "data/maps/Route114/scripts.pory"
	faceplayer
# 50 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_SNARL, Route114_EventScript_ReceivedSnarl
# 51 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AllMyMonDoesIsSnarlTakeThis, MSGBOX_DEFAULT
# 52 "data/maps/Route114/scripts.pory"
	giveitem ITEM_TM_SNARL
# 53 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 54 "data/maps/Route114/scripts.pory"
	setflag FLAG_RECEIVED_TM_SNARL
# 55 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainSnarl, MSGBOX_DEFAULT
# 56 "data/maps/Route114/scripts.pory"
	release
# 57 "data/maps/Route114/scripts.pory"
	end
# 58 "data/maps/Route114/scripts.pory"

# 59 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedSnarl::
# 60 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainSnarl, MSGBOX_DEFAULT
# 61 "data/maps/Route114/scripts.pory"
	release
# 62 "data/maps/Route114/scripts.pory"
	end
# 63 "data/maps/Route114/scripts.pory"

# 64 "data/maps/Route114/scripts.pory"
Route114_EventScript_Poochyena::
# 65 "data/maps/Route114/scripts.pory"
	lock
# 66 "data/maps/Route114/scripts.pory"
	faceplayer
# 67 "data/maps/Route114/scripts.pory"
	waitse
# 68 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 69 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
# 70 "data/maps/Route114/scripts.pory"
	waitmoncry
# 71 "data/maps/Route114/scripts.pory"
	release
# 72 "data/maps/Route114/scripts.pory"
	end
# 73 "data/maps/Route114/scripts.pory"

# 74 "data/maps/Route114/scripts.pory"
Route114_EventScript_MeteorFallsSign::
# 75 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
# 76 "data/maps/Route114/scripts.pory"
	end
# 77 "data/maps/Route114/scripts.pory"

# 78 "data/maps/Route114/scripts.pory"
Route114_EventScript_FossilManiacsHouseSign::
# 79 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
# 80 "data/maps/Route114/scripts.pory"
	end
# 81 "data/maps/Route114/scripts.pory"

# 82 "data/maps/Route114/scripts.pory"
Route114_EventScript_LanettesHouseSign::
# 83 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
# 84 "data/maps/Route114/scripts.pory"
	end
# 85 "data/maps/Route114/scripts.pory"

# 86 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lucas::
# 87 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LUCAS_1, Route114_Text_LucasIntro, Route114_Text_LucasDefeat
# 88 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/Route114/scripts.pory"
	end
# 90 "data/maps/Route114/scripts.pory"

# 91 "data/maps/Route114/scripts.pory"
Route114_EventScript_Shane::
# 92 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_SHANE, Route114_Text_ShaneIntro, Route114_Text_ShaneDefeat
# 93 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ShanePostBattle, MSGBOX_AUTOCLOSE
# 94 "data/maps/Route114/scripts.pory"
	end
# 95 "data/maps/Route114/scripts.pory"

# 96 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nancy::
# 97 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NANCY, Route114_Text_NancyIntro, Route114_Text_NancyDefeat
# 98 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/Route114/scripts.pory"
	end
# 100 "data/maps/Route114/scripts.pory"

# 101 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve::
# 102 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_STEVE_1, Route114_Text_SteveIntro, Route114_Text_SteveDefeat, Route114_EventScript_RegisterSteve
# 103 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 104 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchSteve
# 105 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
# 106 "data/maps/Route114/scripts.pory"
	release
# 107 "data/maps/Route114/scripts.pory"
	end
# 108 "data/maps/Route114/scripts.pory"

# 109 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterSteve::
# 110 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 111 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 112 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
# 113 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_STEVE_1
# 114 "data/maps/Route114/scripts.pory"
	release
# 115 "data/maps/Route114/scripts.pory"
	end
# 116 "data/maps/Route114/scripts.pory"

# 117 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchSteve::
# 118 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
# 119 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
# 120 "data/maps/Route114/scripts.pory"
	end
# 121 "data/maps/Route114/scripts.pory"

# 122 "data/maps/Route114/scripts.pory"
Route114_EventScript_Bernie::
# 123 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_BERNIE_1, Route114_Text_BernieIntro, Route114_Text_BernieDefeat, Route114_EventScript_RegisterBernie
# 124 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 125 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchBernie
# 126 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostBattle, MSGBOX_DEFAULT
# 127 "data/maps/Route114/scripts.pory"
	release
# 128 "data/maps/Route114/scripts.pory"
	end
# 129 "data/maps/Route114/scripts.pory"

# 130 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterBernie::
# 131 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 132 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 133 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
# 134 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_BERNIE_1
# 135 "data/maps/Route114/scripts.pory"
	release
# 136 "data/maps/Route114/scripts.pory"
	end
# 137 "data/maps/Route114/scripts.pory"

# 138 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchBernie::
# 139 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_BERNIE_1, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
# 140 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
# 141 "data/maps/Route114/scripts.pory"
	end
# 142 "data/maps/Route114/scripts.pory"

# 143 "data/maps/Route114/scripts.pory"
Route114_EventScript_Claude::
# 144 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route114_Text_ClaudeIntro, Route114_Text_ClaudeDefeat
# 145 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 146 "data/maps/Route114/scripts.pory"
	end
# 147 "data/maps/Route114/scripts.pory"

# 148 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nolan::
# 149 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
# 150 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
# 151 "data/maps/Route114/scripts.pory"
	end
# 152 "data/maps/Route114/scripts.pory"

# 153 "data/maps/Route114/scripts.pory"
Route114_EventScript_Tyra::
# 154 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_TYRA_AND_IVY, Route114_Text_TyraIntro, Route114_Text_TyraDefeat
# 155 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 156 "data/maps/Route114/scripts.pory"
	end
# 157 "data/maps/Route114/scripts.pory"

# 158 "data/maps/Route114/scripts.pory"
Route114_EventScript_Ivy::
# 159 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_TYRA_AND_IVY, Route114_Text_IvyIntro, Route114_Text_IvyDefeat
# 160 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 161 "data/maps/Route114/scripts.pory"
	end
# 162 "data/maps/Route114/scripts.pory"

# 163 "data/maps/Route114/scripts.pory"
Route114_EventScript_Angelina::
# 164 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_ANGELINA, Route114_Text_AngelinaIntro, Route114_Text_AngelinaDefeat
# 165 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AngelinaPostBattle, MSGBOX_AUTOCLOSE
# 166 "data/maps/Route114/scripts.pory"
	end
# 167 "data/maps/Route114/scripts.pory"

# 168 "data/maps/Route114/scripts.pory"
Route114_EventScript_Charlotte::
# 169 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CHARLOTTE, Route114_Text_CharlotteIntro, Route114_Text_CharlotteDefeat
# 170 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 171 "data/maps/Route114/scripts.pory"
	end
# 172 "data/maps/Route114/scripts.pory"

# 173 "data/maps/Route114/scripts.pory"
Route114_EventScript_Kai::
# 174 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_KAI, Route114_Text_KaiIntro, Route114_Text_KaiDefeat
# 175 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 176 "data/maps/Route114/scripts.pory"
	end
# 177 "data/maps/Route114/scripts.pory"

# 178 "data/maps/Route114/scripts.pory"
Route114_Text_AllMyMonDoesIsSnarlTakeThis:
# 179 "data/maps/Route114/scripts.pory"
	.string "All my Pokémon does is Snarl…\n"
# 180 "data/maps/Route114/scripts.pory"
	.string "No one dares to come near me…\p"
# 181 "data/maps/Route114/scripts.pory"
	.string "Sigh… If you would, please take\n"
# 182 "data/maps/Route114/scripts.pory"
	.string "this TM away…$"
# 183 "data/maps/Route114/scripts.pory"

# 184 "data/maps/Route114/scripts.pory"
Route114_Text_ExplainSnarl:
# 185 "data/maps/Route114/scripts.pory"
	.string "TM112 contains Snarl.\n"
# 186 "data/maps/Route114/scripts.pory"
	.string "A ranting scream that hits both enemies\l"
# 187 "data/maps/Route114/scripts.pory"
	.string "and lowers their Sp. Attack.$"
# 188 "data/maps/Route114/scripts.pory"

# 189 "data/maps/Route114/scripts.pory"
Route114_Text_Poochyena:
# 190 "data/maps/Route114/scripts.pory"
	.string "Bow! Bowwow!$"
# 191 "data/maps/Route114/scripts.pory"

# 192 "data/maps/Route114/scripts.pory"
Route114_Text_MeteorFallsSign:
# 193 "data/maps/Route114/scripts.pory"
	.string "Meteor Falls\n"
# 194 "data/maps/Route114/scripts.pory"
	.string "Rustboro City through here$"
# 195 "data/maps/Route114/scripts.pory"

# 196 "data/maps/Route114/scripts.pory"
Route114_Text_FossilManiacsHouseSign:
# 197 "data/maps/Route114/scripts.pory"
	.string "Fossil Maniac's House\n"
# 198 "data/maps/Route114/scripts.pory"
	.string "“Fossils gratefully accepted!”$"
# 199 "data/maps/Route114/scripts.pory"

# 200 "data/maps/Route114/scripts.pory"
Route114_Text_LanettesHouse:
# 201 "data/maps/Route114/scripts.pory"
	.string "Lanette's House$"

Route114_EventScript_LennyCoords::
# 210 "data/maps/Route114/scripts.pory"
	setobjectxyperm LOCALID_LENNY, 9, 64
	return


# 213 "data/maps/Route114/scripts.pory"
Lenny_Movement_Right:
# 214 "data/maps/Route114/scripts.pory"
	walk_right
# 215 "data/maps/Route114/scripts.pory"
	face_down
	step_end

# 218 "data/maps/Route114/scripts.pory"
Player_Movement_DownFaceUp:
# 219 "data/maps/Route114/scripts.pory"
	face_left
# 220 "data/maps/Route114/scripts.pory"
	lock_facing_direction
# 221 "data/maps/Route114/scripts.pory"
	walk_down
# 222 "data/maps/Route114/scripts.pory"
	unlock_facing_direction
# 223 "data/maps/Route114/scripts.pory"
	face_up
	step_end

Route114_EventScript_Lenny2::
# 227 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_Lenny2_Text_0, MSGBOX_AUTOCLOSE
# 228 "data/maps/Route114/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 229 "data/maps/Route114/scripts.pory"
	compare VAR_TEMP_2, 9
	goto_if_eq Route114_EventScript_Lenny2_2
Route114_EventScript_Lenny2_1:
# 234 "data/maps/Route114/scripts.pory"
	applymovement LOCALID_LENNY, Lenny_Movement_Right
# 235 "data/maps/Route114/scripts.pory"
	setflag FLAG_ROUTE_114_BOSS_DEFEATED
# 236 "data/maps/Route114/scripts.pory"
	waitmovement 0
	return

Route114_EventScript_Lenny2_2:
# 231 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Movement_DownFaceUp
# 232 "data/maps/Route114/scripts.pory"
	waitmovement 0
	goto Route114_EventScript_Lenny2_1


Route114_EventScript_Lenny::
# 240 "data/maps/Route114/scripts.pory"
	lock
# 241 "data/maps/Route114/scripts.pory"
	faceplayer
# 242 "data/maps/Route114/scripts.pory"
	checktrainerflag TRAINER_LUCAS_1
	goto_if 1, Route114_EventScript_Lenny_5
Route114_EventScript_Lenny_3:
# 260 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_Lenny_Text_1, MSGBOX_NPC
Route114_EventScript_Lenny_1:
# 262 "data/maps/Route114/scripts.pory"
	release
	end

Route114_EventScript_Lenny_2:
# 253 "data/maps/Route114/scripts.pory"
	setflag B_FLAG_NO_BAG_USE
# 254 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LENNY, Route114_Text_LennyIntro, Route114_Text_LennyDefeat, Route114_EventScript_Lenny2
# 255 "data/maps/Route114/scripts.pory"
	clearflag B_FLAG_NO_BAG_USE
# 256 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_Lenny_Text_0, MSGBOX_AUTOCLOSE
	goto Route114_EventScript_Lenny_1

Route114_EventScript_Lenny_4:
# 244 "data/maps/Route114/scripts.pory"
	checktrainerflag TRAINER_NANCY
	goto_if 1, Route114_EventScript_Lenny_9
	goto Route114_EventScript_Lenny_3

Route114_EventScript_Lenny_5:
# 243 "data/maps/Route114/scripts.pory"
	checktrainerflag TRAINER_SHANE
	goto_if 1, Route114_EventScript_Lenny_4
	goto Route114_EventScript_Lenny_3

Route114_EventScript_Lenny_8:
# 246 "data/maps/Route114/scripts.pory"
	checktrainerflag TRAINER_BERNIE_1
	goto_if 1, Route114_EventScript_Lenny_13
	goto Route114_EventScript_Lenny_3

Route114_EventScript_Lenny_9:
# 245 "data/maps/Route114/scripts.pory"
	checktrainerflag TRAINER_STEVE_1
	goto_if 1, Route114_EventScript_Lenny_8
	goto Route114_EventScript_Lenny_3

Route114_EventScript_Lenny_12:
# 248 "data/maps/Route114/scripts.pory"
	checktrainerflag TRAINER_NOLAN
	goto_if 1, Route114_EventScript_Lenny_17
	goto Route114_EventScript_Lenny_3

Route114_EventScript_Lenny_13:
# 247 "data/maps/Route114/scripts.pory"
	checktrainerflag TRAINER_CLAUDE
	goto_if 1, Route114_EventScript_Lenny_12
	goto Route114_EventScript_Lenny_3

Route114_EventScript_Lenny_16:
# 250 "data/maps/Route114/scripts.pory"
	checktrainerflag TRAINER_ANGELINA
	goto_if 1, Route114_EventScript_Lenny_21
	goto Route114_EventScript_Lenny_3

Route114_EventScript_Lenny_17:
# 249 "data/maps/Route114/scripts.pory"
	checktrainerflag TRAINER_TYRA_AND_IVY
	goto_if 1, Route114_EventScript_Lenny_16
	goto Route114_EventScript_Lenny_3

Route114_EventScript_Lenny_20:
# 252 "data/maps/Route114/scripts.pory"
	checktrainerflag TRAINER_KAI
	goto_if 1, Route114_EventScript_Lenny_2
	goto Route114_EventScript_Lenny_3

Route114_EventScript_Lenny_21:
# 251 "data/maps/Route114/scripts.pory"
	checktrainerflag TRAINER_CHARLOTTE
	goto_if 1, Route114_EventScript_Lenny_20
	goto Route114_EventScript_Lenny_3


Route114_EventScript_Lenny2_Text_0:
# 227 "data/maps/Route114/scripts.pory"
	.string "Fine, I'll move!$"

Route114_EventScript_Lenny_Text_0:
# 256 "data/maps/Route114/scripts.pory"
	.string "Ya happy now?$"

Route114_EventScript_Lenny_Text_1:
# 260 "data/maps/Route114/scripts.pory"
	.string "Yodelayhihoo!\pI'm busy. Don't even bother!$"
