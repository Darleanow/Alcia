#include "Player.h"

Player::Player(const Health& health, const int defense, const int attack, const Mana& mana)
	: m_attributes(health, mana, attack, defense)
{ }

Player::~Player() = default;

int Player::get_current_health() const
{
	return m_attributes.get_current_health();
}

int Player::get_max_health() const
{
	return m_attributes.get_max_health();
}

int Player::get_attack() const
{
	return m_attributes.get_attack();
}

int Player::get_defense() const
{
	return m_attributes.get_defense();
}

int Player::get_current_mana() const
{
	return m_attributes.get_current_mana();
}

int Player::get_max_mana() const
{
	return m_attributes.get_max_mana();
}

int Player::get_level() const
{
	return m_attributes.get_level();
}

int Player::get_experience() const
{
	return m_attributes.get_experience();
}
