#pragma once
#include "EnemyRegistry.h"
#include "Map.h"
#include "Player.h"
#include "utils/EnumTypes.h"

class GameInstance
{
public:
	explicit GameInstance(const Player& player);
	~GameInstance();

	void handle_action(EnumTypes::MenuAction action);

	[[nodiscard]] Player& get_player();

	[[nodiscard]] EnemyRegistry& get_enemies_registry();
private:
	Player m_player;
	Map m_map;
	EnemyRegistry m_monster_registry;
};