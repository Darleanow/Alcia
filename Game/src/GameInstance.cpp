#include "GameInstance.h"

GameInstance::GameInstance(const Player& player)
	: m_player(player){};

GameInstance::~GameInstance() = default;

void GameInstance::handle_action(EnumTypes::MenuAction action) { }
