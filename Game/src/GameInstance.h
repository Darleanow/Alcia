#pragma once
#include "utils/EnumTypes.h"

class GameInstance
{
public:
	GameInstance();
	~GameInstance();

	void handle_action(EnumTypes::MenuAction action);
};