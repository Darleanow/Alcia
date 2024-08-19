#include "Player.h"

Player::Player(const int health, const int defense, const int attack)
	: m_health(health)
	, m_defense(defense)
	, m_attack(attack)
{ }

Player::~Player() = default;

int Player::get_health() const
{
	return m_health.get_health();
}

int Player::get_defense() const
{
	return m_defense;
}

int Player::get_attack() const
{
	return m_attack;
}

int Player::get_mana() const
{
	return m_mana.get_mana_amount();
}

int Player::get_max_mana() const
{
	return m_mana.get_max_mana_amount();
}

int Player::get_level() const
{
	return m_level.get_level();
}

int Player::get_experience() const
{
	return m_level.get_current_experience();
}
