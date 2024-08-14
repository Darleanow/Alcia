#pragma once
#include "Player.h"
#include "utils/EnumTypes.h"
class GameInstance
{
public:
	explicit GameInstance(const Player& player);
	~GameInstance();

	void handle_action(EnumTypes::MenuAction action);

	[[nodiscard]] const Player& get_player() const;
private:
	Player m_player;
};