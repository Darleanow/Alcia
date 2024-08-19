#pragma once
#include "EntityComponents/Health.h"
#include "EntityComponents/Level.h"
#include "EntityComponents/Mana.h"

// TODO(Darleanow): Use strong types for members

class Player
{
public:
	Player(int health, int defense, int attack, int mana);
	~Player();

	[[nodiscard]] int get_current_health() const;
	[[nodiscard]] int get_max_health() const;


	[[nodiscard]] int get_defense() const;
	[[nodiscard]] int get_attack() const;

	[[nodiscard]] int get_current_mana() const;
	[[nodiscard]] int get_max_mana() const;

	[[nodiscard]] int get_level() const;
	[[nodiscard]] int get_experience() const;

private:
	Health m_health;
	int m_defense;
	int m_attack;
	Mana m_mana;
	Level m_level;
};
