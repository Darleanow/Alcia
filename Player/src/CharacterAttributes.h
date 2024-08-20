#pragma once

#include "EntityComponents/Health.h"
#include "EntityComponents/Level.h"
#include "EntityComponents/Mana.h"

class CharacterAttributes
{
public:
	CharacterAttributes(const Health& health, const Mana& mana, int attack, int defense);
	~CharacterAttributes();

	[[nodiscard]] int get_current_health() const;
	[[nodiscard]] int get_max_health() const;

	[[nodiscard]] int get_current_mana() const;
	[[nodiscard]] int get_max_mana() const;

	[[nodiscard]] int get_attack() const;
	[[nodiscard]] int get_defense() const;

	[[nodiscard]] int get_level() const;
	[[nodiscard]] int get_experience() const;

private:
	Health m_health;
	Mana m_mana;
	int m_attack;
	int m_defense;
	Level m_level;
};