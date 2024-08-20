#pragma once

#include "EntityComponents/Defense.h"
#include "EntityComponents/Health.h"
#include "EntityComponents/Level.h"
#include "EntityComponents/Mana.h"
#include "EntityComponents/Strength.h"

class CharacterAttributes
{
public:
	CharacterAttributes(const Health& health, const Mana& mana, const Strength& strength, const Defense& defense);
	~CharacterAttributes();

	[[nodiscard]] int get_current_health() const;
	[[nodiscard]] int get_max_health() const;

	[[nodiscard]] int get_current_mana() const;
	[[nodiscard]] int get_max_mana() const;

	[[nodiscard]] int get_strength() const;
	[[nodiscard]] int get_defense() const;

	[[nodiscard]] int get_level() const;
	[[nodiscard]] int get_experience() const;

private:
	Health m_health;
	Mana m_mana;
	Strength m_strength;
	Defense m_defense;
	Level m_level;
};