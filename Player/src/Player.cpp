#include "Player.h"

Player::Player(const Health& health, const Strength& strength, const Defense& defense, const Mana& mana)
	: m_attributes(health, mana, strength, defense)
{ }

Player::~Player() = default;

CharacterAttributes& Player::attributes()
{
	return m_attributes;
}
