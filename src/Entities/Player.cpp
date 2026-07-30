#include "Entities/Player.hpp"
#include <iostream>

Player::Player(std::string name, int tileX, int tileY) : Entity(name, tileX, tileY) {
	std::cout << "Player Constructor Called!\n";
}
