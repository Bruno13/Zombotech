static s_AnimationLibraries[][] = {
    !"AIRPORT",    !"ATTRACTORS",   !"BAR",                 !"BASEBALL",
    !"BD_FIRE",    !"BEACH",            !"BENCHPRESS",  !"BF_INJECTION",
    !"BIKED",          !"BIKEH",        !"BIKELEAP",        !"BIKES",
    !"BIKEV",          !"BIKE_DBZ",     !"BMX",             !"BOMBER",
    !"BOX",            !"BSKTBALL",     !"BUDDY",           !"BUS",
    !"CAMERA",         !"CAR",          !"CARRY",           !"CAR_CHAT",
    !"CASINO",         !"CHAINSAW",     !"CHOPPA",          !"CLOTHES",
    !"COACH",          !"COLT45",       !"COP_AMBIENT", !"COP_DVBYZ",
    !"CRACK",          !"CRIB",         !"DAM_JUMP",         !"DANCING",
    !"DEALER",         !"DILDO",        !"DODGE",            !"DOZER",
    !"DRIVEBYS",   !"FAT",          !"FIGHT_B",      !"FIGHT_C",
    !"FIGHT_D",    !"FIGHT_E",      !"FINALE",               !"FINALE2",
    !"FLAME",      !"FLOWERS",      !"FOOD",                 !"FREEWEIGHTS",
    !"GANGS",      !"GHANDS",       !"GHETTO_DB",    !"GOGGLES",
    !"GRAFFITI",   !"GRAVEYARD",    !"GRENADE",      !"GYMNASIUM",
    !"HAIRCUTS",   !"HEIST9",       !"INT_HOUSE",    !"INT_OFFICE",
    !"INT_SHOP",   !"JST_BUISNESS", !"KART",                 !"KISSING",
    !"KNIFE",      !"LAPDAN1",              !"LAPDAN2",      !"LAPDAN3",
    !"LOWRIDER",   !"MD_CHASE",     !"MD_END",               !"MEDIC",
    !"MISC",       !"MTB",                  !"MUSCULAR",     !"NEVADA",
    !"ON_LOOKERS", !"OTB",                  !"PARACHUTE",    !"PARK",
    !"PAULNMAC",   !"PED",                  !"PLAYER_DVBYS", !"PLAYIDLES",
    !"POLICE",     !"POOL",                 !"POOR",                 !"PYTHON",
    !"QUAD",       !"QUAD_DBZ",     !"RAPPING",      !"RIFLE",
    !"RIOT",       !"ROB_BANK",     !"ROCKET",               !"RUSTLER",
    !"RYDER",      !"SCRATCHING",   !"SHAMAL",               !"SHOP",
    !"SHOTGUN",    !"SILENCED",     !"SKATE",                !"SMOKING",
    !"SNIPER",     !"SPRAYCAN",     !"STRIP",                !"SUNBATHE",
    !"SWAT",       !"SWEET",                !"SWIM",                 !"SWORD",
    !"TANK",       !"TATTOOS",              !"TEC",                  !"TRAIN",
    !"TRUCK",      !"UZI",                  !"VAN",                  !"VENDING",
    !"VORTEX",     !"WAYFARER",     !"WEAPONS",      !"WUZI",
    !"WOP",        !"GFUNK",                !"RUNNINGMAN"
};
 
PreloadAnimations(playerid)
{
    for(new i = 0; i < sizeof(s_AnimationLibraries); i ++)
    {
        ApplyAnimation(playerid, s_AnimationLibraries[i], "null", 0.0, 0, 0, 0, 0, 0);
    }
    return 1;
}

PreloadActorAnimations(actorid)
{
    for(new i = 0; i < sizeof(s_AnimationLibraries); i ++)
    {
        ApplyActorAnimation(actorid, s_AnimationLibraries[i], "null", 0.0, 0, 0, 0, 0, 0);
    }
    return 1;
}