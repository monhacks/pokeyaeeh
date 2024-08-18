# 1 "data/maps/RustboroCity_Gym/scripts.pory"

# 2 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts::
# 3 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Gym/scripts.pory"

# 5 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
    setflag B_FLAG_NO_BAG_USE
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_CHARM, RustboroCity_Gym_EventScript_GiveRockTomb
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 13 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 14 "data/maps/RustboroCity_Gym/scripts.pory"

# 15 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag B_FLAG_NO_BAG_USE
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 28 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 29 "data/maps/RustboroCity_Gym/scripts.pory"

# 30 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_DRAINING_KISS
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CHARM
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 37 "data/maps/RustboroCity_Gym/scripts.pory"

# 38 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 42 "data/maps/RustboroCity_Gym/scripts.pory"

# 43 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 47 "data/maps/RustboroCity_Gym/scripts.pory"

# 48 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 52 "data/maps/RustboroCity_Gym/scripts.pory"

# 53 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 57 "data/maps/RustboroCity_Gym/scripts.pory"

# 58 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Pomni::
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_EDWARDO, RustboroCity_Gym_Text_PomniIntro, RustboroCity_Gym_Text_PomniDefeat
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_PomniPostBattle, MSGBOX_AUTOCLOSE
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 62 "data/maps/RustboroCity_Gym/scripts.pory"

# 63 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 64 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 65 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 66 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 70 "data/maps/RustboroCity_Gym/scripts.pory"

# 71 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 75 "data/maps/RustboroCity_Gym/scripts.pory"

# 76 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 80 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 81 "data/maps/RustboroCity_Gym/scripts.pory"

# 82 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 85 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 87 "data/maps/RustboroCity_Gym/scripts.pory"

# 88 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 91 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 92 "data/maps/RustboroCity_Gym/scripts.pory"

# 93 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 97 "data/maps/RustboroCity_Gym/scripts.pory"

# 98 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 106 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 107 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 112 "data/maps/RustboroCity_Gym/scripts.pory"

# 113 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the Champion?\p"
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no Trainer, not me, but I can\n"
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon Championship together!\p"
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a Trainer to collect\n"
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Gym Badges, am I right?\p"
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But Gym Leaders aren't pushovers!\p"
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Dor, the Gym Leader, is a user\n"
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of Fairy-type Pokémon.\p"
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Fairy type is very magical, but\n"
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand Poison-type and\l"
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Steel-type moves.\p"
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the Gym Leader.\p"
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 134 "data/maps/RustboroCity_Gym/scripts.pory"

# 135 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your Trainer Card.\p"
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Charm Badge you got should be\n"
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 144 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the Championship!\p"
# 145 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 146 "data/maps/RustboroCity_Gym/scripts.pory"

# 147 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 148 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us Gym Trainers lightly!\n"
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 150 "data/maps/RustboroCity_Gym/scripts.pory"

# 151 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 152 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 153 "data/maps/RustboroCity_Gym/scripts.pory"

# 154 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the Fairy\n"
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 157 "data/maps/RustboroCity_Gym/scripts.pory"

# 158 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 159 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 160 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against Dor!$"
# 161 "data/maps/RustboroCity_Gym/scripts.pory"

# 162 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 163 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 164 "data/maps/RustboroCity_Gym/scripts.pory"

# 165 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Dor is stronger than me by\n"
# 167 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 169 "data/maps/RustboroCity_Gym/scripts.pory"

# 170 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 171 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 173 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My Fairy Pokémon need space to\n"
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "twinkle!$"
# 175 "data/maps/RustboroCity_Gym/scripts.pory"

# 176 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 178 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 179 "data/maps/RustboroCity_Gym/scripts.pory"

# 180 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 181 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our Leader.\p"
# 182 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the Fairy type at her young age.$"
# 184 "data/maps/RustboroCity_Gym/scripts.pory"

# 185 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_PomniIntro:
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
    .string "Get ready for a world of shiny!$"
# 187 "data/maps/RustboroCity_Gym/scripts.pory"

# 188 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_PomniDefeat:
# 189 "data/maps/RustboroCity_Gym/scripts.pory"
    .string "Ow, man…$"
# 190 "data/maps/RustboroCity_Gym/scripts.pory"

# 191 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_PomniPostBattle:
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
    .string "Fairy Pokémon are cute!\n"
# 193 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But they are also very strong.\p"
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Only they can slay a dragon\n"
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "and live long to tell the tale!$"
# 196 "data/maps/RustboroCity_Gym/scripts.pory"

# 197 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hii, I am Dor! The Rustboro\n"
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon Gym Leader.\p"
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I love children! But the League won't\n"
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "let children anywhere near my Gym\l"
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "for some reason…\p"
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh wait, you are here to fight me,\n"
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "right?\p"
# 205 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Go! My Fairy babies!$"
# 206 "data/maps/RustboroCity_Gym/scripts.pory"

# 207 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So…\n"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost…\p"
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It still seems like I'm pathetic\n"
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "as ever…\p"
# 212 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I understand.\p"
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Pokémon League's rules state\n"
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that Trainers are to be given this\l"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a Gym Leader.\p"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Here, take it, silly.$"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"

# 218 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the Charm Badge\n"
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from Dor.$"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"

# 222 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Charm Badge enables your Pokémon\n"
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to use HM Cut outside of battle.\p"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, take this, too.$"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"

# 227 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 228 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That Technical Machine, TM113,\n"
# 229 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "contains Draining Kiss.\p"
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "A move which inflicts some damage and\n"
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "also heals you for half the damage that\l"
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "you deal!\p"
# 233 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you use a TM, it instantly teaches\n"
# 234 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the move to a Pokémon.\p"
# 235 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "A TM can be used as many times as you\n"
# 236 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "want, so don't worry about it.\p"
# 237 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "See ya around, loser!$"
# 238 "data/maps/RustboroCity_Gym/scripts.pory"

# 239 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 240 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you think you are so strong,\n"
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "go and challenge other Gym Leaders.\p"
# 242 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling more Trainers, you will\n"
# 243 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "maybe learn some decency.$"
# 244 "data/maps/RustboroCity_Gym/scripts.pory"

# 245 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneNeedTwoMons:
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hii, I am Dor! The Rustboro\n"
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon Gym Leader.\p"
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I love children! But the League\n"
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "won't let children anywhere near\l"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "my gym for some reason…\p"
# 251 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh wait, you are here to fight me,\n"
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "right?\p"
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "……\p"
# 254 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "……\p"
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Just because you are single, doesn't\n"
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "mean your Pokémon should be too!\p"
# 257 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is a double battle, kid.\n"
# 258 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Go get a partner for your Pokémon!$"
# 259 "data/maps/RustboroCity_Gym/scripts.pory"

# 260 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 261 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym\p"
# 262 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Dor's certified Trainers:\n"
# 263 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wally$"
# 264 "data/maps/RustboroCity_Gym/scripts.pory"

# 265 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym\p"
# 267 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Dor's certified Trainers:\n"
# 268 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wally and {PLAYER}$"
# 269 "data/maps/RustboroCity_Gym/scripts.pory"

# 270 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 273 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Dor: Oh, hello, {PLAYER}?\n"
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is Dor of Rustboro City.\p"
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from Oisin that you're\n"
# 276 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 277 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Trainers at an incredible clip.\p"
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 279 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 280 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my Gym\n"
# 281 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 284 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 285 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 286 "data/maps/RustboroCity_Gym/scripts.pory"

# 287 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 288 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered Gym Leader Dor\n"
# 289 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the PokéNav.$"
# 290 "data/maps/RustboroCity_Gym/scripts.pory"

# 291 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 292 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Dor: I'm so glad to see you again.\n"
# 293 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm Dor, the Gym Leader here.\p"
# 294 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 295 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 296 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 297 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 298 "data/maps/RustboroCity_Gym/scripts.pory"

# 299 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 300 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 301 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 302 "data/maps/RustboroCity_Gym/scripts.pory"

# 303 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 304 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Dor: I still have much to learn\n"
# 305 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling Pokémon.\p"
# 306 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 307 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 308 "data/maps/RustboroCity_Gym/scripts.pory"

# 309 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 310 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Dor: I'm so glad to see you again.\n"
# 311 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm Dor, the Gym Leader here.\p"
# 312 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 313 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 314 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 315 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 316 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 317 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one Pokémon with you?\p"
# 318 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 319 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon.$"
