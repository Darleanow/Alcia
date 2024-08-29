#include <iostream>

#include "Game.h"
#include "ftxui/component/screen_interactive.hpp"

using namespace ftxui;

Game::Game()
	: m_game_instance(Player(Health(100), Strength(10), Defense(10), Mana(50)))
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
	std::cout << "Searching for monsters..." << std::endl;
}

Element Game::get_preview(const int selected_index) const
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

Component Game::preview_view_inventory() const
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

	// Combine all entries into a single list
	const std::vector<std::wstring> menu_entries = {L"🌍 Explore",
													L"🦇 Search for Monster",
													L"🏙  Search for a Nearby City",
													L"📜 View Quests",
													L"📦 View Inventory",
													L"🛏  Rest",
													L"📝 Save Game",
													L"⚙  Game Settings"};

	int selected_index = 0;

	// Configure Menu Options
	auto menu_option = MenuOption();
	menu_option.entries_option.animated_colors.foreground.Set(Color::White, Color::Orange1);

	// Create Menu Component
	const auto menu = Menu(&menu_entries, &selected_index, menu_option);

	// Create UI Components
	auto create_text_element = [](const std::wstring& text,
								  const bool& bold = false,
								  const Color& color = Color::Default) {
		return bold ? ftxui::text(text) | ftxui::bold | ftxui::color(color)
					: ftxui::text(text) | ftxui::color(color);
	};

	auto title = create_text_element(L"Game Menu", true, Color::Orange1) | center | border;
	auto stats_title =
		create_text_element(L"Character Stats", true, Color::Orange3) | center | border;

	auto stats =
		vbox({
			create_text_element(L"Name: ???", true, Color::Orange1),
			create_text_element(
				L"Level: " + std::to_wstring(m_game_instance.get_player().attributes().get_level()),
				false,
				Color::Orange1),
			create_text_element(
				L"Health: " +
					std::to_wstring(
						m_game_instance.get_player().attributes().get_current_health()) +
					L"/" +
					std::to_wstring(m_game_instance.get_player().attributes().get_max_health()),
				false,
				Color::Orange1),

			create_text_element(
				L"Mana: " +
					std::to_wstring(m_game_instance.get_player().attributes().get_current_mana()) +
					L"/" +
					std::to_wstring(m_game_instance.get_player().attributes().get_max_mana()),
				false,
				Color::Orange1),

			create_text_element(
				L"Strength: " +
					std::to_wstring(m_game_instance.get_player().attributes().get_strength()),
				false,
				Color::Orange1),
			create_text_element(
				L"Defense: " +
					std::to_wstring(m_game_instance.get_player().attributes().get_defense()),
				false,
				Color::Orange1),
			// TODO(Darleanow): Use strong types for this too, not a priority right now
			create_text_element(L"Agility: " + std::to_wstring(15), false, Color::Orange1),
			create_text_element(L"Intelligence: " + std::to_wstring(5), false, Color::Orange1),
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
