#pragma once

class Game
{
public:
	Game();
	~Game();

	void run();

private:
	void instantiate_game();
	void display_menu();
};