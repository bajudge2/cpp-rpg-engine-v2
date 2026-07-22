#ifndef BATTLESTATE_HPP
#define BATTLESTATE_HPP


class BattleState : public State {
public:
	// Constructor Destructor
	BattleState(StateManager* m);
	~BattleState();

	// functions for rendering and handling input
	void update() override;
	void render() override;

private:
};
#endif // !BATTLESTATE_HPP