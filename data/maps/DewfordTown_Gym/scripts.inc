# 1 "data/maps/DewfordTown_Gym/scripts.pory"

# 2 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_MapScripts::
# 3 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, DewfordTown_Gym_OnResume
# 4 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
# 5 "data/maps/DewfordTown_Gym/scripts.pory"
	.byte 0
# 6 "data/maps/DewfordTown_Gym/scripts.pory"

# 7 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnResume:
# 8 "data/maps/DewfordTown_Gym/scripts.pory"
    setvar B_VAR_STARTING_STATUS, STARTING_STATUS_GRASSY_TERRAIN
# 9 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 10 "data/maps/DewfordTown_Gym/scripts.pory"

# 11 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnTransition:
# 12 "data/maps/DewfordTown_Gym/scripts.pory"
    setvar B_VAR_STARTING_STATUS, STARTING_STATUS_GRASSY_TERRAIN
# 13 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 14 "data/maps/DewfordTown_Gym/scripts.pory"

# 15 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 16 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_BrawlyRematch
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_SEED_BOMB, DewfordTown_Gym_EventScript_GiveBulkUp2
# 20 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 21 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 22 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 23 "data/maps/DewfordTown_Gym/scripts.pory"

# 24 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 25 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 26 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 27 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 28 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 29 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 30 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 31 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 33 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 34 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 35 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 36 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 37 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 38 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 39 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 40 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 41 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 42 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 43 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 44 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar B_VAR_STARTING_STATUS, 0
# 45 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 46 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 47 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 48 "data/maps/DewfordTown_Gym/scripts.pory"

# 49 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 50 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_SEED_BOMB
# 51 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 52 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 53 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SEED_BOMB
# 54 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 55 "data/maps/DewfordTown_Gym/scripts.pory"

# 56 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 57 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_SEED_BOMB
# 58 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 59 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 60 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SEED_BOMB
# 61 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 63 "data/maps/DewfordTown_Gym/scripts.pory"

# 64 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 65 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat
# 66 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 67 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 68 "data/maps/DewfordTown_Gym/scripts.pory"

# 69 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 70 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat
# 71 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 72 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 73 "data/maps/DewfordTown_Gym/scripts.pory"

# 74 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 75 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat
# 76 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 77 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 78 "data/maps/DewfordTown_Gym/scripts.pory"

# 79 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 80 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 82 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 83 "data/maps/DewfordTown_Gym/scripts.pory"

# 84 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat
# 86 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 87 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 88 "data/maps/DewfordTown_Gym/scripts.pory"

# 89 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 90 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat
# 91 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 92 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 93 "data/maps/DewfordTown_Gym/scripts.pory"

# 94 "data/maps/DewfordTown_Gym/scripts.pory"

# 95 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 96 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat
# 97 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 98 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 99 "data/maps/DewfordTown_Gym/scripts.pory"

# 100 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 101 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 102 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 103 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 104 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 106 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 107 "data/maps/DewfordTown_Gym/scripts.pory"

# 108 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 110 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 112 "data/maps/DewfordTown_Gym/scripts.pory"

# 113 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 114 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 115 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 116 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 118 "data/maps/DewfordTown_Gym/scripts.pory"

# 119 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 122 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 124 "data/maps/DewfordTown_Gym/scripts.pory"

# 125 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 126 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 127 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 128 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 129 "data/maps/DewfordTown_Gym/scripts.pory"

# 130 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 134 "data/maps/DewfordTown_Gym/scripts.pory"

# 135 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 136 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, Champion-\n"
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 138 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Dewford's Gym Leader, Oisin, commands\n"
# 139 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grass-type Pokémon.\p"
# 140 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with Water-type\n"
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Pokémon is asking for trouble.\p"
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grass Pokémon will lay a serious\n"
# 143 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on Water and Ground\l"
# 144 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Pokémon, so be careful!\p"
# 145 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There'll be Grassy Terrain everywhere.\n"
# 146 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It'll reduce damage of earthquakes\l"
# 147 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "and heals a little every turn.\p"
# 148 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Bring a Fire-type or two.\p"
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, go for it, Champ!\n"
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I believe in you!$"
# 151 "data/maps/DewfordTown_Gym/scripts.pory"

# 152 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! You're a real one, {PLAYER}!\n"
# 154 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Onward to Mauville, now!\p"
# 155 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Good luck in your future battles!$"
# 156 "data/maps/DewfordTown_Gym/scripts.pory"

# 157 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Flower power!\n"
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Let's go!$"
# 160 "data/maps/DewfordTown_Gym/scripts.pory"

# 161 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 163 "data/maps/DewfordTown_Gym/scripts.pory"

# 164 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 165 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my power!\n"
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You are powerful!$"
# 167 "data/maps/DewfordTown_Gym/scripts.pory"

# 168 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for Oisin to be\n"
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 171 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll beat you!$"
# 172 "data/maps/DewfordTown_Gym/scripts.pory"

# 173 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 174 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 176 "data/maps/DewfordTown_Gym/scripts.pory"

# 177 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 178 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 179 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a gardener…\p"
# 181 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'm too silly for that.$"
# 182 "data/maps/DewfordTown_Gym/scripts.pory"

# 183 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 184 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 185 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 186 "data/maps/DewfordTown_Gym/scripts.pory"

# 187 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 188 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 189 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 190 "data/maps/DewfordTown_Gym/scripts.pory"

# 191 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the sun to make my heart\n"
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 194 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 195 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see your face…$"
# 196 "data/maps/DewfordTown_Gym/scripts.pory"

# 197 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithIntro:
# 198 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Scared yet, little one?$"
# 200 "data/maps/DewfordTown_Gym/scripts.pory"

# 201 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithDefeat:
# 202 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
# 203 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I don't want to know you!$"
# 204 "data/maps/DewfordTown_Gym/scripts.pory"

# 205 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithPostBattle:
# 206 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to be scared and alone!\n"
# 207 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go back home, dumbass!$"
# 208 "data/maps/DewfordTown_Gym/scripts.pory"

# 209 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenIntro:
# 210 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
# 211 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "a good loving father!$"
# 212 "data/maps/DewfordTown_Gym/scripts.pory"

# 213 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenDefeat:
# 214 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ah-ha! I lied.\n"
# 215 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I got divorced two years ago.$"
# 216 "data/maps/DewfordTown_Gym/scripts.pory"

# 217 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenPostBattle:
# 218 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Marriage and Pokémon battles\n"
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "are quite similar.\p"
# 220 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can ran away if you things\n"
# 221 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "get hard.$"
# 222 "data/maps/DewfordTown_Gym/scripts.pory"

# 223 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 224 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Time to take care of the vines!$"
# 225 "data/maps/DewfordTown_Gym/scripts.pory"

# 226 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 227 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ah, fungus$"
# 228 "data/maps/DewfordTown_Gym/scripts.pory"

# 229 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 230 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 231 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go get that Badge!$"
# 232 "data/maps/DewfordTown_Gym/scripts.pory"

# 233 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 234 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "They say to get rid of a weed you have\n"
# 235 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "to pull it up from its roots.\p"
# 236 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I hope you have the drive to beat me!$"
# 237 "data/maps/DewfordTown_Gym/scripts.pory"

# 238 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Excellent!\p"
# 240 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "So young and yet already a\n"
# 241 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "brilliant Trainer,\l"
# 242 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "go on with your journey.\p"
# 243 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Here you go, the Verdant Badge.$"
# 244 "data/maps/DewfordTown_Gym/scripts.pory"

# 245 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 246 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the Verdant Badge\n"
# 247 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from Oisin.$"
# 248 "data/maps/DewfordTown_Gym/scripts.pory"

# 249 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 250 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The Verdant Badge makes all Pokémon\n"
# 251 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "up to Level 36, even those you get in\l"
# 252 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "trades, obey without question.\p"
# 253 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "And, you'll be able to use the HM move\n"
# 254 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Flash outside of battle.\p"
# 255 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Also, a TM.$"
# 256 "data/maps/DewfordTown_Gym/scripts.pory"

# 257 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp:
# 258 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM123 contains Seed Bomb.\p"
# 259 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "never underestimate the persistence of\n"
# 260 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grass-types.\p"
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 262 "data/maps/DewfordTown_Gym/scripts.pory"

# 263 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 264 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered Gym Leader Oisin\n"
# 265 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the PokéNav.$"
# 266 "data/maps/DewfordTown_Gym/scripts.pory"

# 267 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 268 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "By the way, if the whole “Champion”\n"
# 269 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "thing doesn't work out,\l"
# 270 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'd love to have you here as a\l"
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "gardener.\p"
# 272 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The pay is great, and you get to learn\n"
# 273 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "about the beauty of plant life.$"
# 274 "data/maps/DewfordTown_Gym/scripts.pory"

# 275 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 276 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Dewford Town Pokémon Gym\p"
# 277 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oisin's certified Trainers:\n"
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wally$"
# 279 "data/maps/DewfordTown_Gym/scripts.pory"

# 280 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 281 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Dewford Town Pokémon Gym\p"
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oisin's certified Trainers:\n"
# 283 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wally and {PLAYER}$"
# 284 "data/maps/DewfordTown_Gym/scripts.pory"

# 285 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 286 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oisin: A wave may draw back, but it\n"
# 287 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 288 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 289 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 290 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 291 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 292 "data/maps/DewfordTown_Gym/scripts.pory"

# 293 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 294 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 295 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 296 "data/maps/DewfordTown_Gym/scripts.pory"

# 297 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 298 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oisin: Battling is vast and it's deep.\n"
# 299 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of Hoenn!$"
# 301 "data/maps/DewfordTown_Gym/scripts.pory"

# 302 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 303 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oisin: A wave may draw back, but it\n"
# 304 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 305 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 306 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 307 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one Pokémon\n"
# 308 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 310 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two Pokémon.$"
