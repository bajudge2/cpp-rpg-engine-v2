#ifndef MONSTER_HPP
#define MONSTER_HPP
#include "Battle/Type.hpp"
#include <string>

class Monster {
private:
	std::string name;
	int maxHealth;
	int currentHealth;
	int attack;
	int defense;
	int speed;
	int level;
	Type type;
	// add vector of moves
public:
	Monster(std::string name, int maxHealth, int currentHealth, int attack, int defense, int speed, int level, Type type);
	// getters
	std::string getName() const;
	int getCurrentHealth() const;
	int getMaxHealth() const;
	int getAttack() const;
	int getDefense() const;
	int getSpeed() const;
	int getLevel() const;
	Type getType() const;



	void takeDamage(int dmg);
	void heal(int h);
	bool isAlive() const;
	void printStats() const;
};


#endif // !MONSTER_HPP
