#include "GameInstance.h"

//TODO(Enzo): Remove this disgusting thing
std::string world_data = "./Data/Location.json";
std::string enemies_data = "./Data/Enemies.json";

GameInstance::GameInstance(const Player& player)
	: m_player(player)
	, m_map(world_data)
	, m_monster_registry(enemies_data)
{ }

GameInstance::~GameInstance() = default;

void GameInstance::handle_action(EnumTypes::MenuAction action) { }

Player& GameInstance::get_player()
{
	return m_player;
}

EnemyRegistry& GameInstance::get_enemies_registry()
{
	return m_monster_registry;
}
