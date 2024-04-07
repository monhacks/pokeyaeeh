#include "global.h"
#include "battle.h"
#include "battle_gfx_sfx_util.h"
#include "berry.h"
#include "data.h"
#include "daycare.h"
#include "decompress.h"
#include "event_data.h"
#include "international_string_util.h"
#include "link.h"
#include "link_rfu.h"
#include "main.h"
#include "menu.h"
#include "overworld.h"
#include "palette.h"
#include "party_menu.h"
#include "pokeball.h"
#include "pokedex.h"
#include "pokemon.h"
#include "random.h"
#include "script.h"
#include "sprite.h"
#include "string_util.h"
#include "tv.h"
#include "wild_encounter.h"
#include "constants/abilities.h"
#include "constants/items.h"
#include "constants/battle_frontier.h"

static void CB2_ReturnFromChooseHalfParty(void);
static void CB2_ReturnFromChooseBattleFrontierParty(void);

void HealPlayerParty(void)
{
    u8 i, j;
    u8 ppBonuses;
    u8 arg[4];

    // restore HP.
    for(i = 0; i < gPlayerPartyCount; i++)
    {
        u16 maxHP = GetMonData(&gPlayerParty[i], MON_DATA_MAX_HP);
        arg[0] = maxHP;
        arg[1] = maxHP >> 8;
        SetMonData(&gPlayerParty[i], MON_DATA_HP, arg);
        ppBonuses = GetMonData(&gPlayerParty[i], MON_DATA_PP_BONUSES);

        // restore PP.
        for(j = 0; j < MAX_MON_MOVES; j++)
        {
            arg[0] = CalculatePPWithBonus(GetMonData(&gPlayerParty[i], MON_DATA_MOVE1 + j), ppBonuses, j);
            SetMonData(&gPlayerParty[i], MON_DATA_PP1 + j, arg);
        }

        // since status is u32, the four 0 assignments here are probably for safety to prevent undefined data from reaching SetMonData.
        arg[0] = 0;
        arg[1] = 0;
        arg[2] = 0;
        arg[3] = 0;
        SetMonData(&gPlayerParty[i], MON_DATA_STATUS, arg);
    }
}

u8 ScriptGiveEgg(u16 species)
{
    struct Pokemon mon;
    u8 isEgg;

    CreateEgg(&mon, species, TRUE);
    isEgg = TRUE;
    SetMonData(&mon, MON_DATA_IS_EGG, &isEgg);

    return GiveMonToPlayer(&mon);
}

void HasEnoughMonsForDoubleBattle(void)
{
    switch (GetMonsStateToDoubles())
    {
    case PLAYER_HAS_TWO_USABLE_MONS:
        gSpecialVar_Result = PLAYER_HAS_TWO_USABLE_MONS;
        break;
    case PLAYER_HAS_ONE_MON:
        gSpecialVar_Result = PLAYER_HAS_ONE_MON;
        break;
    case PLAYER_HAS_ONE_USABLE_MON:
        gSpecialVar_Result = PLAYER_HAS_ONE_USABLE_MON;
        break;
    }
}

static bool8 CheckPartyMonHasHeldItem(u16 item)
{
    int i;

    for(i = 0; i < PARTY_SIZE; i++)
    {
        u16 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG);
        if (species != SPECIES_NONE && species != SPECIES_EGG && GetMonData(&gPlayerParty[i], MON_DATA_HELD_ITEM) == item)
            return TRUE;
    }
    return FALSE;
}

bool8 DoesPartyHaveEnigmaBerry(void)
{
    bool8 hasItem = CheckPartyMonHasHeldItem(ITEM_ENIGMA_BERRY_E_READER);
    if (hasItem == TRUE)
        GetBerryNameByBerryType(ItemIdToBerryType(ITEM_ENIGMA_BERRY_E_READER), gStringVar1);

    return hasItem;
}

void CreateScriptedWildMon(u16 species, u8 level, u16 item, u8 nature, u8 abilityNum, u8 *evs, u8 *ivs, u16 *moves, bool8 isShiny)
{
    u8 heldItem[2];
    u8 i;
    u8 evTotal = 0;

    ZeroEnemyPartyMons();
    
    if (nature == NUM_NATURES || nature == 0xFF)
        nature = Random() % NUM_NATURES;
    
    if (isShiny)
        CreateShinyMonWithNature(&gEnemyParty[0], species, level, nature);
    else
        CreateMonWithNature(&gEnemyParty[0], species, level, 32, nature);
    
    for (i = 0; i < NUM_STATS; i++)
    {
        // ev
        if (evs[i] != 0xFF && evTotal < 510)
        {
            // only up to 510 evs
            if ((evTotal + evs[i]) > 510)
                evs[i] = (510 - evTotal);
            
            evTotal += evs[i];
            SetMonData(&gEnemyParty[0], MON_DATA_HP_EV + i, &evs[i]);
        }
        
        // iv
        if (ivs[i] != 32 && ivs[i] != 0xFF)
            SetMonData(&gEnemyParty[0], MON_DATA_HP_IV + i, &ivs[i]);
    }
    CalculateMonStats(&gEnemyParty[0]);
    
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] == 0 || moves[i] == 0xFF || moves[i] > MOVES_COUNT)
            continue;
        
        SetMonMoveSlot(&gEnemyParty[0], moves[i], i);
    }

    if (item)
    {
        heldItem[0] = item;
        heldItem[1] = item >> 8;
        SetMonData(&gEnemyParty[0], MON_DATA_HELD_ITEM, heldItem);
    }
    
    //ability
    if (abilityNum == 0xFF || GetAbilityBySpecies(species, abilityNum) == 0)
    {
        do {
            abilityNum = Random() % 3;  // includes hidden abilities
        } while (GetAbilityBySpecies(species, abilityNum) == 0);
    }
    
    SetMonData(&gEnemyParty[0], MON_DATA_ABILITY_NUM, &abilityNum);
}

void CreateScriptedDoubleWildMon(u16 species1, u8 level1, u16 item1, u8 nature1, u8 abilityNum1, u8 *evs1, u8 *ivs1, u16 *moves1, bool8 isShiny1, u16 species2, u8 level2, u16 item2, u8 nature2, u8 abilityNum2, u8 *evs2, u8 *ivs2, u16 *moves2, bool8 isShiny2)
{
    u8 heldItem1[2];
    u8 heldItem2[2];
    u8 i;
    u8 evTotal1 = 0;
    u8 evTotal2 = 0;

    ZeroEnemyPartyMons();

    if (nature1 == NUM_NATURES || nature1 == 0xFF)
        nature1 = Random() % NUM_NATURES;

    if (isShiny1)
        CreateShinyMonWithNature(&gEnemyParty[0], species1, level1, nature1);
    else
        CreateMonWithNature(&gEnemyParty[0], species1, level1, 32, nature1);

    for (i = 0; i < NUM_STATS; i++)
    {
        // ev
        if (evs1[i] != 0xFF && evTotal1 < 510)
        {
            // only up to 510 evs
            if ((evTotal1 + evs1[i]) > 510)
                evs1[i] = (510 - evTotal1);
            
            evTotal1 += evs1[i];
            SetMonData(&gEnemyParty[0], MON_DATA_HP_EV + i, &evs1[i]);
        }
        
        // iv
        if (ivs1[i] != 32 && ivs1[i] != 0xFF)
            SetMonData(&gEnemyParty[0], MON_DATA_HP_IV + i, &ivs1[i]);
    }
    CalculateMonStats(&gEnemyParty[0]);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves1[i] == 0 || moves1[i] == 0xFF || moves1[i] > MOVES_COUNT)
            continue;
        
        SetMonMoveSlot(&gEnemyParty[0], moves1[i], i);
    }

    if (item1)
    {
        heldItem1[0] = item1;
        heldItem1[1] = item1 >> 8;
        SetMonData(&gEnemyParty[0], MON_DATA_HELD_ITEM, heldItem1);
    }

    if (abilityNum1 == 0xFF || GetAbilityBySpecies(species1, abilityNum1) == 0)
    {
        do {
            abilityNum1 = Random() % 3;  // includes hidden abilities
        } while (GetAbilityBySpecies(species1, abilityNum1) == 0);
    }
    
    SetMonData(&gEnemyParty[0], MON_DATA_ABILITY_NUM, &abilityNum1);

    // mon 2
    if (nature2 == NUM_NATURES || nature2 == 0xFF)
        nature2 = Random() % NUM_NATURES;

    if (isShiny2)
        CreateShinyMonWithNature(&gEnemyParty[1], species2, level2, nature2);
    else
        CreateMonWithNature(&gEnemyParty[1], species2, level2, 32, nature2);

    for (i = 0; i < NUM_STATS; i++)
    {
        // ev
        if (evs2[i] != 0xFF && evTotal2 < 510)
        {
            // only up to 510 evs
            if ((evTotal2 + evs2[i]) > 510)
                evs2[i] = (510 - evTotal2);
            
            evTotal2 += evs2[i];
            SetMonData(&gEnemyParty[1], MON_DATA_HP_EV + i, &evs2[i]);
        }
        
        // iv
        if (ivs2[i] != 32 && ivs2[i] != 0xFF)
            SetMonData(&gEnemyParty[1], MON_DATA_HP_IV + i, &ivs2[i]);
    }
    CalculateMonStats(&gEnemyParty[1]);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves2[i] == 0 || moves2[i] == 0xFF || moves2[i] > MOVES_COUNT)
            continue;
        
        SetMonMoveSlot(&gEnemyParty[1], moves2[i], i);
    }

    if (item2)
    {
        heldItem2[0] = item2;
        heldItem2[1] = item2 >> 8;
        SetMonData(&gEnemyParty[1], MON_DATA_HELD_ITEM, heldItem2);
    }

    if (abilityNum2 == 0xFF || GetAbilityBySpecies(species2, abilityNum2) == 0)
    {
        do {
            abilityNum2 = Random() % 3;  // includes hidden abilities
        } while (GetAbilityBySpecies(species2, abilityNum2) == 0);
    }

    SetMonData(&gEnemyParty[1], MON_DATA_ABILITY_NUM, &abilityNum2);
}

void ScriptSetMonMoveSlot(u8 monIndex, u16 move, u8 slot)
{
// Allows monIndex to go out of bounds of gPlayerParty. Doesn't occur in vanilla
#ifdef BUGFIX
    if (monIndex >= PARTY_SIZE)
#else
    if (monIndex > PARTY_SIZE)
#endif
        monIndex = gPlayerPartyCount - 1;

    SetMonMoveSlot(&gPlayerParty[monIndex], move, slot);
}

// Note: When control returns to the event script, gSpecialVar_Result will be
// TRUE if the party selection was successful.
void ChooseHalfPartyForBattle(void)
{
    gMain.savedCallback = CB2_ReturnFromChooseHalfParty;
    VarSet(VAR_FRONTIER_FACILITY, FACILITY_MULTI_OR_EREADER);
    InitChooseHalfPartyForBattle(0);
}

static void CB2_ReturnFromChooseHalfParty(void)
{
    switch (gSelectedOrderFromParty[0])
    {
    case 0:
        gSpecialVar_Result = FALSE;
        break;
    default:
        gSpecialVar_Result = TRUE;
        break;
    }

    SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

void ChoosePartyForBattleFrontier(void)
{
    gMain.savedCallback = CB2_ReturnFromChooseBattleFrontierParty;
    InitChooseHalfPartyForBattle(gSpecialVar_0x8004 + 1);
}

static void CB2_ReturnFromChooseBattleFrontierParty(void)
{
    switch (gSelectedOrderFromParty[0])
    {
    case 0:
        gSpecialVar_Result = FALSE;
        break;
    default:
        gSpecialVar_Result = TRUE;
        break;
    }

    SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

void ReducePlayerPartyToSelectedMons(void)
{
    struct Pokemon party[MAX_FRONTIER_PARTY_SIZE];
    int i;

    CpuFill32(0, party, sizeof party);

    // copy the selected pokemon according to the order.
    for (i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
        if (gSelectedOrderFromParty[i]) // as long as the order keeps going (did the player select 1 mon? 2? 3?), do not stop
            party[i] = gPlayerParty[gSelectedOrderFromParty[i] - 1]; // index is 0 based, not literal

    CpuFill32(0, gPlayerParty, sizeof gPlayerParty);

    // overwrite the first 4 with the order copied to.
    for (i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
        gPlayerParty[i] = party[i];

    CalculatePlayerPartyCount();
}

u32 ScriptGiveMonParameterized(u16 species, u8 level, u16 item, u8 ball, u8 nature, u8 abilityNum, u8 gender, u8 *evs, u8 *ivs, u16 *moves, bool8 isShiny)
{
    u16 nationalDexNum;
    int sentToPc;
    struct Pokemon mon;
    u32 i;
    u8 genderRatio = gSpeciesInfo[species].genderRatio;
    u16 targetSpecies;

    // check whether to use a specific nature or a random one
    if (OW_SYNCHRONIZE_NATURE >= GEN_6 && (gSpeciesInfo[species].eggGroups[0] == EGG_GROUP_UNDISCOVERED || OW_SYNCHRONIZE_NATURE == GEN_7))
        nature = PickWildMonNature();
    else if (nature >= NUM_NATURES)
        nature = Random() % NUM_NATURES;

    // create a Pokémon with basic data
    if ((gender == MON_MALE && genderRatio != MON_FEMALE && genderRatio != MON_GENDERLESS)
     || (gender == MON_FEMALE && genderRatio != MON_MALE && genderRatio != MON_GENDERLESS)
     || (gender == MON_GENDERLESS && genderRatio == MON_GENDERLESS))
        CreateMonWithGenderNatureLetter(&mon, species, level, 32, gender, nature, 0);
    else
        CreateMonWithNature(&mon, species, level, 32, nature);

    if (isShiny)
        CreateShinyMonWithNature(&mon, species, level, nature);
    else
        CreateMonWithNature(&mon, species, level, 32, nature);

    // EV and IV
    for (i = 0; i < NUM_STATS; i++)
    {
        // EV
        if (evs[i] <= MAX_PER_STAT_EVS)
            SetMonData(&mon, MON_DATA_HP_EV + i, &evs[i]);

        // IV
        if (ivs[i] <= MAX_PER_STAT_IVS)
            SetMonData(&mon, MON_DATA_HP_IV + i, &ivs[i]);
    }
    CalculateMonStats(&mon);

    // moves
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] == MOVE_NONE || moves[i] >= MOVES_COUNT)
            continue;
        SetMonMoveSlot(&mon, moves[i], i);
    }

    // ability
    if (abilityNum >= NUM_ABILITY_SLOTS || GetAbilityBySpecies(species, abilityNum) == ABILITY_NONE)
    {
        do {
            abilityNum = Random() % NUM_ABILITY_SLOTS; // includes hidden abilities
        } while (GetAbilityBySpecies(species, abilityNum) == ABILITY_NONE);
    }
    SetMonData(&mon, MON_DATA_ABILITY_NUM, &abilityNum);

    // ball
    if (ball >= POKEBALL_COUNT)
        ball = ITEM_POKE_BALL;
    SetMonData(&mon, MON_DATA_POKEBALL, &ball);

    // held item
    SetMonData(&mon, MON_DATA_HELD_ITEM, &item);

    // In case a mon with a form changing item is given. Eg: SPECIES_ARCEUS_NORMAL with ITEM_SPLASH_PLATE will transform into SPECIES_ARCEUS_WATER upon gifted.
    targetSpecies = GetFormChangeTargetSpecies(&mon, FORM_CHANGE_ITEM_HOLD, 0);
    if (targetSpecies != SPECIES_NONE)
        SetMonData(&mon, MON_DATA_SPECIES, &targetSpecies);

    // assign OT name and gender
    SetMonData(&mon, MON_DATA_OT_NAME, gSaveBlock2Ptr->playerName);
    SetMonData(&mon, MON_DATA_OT_GENDER, &gSaveBlock2Ptr->playerGender);

    // find empty party slot to decide whether the Pokémon goes to the Player's party or the storage system.
    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES, NULL) == SPECIES_NONE)
            break;
    }
    if (i >= PARTY_SIZE)
    {
        sentToPc = SendMonToPC(&mon);
    }
    else
    {
        sentToPc = MON_GIVEN_TO_PARTY;
        CopyMon(&gPlayerParty[i], &mon, sizeof(mon));
        gPlayerPartyCount = i + 1;
    }

    // set pokédex flags
    nationalDexNum = SpeciesToNationalPokedexNum(species); 
    switch (sentToPc)
    {
    case MON_GIVEN_TO_PARTY:
    case MON_GIVEN_TO_PC:
        GetSetPokedexFlag(nationalDexNum, FLAG_SET_SEEN);
        GetSetPokedexFlag(nationalDexNum, FLAG_SET_CAUGHT);
        break;
    case MON_CANT_GIVE:
        break;
    }

    return sentToPc;
}

u32 ScriptGiveMon(u16 species, u8 level, u16 item)
{
    u8 evs[NUM_STATS]        = {0, 0, 0, 0, 0, 0};
    u8 ivs[NUM_STATS]        = {MAX_PER_STAT_IVS + 1, MAX_PER_STAT_IVS + 1, MAX_PER_STAT_IVS + 1,   // We pass "MAX_PER_STAT_IVS + 1" here to ensure that
                                MAX_PER_STAT_IVS + 1, MAX_PER_STAT_IVS + 1, MAX_PER_STAT_IVS + 1};  // ScriptGiveMonParameterized won't touch the stats' IV.
    u16 moves[MAX_MON_MOVES] = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_NONE};

    return ScriptGiveMonParameterized(species, level, item, ITEM_POKE_BALL, NUM_NATURES, NUM_ABILITY_SLOTS, MON_GENDERLESS, evs, ivs, moves, FALSE);
}

#define PARSE_FLAG(n, default_) (flags & (1 << (n))) ? VarGet(ScriptReadHalfword(ctx)) : (default_)

void ScrCmd_givemon(struct ScriptContext *ctx)
{
    u16 species       = VarGet(ScriptReadHalfword(ctx));
    u8 level          = VarGet(ScriptReadHalfword(ctx));

    u32 flags         = ScriptReadWord(ctx);
    u16 item          = PARSE_FLAG(0, ITEM_NONE);
    u8 ball           = PARSE_FLAG(1, ITEM_POKE_BALL);
    u8 nature         = PARSE_FLAG(2, NUM_NATURES);
    u8 abilityNum     = PARSE_FLAG(3, NUM_ABILITY_SLOTS);
    u8 gender         = PARSE_FLAG(4, MON_GENDERLESS); // TODO: Find a better way to assign a random gender.
    u8 hpEv           = PARSE_FLAG(5, 0);
    u8 atkEv          = PARSE_FLAG(6, 0);
    u8 defEv          = PARSE_FLAG(7, 0);
    u8 speedEv        = PARSE_FLAG(8, 0);
    u8 spAtkEv        = PARSE_FLAG(9, 0);
    u8 spDefEv        = PARSE_FLAG(10, 0);
    u8 hpIv           = PARSE_FLAG(11, Random() % MAX_PER_STAT_IVS + 1);
    u8 atkIv          = PARSE_FLAG(12, Random() % MAX_PER_STAT_IVS + 1);
    u8 defIv          = PARSE_FLAG(13, Random() % MAX_PER_STAT_IVS + 1);
    u8 speedIv        = PARSE_FLAG(14, Random() % MAX_PER_STAT_IVS + 1);
    u8 spAtkIv        = PARSE_FLAG(15, Random() % MAX_PER_STAT_IVS + 1);
    u8 spDefIv        = PARSE_FLAG(16, Random() % MAX_PER_STAT_IVS + 1);
    u16 move1         = PARSE_FLAG(17, MOVE_NONE);
    u16 move2         = PARSE_FLAG(18, MOVE_NONE);
    u16 move3         = PARSE_FLAG(19, MOVE_NONE);
    u16 move4         = PARSE_FLAG(20, MOVE_NONE);
    bool8 isShiny     = PARSE_FLAG(21, FALSE);

    u8 evs[NUM_STATS]        = {hpEv, atkEv, defEv, speedEv, spAtkEv, spDefEv};
    u8 ivs[NUM_STATS]        = {hpIv, atkIv, defIv, speedIv, spAtkIv, spDefIv};
    u16 moves[MAX_MON_MOVES] = {move1, move2, move3, move4};

    gSpecialVar_Result = ScriptGiveMonParameterized(species, level, item, ball, nature, abilityNum, gender, evs, ivs, moves, isShiny);
}

#undef PARSE_FLAG
