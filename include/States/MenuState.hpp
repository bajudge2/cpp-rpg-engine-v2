#ifndef MENUSTATE_HPP
#define MENUSTATE_HPP

class MenuState : public State {
public:

	// Constructor Destructor
	MenuState(StateManager* m);
	~MenuState();

	// functions for rendering and handling input
	void update() override;
	void render() override;
private:
};
#endif // !MENUSTATE_HPP