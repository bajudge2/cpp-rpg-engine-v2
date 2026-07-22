#include <iostream>
#include "Core/Game.hpp"
#include "Core/StateManager.hpp"
#include "States/State.hpp"
#include "States/MapState.hpp"
#include "States/BattleState.hpp"
#include "States/MenuState.hpp"

int main() {

	std::cout << "Hi I'm gonna create some objects to test with now\n";


	// Create game
	Game g1;

	g1.run();

	return 0;
}