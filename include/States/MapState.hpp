#ifndef MAPSTATE_HPP
#define MAPSTATE_HPP


class MapState : public State {
public:
	// Constructor Destructor
	MapState(StateManager* m);
	~MapState();

	// functions for rendering and handling input
	void update() override;
	void render() override;

private:
};
#endif // !MAPSTATE_HPP