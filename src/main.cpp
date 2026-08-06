#include <iostream>
#include <vector>
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
	std::vector<Move> moveset_m1;


	Move tackle("Tackle", 50, 100, 10, 10, Type::Normal);

	moveset_m1.push_back(tackle);
	moveset_m1.push_back(tackle);
	moveset_m1.push_back(tackle);
	moveset_m1.push_back(tackle);
	Monster m1("TEST", 100, 100, 10, 10, 10, 5, Type::Fire);

	



	// testing
	m1.printStats();
	m1.printMoves();

	return 0;
}