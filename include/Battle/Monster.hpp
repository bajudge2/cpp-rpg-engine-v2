#ifndef MONSTER_HPP
#define MONSTER_HPP

class Monster {
public:
	Monster(int maxHealth, int currentHealth, int attack, int defense, int speed, int level);
private:
	int maxHealth;
	int currentHealth;
	int attack;
	int defense;
	int speed;
	int level;
	// add vector of moves
	// add typing
};


#endif // !MONSTER_HPP
