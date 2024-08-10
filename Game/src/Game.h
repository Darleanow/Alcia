#pragma once
#include "GameInstance.h"
#include "ftxui/component/component.hpp"
#include "ftxui/dom/elements.hpp"

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

	Element get_preview(int selected_index) const;
	Component preview_view_inventory() const;
	GameInstance m_game_instance;
};