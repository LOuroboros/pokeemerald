#ifndef GUARD_CONSTANTS_POKEMON_CONFIG_H
#define GUARD_CONSTANTS_POKEMON_CONFIG_H

// Used by other branches to communicate with each other.
#define POKEMON_EXPANSION

#ifndef GEN_3
#define GEN_3 0
#define GEN_4 1
#define GEN_5 2
#define GEN_6 3
#define GEN_7 4
#define GEN_8 5
#endif

#define P_UPDATED_TYPES     GEN_8 // In Gen6+, several Pokémon were changed to be partially or fully Fairy type.
#define P_UPDATED_STATS     GEN_8 // Since Gen 6, Pokémon stats are updated with each passing generation.
#define P_FOOTPRINTS              // Gen6+ games no longer show a species' footprint in the Pokédex. Commenting this line out will disable them.

#endif // GUARD_CONSTANTS_POKEMON_CONFIG_H
