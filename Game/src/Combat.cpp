#include "Combat.h"
#include <chrono>
#include <codecvt>
#include <locale>
#include <thread>

// Constructor
Combat::Combat(Player& player, Enemy& enemy)
	: m_player(player)
	, m_enemy(enemy)
{
	setlocale(LC_ALL, "en_US.UTF-8");
}

Combat::~Combat() = default;

// Helper function to create player info panel
Element Combat::CreatePlayerInfoPanel(Player& player)
{
	const std::string health_icon = "❤ ";
	const std::string mp_icon = "💧";
	const std::string status_icon = "🌀";
	const std::string strength_icon = "✊";

	return vbox({text("Player: ???") | bold | color(Color::Cyan),
				 text(health_icon +
					  " HP: " + std::to_string(player.attributes().get_current_health()) + " / " +
					  std::to_string(player.attributes().get_max_health())) |
					 color(Color::LightSalmon1),
				 text(mp_icon + " MP: " + std::to_string(player.attributes().get_current_mana()) +
					  " / " + std::to_string(player.attributes().get_max_mana())) |
					 color(Color::LightCyan3),
				 text(status_icon + " Status: None") | color(Color::LightYellow3),
				 text(strength_icon +
					  " Strength: " + std::to_string(player.attributes().get_strength())) |
					 color(Color::LightSeaGreen)}) |
		   border;
}

// Helper function to create enemy info panel
Element Combat::CreateEnemyInfoPanel(const Enemy& enemy)
{
	const std::string health_icon = "❤ ";
	const std::string status_icon = "🌀";
	const std::string strength_icon = "✊";

	return vbox({text("Enemy: " + enemy.get_name()) | bold | color(Color::Cyan),
				 text(health_icon + " HP: " + std::to_string(enemy.get_health()) + " / 50") |
					 color(Color::LightSalmon1),
				 text(status_icon + " Status: None") | color(Color::LightYellow3),
				 text(strength_icon + " Strength: " + std::to_string(enemy.get_strength())) |
					 color(Color::LightSeaGreen)}) |
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
Component Combat::CreateActionMenu(const std::vector<std::string>& actions, int& selected_action)
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

void Combat::display_gui()
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
	auto main_container = Container::Vertical({combat_log_component, action_menu_component});

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
