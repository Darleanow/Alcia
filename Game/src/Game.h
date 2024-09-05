#pragma once
#include "GameInstance.h"
#include "ftxui/component/component.hpp"
#include "ftxui/dom/elements.hpp"


class Game
{
public:
	Game();
	~Game();

	void run();

private:
	static void save_game();
	static void view_inventory();
	static void view_quests();
	void search_for_monster();

	void display_menu();
	[[nodiscard]] static ftxui::Element get_preview(int selected_index) ;
	[[nodiscard]] static ftxui::Component preview_view_inventory() ;

	GameInstance m_game_instance;
};