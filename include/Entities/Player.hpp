#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "Entity.hpp"


class Player : public Entity {
public:
	Player(std::string name, int tileX, int tileY);


private:
	// vector of monster objects for team
	// vector of item objects for inventory
	int money;	// will be used later for shops
};
#endif // !PLAYER_HPP
