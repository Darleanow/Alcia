#include "Enemy.h"

#include <utility>

Enemy::Enemy(std::string name,
			 std::string description,
			 const int health,
			 const int strength,
			 const int level)
	: m_name(std::move(name))
	, m_description(std::move(description))
	, m_health(health)
	, m_strength(strength)
	, m_level(level)
{ }

Enemy::~Enemy() = default;
