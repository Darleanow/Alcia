#include "Game.h"
#include "ftxui/component/screen_interactive.hpp"
#include "ftxui/dom/elements.hpp"
#include <iostream>

using namespace ftxui;

Game::Game()
	: m_game_instance(Player(100, 10, 10))
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

Component Game::preview_view_inventory()
{
	return Renderer([] {
		return vbox({
				   text(L"Inventory Preview") | bold | color(Color::Orange3) | center,
				   separator(),
				   text(L" - Sword of Strength") | color(Color::Orange1),
				   text(L" - Shield of Fortitude") | color(Color::Orange1),
				   text(L" - Potion of Healing") | color(Color::Orange1),
				   text(L" - Magic Scroll") | color(Color::Orange1),
			   }) |
			   border;
	});
}

void Game::display_menu()
{
	auto screen = ScreenInteractive::Fullscreen();

	const std::vector<std::wstring> entries = {L"🌍 Explore",
											   L"🏙  Search for a Nearby City",
											   L"📜 View Quests",

											   L"📦 View Inventory",
											   L"🛏  Rest",
											   L"📝 Save Game",
											   L"⚙  Game Settings"};
	int selected = 0;

	auto menu = Menu(&entries, &selected);

	auto container = Container::Vertical({
		menu,
	});

	auto main_component = Renderer(container, [&] {
		auto title = text(L"Game Menu") | bold | color(Color::Orange3) | center | border;
		auto stats_title =
			text(L"Character Stats") | bold | color(Color::Orange3) | center | border;

		auto stats = vbox({
						 text(L"Name: Darleanow") | bold | color(Color::Orange1),
						 text(L"Level: " + std::to_wstring(1)) | color(Color::Orange1),
						 text(L"Health: " + std::to_wstring(100)) | color(Color::Orange1),
						 text(L"Mana: " + std::to_wstring(50)) | color(Color::Orange1),
						 text(L"Strength: " + std::to_wstring(20)) | color(Color::Orange1),
						 text(L"Agility: " + std::to_wstring(15)) | color(Color::Orange1),
						 text(L"Intelligence: " + std::to_wstring(5)) | color(Color::Orange1),
					 }) |
					 borderLight | flex;

		auto preview = (selected == 1) ? preview_view_inventory()->Render() : text(L"") | flex;

		return hbox({
				   vbox({
					   title,
					   menu->Render() | borderLight | flex,
				   }) | flex,
				   separator(),
				   vbox({
					   stats_title,
					   stats,
					   separator(),
					   preview,
				   }) | flex,
			   }) |
			   flex | border;
	});

	main_component = CatchEvent(main_component, [&](const Event& event) {
		if(event == Event::Return)
		{
			switch(selected)
			{
			case 0:
				save_game();
				break;
			case 1:
				view_inventory();
				break;
			case 2:
				view_quests();
				break;
			case 3:
				// search_city();
				break;
			case 4:
				// rest();
				break;
			case 5:
				// explore();
				break;
			case 6:
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
