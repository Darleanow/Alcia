#pragma once
#include "Entity.h"
#include <vector>

class Enemy final : public Entity
{
public:
	Enemy(const std::string& name,
		  const std::string& description,
		  const std::string& region,
		  int health,
		  int mana,
		  int level,
		  int strength,
		  int defense,
		  int experience_reward,
		  const std::vector<std::string>& loot_rewards);

	~Enemy() override;
};