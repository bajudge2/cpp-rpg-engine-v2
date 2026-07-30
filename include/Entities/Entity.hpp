#ifndef ENTITY_HPP
#define ENTITY_HPP
#include <string>
class Entity {
public:
	Entity(std::string name, int tileX, int tileY);

protected:
	std::string name;
	int tileX;
	int tileY;
	// add sprite with SFML later
};




#endif