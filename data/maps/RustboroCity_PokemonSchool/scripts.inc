# 1 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 2 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_MapScripts::
# 3 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 5 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Blackboard::
# 6 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lockall
# 7 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
# 8 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 9 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 10 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 11 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
# 12 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
# 13 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 14 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
# 15 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 16 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 0, RustboroCity_PokemonSchool_EventScript_Poison
# 17 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 1, RustboroCity_PokemonSchool_EventScript_Paralysis
# 18 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 2, RustboroCity_PokemonSchool_EventScript_Sleep
# 19 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 3, RustboroCity_PokemonSchool_EventScript_Burn
# 20 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 4, RustboroCity_PokemonSchool_EventScript_Freeze
# 21 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 5, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
# 22 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
# 23 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 24 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 25 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Poison::
# 26 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainPoison, MSGBOX_DEFAULT
# 27 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 28 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 29 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 30 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Paralysis::
# 31 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainParalysis, MSGBOX_DEFAULT
# 32 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 33 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 34 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 35 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Sleep::
# 36 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainSleep, MSGBOX_DEFAULT
# 37 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 38 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 39 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 40 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Burn::
# 41 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainBurn, MSGBOX_DEFAULT
# 42 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 43 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 44 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 45 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Freeze::
# 46 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainFreeze, MSGBOX_DEFAULT
# 47 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 48 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 49 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 50 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ExitTopicSelect::
# 51 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	releaseall
# 52 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 53 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 54 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GameboyKid1::
# 55 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_TradingRightNow, MSGBOX_NPC
# 56 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 57 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 58 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GameboyKid2::
# 59 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot, MSGBOX_NPC
# 60 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 61 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 62 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_RichBoy::
# 63 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems, MSGBOX_NPC
# 64 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 65 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 66 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Lass::
# 67 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself, MSGBOX_NPC
# 68 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 70 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_StudentNotebook::
# 71 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
# 72 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 73 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 74 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Teacher::
# 75 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 76 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 77 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_GaveQuickClaw
# 78 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast
# 79 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest
# 80 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw, MSGBOX_DEFAULT
# 81 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 82 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 83 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 84 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 85 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 86 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_RECEIVED_QUICK_CLAW
# 87 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 88 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 89 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 90 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast::
# 91 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast
# 92 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 93 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	return
# 94 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 95 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest::
# 96 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest
# 97 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 98 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	return
# 99 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 100 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GaveQuickClaw::
# 101 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainQuickClaw, MSGBOX_DEFAULT
# 102 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 103 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 104 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 105 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 106 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 107 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 108 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest:
# 109 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 110 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 111 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 112 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 113 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 114 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 115 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 116 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 117 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 118 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 119 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 120 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 121 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 122 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 123 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 124 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 125 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 126 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 127 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 128 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 129 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 130 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 131 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 132 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 133 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast:
# 134 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 135 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 136 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 137 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 138 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 139 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 140 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 141 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 142 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 143 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 144 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 145 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 146 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 147 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 148 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 149 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 150 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 151 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 152 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 153 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 154 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 155 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 156 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 157 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 158 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 159 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 160 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Scott::
# 161 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 162 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 163 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE, RustboroCity_PokemonSchool_EventScript_ScottWatchStudents
# 164 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready
# 165 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge
# 166 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut, MSGBOX_DEFAULT
# 167 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 168 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_RUSTBORO
# 169 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 170 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 171 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 172 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready::
# 173 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge
# 174 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
# 175 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 176 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 177 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 178 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge::
# 179 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge, MSGBOX_DEFAULT
# 180 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
# 181 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 182 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 183 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge::
# 184 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottStoneBadge, MSGBOX_DEFAULT
# 185 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
# 186 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 187 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 188 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge::
# 189 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 190 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
# 191 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 192 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 193 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 194 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottWatchStudents::
# 195 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
# 196 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 197 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 198 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 199 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges:
# 200 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The blackboard lists status changes\n"
# 201 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "that may affect Pokémon in battle.$"
# 202 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 203 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ReadWhichTopic:
# 204 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Which topic do you want to read?$"
# 205 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 206 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainPoison:
# 207 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon is poisoned, it will\n"
# 208 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "steadily lose HP.\p"
# 209 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The effects of poison remain after\n"
# 210 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a battle.\p"
# 211 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A poisoned Pokémon's HP will drop\n"
# 212 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "while it is traveling.\p"
# 213 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Heal a poisoning using an Antidote.$"
# 214 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 215 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainParalysis:
# 216 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon becomes paralyzed,\n"
# 217 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "its Speed drops.\p"
# 218 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It may also not be able to move while\n"
# 219 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "it is in battle.\p"
# 220 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Paralysis remains after battle.\n"
# 221 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Cure it using a Parlyz Heal.$"
# 222 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 223 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainSleep:
# 224 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon falls asleep, it will be\n"
# 225 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "unable to attack.\p"
# 226 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A Pokémon may wake up on its own,\n"
# 227 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "but if a battle ends while it is\l"
# 228 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "sleeping, it will stay asleep.\p"
# 229 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Wake it up using an Awakening.$"
# 230 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 231 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainBurn:
# 232 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A burn reduces Attack power, and it\n"
# 233 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "steadily reduces the victim's HP.\p"
# 234 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A burn lingers after battle.\n"
# 235 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Cure a burn using a Burn Heal.$"
# 236 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 237 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainFreeze:
# 238 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon is frozen, it becomes\n"
# 239 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "completely helpless.\p"
# 240 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It will remain frozen after battle.\n"
# 241 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Thaw it out using an Ice Heal.$"
# 242 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 243 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw:
# 244 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Students who don't study get a little\n"
# 245 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "taste of my Quick Claw.\p"
# 246 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Whether or not you are a good student \n"
# 247 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "will be evident from the way you use\l"
# 248 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "this item.$"
# 249 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 250 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainQuickClaw:
# 251 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A Pokémon holding the Quick Claw will\n"
# 252 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "occasionally speed up and get to move\l"
# 253 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "before its opponent.\p"
# 254 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "There are many other items that are\n"
# 255 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "meant to be held by Pokémon.\p"
# 256 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Just those alone will give you many\n"
# 257 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "topics to study!$"
# 258 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 259 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_TradingRightNow:
# 260 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I'm trading Pokémon with my friend\n"
# 261 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "right now.$"
# 262 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 263 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot:
# 264 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I always wanted a Torracat, and\n"
# 265 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I'm finally getting one!$"
# 266 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 267 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems:
# 268 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Pokémon can hold items, but they\n"
# 269 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "don't know what to do with man-made\l"
# 270 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "items like Potion and Antidote.$"
# 271 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 272 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself:
# 273 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "You know how some Pokémon moves can\n"
# 274 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "confuse a Pokémon?\p"
# 275 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A confused Pokémon will sometimes\n"
# 276 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "attack itself without meaning to.\p"
# 277 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "But once it leaves battle, it will\n"
# 278 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "return to normal.$"
# 279 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 280 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentsNotes:
# 281 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's this student's notebook…\p"
# 282 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Pokémon are to be caught using\n"
# 283 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Poké Balls.\p"
# 284 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Up to six Pokémon can accompany\n"
# 285 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a Trainer.\p"
# 286 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A Trainer is someone who catches\n"
# 287 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Pokémon, raises them, and battles\l"
# 288 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "with them.\p"
# 289 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A Trainer's mission is to defeat\n"
# 290 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "the strong Trainers who await\l"
# 291 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "challengers in Pokémon Gyms.$"
# 292 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 293 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut:
# 294 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hello? Didn't we meet before?\n"
# 295 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I think back in Petalburg City.\p"
# 296 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Let me introduce myself.\n"
# 297 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "My name's Scott.\p"
# 298 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I've been traveling everywhere in\n"
# 299 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "search of outstanding Trainers.\p"
# 300 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "More specifically, I'm looking for\n"
# 301 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Pokémon battle experts.\p"
# 302 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "So, what brings you to this School?\n"
# 303 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Are you a Trainer, too?\p"
# 304 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The first thing you should do is to\n"
# 305 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "have a Pokémon learn the move Cut.\p"
# 306 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If I remember correctly, someone in\n"
# 307 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "this town has Cut.$"
# 308 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 309 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown:
# 310 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Scott: Hmm…\p"
# 311 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The talent levels of the students here\n"
# 312 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "are unknown. The potential's there.$"
# 313 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 314 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottStoneBadge:
# 315 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Scott: Oh, what's that?\p"
# 316 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's a Charm Badge, isn't it?\n"
# 317 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "That's pretty impressive, I'd say.\p"
# 318 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "But, you know, I would've loved to see\n"
# 319 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "you in battle.\p"
# 320 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's hard to tell what you're like as\n"
# 321 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a Trainer from a League Badge.$"
# 322 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 323 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge:
# 324 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hello? Didn't we meet before?\n"
# 325 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I think back in Petalburg City.\p"
# 326 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Let me introduce myself.\n"
# 327 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "My name's Scott.\p"
# 328 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I've been traveling everywhere in\n"
# 329 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "search of outstanding Trainers.\p"
# 330 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "More specifically, I'm looking for\n"
# 331 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Pokémon battle experts.\p"
# 332 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Oh, what's that?\n"
# 333 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's a Charm Badge, isn't it?\p"
# 334 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "That's pretty impressive, I'd say, for\n"
# 335 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a starting Trainer like yourself.\p"
# 336 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "But, you know, I would've loved to see\n"
# 337 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "you in battle.\p"
# 338 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's hard to tell what you're like as\n"
# 339 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a Trainer from a League Badge.$"
