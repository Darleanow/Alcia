#pragma once
#include "Enemy.h"
#include "Player.h"
#include "ftxui/component/component.hpp"
#include "ftxui/component/screen_interactive.hpp"
#include "ftxui/dom/elements.hpp"

using namespace ftxui;

class Combat
{
public:
	Combat(Player& player, Enemy& enemy);
	~Combat();

	void display_gui();

private:
	Player& m_player;
	Enemy& m_enemy;

	void handle_input();
	void apply_damage();
	void UpdateCombatLog(std::vector<std::string>& combat_log, const std::string& new_entry);

	// UI
	static Element CreatePlayerInfoPanel(Player& player);
	static Element CreateEnemyInfoPanel(const Enemy& enemy);
	static Element CreateCombatLogPanel(const std::vector<std::string>& combat_log);
	Element CreateTitle();
	static Component CreateActionMenu(const std::vector<std::string>& actions,
									  int& selected_action);
};