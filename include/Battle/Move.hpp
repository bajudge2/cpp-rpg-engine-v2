#ifndef MOVE_HPP
#define MOVE_HPP
#include "Battle/Type.hpp"
class Move {
private:
	std::string name;
	int power;
	int accuracy;
	int currentUses;
	int maxUses;
	Type type;
	
public:
	Move(std::string name, int power, int accuracy, int currentUses, int maxUses, Type type);
	int getPower() const;
	int getAccuracy() const;
	int getCurrentUses() const;
	int getMaxUses() const;
	Type getType() const;
	std::string getName() const;
};

#endif