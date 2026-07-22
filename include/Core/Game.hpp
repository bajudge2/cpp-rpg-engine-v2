#ifndef GAME_HPP
#define GAME_HPP
#include "Core/StateManager.hpp"
class Game
{
public:
	Game();
	~Game();
	void run();


private:
	bool isRunning;	// flag to represent whether game is running or not
	StateManager stateManager;
};


#endif
