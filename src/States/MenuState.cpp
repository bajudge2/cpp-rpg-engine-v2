#include <States/State.hpp>
#include <States/MenuState.hpp>
#include <States/MapState.hpp>
#include <States/BattleState.hpp>
#include <Core/StateManager.hpp>
#include <iostream>

MenuState::MenuState(StateManager* m) : State(m) {
}

MenuState::~MenuState() {

}


// Main functions for handling behavior of state
void MenuState::update() {
	int input;
	std::cin >> input;
	// Decide what to do based on input
	switch (input) 
	{
	case 1:
		std::cout << "Going to map...\n";

		// request a switch from the statemanager
		manager->switchState(new MapState(manager));
		break;
	case 2:
		std::cout << "Going to battle...\n";

		// request a switch from the statemanager
		manager->switchState(new BattleState(manager));
		break;
	case 3:
		std::exit(1);
	}

}

void MenuState::render() {
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "====================\n";
	std::cout << "       MENU\n";
	std::cout << "====================\n";
	std::cout << "1. Map Test\n";
	std::cout << "2. Battle Test\n";
	std::cout << "3. Quit Game\n";
	std::cout << std::endl;
	std::cout << std::endl;


}
