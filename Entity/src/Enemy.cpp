#include "Enemy.h"

#include <memory>

Enemy::Enemy(const std::string& name,
			 const std::string& description,
			 const std::string& region,
			 int health,
			 int mana,
			 int strength,
			 int defense,
			 int experience_reward,
			 const std::vector<std::string>& loot_rewards)
{
	add_component("Health", Health(health));
	add_component("Mana", Mana(mana));
	add_component("Defense", Defense(defense));
	add_component("Strength", Strength(strength));
	add_component("Level", Level());
	add_component("Character Data", CharacterData(name, description, Region(region)));
	add_component("Rewards", Rewards(experience_reward, loot_rewards));
}

Enemy::~Enemy() = default;