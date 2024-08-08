#pragma once
#include "GameInstance.h"
#include "ftxui/component/component.hpp"

using namespace ftxui;

class Game
{
public:
	Game();
	~Game();

	void run();

private:
	void save_game();
	void view_inventory();
	void view_quests();
	void display_menu();
	Component preview_view_inventory();
	GameInstance m_game_instance;
};