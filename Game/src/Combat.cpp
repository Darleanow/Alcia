#include "Combat.h"
#include "EnemyViewModel.h"
#include "PlayerViewModel.h"
#include <chrono>
#include <thread>

using namespace ftxui;

// Constructor
Combat::Combat(Player& player, Enemy& enemy)
	: m_player(player)
	, m_enemy(enemy)
{ }

Combat::~Combat() = default;

// Helper function to create player info panel
Element Combat::CreatePlayerInfoPanel(Player& player)
{
	const std::string health_icon = "❤  ";
	const std::string mp_icon = "💧 ";
	const std::string status_icon = "🌀";
	const std::string strength_icon = "✊ ";
	const std::string defense_icon = "🛡  ";

	PlayerViewModel player_view(player);

	return vbox(
			   {text(player_view.get_name_text()) | bold | color(Color::Cyan),
				text(health_icon + player_view.get_health_text()) | color(Color::LightSalmon1),
				text(mp_icon + player_view.get_mana_text()) | color(Color::LightCyan3),
				text(status_icon + " Status: None") | color(Color::LightYellow3),
				text(strength_icon + player_view.get_strength_text()) | color(Color::LightSeaGreen),
				text(defense_icon + player_view.get_defense_text()) |
					color(Color::LightGoldenrod1)}) |
		   border;
}

// Helper function to create enemy info panel
Element Combat::CreateEnemyInfoPanel(Enemy& enemy)
{
	const std::string health_icon = "❤  ";
	const std::string mp_icon = "💧 ";
	const std::string status_icon = "🌀";
	const std::string strength_icon = "✊ ";
	const std::string defense_icon = "🛡  ";
	const std::string level_icon = "👑 ";

	EnemyViewModel enemy_view(enemy);

	return vbox({
			   text(enemy_view.get_name_text()) | bold | color(Color::Cyan),
			   text(level_icon + enemy_view.get_level_text()) | color(Color::LightSlateBlue),
			   text(health_icon + enemy_view.get_health_text()) | color(Color::LightSalmon1),
			   text(status_icon + " Status: None") | color(Color::LightYellow3),
			   text(strength_icon + enemy_view.get_strength_text()) | color(Color::LightSeaGreen),
			   text(defense_icon + enemy_view.get_defense_text()) | color(Color::LightGoldenrod1),
		   }) |
		   border;
}

// Helper function to create combat log panel
Element Combat::CreateCombatLogPanel(const std::vector<std::string>& combat_log)
{
	std::vector<Element> log_elements;
	for(const auto& log : combat_log)
	{
		log_elements.push_back(text(log) | color(Color::White));
	}

	return vbox({text("Combat Log:") | bold | color(Color::Orange1),
				 separator(),
				 vbox(log_elements) | vscroll_indicator | yframe | flex_grow}) |
		   border | flex_grow;
}

// Helper function to create action menu with orange selection
ftxui::Component Combat::CreateActionMenu(const std::vector<std::string>& actions,
										  int& selected_action)
{
	return Menu(&actions, &selected_action); // | color(Color::Orange1)
}

// Function to create a title
Element Combat::CreateTitle()
{
	return text("Combat Simulation") | bold | color(Color::Orange3) | hcenter | border;
}

// Function to update combat log dynamically
void Combat::UpdateCombatLog(std::vector<std::string>& combat_log, const std::string& new_entry)
{
	combat_log.push_back(new_entry);
}

void Combat::display_gui() const
{
	auto screen = ScreenInteractive::Fullscreen();

	std::vector<std::string> combat_log = {"You attack the Goblin for 20 damage!",
										   "The Goblin strikes back, hitting you for 10 damage!",
										   "You have 70 HP left.",
										   "The Goblin dodges your next attack!",
										   "You cast a spell and deal 15 damage!",
										   "The Goblin is stunned for a moment.",
										   "The Goblin recovers and deals 12 damage!"};

	// Define components
	auto combat_log_component =
		Container::Vertical({Renderer([&] { return CreateCombatLogPanel(combat_log); })});

	const std::vector<std::string> actions = {
		"🗡  Attack", "🛡  Defend", "🧪 Use Item", "💀 Flee"}; //
	int selected_action = 0;
	auto action_menu = CreateActionMenu(actions, selected_action);

	// Action menu component as a part of a container for focus management
	auto action_menu_component = Container::Vertical({action_menu});

	// Main container to manage focus between the combat log and action menu
	const auto main_container = Container::Vertical({combat_log_component, action_menu_component});

	// Main component layout with a title and updated colors
	auto main_component = Renderer(main_container, [&] {
		return vbox({
				   CreateTitle(), // Title at the top
				   hbox({
					   CreatePlayerInfoPanel(m_player) | flex, // Left panel
					   CreateCombatLogPanel(combat_log) | flex_grow, // Center panel
					   CreateEnemyInfoPanel(m_enemy) | flex, // Right panel
				   }) | flex,
				   separator(),
				   action_menu_component->Render() | hcenter | size(HEIGHT, LESS_THAN, 7) |
					   focus // Footer
			   }) |
			   flex | border;
	});

	// Start the screen loop in a separate thread so we can dynamically update the combat log
	std::thread gui_thread([&screen, &main_component] { screen.Loop(main_component); });

	// Simulate dynamic updates after a delay
	std::this_thread::sleep_for(std::chrono::seconds(3)); // Wait for 3 seconds

	// Update the combat log with a new entry
	UpdateCombatLog(combat_log, "The Goblin flees in terror!");

	// Refresh the screen to show the new combat log entry
	screen.PostEvent(Event::Custom);

	// Wait for the GUI thread to finish
	gui_thread.join();
}
