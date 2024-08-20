#pragma once
#include "CharacterAttributes.h"

class Player
{
public:
	Player(const Health& health, const Strength& strength, const Defense& defense, const Mana& mana);
	~Player();

	[[nodiscard]] CharacterAttributes& attributes();

private:
	CharacterAttributes m_attributes;
};