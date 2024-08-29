#include "GameInstance.h"

//TODO(Enzo): Remove this disgusting thing
std::string world_data = "./Data/Location.json";

GameInstance::GameInstance(const Player& player)
	: m_player(player)
	, m_map(world_data)
{ }

GameInstance::~GameInstance() = default;

void GameInstance::handle_action(EnumTypes::MenuAction action) { }

Player& GameInstance::get_player()
{
	return m_player;
}