#include <States/State.hpp>
#include <States/MenuState.hpp>
#include <States/MapState.hpp>
#include <States/BattleState.hpp>
#include <Core/StateManager.hpp>
#include <iostream>

BattleState::BattleState(StateManager* m) : State(m) {

}

BattleState::~BattleState() {

}


void BattleState::update() {
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
		manager->switchState(new MenuState(manager));
		break;
	case 3:
		std::exit(1);
	}
}


void BattleState::render() {
	std::cout << "YOU'RE IN THE BATTLESTATE!!!\n";

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "====================\n";
	std::cout << "  BATTLESTATE\n";
	std::cout << "====================\n";
	std::cout << "1. Map Test\n";
	std::cout << "2. Menu Test\n";
	std::cout << "3. Quit Game\n";
	std::cout << std::endl;
	std::cout << std::endl;

}