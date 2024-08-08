#pragma once
#include "Player.h"
#include "utils/EnumTypes.h"
class GameInstance
{
public:
	explicit GameInstance(const Player& player);
	~GameInstance();

	void handle_action(EnumTypes::MenuAction action);

private:
	Player m_player;
};