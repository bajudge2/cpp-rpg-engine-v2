#include "States/State.hpp"
#include <iostream>

// constructor
State::State(StateManager* m) : manager(m) {
	std::cout << "Called State Constructor!\n";
}

// destructor
State::~State() {
	std::cout << "Called State Destructor!\n";
}

void State::update() {
}

void State::render() {
}
