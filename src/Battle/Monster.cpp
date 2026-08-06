#include "Battle/Monster.hpp"
#include <iostream>


Monster::Monster(std::string name, int maxHealth, int currentHealth, int attack, int defense, int speed, int level, Type type) :
	name(name), maxHealth(maxHealth), currentHealth(currentHealth), attack(attack), defense(defense), speed(speed), level(level), type(type) {
	std::cout << "Monster Constructor Called! \n";
}

// getters
std::string Monster::getName() const {
	return name;
}
int Monster::getCurrentHealth() const {
	return currentHealth;
}
int Monster::getMaxHealth() const {
	return maxHealth;
}
int Monster::getAttack() const {
	return attack;
}
int Monster::getDefense() const {
	return defense;
}
int Monster::getSpeed() const {
	return speed;
}
int Monster::getLevel() const {
	return level;
}
Type Monster::getType() const {
	return type;
}
std::vector<Move> Monster::getMoveset() const {
	return moveset;
}
const Move& Monster::getMove(int index) const {
	return moveset[index];
}


void Monster::takeDamage(int dmg) {
	std::cout << name << "took  " << dmg << " damage!\n";

		currentHealth -= dmg;

		// check for negative health 
		if (currentHealth < 0) {
			// set to zero if negative
			currentHealth = 0;
		}
	
}
void Monster::heal(int h) {
	std::cout << name << "healed for " << h << " health!\n";

	currentHealth += h;

	// check for overflow health
	if (currentHealth > maxHealth) {
		currentHealth = maxHealth;
	}
}
bool Monster::isAlive() const {
	if (currentHealth > 0) return true;

	return false;
}


void Monster::addMove(Move move) {
	if (moveset.size() < MAX_MOVES) {
		moveset.push_back(move);
	}
	else {
		std::cout << "PLACEHOLDER FOR REPLACING MOVE\n";
		// eventually call a replaceMove function? or prompt and have a removeMove func
	}
}



void Monster::printStats() const {
	std::cout << name << "'s stats:\n";
	std::cout << "Max Health: " << maxHealth << std::endl;
	std::cout << "Current Health: " << currentHealth << std::endl;
	std::cout << "Attack: " << attack << std::endl;
	std::cout << "Defense: " << defense << std::endl;
	std::cout << "Speed: " << speed << std::endl;
	std::cout << "Type: " << typeToString(type) << std::endl;
	std::cout << "Level: " << level << std::endl;
}

void Monster::printMoves() const {
	std::cout << name << "'s moves:\n\n";
	for (int i = 0; i < moveset.size(); i++) {
		std::cout << i + 1 << ": " << moveset[i].getName() << " (" << typeToString(moveset[i].getType()) << ") " << std::endl;
		std::cout << "Power: " << moveset[i].getPower() << std::endl;
		std::cout << "Accuracy: " << moveset[i].getAccuracy() << std::endl;
		std::cout << "PP: " << moveset[i].getCurrentUses() << "/" << moveset[i].getMaxUses() << std::endl << std::endl;
	}
	return;
}