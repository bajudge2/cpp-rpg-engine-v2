#include "Core/StateManager.hpp"
#include "States/MapState.hpp"
#include "States/BattleState.hpp"
#include "States/MenuState.hpp"
#include <iostream>

// Constructor and destructor
StateManager::StateManager() : currentState(nullptr) {
	std::cout << "I am a StateManager. I have been created, and my current state is: " << currentState << std::endl;

	// create the startup menu state
	currentState = new MenuState(this);
	std::cout << "Now, after creating the startup menu state, my current state is: " << currentState << std::endl;


}
StateManager::~StateManager() {
	if (currentState != nullptr) {
		std::cout << "DESTROYING CURRENT STATE!!!\n";
		delete currentState;
	}
}

// functions to call render and update on currentState
void StateManager::update() {
	currentState->update();
}

void StateManager::render() {
	currentState->render();
}

// Function to switch between states
void StateManager::switchState(State* target) {
	if (currentState != nullptr) {
		delete currentState;
	}


	std::cout << "STATEMANAGER: SWITCHING STATE!\n";
	// set current state to new one after switch
	currentState = target;

	return;
}