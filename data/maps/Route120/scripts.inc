# 1 "data/maps/Route120/scripts.pory"

# 2 "data/maps/Route120/scripts.pory"
.set LOCALID_BRIDGE_KECLEON, 30
# 3 "data/maps/Route120/scripts.pory"
.set LOCALID_STEVEN, 31
# 4 "data/maps/Route120/scripts.pory"
.set LOCALID_BRIDGE_KECLEON_SHADOW, 36  @ They use a second object which is identical to Kecleon but has a reflection palette tag for the bridge shadow
# 5 "data/maps/Route120/scripts.pory"

# 6 "data/maps/Route120/scripts.pory"
Route120_MapScripts::
# 7 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route120_OnResume
# 8 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route120_OnTransition
# 9 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route120_OnLoad
# 10 "data/maps/Route120/scripts.pory"
	.byte 0
# 11 "data/maps/Route120/scripts.pory"

# 12 "data/maps/Route120/scripts.pory"
Route120_OnResume:
# 13 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route120_EventScript_RemoveKecleonObject
# 14 "data/maps/Route120/scripts.pory"
	end
# 15 "data/maps/Route120/scripts.pory"

# 16 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject::
# 17 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 0, Route120_EventScript_RemoveBridgeKecleon
# 18 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 1, Route120_EventScript_RemoveKecleon
# 19 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 2, Route120_EventScript_RemoveKecleon
# 20 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 3, Route120_EventScript_RemoveKecleon
# 21 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 4, Route120_EventScript_RemoveKecleon
# 22 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 5, Route120_EventScript_RemoveKecleon
# 23 "data/maps/Route120/scripts.pory"
	return
# 24 "data/maps/Route120/scripts.pory"

# 25 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleon::
# 26 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 27 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 28 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 29 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 30 "data/maps/Route120/scripts.pory"
	return
# 31 "data/maps/Route120/scripts.pory"

# 32 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleon::
# 33 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 34 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 35 "data/maps/Route120/scripts.pory"
	removeobject VAR_LAST_TALKED
# 36 "data/maps/Route120/scripts.pory"
	return
# 37 "data/maps/Route120/scripts.pory"

# 38 "data/maps/Route120/scripts.pory"
Route120_OnLoad:
# 39 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route120_EventScript_CloseAncientTomb
# 40 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeClearMetatiles
# 41 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeKecleonMovement
# 42 "data/maps/Route120/scripts.pory"
	end
# 43 "data/maps/Route120/scripts.pory"

# 44 "data/maps/Route120/scripts.pory"
Route120_EventScript_CloseAncientTomb::
# 45 "data/maps/Route120/scripts.pory"
	setmetatile 7, 54, METATILE_General_RockWall_RockBase, TRUE
# 46 "data/maps/Route120/scripts.pory"
	setmetatile 7, 55, METATILE_General_RockWall_SandBase, TRUE
# 47 "data/maps/Route120/scripts.pory"
	return
# 48 "data/maps/Route120/scripts.pory"

# 49 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeClearMetatiles::
# 50 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 51 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 52 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 53 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 54 "data/maps/Route120/scripts.pory"
	return
# 55 "data/maps/Route120/scripts.pory"

# 56 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeKecleonMovement::
# 57 "data/maps/Route120/scripts.pory"
	setobjectmovementtype LOCALID_BRIDGE_KECLEON_SHADOW, MOVEMENT_TYPE_FACE_RIGHT
# 58 "data/maps/Route120/scripts.pory"
	return
# 59 "data/maps/Route120/scripts.pory"

# 60 "data/maps/Route120/scripts.pory"
Route120_OnTransition:
# 61 "data/maps/Route120/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 62 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_SetWeather
# 63 "data/maps/Route120/scripts.pory"
	end
# 64 "data/maps/Route120/scripts.pory"

# 65 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather::
# 66 "data/maps/Route120/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 67 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 14, Route120_EventScript_SetSunnyWeather
# 68 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 60, Route120_EventScript_TrySetRainyWeather
# 69 "data/maps/Route120/scripts.pory"
	goto_if_ge VAR_TEMP_1, 61, Route120_EventScript_SetCloudyWeather
# 70 "data/maps/Route120/scripts.pory"
	return
# 71 "data/maps/Route120/scripts.pory"

# 72 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetCloudyWeather::
# 73 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
# 74 "data/maps/Route120/scripts.pory"
	return
# 75 "data/maps/Route120/scripts.pory"

# 76 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetSunnyWeather::
# 77 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY
# 78 "data/maps/Route120/scripts.pory"
	return
# 79 "data/maps/Route120/scripts.pory"

# 80 "data/maps/Route120/scripts.pory"
Route120_EventScript_TrySetRainyWeather::
# 81 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 7, Route120_EventScript_SetRainyWeather
# 82 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 19, Route120_EventScript_SetSunnyWeather
# 83 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetRainyWeather
# 84 "data/maps/Route120/scripts.pory"
	end
# 85 "data/maps/Route120/scripts.pory"

# 86 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetRainyWeather::
# 87 "data/maps/Route120/scripts.pory"
	setweather WEATHER_RAIN
# 88 "data/maps/Route120/scripts.pory"
	return
# 89 "data/maps/Route120/scripts.pory"

# 90 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty::
# 91 "data/maps/Route120/scripts.pory"
	lock
# 92 "data/maps/Route120/scripts.pory"
	faceplayer
# 93 "data/maps/Route120/scripts.pory"
	dotimebasedevents
# 94 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_120_RECEIVED_BERRY, Route120_EventScript_ReceivedBerry
# 95 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerriesExpressionOfLoveIsntIt, MSGBOX_YESNO
# 96 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route120_EventScript_BerryLove
# 97 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route120_EventScript_BerryNotLove
# 98 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
# 99 "data/maps/Route120/scripts.pory"
	switch VAR_RESULT
# 100 "data/maps/Route120/scripts.pory"
	case 0, Route120_EventScript_GiveFigyBerry
# 101 "data/maps/Route120/scripts.pory"
	case 5, Route120_EventScript_GiveFigyBerry
# 102 "data/maps/Route120/scripts.pory"
	case 1, Route120_EventScript_GiveWikiBerry
# 103 "data/maps/Route120/scripts.pory"
	case 6, Route120_EventScript_GiveWikiBerry
# 104 "data/maps/Route120/scripts.pory"
	case 2, Route120_EventScript_GiveMagoBerry
# 105 "data/maps/Route120/scripts.pory"
	case 7, Route120_EventScript_GiveMagoBerry
# 106 "data/maps/Route120/scripts.pory"
	case 3, Route120_EventScript_GiveAguavBerry
# 107 "data/maps/Route120/scripts.pory"
	case 8, Route120_EventScript_GiveAguavBerry
# 108 "data/maps/Route120/scripts.pory"
	case 4, Route120_EventScript_GiveIapapaBerry
# 109 "data/maps/Route120/scripts.pory"
	case 9, Route120_EventScript_GiveIapapaBerry
# 110 "data/maps/Route120/scripts.pory"
	end
# 111 "data/maps/Route120/scripts.pory"

# 112 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveFigyBerry::
# 113 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_FIGY_BERRY
# 114 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 115 "data/maps/Route120/scripts.pory"
	end
# 116 "data/maps/Route120/scripts.pory"

# 117 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveWikiBerry::
# 118 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_WIKI_BERRY
# 119 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 120 "data/maps/Route120/scripts.pory"
	end
# 121 "data/maps/Route120/scripts.pory"

# 122 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveMagoBerry::
# 123 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_MAGO_BERRY
# 124 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 125 "data/maps/Route120/scripts.pory"
	end
# 126 "data/maps/Route120/scripts.pory"

# 127 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveAguavBerry::
# 128 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_AGUAV_BERRY
# 129 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 130 "data/maps/Route120/scripts.pory"
	end
# 131 "data/maps/Route120/scripts.pory"

# 132 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveIapapaBerry::
# 133 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_IAPAPA_BERRY
# 134 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 135 "data/maps/Route120/scripts.pory"
	end
# 136 "data/maps/Route120/scripts.pory"

# 137 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveBerry::
# 138 "data/maps/Route120/scripts.pory"
	giveitem VAR_0x8004
# 139 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 140 "data/maps/Route120/scripts.pory"
	setflag FLAG_DAILY_ROUTE_120_RECEIVED_BERRY
# 141 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerryIsRareRaiseItWithCare, MSGBOX_DEFAULT
# 142 "data/maps/Route120/scripts.pory"
	release
# 143 "data/maps/Route120/scripts.pory"
	end
# 144 "data/maps/Route120/scripts.pory"

# 145 "data/maps/Route120/scripts.pory"
Route120_EventScript_ReceivedBerry::
# 146 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_IllGetMoreBerriesFromBerryMaster, MSGBOX_DEFAULT
# 147 "data/maps/Route120/scripts.pory"
	release
# 148 "data/maps/Route120/scripts.pory"
	end
# 149 "data/maps/Route120/scripts.pory"

# 150 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryLove::
# 151 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_YesYouUnderstand, MSGBOX_DEFAULT
# 152 "data/maps/Route120/scripts.pory"
	return
# 153 "data/maps/Route120/scripts.pory"

# 154 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryNotLove::
# 155 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_MakeYourOwnImpressions, MSGBOX_DEFAULT
# 156 "data/maps/Route120/scripts.pory"
	return
# 157 "data/maps/Route120/scripts.pory"

# 158 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSignFortree::
# 159 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSignFortree, MSGBOX_SIGN
# 160 "data/maps/Route120/scripts.pory"
	end
# 161 "data/maps/Route120/scripts.pory"

# 162 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSign121::
# 163 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSign121, MSGBOX_SIGN
# 164 "data/maps/Route120/scripts.pory"
	end
# 165 "data/maps/Route120/scripts.pory"

# 166 "data/maps/Route120/scripts.pory"
Route120_EventScript_Colin::
# 167 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_COLIN, Route120_Text_ColinIntro, Route120_Text_ColinDefeat
# 168 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 169 "data/maps/Route120/scripts.pory"
	end
# 170 "data/maps/Route120/scripts.pory"

# 171 "data/maps/Route120/scripts.pory"
Route120_EventScript_Robert::
# 172 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ROBERT_1, Route120_Text_RobertIntro, Route120_Text_RobertDefeat, Route120_EventScript_RegisterRobert
# 173 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 174 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchRobert
# 175 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostBattle, MSGBOX_DEFAULT
# 176 "data/maps/Route120/scripts.pory"
	release
# 177 "data/maps/Route120/scripts.pory"
	end
# 178 "data/maps/Route120/scripts.pory"

# 179 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterRobert::
# 180 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 181 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 182 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertRegister, MSGBOX_DEFAULT
# 183 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_ROBERT_1
# 184 "data/maps/Route120/scripts.pory"
	release
# 185 "data/maps/Route120/scripts.pory"
	end
# 186 "data/maps/Route120/scripts.pory"

# 187 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchRobert::
# 188 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_ROBERT_1, Route120_Text_RobertRematchIntro, Route120_Text_RobertRematchDefeat
# 189 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostRematch, MSGBOX_AUTOCLOSE
# 190 "data/maps/Route120/scripts.pory"
	end
# 191 "data/maps/Route120/scripts.pory"

# 192 "data/maps/Route120/scripts.pory"
Route120_EventScript_Lorenzo::
# 193 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LORENZO, Route120_Text_LorenzoIntro, Route120_Text_LorenzoDefeat
# 194 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 195 "data/maps/Route120/scripts.pory"
	end
# 196 "data/maps/Route120/scripts.pory"

# 197 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jenna::
# 198 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNA, Route120_Text_JennaIntro, Route120_Text_JennaDefeat
# 199 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 200 "data/maps/Route120/scripts.pory"
	end
# 201 "data/maps/Route120/scripts.pory"

# 202 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jeffrey::
# 203 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JEFFREY_1, Route120_Text_JeffreyIntro, Route120_Text_JeffreyDefeat, Route120_EventScript_RegisterJeffrey
# 204 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 205 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchJeffrey
# 206 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostBattle, MSGBOX_DEFAULT
# 207 "data/maps/Route120/scripts.pory"
	release
# 208 "data/maps/Route120/scripts.pory"
	end
# 209 "data/maps/Route120/scripts.pory"

# 210 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterJeffrey::
# 211 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 212 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 213 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyRegister, MSGBOX_DEFAULT
# 214 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_JEFFREY_1
# 215 "data/maps/Route120/scripts.pory"
	release
# 216 "data/maps/Route120/scripts.pory"
	end
# 217 "data/maps/Route120/scripts.pory"

# 218 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchJeffrey::
# 219 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_JEFFREY_1, Route120_Text_JeffreyRematchIntro, Route120_Text_JeffreyRematchDefeat
# 220 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostRematch, MSGBOX_AUTOCLOSE
# 221 "data/maps/Route120/scripts.pory"
	end
# 222 "data/maps/Route120/scripts.pory"

# 223 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jennifer::
# 224 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNIFER, Route120_Text_JenniferIntro, Route120_Text_JenniferDefeat
# 225 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 226 "data/maps/Route120/scripts.pory"
	end
# 227 "data/maps/Route120/scripts.pory"

# 228 "data/maps/Route120/scripts.pory"
Route120_EventScript_Clarissa::
# 229 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CLARISSA, Route120_Text_ClarissaIntro, Route120_Text_ClarissaDefeat
# 230 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 231 "data/maps/Route120/scripts.pory"
	end
# 232 "data/maps/Route120/scripts.pory"

# 233 "data/maps/Route120/scripts.pory"
Route120_EventScript_Angelica::
# 234 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ANGELICA, Route120_Text_AngelicaIntro, Route120_Text_AngelicaDefeat
# 235 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 236 "data/maps/Route120/scripts.pory"
	end
# 237 "data/maps/Route120/scripts.pory"

# 238 "data/maps/Route120/scripts.pory"
Route120_EventScript_Keigo::
# 239 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_KEIGO, Route120_Text_KeigoIntro, Route120_Text_KeigoDefeat
# 240 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 241 "data/maps/Route120/scripts.pory"
	end
# 242 "data/maps/Route120/scripts.pory"

# 243 "data/maps/Route120/scripts.pory"
Route120_EventScript_Riley::
# 244 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_RILEY, Route120_Text_RileyIntro, Route120_Text_RileyDefeat
# 245 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 246 "data/maps/Route120/scripts.pory"
	end
# 247 "data/maps/Route120/scripts.pory"

# 248 "data/maps/Route120/scripts.pory"
Route120_EventScript_Leonel::
# 249 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LEONEL, Route120_Text_LeonelIntro, Route120_Text_LeonelDefeat
# 250 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LeonelPostBattle, MSGBOX_AUTOCLOSE
# 251 "data/maps/Route120/scripts.pory"
	end
# 252 "data/maps/Route120/scripts.pory"

# 253 "data/maps/Route120/scripts.pory"
Route120_EventScript_Callie::
# 254 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CALLIE, Route120_Text_CallieIntro, Route120_Text_CallieDefeat
# 255 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 256 "data/maps/Route120/scripts.pory"
	end
# 257 "data/maps/Route120/scripts.pory"

# 258 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSignFortree:
# 259 "data/maps/Route120/scripts.pory"
	.string "Route 120\n"
# 260 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} Fortree City$"
# 261 "data/maps/Route120/scripts.pory"

# 262 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSign121:
# 263 "data/maps/Route120/scripts.pory"
	.string "{RIGHT_ARROW} Route 121\n"
# 264 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} Route 120$"

Route120_EventScript_Ydarissep2::
# 268 "data/maps/Route120/scripts.pory"
	msgbox Route120_EventScript_Ydarissep2_Text_0, MSGBOX_AUTOCLOSE
# 269 "data/maps/Route120/scripts.pory"
	givemon SPECIES_SCIZOR, 0, ITEM_LIFE_ORB, ITEM_CHERISH_BALL, 3, 1, MON_MALE, 248, 0, 12, 0, 0, 248, 31, 31, 31, 31, 31, 31, MOVE_BULLET_PUNCH, MOVE_CRABHAMMER, MOVE_ROOST, MOVE_SWORDS_DANCE, TRUE
# 270 "data/maps/Route120/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SCIZOR
# 271 "data/maps/Route120/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SCIZOR
# 272 "data/maps/Route120/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 273 "data/maps/Route120/scripts.pory"
	message Route120_EventScript_Ydarissep2_Text_1
# 274 "data/maps/Route120/scripts.pory"
	waitmessage
# 275 "data/maps/Route120/scripts.pory"
	waitfanfare
# 276 "data/maps/Route120/scripts.pory"
	call Common_EventScript_Nickname
# 277 "data/maps/Route120/scripts.pory"
	msgbox Route120_EventScript_Ydarissep2_Text_2, MSGBOX_AUTOCLOSE
# 278 "data/maps/Route120/scripts.pory"
	giveitem ITEM_SCIZORITE, 1
# 279 "data/maps/Route120/scripts.pory"
	setflag FLAG_ROUTE_120_BOSS_DEFEATED
# 280 "data/maps/Route120/scripts.pory"
	msgbox Route120_EventScript_Ydarissep2_Text_3, MSGBOX_AUTOCLOSE
	return


Route120_EventScript_Ydarissep::
# 284 "data/maps/Route120/scripts.pory"
	lock
# 285 "data/maps/Route120/scripts.pory"
	faceplayer
# 286 "data/maps/Route120/scripts.pory"
	checktrainerflag TRAINER_COLIN
	goto_if 1, Route120_EventScript_Ydarissep_5
Route120_EventScript_Ydarissep_3:
# 305 "data/maps/Route120/scripts.pory"
	msgbox Route120_EventScript_Ydarissep_Text_0, MSGBOX_NPC
Route120_EventScript_Ydarissep_1:
# 307 "data/maps/Route120/scripts.pory"
	release
	end

Route120_EventScript_Ydarissep_2:
# 298 "data/maps/Route120/scripts.pory"
	setflag B_FLAG_NO_BAG_USE
# 299 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_YDARISSEP, Route120_Text_YdarissepIntro, Route120_Text_YdarissepDefeat, Route120_EventScript_Ydarissep2
# 300 "data/maps/Route120/scripts.pory"
	clearflag B_FLAG_NO_BAG_USE
# 301 "data/maps/Route120/scripts.pory"
	msgbox Route120_EventScript_Ydarissep2_Text_3, MSGBOX_AUTOCLOSE
	goto Route120_EventScript_Ydarissep_1

Route120_EventScript_Ydarissep_4:
# 288 "data/maps/Route120/scripts.pory"
	checktrainerflag TRAINER_LORENZO
	goto_if 1, Route120_EventScript_Ydarissep_9
	goto Route120_EventScript_Ydarissep_3

Route120_EventScript_Ydarissep_5:
# 287 "data/maps/Route120/scripts.pory"
	checktrainerflag TRAINER_ROBERT_1
	goto_if 1, Route120_EventScript_Ydarissep_4
	goto Route120_EventScript_Ydarissep_3

Route120_EventScript_Ydarissep_8:
# 290 "data/maps/Route120/scripts.pory"
	checktrainerflag TRAINER_JEFFREY_1
	goto_if 1, Route120_EventScript_Ydarissep_13
	goto Route120_EventScript_Ydarissep_3

Route120_EventScript_Ydarissep_9:
# 289 "data/maps/Route120/scripts.pory"
	checktrainerflag TRAINER_JENNA
	goto_if 1, Route120_EventScript_Ydarissep_8
	goto Route120_EventScript_Ydarissep_3

Route120_EventScript_Ydarissep_12:
# 292 "data/maps/Route120/scripts.pory"
	checktrainerflag TRAINER_CLARISSA
	goto_if 1, Route120_EventScript_Ydarissep_17
	goto Route120_EventScript_Ydarissep_3

Route120_EventScript_Ydarissep_13:
# 291 "data/maps/Route120/scripts.pory"
	checktrainerflag TRAINER_JENNIFER
	goto_if 1, Route120_EventScript_Ydarissep_12
	goto Route120_EventScript_Ydarissep_3

Route120_EventScript_Ydarissep_16:
# 294 "data/maps/Route120/scripts.pory"
	checktrainerflag TRAINER_KEIGO
	goto_if 1, Route120_EventScript_Ydarissep_21
	goto Route120_EventScript_Ydarissep_3

Route120_EventScript_Ydarissep_17:
# 293 "data/maps/Route120/scripts.pory"
	checktrainerflag TRAINER_ANGELICA
	goto_if 1, Route120_EventScript_Ydarissep_16
	goto Route120_EventScript_Ydarissep_3

Route120_EventScript_Ydarissep_20:
# 296 "data/maps/Route120/scripts.pory"
	checktrainerflag TRAINER_LEONEL
	goto_if 1, Route120_EventScript_Ydarissep_24
	goto Route120_EventScript_Ydarissep_3

Route120_EventScript_Ydarissep_21:
# 295 "data/maps/Route120/scripts.pory"
	checktrainerflag TRAINER_RILEY
	goto_if 1, Route120_EventScript_Ydarissep_20
	goto Route120_EventScript_Ydarissep_3

Route120_EventScript_Ydarissep_24:
# 297 "data/maps/Route120/scripts.pory"
	checktrainerflag TRAINER_CALLIE
	goto_if 1, Route120_EventScript_Ydarissep_2
	goto Route120_EventScript_Ydarissep_3


Route120_EventScript_Ydarissep2_Text_0:
# 268 "data/maps/Route120/scripts.pory"
	.string "You know what?\nI'm fed up with this team.\pIt seems to attract the rain wherever\nI go.\pI'm starting fresh.\nHere, take my Scizor.$"

Route120_EventScript_Ydarissep2_Text_1:
# 273 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} received a Scizor!$"

Route120_EventScript_Ydarissep2_Text_2:
# 277 "data/maps/Route120/scripts.pory"
	.string "If you really want to do it justice,\ngive it a Scizorite.\pYou can have mine.$"

Route120_EventScript_Ydarissep2_Text_3:
# 280 "data/maps/Route120/scripts.pory"
	.string "Holding a Scizorite,\nyour Scizor can get it's Justice!$"

Route120_EventScript_Ydarissep_Text_0:
# 305 "data/maps/Route120/scripts.pory"
	.string "What are you doing at my training\nspot?\pHiding from the rain?\pUnfortunately for you,\nI'm not in the mood to share.\pIf you want to stay,\nget in line and defeat everyone who\lwere here before you.\pNo skipping!$"
