# 1 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
.set LOCALID_ATTENDANT_SINGLES, 1
# 3 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
.set LOCALID_ATTENDANT_DOUBLES, 7
# 4 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
.set LOCALID_ATTENDANT_MULTIS, 8
# 5 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
.set LOCALID_ATTENDANT_LINK_MULTIS, 9
# 6 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 7 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Note: LOCALID_BATTLE_TOWER_LOBBY_REPORTER is a local id for this map used elsewhere. It's defined in event_objects.h
# 8 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 9 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_MapScripts::
# 10 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleTowerLobby_OnResume
# 11 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerLobby_OnTransition
# 12 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerLobby_OnFrame
# 13 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerLobby_OnWarp
# 14 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.byte 0
# 15 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 16 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_OnResume:
# 17 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special TryHideBattleTowerReporter
# 18 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 19 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 20 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_OnTransition:
# 21 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_ShowOrHideReporter
# 22 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	apprentice_shouldcheckgone
# 23 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, BattleFrontier_BattleTowerLobby_EventScript_ShowApprentice  @ VAR_0x8004 always TRUE here
# 24 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_set FLAG_DAILY_APPRENTICE_LEAVES, BattleFrontier_BattleTowerLobby_EventScript_HideApprentice
# 25 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowApprentice::
# 26 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	clearflag FLAG_HIDE_APPRENTICE
# 27 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	apprentice_setgfx
# 28 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_EndShowOrHideApprentice::
# 29 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 30 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 31 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_HideApprentice::
# 32 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setflag FLAG_HIDE_APPRENTICE
# 33 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndShowOrHideApprentice
# 34 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 35 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_OnWarp:
# 36 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerLobby_EventScript_PlayerFaceNorth
# 37 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.2byte 0
# 38 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 39 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_PlayerFaceNorth::
# 40 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 41 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 42 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 43 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 44 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_OnFrame:
# 45 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleTowerLobby_EventScript_GetChallengeStatus
# 46 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleTowerLobby_EventScript_QuitWithoutSaving
# 47 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleTowerLobby_EventScript_ResumeChallenge
# 48 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleTowerLobby_EventScript_WonChallenge
# 49 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleTowerLobby_EventScript_LostChallenge
# 50 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.2byte 0
# 51 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 52 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetChallengeStatus::
# 53 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_getstatus
# 54 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 55 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 56 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_QuitWithoutSaving::
# 57 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 58 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 59 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 60 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 61 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK, 0
# 62 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, FALSE
# 63 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 64 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 65 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 66 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 67 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 68 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WonChallenge::
# 69 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 70 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 71 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_isbrain
# 72 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleTowerLobby_EventScript_DefeatedMaiden
# 73 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_CongratsBeatenSeven
# 74 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 75 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_GiveRibbons
# 76 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 77 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_DefeatedMaiden::
# 78 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_CongratsDefeatedMaiden, MSGBOX_DEFAULT
# 79 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GiveRibbons::
# 80 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_giveribbons
# 81 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_BattleTowerLobby_EventScript_GiveBattlePoints
# 82 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons
# 83 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 84 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 85 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitfanfare
# 86 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons, MSGBOX_DEFAULT
# 87 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GiveBattlePoints::
# 88 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_AwardYouTheseBattlePoints, MSGBOX_DEFAULT
# 89 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_givepoints
# 90 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 91 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle
# 92 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 93 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_ne VAR_RESULT, 49, BattleFrontier_BattleTowerLobby_EventScript_LookForwardToChallenge
# 94 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_AboutToFace50thTrainer, MSGBOX_DEFAULT
# 95 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LookForwardToChallenge::
# 96 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge, MSGBOX_DEFAULT
# 97 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 98 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 99 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 100 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 101 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 102 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LostChallenge::
# 103 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_ne VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_CancelWinStreak
# 104 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerLobby_EventScript_CancelWinStreak
# 105 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 106 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_ne VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_LostThanksForPlaying
# 107 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CancelWinStreak::
# 108 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, FALSE
# 109 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LostThanksForPlaying::
# 110 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 111 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 112 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying
# 113 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 114 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle
# 115 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge, MSGBOX_DEFAULT
# 116 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 117 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 118 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 119 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 120 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 121 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle::
# 122 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_RecordWillBeSaved
# 123 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 124 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkairshow
# 125 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 126 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special HealPlayerParty
# 127 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save 0
# 128 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 129 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 130 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 131 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle
# 132 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_RecordLastMatch
# 133 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 134 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 135 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 136 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle
# 137 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_EventScript_SaveBattle
# 138 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle
# 139 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 140 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_EventScript_SaveBattle::
# 141 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_savebattle
# 142 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_EventScript_BattleSaveFailed
# 143 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 144 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_BattleRecordedOnPass, MSGBOX_DEFAULT
# 145 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle
# 146 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 147 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_EventScript_BattleSaveFailed::
# 148 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_RecordCouldntBeSaved, MSGBOX_DEFAULT
# 149 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle::
# 150 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 151 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 152 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_EventScript_GetCantRecordBattle::
# 153 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_get FRONTIER_DATA_RECORD_DISABLED
# 154 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 155 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 156 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ResumeChallenge::
# 157 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 158 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 159 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_SetBravoTrainerOn
# 160 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WeveBeenWaitingForYou
# 161 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 162 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved
# 163 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 164 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save CHALLENGE_STATUS_SAVING
# 165 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 166 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 167 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 168 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 169 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 170 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 171 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SetBravoTrainerOn::
# 172 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, TRUE
# 173 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 174 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 175 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SinglesAttendant::
# 176 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 177 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 178 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 179 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 180 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle, MSGBOX_DEFAULT
# 181 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge::
# 182 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge
# 183 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 184 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 185 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 186 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge
# 187 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_ExplainSinglesChallenge
# 188 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 189 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 190 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 191 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge::
# 192 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 193 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 194 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 195 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 196 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 197 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 198 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 199 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 200 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
# 201 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 202 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 203 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 204 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 205 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 206 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 207 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 208 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 209 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 210 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 211 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 212 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case NO, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 213 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case YES, BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeSinglesChallenge
# 214 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 215 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 216 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeSinglesChallenge::
# 217 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 218 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 219 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 220 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 221 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 222 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 223 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 224 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 225 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 226 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 227 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
# 228 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 229 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, TRUE
# 230 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 231 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 232 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 233 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExplainSinglesChallenge::
# 234 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge, MSGBOX_DEFAULT
# 235 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge
# 236 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 237 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 238 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_DoublesAttendant::
# 239 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 240 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 241 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 242 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 243 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle, MSGBOX_DEFAULT
# 244 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge::
# 245 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge
# 246 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 247 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 248 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 249 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge
# 250 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_ExplainDoublesChallenge
# 251 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 252 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 253 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 254 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge::
# 255 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 256 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 257 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 258 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 259 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 260 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 261 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 262 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 263 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
# 264 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 265 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons, MSGBOX_DEFAULT
# 266 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 267 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 268 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 269 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DOUBLES_PARTY_SIZE
# 270 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 271 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 272 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 273 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 274 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 275 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case NO, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 276 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case YES, BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeDoublesChallenge
# 277 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 278 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 279 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeDoublesChallenge::
# 280 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 281 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 282 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 283 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 284 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 285 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 286 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 287 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 288 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 289 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 290 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
# 291 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 292 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 293 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 294 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 295 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 296 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExplainDoublesChallenge::
# 297 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
# 298 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge
# 299 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 300 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 301 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_MultisAttendant::
# 302 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 303 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 304 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 305 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	clearflag FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER
# 306 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 307 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle, MSGBOX_DEFAULT
# 308 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge::
# 309 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge
# 310 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 311 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 312 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 313 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge
# 314 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_ExplainMultisChallenge
# 315 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 316 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 317 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 318 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge::
# 319 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS
# 320 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 321 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 322 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 323 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 324 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 325 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 326 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 327 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
# 328 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 329 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons, MSGBOX_DEFAULT
# 330 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 331 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 332 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 333 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 334 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 335 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 336 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 337 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 338 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 339 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case NO, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 340 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case YES, BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeMultisChallenge
# 341 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 342 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 343 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeMultisChallenge::
# 344 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 345 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 346 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 347 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 348 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 349 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 350 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 351 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 352 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 353 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 354 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
# 355 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 356 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 357 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 358 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 359 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 360 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExplainMultisChallenge::
# 361 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge, MSGBOX_DEFAULT
# 362 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge
# 363 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 364 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 365 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LinkMultisAttendant::
# 366 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 367 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 368 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 369 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 370 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle, MSGBOX_DEFAULT
# 371 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge::
# 372 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge
# 373 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 374 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 375 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 376 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge
# 377 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_ExplainLinkMultisChallenge
# 378 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 379 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 380 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 381 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge::
# 382 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
# 383 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 384 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 385 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 386 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 387 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 388 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 389 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 390 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
# 391 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 392 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons2, MSGBOX_DEFAULT
# 393 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 394 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 395 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 396 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 397 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 398 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 399 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 400 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 401 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 402 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case NO, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 403 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case YES, BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge
# 404 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 405 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 406 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge::
# 407 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 408 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 409 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 410 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 411 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 412 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 413 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 414 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 415 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ The command tower_save ultimately calls TrySavingData(SAVE_LINK), which writes data in SaveBlock1 and SaveBlock2
# 416 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ to the flash, but not data in PokemonStorage. The SaveGame script that follows asks the player to do a full save,
# 417 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ which they can opt out of. As a result the player can save their party and quit without having saved the PC.
# 418 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ This allows players to clone pokemon and their held items by withdrawing them (or erase them by despositing).
# 419 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save 0
# 420 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 421 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 422 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
# 423 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ GAME_STAT_ENTERED_BATTLE_TOWER should not be incremented here, for two reasons:
# 424 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ 1. It is incremented again in BattleFrontier_BattleTowerLobby_EventScript_CableLinkSuccessful or BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful
# 425 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ 2. If the player tries to save, but fails, the counter will still be incremented even if the player never enters the tower.
# 426 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 427 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	specialvar VAR_RESULT, IsWirelessAdapterConnected
# 428 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleTowerLobby_EventScript_TryWirelessLink
# 429 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink
# 430 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 431 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 432 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan::
# 433 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 434 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 435 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower
# 436 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 437 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 16, 4, MULTI_BATTLE_TOWER_FEELINGS, FALSE
# 438 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 439 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_FeelingsBattleNow
# 440 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_FeelingsIWon
# 441 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_FeelingsILost
# 442 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 3, BattleFrontier_BattleTowerLobby_EventScript_FeelingsWontTell
# 443 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_FeelingsWontTell
# 444 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 445 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 446 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 447 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsBattleNow::
# 448 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin, MSGBOX_DEFAULT
# 449 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_START
# 450 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_ShowEasyChatScreen
# 451 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 452 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 453 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings
# 454 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 455 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 456 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsIWon::
# 457 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon, MSGBOX_DEFAULT
# 458 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_WON
# 459 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_ShowEasyChatScreen
# 460 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 461 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 462 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings
# 463 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 464 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 465 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsILost::
# 466 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost, MSGBOX_DEFAULT
# 467 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_LOST
# 468 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_ShowEasyChatScreen
# 469 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 470 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 471 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings
# 472 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 473 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 474 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsWontTell::
# 475 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt, MSGBOX_DEFAULT
# 476 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 477 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 478 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 479 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings::
# 480 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_CanceledEasyChat
# 481 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattleTowerLobby_EventScript_SubmittedFeelings
# 482 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 483 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 484 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CanceledEasyChat::
# 485 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ChangedYourMind, MSGBOX_DEFAULT
# 486 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 487 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 488 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 489 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SubmittedFeelings::
# 490 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel, MSGBOX_DEFAULT
# 491 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 492 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 493 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 494 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_Woman::
# 495 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded, MSGBOX_NPC
# 496 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 497 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 498 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_Boy::
# 499 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_CanLeaveUntilLossOrSevenWins, MSGBOX_NPC
# 500 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 501 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 502 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowSinglesResults::
# 503 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 504 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_SINGLES
# 505 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 506 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 507 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 508 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 509 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 510 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowDoublesResults::
# 511 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 512 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_DOUBLES
# 513 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 514 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 515 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 516 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 517 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 518 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowMultisResults::
# 519 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 520 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_MULTIS
# 521 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 522 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 523 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 524 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 525 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 526 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowLinkMultisResults::
# 527 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 528 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_LINK_MULTIS
# 529 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 530 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 531 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 532 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 533 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 534 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons::
# 535 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 536 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50
# 537 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpen
# 538 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 539 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50::
# 540 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 541 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50Singles
# 542 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50Doubles
# 543 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Multis, MSGBOX_DEFAULT
# 544 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 545 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 546 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 547 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50Singles::
# 548 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Singles, MSGBOX_DEFAULT
# 549 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 550 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 551 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 552 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50Doubles::
# 553 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Doubles, MSGBOX_DEFAULT
# 554 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 555 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 556 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 557 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpen::
# 558 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 559 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpenSingles
# 560 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpenDoubles
# 561 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenMultis, MSGBOX_DEFAULT
# 562 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 563 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 564 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 565 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpenSingles::
# 566 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenSingles, MSGBOX_DEFAULT
# 567 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 568 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 569 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 570 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpenDoubles::
# 571 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenDoubles, MSGBOX_DEFAULT
# 572 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 573 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 574 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 575 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed::
# 576 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS  @ No status provided, so it relies on VAR_0x8006 being 0 already
# 577 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 578 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 579 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 580 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge::
# 581 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 582 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge::
# 583 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 584 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge, MSGBOX_DEFAULT
# 585 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge::
# 586 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 587 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 588 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 589 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_EnterElevator::
# 590 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 591 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_PARTY_ORDER
# 592 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_GetPartySize
# 593 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CallFrontierUtilFunc
# 594 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_RESULT, 0
# 595 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad::
# 596 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_loadlinkopponents
# 597 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 1
# 598 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_ne VAR_RESULT, 6, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad
# 599 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_ShowYouToBattleRoom
# 600 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	clearflag FLAG_CANCEL_BATTLE_ROOM_CHALLENGE
# 601 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_ELEVATOR, 1, 6
# 602 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 603 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 604 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 605 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 606 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowYouToBattleRoom::
# 607 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_BufferModeText
# 608 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_ShowYouToLinkMultiBattleRoom
# 609 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom, MSGBOX_DEFAULT
# 610 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_WalkToElevator
# 611 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 612 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowYouToLinkMultiBattleRoom::
# 613 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	messageautoscroll BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom
# 614 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 615 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 48
# 616 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WalkToElevator::
# 617 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 618 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo
# 619 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord
# 620 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerLobby_Movement_WalkToElevator
# 621 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleTowerLobby_Movement_WalkToElevator
# 622 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmovement 0
# 623 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	opendoor VAR_0x8004, 1
# 624 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitdooranim
# 625 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerLobby_Movement_AttendantEnterElevator
# 626 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleTowerLobby_Movement_PlayerEnterElevator
# 627 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmovement 0
# 628 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closedoor VAR_0x8004, 1
# 629 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitdooranim
# 630 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 631 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 632 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Movement_WalkToElevator:
# 633 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 634 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 635 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 636 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	step_end
# 637 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 638 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Movement_AttendantEnterElevator:
# 639 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 640 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	set_invisible
# 641 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	step_end
# 642 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 643 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Movement_PlayerEnterElevator:
# 644 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 645 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 646 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	set_invisible
# 647 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	step_end
# 648 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 649 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 650 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Movement_UnusedEnterElevator:
# 651 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 652 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 653 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 654 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 655 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 656 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	set_invisible
# 657 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	step_end
# 658 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 659 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferModeText::
# 660 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_BufferTextSingle
# 661 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_BufferTextDouble
# 662 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_BufferTextMulti
# 663 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_BufferTextLinkMulti
# 664 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 665 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 666 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferTextSingle::
# 667 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SINGLE
# 668 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 669 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 670 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferTextDouble::
# 671 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_DOUBLE
# 672 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 673 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 674 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferTextMulti::
# 675 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI
# 676 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 677 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 678 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferTextLinkMulti::
# 679 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI_LINK
# 680 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 681 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 682 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo::
# 683 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_TalkedToSinglesAttendant
# 684 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_TalkedToDoublesAttendant
# 685 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_TalkedToMultisAttendant
# 686 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_TalkedToLinkMultisAttendant
# 687 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 688 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 689 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TalkedToSinglesAttendant::
# 690 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ATTENDANT_SINGLES
# 691 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 692 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 693 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TalkedToDoublesAttendant::
# 694 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ATTENDANT_DOUBLES
# 695 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 696 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 697 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TalkedToMultisAttendant::
# 698 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ATTENDANT_MULTIS
# 699 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 700 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 701 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TalkedToLinkMultisAttendant::
# 702 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ATTENDANT_LINK_MULTIS
# 703 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 704 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 705 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord::
# 706 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordSingles
# 707 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordDoubles
# 708 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordMultis
# 709 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordLinkMultis
# 710 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 711 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 712 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordSingles::
# 713 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 6
# 714 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 715 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 716 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordDoubles::
# 717 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 10
# 718 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 719 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 720 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordMultis::
# 721 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 14
# 722 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 723 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 724 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordLinkMultis::
# 725 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 18
# 726 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 727 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 728 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetPartySize::
# 729 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_GetSinglesPartySize
# 730 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_GetDoublesPartySize
# 731 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_GetMultisPartySize
# 732 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_GetLinkMultisPartySize
# 733 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 734 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 735 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetSinglesPartySize::
# 736 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 737 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 738 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 739 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoublesPartySize::
# 740 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DOUBLES_PARTY_SIZE
# 741 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 742 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 743 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetMultisPartySize::
# 744 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 745 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 746 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 747 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetLinkMultisPartySize::
# 748 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 749 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 750 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 751 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_EventScript_GetLvlMode::
# 752 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 753 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 754 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 755 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryCableLink::
# 756 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, USING_BATTLE_TOWER
# 757 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message gText_PleaseWaitForLink
# 758 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 759 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, 0
# 760 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special TryBattleLinkup
# 761 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 762 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, BattleFrontier_BattleTowerLobby_EventScript_CableLinkSuccessful
# 763 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_SOMEONE_NOT_READY, CableClub_EventScript_AbortLinkSomeoneNotReady
# 764 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_DIFF_SELECTIONS, BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections
# 765 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_WRONG_NUM_PLAYERS, BattleFrontier_BattleTowerLobby_EventScript_AbortLinkIncorrectNumberOfPlayers
# 766 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 767 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_CONNECTION_ERROR, CableClub_EventScript_AbortLinkConnectionError
# 768 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED_BATTLE_TOWER, BattleFrontier_BattleTowerLobby_EventScript_AbortLink
# 769 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 770 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 771 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections::
# 772 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 773 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8005, 3, BattleFrontier_BattleTowerLobby_EventScript_FriendDifferentSelection
# 774 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox Text_PlayersMadeDifferentSelections, MSGBOX_DEFAULT
# 775 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 776 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 777 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 778 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FriendDifferentSelection::
# 779 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode, MSGBOX_DEFAULT
# 780 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode, MSGBOX_DEFAULT
# 781 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 782 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 783 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 784 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLinkIncorrectNumberOfPlayers::
# 785 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers, MSGBOX_DEFAULT
# 786 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 787 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox CableClub_Text_IncorrectNumberOfParticipants, MSGBOX_DEFAULT
# 788 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 789 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 790 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 791 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLink::
# 792 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 793 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_0x8005, 0, BattleFrontier_BattleTowerLobby_EventScript_FriendChoseDifferentLvlMode
# 794 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_0x8005, 1, BattleFrontier_BattleTowerLobby_EventScript_FriendAlsoSelectedMon
# 795 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_0x8005, 2, BattleFrontier_BattleTowerLobby_EventScript_FriendAlsoSelectedMons
# 796 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode, MSGBOX_DEFAULT
# 797 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 798 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 799 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 800 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FriendChoseDifferentLvlMode::
# 801 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode, MSGBOX_DEFAULT
# 802 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 803 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 804 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FriendAlsoSelectedMon::
# 805 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon, MSGBOX_DEFAULT
# 806 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 807 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 808 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FriendAlsoSelectedMons::
# 809 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMons, MSGBOX_DEFAULT
# 810 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 811 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 812 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CableLinkSuccessful::
# 813 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 814 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 815 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn
# 816 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 817 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save CHALLENGE_STATUS_SAVING
# 818 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SaveForBattleTowerLink
# 819 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 820 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 821 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 822 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special TrySetBattleTowerLinkType
# 823 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 824 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 825 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 826 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExplainLinkMultisChallenge::
# 827 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge, MSGBOX_DEFAULT
# 828 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge
# 829 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 830 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 831 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryWirelessLink::
# 832 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_BATTLE_TOWER
# 833 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader
# 834 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 835 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 836 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader::
# 837 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message CableClub_Text_ChooseGroupLeaderOfTwo
# 838 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 839 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 16, 6, MULTI_LINK_LEADER, FALSE
# 840 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 841 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup
# 842 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader
# 843 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 844 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 845 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 846 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 847 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader::
# 848 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call CableClub_EventScript_TryBecomeLinkLeader
# 849 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful
# 850 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader
# 851 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader
# 852 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED_BATTLE_TOWER, BattleFrontier_BattleTowerLobby_EventScript_AbortLink
# 853 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 854 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 855 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 856 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup::
# 857 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call CableClub_EventScript_TryJoinLinkGroup
# 858 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful
# 859 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader
# 860 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup
# 861 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED_BATTLE_TOWER, BattleFrontier_BattleTowerLobby_EventScript_AbortLink
# 862 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 863 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 864 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 865 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful::
# 866 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 867 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 868 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn
# 869 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 870 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save CHALLENGE_STATUS_SAVING
# 871 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SaveForBattleTowerLink
# 872 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 873 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 874 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 875 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 876 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 877 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 878 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesBoard::
# 879 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 880 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 881 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 882 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 883 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 884 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard::
# 885 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ReadWhichHeading
# 886 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 887 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 2, MULTI_BATTLE_TOWER_RULES, FALSE
# 888 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 889 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_RulesTower
# 890 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_RulesMons
# 891 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_RulesSalon
# 892 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 3, BattleFrontier_BattleTowerLobby_EventScript_RulesMultiLink
# 893 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 4, BattleFrontier_BattleTowerLobby_EventScript_ExitRules
# 894 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_ExitRules
# 895 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 896 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 897 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesTower::
# 898 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainTowerRules, MSGBOX_DEFAULT
# 899 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 900 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 901 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 902 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesMons::
# 903 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainMonRules, MSGBOX_DEFAULT
# 904 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 905 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 906 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 907 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesSalon::
# 908 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainSalonRules, MSGBOX_DEFAULT
# 909 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 910 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 911 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 912 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesMultiLink::
# 913 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainMultiLinkRules, MSGBOX_DEFAULT
# 914 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 915 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 916 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 917 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExitRules::
# 918 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 919 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 920 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 921 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 922 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_DirectYouToBattleRoom:
# 923 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I'll direct you to your Battle Room now.$"
# 924 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 925 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DidntSaveBeforeQuitting:
# 926 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 927 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You didn't save before you quit your\n"
# 928 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "challenge last time.\p"
# 929 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Because of that, your challenge so far\n"
# 930 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "has been disqualified. Sorry!$"
# 931 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 932 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_CongratsBeatenSeven:
# 933 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Congratulations!\n"
# 934 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You've beaten all seven Trainers!\p"
# 935 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "$"
# 936 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 937 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 938 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_EarnedFabulousPrize:
# 939 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "For beating seven Trainers in a row,\n"
# 940 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you have earned this fabulous prize!\p"
# 941 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "$"
# 942 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 943 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ReceivedPrize:
# 944 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
# 945 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 946 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 947 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 948 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_BagFullMakeRoom:
# 949 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Oh, your Bag appears to be full.\p"
# 950 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please make room in your Bag, then come\n"
# 951 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "see me.$"
# 952 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 953 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying:
# 954 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Thank you for playing!\p"
# 955 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "$"
# 956 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 957 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_RecordWillBeSaved:
# 958 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your record will be saved.\n"
# 959 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please wait.$"
# 960 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 961 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WeveBeenWaitingForYou:
# 962 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "We've been waiting for you!\p"
# 963 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "$"
# 964 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 965 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved:
# 966 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Before entering a Battle Room, your\n"
# 967 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "progress will be saved. Please wait.$"
# 968 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 969 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_AboutToFace50thTrainer:
# 970 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You're finally about to face the\n"
# 971 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "50th Trainer.\p"
# 972 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "From here on, every time you beat seven\n"
# 973 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Trainers in a row, your Pokémon will\l"
# 974 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "receive a commemorative Ribbon.\p"
# 975 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Good luck!$"
# 976 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 977 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons:
# 978 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Here are some Ribbons for beating\n"
# 979 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "seven tough Trainers in a row.\p"
# 980 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} received some Ribbons!$"
# 981 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 982 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons:
# 983 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} put the Ribbons on\n"
# 984 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the challenger Pokémon.$"
# 985 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 986 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower:
# 987 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me, do you have a moment?\p"
# 988 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Can you describe your feelings when\n"
# 989 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you're about to begin a Battle Tower\l"
# 990 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "match, or when you've either won or\l"
# 991 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "lost a match?$"
# 992 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 993 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin:
# 994 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Okay, what are your feelings when\n"
# 995 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you're about to begin a match?$"
# 996 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 997 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon:
# 998 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "What do you feel when you've won\n"
# 999 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "a match?$"
# 1000 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1001 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost:
# 1002 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Can I hear about your feelings when\n"
# 1003 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you have lost a match?$"
# 1004 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1005 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt:
# 1006 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Oh, so you don't think much about it?\n"
# 1007 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You're one cool customer.$"
# 1008 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1009 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ChangedYourMind:
# 1010 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Hunh? You changed your mind?\n"
# 1011 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I guess you're fickle.$"
# 1012 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1013 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel:
# 1014 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Okay, so that's how you feel?\n"
# 1015 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "That's quite original.\p"
# 1016 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Thanks!$"
# 1017 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1018 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded:
# 1019 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The number of matches you win in a row\n"
# 1020 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "is recorded.\p"
# 1021 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I'd better not get beaten in\n"
# 1022 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "an embarrassing way!$"
# 1023 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1024 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_CanLeaveUntilLossOrSevenWins:
# 1025 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Once you've entered the Battle Tower,\n"
# 1026 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you can't leave until you either lose\l"
# 1027 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "or you beat seven Trainers in a row.\p"
# 1028 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You'd best be certain that you're up\n"
# 1029 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to the challenge.$"
# 1030 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1031 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1032 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DoubleBattleRoomConstruction:
# 1033 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the Battle Tower\n"
# 1034 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Double Battle Corner!\p"
# 1035 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Unfortunately, the Battle Rooms\n"
# 1036 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "are still under construction.\p"
# 1037 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come back when the work\n"
# 1038 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "is completed.$"
# 1039 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1040 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1041 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_MultiBattleRoomConstruction:
# 1042 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the Battle Tower\n"
# 1043 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Multi Battle Corner!\p"
# 1044 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Unfortunately, the Battle Rooms\n"
# 1045 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "are still under construction.\p"
# 1046 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come back when the work\n"
# 1047 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "is completed.$"
# 1048 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1049 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge:
# 1050 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "We look forward to seeing you on\n"
# 1051 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "another challenge!$"
# 1052 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1053 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WhichLevelMode:
# 1054 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The Battle Room offers two levels\n"
# 1055 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "of challenge, Level 50 and Open Level.\l"
# 1056 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Which is your choice?$"
# 1057 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1058 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1059 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PleaseSelectMons:
# 1060 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please select the Pokémon you wish\n"
# 1061 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to enter.$"
# 1062 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1063 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering:
# 1064 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Before entering a Battle Room, your\n"
# 1065 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "progress must be saved. Is that okay?$"
# 1066 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1067 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom:
# 1068 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I will now show you to the\n"
# 1069 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{STR_VAR_1} Battle Room.$"
# 1070 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1071 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_RecordLastMatch:
# 1072 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Shall I record your last Battle Tower\n"
# 1073 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "match on your Frontier Pass?$"
# 1074 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1075 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1076 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50:
# 1077 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 1078 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have {STR_VAR_2} eligible Pokémon.\p"
# 1079 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have {STR_VAR_2} different Pokémon\n"
# 1080 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "of Level 50 or less to enter.\p"
# 1081 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 1082 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 1083 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Eggs{STR_VAR_1} ineligible.\p"
# 1084 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 1085 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1086 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1087 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpen:
# 1088 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 1089 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have {STR_VAR_2} eligible Pokémon.\p"
# 1090 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have {STR_VAR_2} different Pokémon\n"
# 1091 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to enter.\p"
# 1092 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 1093 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 1094 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Eggs{STR_VAR_1} ineligible.\p"
# 1095 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 1096 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1097 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Singles:
# 1098 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 1099 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have three eligible Pokémon.\p"
# 1100 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have three different Pokémon\n"
# 1101 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "of Level 50 or less to enter.\p"
# 1102 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 1103 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 1104 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Eggs{STR_VAR_1} ineligible.\p"
# 1105 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 1106 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1107 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenSingles:
# 1108 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 1109 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have three eligible Pokémon.\p"
# 1110 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have three different Pokémon\n"
# 1111 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to enter.\p"
# 1112 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 1113 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 1114 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Eggs{STR_VAR_1} ineligible.\p"
# 1115 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 1116 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1117 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Doubles:
# 1118 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 1119 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have four eligible Pokémon.\p"
# 1120 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have four different Pokémon\n"
# 1121 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "of Level 50 or less to enter.\p"
# 1122 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 1123 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 1124 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Eggs{STR_VAR_1} ineligible.\p"
# 1125 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 1126 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1127 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenDoubles:
# 1128 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 1129 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have four eligible Pokémon.\p"
# 1130 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have four different Pokémon\n"
# 1131 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to enter.\p"
# 1132 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 1133 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 1134 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Eggs{STR_VAR_1} ineligible.\p"
# 1135 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 1136 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1137 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Multis:
# 1138 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 1139 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have two eligible Pokémon.\p"
# 1140 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have two different Pokémon\n"
# 1141 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "of Level 50 or less to enter.\p"
# 1142 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 1143 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 1144 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Eggs{STR_VAR_1} ineligible.\p"
# 1145 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 1146 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1147 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenMultis:
# 1148 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 1149 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have two eligible Pokémon.\p"
# 1150 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have two different Pokémon\n"
# 1151 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to enter.\p"
# 1152 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 1153 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 1154 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Eggs{STR_VAR_1} ineligible.\p"
# 1155 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 1156 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1157 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle:
# 1158 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Where the talents of Trainers\n"
# 1159 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "are put to the test!\p"
# 1160 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the Battle Tower!\p"
# 1161 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I am your guide to the Single\n"
# 1162 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Battle Rooms.$"
# 1163 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1164 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge:
# 1165 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Would you like to take the Single\n"
# 1166 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Battle Room challenge?$"
# 1167 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1168 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge:
# 1169 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The Battle Tower's Single Battle\n"
# 1170 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Rooms are facilities for conducting\l"
# 1171 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Single Battles with three Pokémon.\p"
# 1172 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "There are many Single Battle Rooms\n"
# 1173 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "in the Battle Tower for team battles.\p"
# 1174 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In each of the Single Battle Rooms,\n"
# 1175 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "seven Trainers await your challenge.\p"
# 1176 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you manage to defeat all seven,\n"
# 1177 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you will earn Battle Points.\p"
# 1178 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 1179 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "challenge, please save the game.\p"
# 1180 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 1181 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you will be disqualified.$"
# 1182 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1183 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_SelectThreeMons:
# 1184 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Now please select the three Pokémon\n"
# 1185 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "that are to be entered.$"
# 1186 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1187 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle:
# 1188 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Where the talents of Trainers\n"
# 1189 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "are put to the test!\p"
# 1190 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the Battle Tower!\p"
# 1191 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I am your guide to the Double\n"
# 1192 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Battle Rooms.$"
# 1193 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1194 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge:
# 1195 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Would you like to take the Double\n"
# 1196 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Battle Room challenge?$"
# 1197 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1198 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge:
# 1199 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The Battle Tower's Double Battle\n"
# 1200 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Rooms are facilities for conducting\l"
# 1201 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Double Battles with four Pokémon.\p"
# 1202 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "There are many Double Battle Rooms\n"
# 1203 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "in the Battle Tower for team battles.\p"
# 1204 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In each of the Double Battle Rooms,\n"
# 1205 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "seven Trainers await your challenge.\p"
# 1206 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you manage to defeat all seven,\n"
# 1207 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you will earn Battle Points.\p"
# 1208 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 1209 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "challenge, please save the game.\p"
# 1210 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 1211 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you will be disqualified.$"
# 1212 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1213 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons:
# 1214 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Now please select the four Pokémon\n"
# 1215 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "that are to be entered.$"
# 1216 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1217 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle:
# 1218 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Where the talents of Trainers\n"
# 1219 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "are put to the test!\p"
# 1220 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the Battle Tower!\p"
# 1221 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I am your guide to the Multi\n"
# 1222 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Battle Rooms.$"
# 1223 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1224 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge:
# 1225 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Would you like to take the Multi\n"
# 1226 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Battle Room challenge?$"
# 1227 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1228 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge:
# 1229 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The Battle Tower's Multi Battle\n"
# 1230 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Rooms are facilities for conducting\l"
# 1231 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Multi Battles.\p"
# 1232 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "For Multi Battles, you must partner\n"
# 1233 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "with a Trainer in the Tower and enter\l"
# 1234 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "with two Pokémon each.\p"
# 1235 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Inside the Tower is a room named\n"
# 1236 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the Battle Salon where you may meet\l"
# 1237 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "other Trainers.\p"
# 1238 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "There, you must find a Trainer to act\n"
# 1239 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "as your partner in Multi Battles.\p"
# 1240 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Once you have partnered up, you will\n"
# 1241 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "be shown to a Multi Battle Room.\p"
# 1242 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In the Multi Battle Room, seven\n"
# 1243 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "tag teams await your challenge.\p"
# 1244 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you manage to defeat all seven\n"
# 1245 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "teams, you will earn Battle Points.\p"
# 1246 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 1247 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "challenge, please save the game.\p"
# 1248 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 1249 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you will be disqualified.$"
# 1250 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1251 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons:
# 1252 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Now please select the two Pokémon\n"
# 1253 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "that are to be entered.$"
# 1254 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1255 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle:
# 1256 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Where the talents of Trainers\n"
# 1257 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "are put to the test!\p"
# 1258 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the Battle Tower!\p"
# 1259 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I am your guide to the Link Multi\n"
# 1260 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Battle Rooms.$"
# 1261 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1262 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge:
# 1263 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Would you like to take the Link Multi\n"
# 1264 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Battle Room challenge?$"
# 1265 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1266 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge:
# 1267 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The Battle Tower's Multi Battle\n"
# 1268 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Rooms are facilities for conducting\l"
# 1269 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Multi Battles with a friend.\p"
# 1270 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must link with your friend using\n"
# 1271 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Wireless Adapters or a Game Boy\l"
# 1272 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Advance Game Link cable.\p"
# 1273 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must partner with your friend and\n"
# 1274 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "enter two different kinds of Pokémon.\p"
# 1275 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "There are many Multi Battle Rooms\n"
# 1276 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "in the Battle Tower for team battles.\p"
# 1277 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In a Multi Battle Room, seven\n"
# 1278 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "tag teams await you and your friend\l"
# 1279 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to make a tag-team challenge.\p"
# 1280 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you manage to defeat all seven\n"
# 1281 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "teams, you will earn Battle Points.\p"
# 1282 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please beware that unlike other Rooms,\n"
# 1283 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you may not interrupt your challenge.\p"
# 1284 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Once you start, you must battle seven\n"
# 1285 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Multi Battles in a row nonstop.$"
# 1286 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1287 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons2:
# 1288 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Now please select the two Pokémon\n"
# 1289 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "that are to be entered.$"
# 1290 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1291 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1292 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ChoseSameMonAsFriend:
# 1293 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You have chosen the same kind of\n"
# 1294 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Pokémon as your friend.\p"
# 1295 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please choose two Pokémon different\n"
# 1296 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "from your friend's, match the level\l"
# 1297 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you wish to enter, and register again.$"
# 1298 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1299 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers:
# 1300 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The Link Multi Battle Room challenge\n"
# 1301 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "is only for two linked players.$"
# 1302 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1303 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon:
# 1304 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has also selected\n"
# 1305 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the Pokémon {STR_VAR_1}.$"
# 1306 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1307 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMons:
# 1308 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has also selected the\n"
# 1309 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Pokémon {STR_VAR_1} and {STR_VAR_2}.$"
# 1310 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1311 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode:
# 1312 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has chosen a different\n"
# 1313 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "battle level.$"
# 1314 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1315 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1316 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMon:
# 1317 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has chosen a different\n"
# 1318 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "battle level.\p"
# 1319 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has also selected\n"
# 1320 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the Pokémon {STR_VAR_1}.$"
# 1321 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1322 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1323 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMons:
# 1324 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has chosen a different\n"
# 1325 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "battle level.\p"
# 1326 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has also selected the\n"
# 1327 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Pokémon {STR_VAR_1} and {STR_VAR_2}.$"
# 1328 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1329 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode:
# 1330 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please choose two Pokémon different\n"
# 1331 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "from your friend's, match the level\l"
# 1332 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you wish to enter, and register again.$"
# 1333 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1334 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn:
# 1335 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I will save the game before\n"
# 1336 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "showing you in. Please wait.$"
# 1337 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1338 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_CongratsDefeatedMaiden:
# 1339 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Congratulations!\n"
# 1340 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You have defeated the Salon Maiden\l"
# 1341 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "and swept seven Trainers!$"
# 1342 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1343 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_AwardYouTheseBattlePoints:
# 1344 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In recognition of your infinite talent,\n"
# 1345 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "we award you these Battle Point(s).$"
# 1346 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1347 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_Text_ObtainedXBattlePoints:
# 1348 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} obtained {STR_VAR_1} Battle Point(s).$"
# 1349 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1350 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_RulesAreListed:
# 1351 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The Battle Tower rules are listed.$"
# 1352 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1353 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ReadWhichHeading:
# 1354 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Which heading do you want to read?$"
# 1355 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1356 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainTowerRules:
# 1357 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The Battle Tower is a facility where\n"
# 1358 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "four types of battles are waged--\l"
# 1359 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Single Battle, Double Battle, Multi\l"
# 1360 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Battle, and Link Multi Battle.\p"
# 1361 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "For each of these types, there are\n"
# 1362 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "separate Battle Rooms.\p"
# 1363 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please speak with a guide offering\n"
# 1364 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the type of battle you wish to enter.$"
# 1365 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1366 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainMonRules:
# 1367 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Depending on the Battle Room you are\n"
# 1368 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "entering, you will be required to take\l"
# 1369 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "a certain number of Pokémon.\p"
# 1370 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The Single Battle mode requires\n"
# 1371 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "three Pokémon.\p"
# 1372 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The Double Battle mode requires four,\n"
# 1373 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "and the Multi modes both require two.$"
# 1374 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1375 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainSalonRules:
# 1376 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The Battle Salon is where you must\n"
# 1377 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "find a partner to form a tag team for\l"
# 1378 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the Multi Battle Room challenge.\p"
# 1379 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Choose the best partner for you by\n"
# 1380 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "examining other Trainers'\l"
# 1381 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Pokémon and their moves.\p"
# 1382 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You may choose a new tag partner\n"
# 1383 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "after winning seven straight matches.$"
# 1384 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1385 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainMultiLinkRules:
# 1386 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The Link Multi Battle Mode is for two\n"
# 1387 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "friends to mount a challenge together.\p"
# 1388 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You and your friend must be linked with\n"
# 1389 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Wireless Adapters or a GBA Game Link\l"
# 1390 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "cable.\p"
# 1391 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must choose two Pokémon at\n"
# 1392 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the registration counter.\p"
# 1393 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "These Pokémon must be different\n"
# 1394 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "from those of your friend.\p"
# 1395 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You may not interrupt this challenge\n"
# 1396 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "in the middle, unlike other modes.$"
