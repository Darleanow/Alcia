#include "GameInstance.h"

//TODO(Enzo): Remove this disgusting thing
std::string WORLD_DATA = "./Data/Location.json";

GameInstance::GameInstance(const Player& player)
	: m_player(player), m_map(WORLD_DATA)
{};

GameInstance::~GameInstance() = default;

void GameInstance::handle_action(EnumTypes::MenuAction action) { }

Player& GameInstance::get_player()
{
	return m_player;
}