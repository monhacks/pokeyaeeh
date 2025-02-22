
.set LOCALID_LENNY, 3

Route114_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Route114_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route114_OnFrame
	.byte 0

Route114_OnTransition:
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_StartGroudonWeather
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_StartGroudonWeather
	call_if_set FLAG_ROUTE_114_BOSS_DEFEATED, Route114_EventScript_LennyCoords
	end

Route114_OnLoad:
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute114North
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute114South
	end

Route114_OnFrame:
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
	.2byte 0

Route114_EventScript_Man::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_ReceivedBerry
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
	random NUM_ROUTE_114_MAN_BERRIES
	addvar VAR_RESULT, NUM_ROUTE_114_MAN_BERRIES_SKIPPED
	addvar VAR_RESULT, FIRST_BERRY_INDEX
	giveitem VAR_RESULT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
	release
	end

Route114_EventScript_ReceivedBerry::
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
	release
	end

Route114_EventScript_RoarGentleman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_SNARL, Route114_EventScript_ReceivedSnarl
	msgbox Route114_Text_AllMyMonDoesIsSnarlTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_SNARL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_SNARL
	msgbox Route114_Text_ExplainSnarl, MSGBOX_DEFAULT
	release
	end

Route114_EventScript_ReceivedSnarl::
	msgbox Route114_Text_ExplainSnarl, MSGBOX_DEFAULT
	release
	end

Route114_EventScript_Poochyena::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route114_EventScript_MeteorFallsSign::
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
	end

Route114_EventScript_FossilManiacsHouseSign::
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
	end

Route114_EventScript_LanettesHouseSign::
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
	end

Route114_EventScript_Lucas::
	trainerbattle_single TRAINER_LUCAS_1, Route114_Text_LucasIntro, Route114_Text_LucasDefeat
	msgbox Route114_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Shane::
	trainerbattle_single TRAINER_SHANE, Route114_Text_ShaneIntro, Route114_Text_ShaneDefeat
	msgbox Route114_Text_ShanePostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Nancy::
	trainerbattle_single TRAINER_NANCY, Route114_Text_NancyIntro, Route114_Text_NancyDefeat
	msgbox Route114_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Steve::
	trainerbattle_single TRAINER_STEVE_1, Route114_Text_SteveIntro, Route114_Text_SteveDefeat
	msgbox Route114_Text_StevePostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route114_EventScript_Bernie::
	trainerbattle_single TRAINER_BERNIE_1, Route114_Text_BernieIntro, Route114_Text_BernieDefeat
	msgbox Route114_Text_BerniePostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route114_EventScript_Claude::
	trainerbattle_single TRAINER_CLAUDE, Route114_Text_ClaudeIntro, Route114_Text_ClaudeDefeat
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Nolan::
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Tyra::
	trainerbattle_single TRAINER_TYRA_AND_IVY, Route114_Text_TyraIntro, Route114_Text_TyraDefeat
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Ivy::
	trainerbattle_single TRAINER_TYRA_AND_IVY, Route114_Text_IvyIntro, Route114_Text_IvyDefeat
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Angelina::
	trainerbattle_single TRAINER_ANGELINA, Route114_Text_AngelinaIntro, Route114_Text_AngelinaDefeat
	msgbox Route114_Text_AngelinaPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Charlotte::
	trainerbattle_single TRAINER_CHARLOTTE, Route114_Text_CharlotteIntro, Route114_Text_CharlotteDefeat
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Kai::
	trainerbattle_single TRAINER_KAI, Route114_Text_KaiIntro, Route114_Text_KaiDefeat
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_Text_AllMyMonDoesIsSnarlTakeThis:
	.string "All my Pokémon does is Snarl…\n"
	.string "No one dares to come near me…\p"
	.string "Sigh… If you would, please take\n"
	.string "this TM away…$"

Route114_Text_ExplainSnarl:
	.string "TM112 contains Snarl.\n"
	.string "A ranting scream that hits both enemies\l"
	.string "and lowers their Sp. Attack.$"

Route114_Text_Poochyena:
	.string "Bow! Bowwow!$"

Route114_Text_MeteorFallsSign:
	.string "Meteor Falls\n"
	.string "Rustboro City through here$"

Route114_Text_FossilManiacsHouseSign:
	.string "Fossil Maniac's House\n"
	.string "“Fossils gratefully accepted!”$"

Route114_Text_LanettesHouse:
	.string "Lanette's House$"

Route114_EventScript_LennyCoords::
	setobjectxyperm LOCALID_LENNY, 9, 64
	return


Lenny_Movement_Right:
	walk_right
	face_down
	step_end

Player_Movement_DownFaceUp:
	face_left
	lock_facing_direction
	walk_down
	unlock_facing_direction
	face_up
	step_end

Route114_EventScript_Lenny2::
	msgbox Route114_EventScript_Lenny2_Text_0, MSGBOX_AUTOCLOSE
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
	compare VAR_TEMP_2, 9
	goto_if_eq Route114_EventScript_Lenny2_2
Route114_EventScript_Lenny2_1:
	applymovement LOCALID_LENNY, Lenny_Movement_Right
	setflag FLAG_ROUTE_114_BOSS_DEFEATED
	waitmovement 0
	return

Route114_EventScript_Lenny2_2:
	applymovement OBJ_EVENT_ID_PLAYER, Player_Movement_DownFaceUp
	waitmovement 0
	goto Route114_EventScript_Lenny2_1


Route114_EventScript_Lenny::
	lock
	faceplayer
	checktrainerflag TRAINER_LUCAS_1
	goto_if 1, Route114_EventScript_Lenny_5
Route114_EventScript_Lenny_3:
	msgbox Route114_EventScript_Lenny_Text_1, MSGBOX_NPC
Route114_EventScript_Lenny_1:
	release
	end

Route114_EventScript_Lenny_2:
	setflag B_FLAG_NO_BAG_USE
	trainerbattle_single TRAINER_LENNY, Route114_Text_LennyIntro, Route114_Text_LennyDefeat, Route114_EventScript_Lenny2
	clearflag B_FLAG_NO_BAG_USE
	msgbox Route114_EventScript_Lenny_Text_0, MSGBOX_AUTOCLOSE
	goto Route114_EventScript_Lenny_1

Route114_EventScript_Lenny_4:
	checktrainerflag TRAINER_NANCY
	goto_if 1, Route114_EventScript_Lenny_9
	goto Route114_EventScript_Lenny_3

Route114_EventScript_Lenny_5:
	checktrainerflag TRAINER_SHANE
	goto_if 1, Route114_EventScript_Lenny_4
	goto Route114_EventScript_Lenny_3

Route114_EventScript_Lenny_8:
	checktrainerflag TRAINER_BERNIE_1
	goto_if 1, Route114_EventScript_Lenny_13
	goto Route114_EventScript_Lenny_3

Route114_EventScript_Lenny_9:
	checktrainerflag TRAINER_STEVE_1
	goto_if 1, Route114_EventScript_Lenny_8
	goto Route114_EventScript_Lenny_3

Route114_EventScript_Lenny_12:
	checktrainerflag TRAINER_NOLAN
	goto_if 1, Route114_EventScript_Lenny_17
	goto Route114_EventScript_Lenny_3

Route114_EventScript_Lenny_13:
	checktrainerflag TRAINER_CLAUDE
	goto_if 1, Route114_EventScript_Lenny_12
	goto Route114_EventScript_Lenny_3

Route114_EventScript_Lenny_16:
	checktrainerflag TRAINER_ANGELINA
	goto_if 1, Route114_EventScript_Lenny_21
	goto Route114_EventScript_Lenny_3

Route114_EventScript_Lenny_17:
	checktrainerflag TRAINER_TYRA_AND_IVY
	goto_if 1, Route114_EventScript_Lenny_16
	goto Route114_EventScript_Lenny_3

Route114_EventScript_Lenny_20:
	checktrainerflag TRAINER_KAI
	goto_if 1, Route114_EventScript_Lenny_2
	goto Route114_EventScript_Lenny_3

Route114_EventScript_Lenny_21:
	checktrainerflag TRAINER_CHARLOTTE
	goto_if 1, Route114_EventScript_Lenny_20
	goto Route114_EventScript_Lenny_3


Route114_EventScript_Lenny2_Text_0:
	.string "Fine, I'll move!$"

Route114_EventScript_Lenny_Text_0:
	.string "Ya happy now?$"

Route114_EventScript_Lenny_Text_1:
	.string "Yodelayhihoo!\pI'm busy. Don't even bother!$"
