#ifndef MONSTER_HPP
#define MONSTER_HPP
#include "Battle/Type.hpp"
#include "Battle/Move.hpp"
#include <string>
#include <vector>

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
	std::vector<Move> moveset;
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
	std::vector<Move> getMoveset() const;



	void takeDamage(int dmg);
	void heal(int h);
	bool isAlive() const;
	//void addMove(Move)		START HERE TMRW
	void printStats() const;
	void printMoves() const;
};


#endif // !MONSTER_HPP
