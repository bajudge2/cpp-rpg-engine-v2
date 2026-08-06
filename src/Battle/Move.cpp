#include "Battle/Move.hpp"
#include <iostream>


Move::Move(std::string name, int power, int accuracy, int currentUses, int maxUses, Type type) :
	name(name), power(power), accuracy(accuracy), currentUses(currentUses), maxUses(maxUses), type(type) {
	std::cout << "Move constructor called!\n";
}

int Move::getPower() const {
	return power;
}
int Move::getAccuracy() const {
	return accuracy;
}
int Move::getCurrentUses() const {
	return currentUses;
}
int Move::getMaxUses() const {
	return maxUses;
}
Type Move::getType() const {
	return type;
}
std::string Move::getName() const {
	return name;
}


// functions relating to checking and reducing pp
bool Move::hasUsesLeft() const {
	return currentUses > 0;
}
void Move::use() {
	if (currentUses > 0) {
		currentUses--;
	}
}