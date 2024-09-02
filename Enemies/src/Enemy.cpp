#include "Enemy.h"

#include <utility>

Enemy::Enemy(std::string name,
			 std::string description,
			 const int health,
			 const int strength,
			 const int level,
			 const int experience_reward)
	: m_name(std::move(name))
	, m_description(std::move(description))
	, m_health(health)
	, m_strength(strength)
	, m_level(level)
	, m_experience_reward(experience_reward)
{ }

Enemy::~Enemy() = default;

const std::string& Enemy::get_name() const
{
	return m_name;
}

const std::string& Enemy::get_description() const
{
	return m_description;
}

int Enemy::get_health() const
{
	return m_health;
}

int Enemy::get_strength() const
{
	return m_strength;
}

int Enemy::get_level() const
{
	return m_level;
}
