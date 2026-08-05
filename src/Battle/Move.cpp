#include "Battle/Move.hpp"
#include <iostream>


Move::Move(int power, int accuracy, int currentUses, int maxUses, Type type) :
	power(power), accuracy(accuracy), currentUses(currentUses), maxUses(maxUses), type(type) {
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
