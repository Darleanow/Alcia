#pragma once
#include "Map.h"
#include "MonsterRegistry.h"
#include "Player.h"
#include "utils/EnumTypes.h"

class GameInstance
{
public:
	explicit GameInstance(const Player& player);
	~GameInstance();

	void handle_action(EnumTypes::MenuAction action);

	[[nodiscard]] Player& get_player();

private:
	Player m_player;
	Map m_map;
	MonsterRegistry m_monster_registry;
};