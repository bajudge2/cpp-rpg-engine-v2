#ifndef STATE_HPP 
#define STATE_HPP


class StateManager; 

// This basic state class is to be inherited by the other types of states and serves as a template for them

class State
{
public:
	// Constructor and Destructor
	State(StateManager* m);
	virtual ~State();


	// Each state must have its own implementaiton of these
	virtual void update() = 0;
	virtual void render() = 0;

protected:
	StateManager* manager;
};


#endif 
