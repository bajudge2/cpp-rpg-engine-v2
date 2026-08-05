#include <iostream>
#include "Core/Game.hpp"
#include "Core/StateManager.hpp"
#include "States/State.hpp"
#include "States/MapState.hpp"
#include "States/BattleState.hpp"
#include "States/MenuState.hpp"
#include "Battle/Monster.hpp"
#include "Battle/Move.hpp"
#include "Battle/Type.hpp"
int main() {

	std::cout << "Hi I'm gonna create some objects to test with now\n";


	// Create game
	Game g1;

	// g1.run();

	Monster m1("TEST", 100, 100, 10, 10, 10, 5, Type::Fire);

	m1.printStats();

	return 0;
}