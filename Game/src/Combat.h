#pragma once
#include "Enemy.h"
#include "Player.h"
#include "ftxui/component/component.hpp"
#include "ftxui/component/screen_interactive.hpp"
#include "ftxui/dom/elements.hpp"

class Combat
{
public:
	Combat(Player& player, Enemy& enemy);
	~Combat();

	void display_gui() const;

private:
	Player& m_player;
	Enemy& m_enemy;

	void handle_input();
	void apply_damage();
	static void UpdateCombatLog(std::vector<std::string>& combat_log, const std::string& new_entry);

	// UI
	static ftxui::Element CreatePlayerInfoPanel(Player& player);
	static ftxui::Element CreateEnemyInfoPanel(Enemy& enemy);
	static ftxui::Element CreateCombatLogPanel(const std::vector<std::string>& combat_log);
	static ftxui::Element CreateTitle();
	static ftxui::Component CreateActionMenu(const std::vector<std::string>& actions,
											 int& selected_action);
};