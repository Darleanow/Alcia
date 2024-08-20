#pragma once
#include "CharacterAttributes.h"

// TODO(Darleanow): Use strong types for members

class Player {
public:
	Player(const Health& health, int defense, int attack, const Mana& mana);
	~Player();

	[[nodiscard]] int get_current_health() const;
	[[nodiscard]] int get_max_health() const;


	[[nodiscard]] int get_attack() const;
	[[nodiscard]] int get_defense() const;

	[[nodiscard]] int get_current_mana() const;
	[[nodiscard]] int get_max_mana() const;

	[[nodiscard]] int get_level() const;
	[[nodiscard]] int get_experience() const;

private:
	CharacterAttributes m_attributes;
};