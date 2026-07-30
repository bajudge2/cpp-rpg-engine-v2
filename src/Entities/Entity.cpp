#include "Entities/Entity.hpp"
#include <iostream>

Entity::Entity(std::string name, int tileX, int tileY) : name(name), tileX(tileX), tileY(tileY) {
	std::cout << "Called Entity Constructor!\n";
	}

