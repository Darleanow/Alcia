#include "Player.h"

Player::Player(const int health, const int defense, const int attack)
	: m_health(health)
	, m_defense(defense)
	, m_attack(attack)
{ }

Player::~Player() = default;

[[nodiscard]] int Player::get_attack() const
{
	return m_attack;
}

[[nodiscard]] int Player::get_defense() const
{
	return m_defense;
}

[[nodiscard]] int Player::get_level() const
{
	return m_level.get_level();
}

[[nodiscard]] int Player::get_experience() const
{
	return m_level.get_current_experience();
}
