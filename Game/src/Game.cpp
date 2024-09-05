#include <iostream>

#include "Combat.h"
#include "Game.h"
#include "Player.h"
#include "PlayerViewModel.h"
#include "ftxui/component/screen_interactive.hpp"

using namespace ftxui;

Game::Game()
	: m_game_instance(Player("Darleanow", "No Desc", "Bluhin", 100, 50, 20, 10))
{ }

Game::~Game() = default;

void Game::run()
{
	display_menu();
}

void Game::save_game()
{
	std::cout << "Game saved!" << std::endl;
}

void Game::view_inventory()
{
	std::cout << "Viewing inventory..." << std::endl;
}

void Game::view_quests()
{
	std::cout << "Viewing quests..." << std::endl;
}

void Game::search_for_monster()
{
	auto enemy = m_game_instance.get_enemies_registry().search_monster_by_name("Snowbunny");
	Combat combat(m_game_instance.get_player(), enemy);
	combat.display_gui();
}

Element Game::get_preview(const int selected_index)
{
	auto create_preview =
		[](const std::wstring& title, const std::wstring& description, const Color& color) {
			return window(text(title) | center | bold,
						  text(description) | center | ftxui::color(color)) |
				   size(HEIGHT, EQUAL, 10) | flex;
		};

	switch(selected_index)
	{
	case 0: // Explore
		return create_preview(L"Explore", L"Explore the vast world!", Color::Yellow);
	case 1: // Search for Monster
		return create_preview(L"Search for Monsters", L"Hunt for dangerous creatures!", Color::Red);
	case 2: // Nearby City
		return create_preview(L"Search City", L"Find nearby cities to trade.", Color::Cyan);
	case 3: // Quests
		return create_preview(L"Quests", L"Check your active quests.", Color::Green);
	case 4: // Inventory
		return preview_view_inventory()->Render();
	case 5: // Rest
		return create_preview(L"Rest", L"Recover health and mana.", Color::Magenta);
	case 6: // Save Game
		return create_preview(L"Save Game", L"Save your current progress.", Color::Blue);
	case 7: // Game Settings
		return create_preview(L"Settings", L"Adjust game configurations.", Color::Red);
	default:
		return create_preview(L"No Preview", L"Select an option to see details.", Color::GrayDark);
	}
}

ftxui::Component Game::preview_view_inventory()
{
	return Renderer([] {
		return window(text(L"Inventory Preview") | center | bold,
					  {
						  text(L"Your inventory is empty.") | color(Color::RedLight) | center,
					  }) |
			   size(HEIGHT, EQUAL, 10) | flex;
	});
}

void Game::display_menu()
{
	auto screen = ScreenInteractive::Fullscreen();

	const std::vector<std::wstring> menu_entries = {L"🗺  Explore",
													L"⚔  Search for Monster",
													L"🧭 Search for a Nearby City",
													L"📜 View Quests",
													L"📦 View Inventory",
													L"💤 Rest",
													L"💾 Save Game",
													L"⚙  Game Settings"};

	int selected_index = 0;

	// Configure Menu Options
	auto menu_option = MenuOption();
	menu_option.entries_option.animated_colors.foreground.Set(Color::White, Color::Orange1);

	// Create Menu Component
	const auto menu = Menu(&menu_entries, &selected_index, menu_option);

	// Create UI Components
	auto create_text_element =
		[](const std::string& text, const bool& bold = false, const Color& color = Color::Default) {
			return bold ? ftxui::text(text) | ftxui::bold | ftxui::color(color)
						: ftxui::text(text) | ftxui::color(color);
		};

	auto title = create_text_element("Game Menu", true, Color::Orange1) | center | border;
	auto stats_title =
		create_text_element("Character Stats", true, Color::Orange3) | center | border;

	const PlayerViewModel player_view(m_game_instance.get_player());

	auto stats = vbox({
					 create_text_element(player_view.get_name_text(), true, Color::Orange3),
					 create_text_element(player_view.get_level_text(), false, Color::Orange1),
					 create_text_element(player_view.get_health_text(), false, Color::Orange1),
					 create_text_element(player_view.get_mana_text(), false, Color::Orange1),
					 create_text_element(player_view.get_strength_text(), false, Color::Orange1),
					 create_text_element(player_view.get_defense_text(), false, Color::Orange1),
				 }) |
				 flex;

	// Fixed Size for Right Pane
	constexpr auto right_pane_width = 50;

	// Main Component Renderer
	auto main_component = Renderer(menu, [&] {
		auto preview = get_preview(selected_index) | flex;

		return hbox({
				   vbox({
					   title,
					   menu->Render() | flex,
					   filler(),
				   }) | flex,
				   separator(),
				   vbox({
					   stats_title,
					   stats,
					   separator(),
					   preview,
				   }) | size(WIDTH, EQUAL, right_pane_width),
			   }) |
			   flex | border;
	});

	// Event Handling
	main_component = CatchEvent(main_component, [&](const Event& event) {
		if(event == Event::Return)
		{
			switch(selected_index)
			{
			case 0:
				save_game();
				break;
			case 1:
				search_for_monster();
				break;
			case 2:
				// search_city();
				break;
			case 3:
				view_quests();
				break;
			case 4:
				view_inventory();
				break;
			case 5:
				// rest();
				break;
			case 6:
				save_game();
				break;
			case 7:
				// game_settings();
				break;
			default:
				break;
			}
			return true;
		}
		return false;
	});

	screen.Loop(main_component);
}
