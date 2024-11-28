static const struct TrainerMon sParty_WallyPartner[] = {
    {
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_LEFTOVERS,
        .lvl = 1,
        .ability = ABILITY_FLASH_FIRE,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_BULK_UP, MOVE_EXTREME_SPEED, MOVE_FLARE_BLITZ, MOVE_MORNING_SUN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_GALLADE,
        .heldItem = ITEM_GALLADITE,
        .lvl = 1,
        .ability = ABILITY_SHARPNESS,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_PSYCHO_CUT, MOVE_SACRED_SWORD, MOVE_AQUA_CUTTER, MOVE_LEAF_BLADE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_NIDOKING,
        .heldItem = ITEM_LIFE_ORB,
        .lvl = 1,
        .ability = ABILITY_SHEER_FORCE,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_PROTECT}
    }
};
