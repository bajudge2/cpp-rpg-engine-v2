#ifndef STATEMANAGER_HPP
#define STATEMANAGER_HPP
#include "States/State.hpp"
class StateManager
{
public:
	// Constructor and Destructor
	StateManager();
	~StateManager();

	// Switch states function
	void switchState(State* target);


	// functions to call render and update on currentState
	void update();
	void render();

private:
	State* currentState;

};


#endif
