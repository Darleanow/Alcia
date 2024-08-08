#include "Game.h"
#include <iostream>

Game::Game() = default;

Game::~Game() = default;

void Game::run()
{
	instantiate_game();
	display_menu();
}

void Game::instantiate_game()
{
	// Create a player
}

void Game::display_menu() { }
