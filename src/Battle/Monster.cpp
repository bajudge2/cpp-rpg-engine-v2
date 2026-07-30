#include "Battle/Monster.hpp"
#include <iostream>


Monster::Monster(int maxHealth, int currentHealth, int attack, int defense, int speed, int level) :
	maxHealth(maxHealth), currentHealth(currentHealth), attack(attack), defense(defense), speed(speed), level(level) {
	std::cout << "Monster Constructor Called! \n";
}