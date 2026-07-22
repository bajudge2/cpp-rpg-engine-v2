#include "Core/Game.hpp"
#include "Core/StateManager.hpp"
#include "States/MenuState.hpp"
#include <iostream>

Game::Game(): isRunning(false) {

	std::cout << "By this point, ive created a stateManager and set my isRunning.\n";

}

Game::~Game() {
	std::cout << "Game desctructor called!\n";
}

void Game::run() {
	isRunning = true;
	while (isRunning = true) {
		stateManager.render();
		stateManager.update();
	}
	
	return;
}