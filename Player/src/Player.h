#pragma once
#include "EntityComponents/Health.h"
#include "EntityComponents/Level.h"

// TODO(Darleanow): Use strong types for members

class Player
{
public:
	Player(int health, int defense, int attack);
	~Player();

	[[nodiscard]] int get_health() const;
	[[nodiscard]] int get_defense() const;
	[[nodiscard]] int get_attack() const;
	[[nodiscard]] int get_level() const;
	[[nodiscard]] int get_experience() const;

private:
	Health m_health;
	int m_defense;
	int m_attack;
	Level m_level;
};
