#include "Player.h"
#include <memory>

Player::Player(const std::string& name,
			   const std::string& description,
			   const std::string& region,
			   const int health,
			   const int mana,
			   const int strength,
			   const int defense)
{
	add_component("Health", Health(health));
	add_component("Mana", Mana(mana));
	add_component("Defense", Defense(defense));
	add_component("Strength", Strength(strength));
	add_component("Level", Level());
	add_component("Character Data", CharacterData(name, description, Region(region)));
}

Player::~Player() = default;