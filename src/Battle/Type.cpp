#include "Battle/Type.hpp"

// Type chart array

/* Type chart is as follows:
            Defender
    Attacker    Fire  Water  Grass  Electric  Normal
    Fire         1     .5      2        1       1
    Water        2     .5     .5        1       1
    Grass       .5      2     .5        1       1
    Electric     1      2     .5       .5       1
    Normal       1      1      1        1       1

*/
double typeChart[TYPE_COUNT][TYPE_COUNT] = {
    {1.0, 0.5, 2.0, 1.0, 1.0},
    {2.0, 0.5, 0.5, 1.0, 1.0},
    {0.5, 2.0, 0.5, 1.0, 1.0},
    {1.0, 2.0, 0.5, 0.5, 1.0},
    {1.0, 1.0, 1.0, 1.0, 1.0}

};

double getEffectiveness(Type attackType, Type defenderType) {
    return typeChart[(int)attackType][(int)defenderType];
}