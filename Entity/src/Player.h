#pragma once
#include "Entity.h"

class Player final : public Entity
{
public:
	Player(const std::string& name,
		   const std::string& description,
		   const std::string& region,
		   int health,
		   int mana,
		   int strength,
		   int defense);

	~Player() override;
};