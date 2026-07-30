#ifndef TYPE_HPP
#define TYPE_HPP

enum class Type {
    Fire,
    Water,
    Grass,
    Electric,
    Normal,
    COUNT
};

constexpr int TYPE_COUNT = static_cast<int>(Type::COUNT);

// Declaration only
double getEffectiveness(Type attackType, Type defenderType);

#endif