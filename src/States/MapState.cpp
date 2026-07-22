#include <States/State.hpp>
#include <States/MenuState.hpp>
#include <States/MapState.hpp>
#include <States/BattleState.hpp>
#include <Core/StateManager.hpp>
#include <iostream>

MapState::MapState(StateManager* m) : State(m) {
}

MapState::~MapState() {

}


void MapState::update() {
	int input;
	std::cin >> input;
	// Decide what to do based on input
	switch (input)
	{
	case 1:
		std::cout << "Going to menu...\n";

		// request a switch from the statemanager
		manager->switchState(new MenuState(manager));
		break;
	case 2:
		std::cout << "Going to battle...\n";

		// request a switch from the statemanager
		manager->switchState(new BattleState(manager));
		break;
	case 3:
		std::exit(1);
		std::exit(1);
	}
}


void MapState::render() {
	std::cout << "YOU'RE IN THE MAPSTATE!!!\n";

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "====================\n";
	std::cout << "      MAPSTATE\n";
	std::cout << "====================\n";
	std::cout << "1. Menu Test\n";
	std::cout << "2. Battle Test\n";
	std::cout << "3. Quit Game\n";
	std::cout << std::endl;
	std::cout << std::endl;

}