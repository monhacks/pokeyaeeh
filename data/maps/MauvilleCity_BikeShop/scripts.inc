# 1 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 2 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_MapScripts::
# 3 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 5 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Rydel::
# 6 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	lock
# 7 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIKE, MauvilleCity_BikeShop_EventScript_KeepRidin
# 9 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_RydelGreeting, MSGBOX_DEFAULT
# 10 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_DEFAULT
# 11 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_YesFar
# 12 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 13 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 14 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_YesFar::
# 15 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 16 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 17 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_GiveBike
# 18 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 19 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 20 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GiveBike::
# 21 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 22 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_KeepRidin::
# 23 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_KeepRidin, MSGBOX_DEFAULT
# 24 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 25 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 26 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 27 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Assistant::
# 28 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HandbooksAreInBack, MSGBOX_NPC
# 29 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 30 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 31 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_MachBikeHandbook::
# 32 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_MachHandbookWhichPage
# 33 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 34 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 35 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 36 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 37 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage::
# 38 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_MACH_BIKE_INFO, FALSE
# 39 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 40 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_HowToRide
# 41 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_HowToTurn
# 42 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_SandySlopes
# 43 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 44 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 45 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 46 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 47 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToRide::
# 48 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToRideMachBike
# 49 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 50 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 51 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 52 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 53 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToTurn::
# 54 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToTurnMachBike
# 55 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 56 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 57 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 58 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 59 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SandySlopes::
# 60 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_SandySlopes
# 61 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 62 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 63 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 64 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 65 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitMachHandbook::
# 66 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 67 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 68 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 69 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AcroBikeHandbook::
# 70 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_AcroHandbookWhichPage
# 71 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 72 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 73 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 74 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 75 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage::
# 76 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_ACRO_BIKE_INFO, FALSE
# 77 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 78 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_Wheelies
# 79 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_BunnyHops
# 80 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_Jumps
# 81 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 82 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 83 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 84 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 85 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Wheelies::
# 86 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Wheelies
# 87 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 88 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 89 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 90 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 91 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_BunnyHops::
# 92 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_BunnyHops
# 93 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 94 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 95 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 96 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 97 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Jumps::
# 98 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Jumps
# 99 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 100 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 101 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 102 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 103 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitAcroHandbook::
# 104 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 105 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 106 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 107 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_RydelGreeting:
# 108 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Well, well, what have we here?\n"
# 109 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A most energetic customer!\p"
# 110 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Me? You may call me Rydel.\n"
# 111 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm the owner of this cycle shop.$"
# 112 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 113 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_DidYouComeFromFarAway:
# 114 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Rydel: Your Running Shoes…\n"
# 115 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "They're awfully filthy.\p"
# 116 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Did you come from far away?\p"
# 117 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Rydel: Hm, hm… … … … …\p"
# 118 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You're saying that you came all this\n"
# 119 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "way from Littleroot?\p"
# 120 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "My goodness!\n"
# 121 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "That's ridiculously far!\p"
# 122 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "If you had one of my Bikes, you could\n"
# 123 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "go anywhere easily while feeling the\l"
# 124 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "gentle caress of the wind!\p"
# 125 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll tell you what!\n"
# 126 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll give you a Bike!$"
# 127 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 128 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_KeepRidin:
# 129 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Rydel: If you'd like to change your\n"
# 130 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "bike's gears, click on {R_BUTTON}!$"
# 131 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 132 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedMachForAcro:
# 133 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} got the Mach Bike exchanged\n"
# 134 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "for an Acro Bike.$"
# 135 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 136 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedAcroForMach:
# 137 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} got the Acro Bike exchanged\n"
# 138 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "for a Mach Bike.$"
# 139 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 140 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HappyYouLikeIt:
# 141 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Rydel: Good, good!\n"
# 142 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm happy that you like it!$"
# 143 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 144 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_OhYourBikeIsInPC:
# 145 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh? What happened to that Bike\n"
# 146 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I gave you?\p"
# 147 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh, I get it, you stored it using your PC.\p"
# 148 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Well, take it out of PC storage,\n"
# 149 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "and I'll be happy to exchange it!\p"
# 150 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "May the wind always be at your back\n"
# 151 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "on your adventure!$"
# 152 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 153 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HandbooksAreInBack:
# 154 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm learning about Bikes while\n"
# 155 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I work here.\p"
# 156 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "If you need advice on how to ride your\n"
# 157 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Bike, there're a couple handbooks in\l"
# 158 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the back.$"
# 159 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 160 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_MachHandbookWhichPage:
# 161 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's a handbook on the Mach Bike.\p"
# 162 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which page do you want to read?$"
# 163 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 164 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToRideMachBike:
# 165 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A Bike moves in the direction that\n"
# 166 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the + Control Pad is pressed.\p"
# 167 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It will speed up once it gets rolling.\p"
# 168 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "To stop, release the + Control Pad.\n"
# 169 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The Bike will slow to a stop.\p"
# 170 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 171 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 172 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToTurnMachBike:
# 173 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A Mach Bike is speedy, but it can't\n"
# 174 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "stop very quickly.\p"
# 175 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It gets a little tricky to get around\n"
# 176 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "a corner.\p"
# 177 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Release the + Control Pad a little\n"
# 178 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "before the corner and slow down.\p"
# 179 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 180 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 181 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_SandySlopes:
# 182 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "There are small sandy slopes\n"
# 183 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "throughout the Hoenn region.\p"
# 184 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The loose, crumbly sand makes it\n"
# 185 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "impossible to climb normally.\p"
# 186 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "But if you have a Mach Bike, you can\n"
# 187 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "zip up a sandy slope.\p"
# 188 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 189 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 190 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_AcroHandbookWhichPage:
# 191 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's a handbook on the Acro Bike.\p"
# 192 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which page do you want to read?$"
# 193 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 194 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Wheelies:
# 195 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the B Button while riding,\n"
# 196 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "and the front wheel lifts up.\p"
# 197 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You can zip around with the front\n"
# 198 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "wheel up using the + Control Pad.\p"
# 199 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "This technique is called a wheelie.\p"
# 200 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 201 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 202 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_BunnyHops:
# 203 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Keeping the B Button pressed,\n"
# 204 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "your Bike can hop on the spot.\p"
# 205 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "This technique is called a bunny hop.\p"
# 206 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You can ride while hopping, too.\p"
# 207 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 208 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 209 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Jumps:
# 210 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the B Button and the + Control\n"
# 211 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Pad at the same time to jump.\p"
# 212 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the + Control Pad to the side\n"
# 213 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "to jump sideways.\p"
# 214 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press it backwards to make the Bike\n"
# 215 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "change directions while jumping.\p"
# 216 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
