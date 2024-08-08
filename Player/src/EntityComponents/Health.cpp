#include "Health.h"

Health::Health(int health)
	: m_health(health)
{ }

Health::~Health() = default;

[[nodiscard]] int Health::get_health() const
{
	return m_health;
}

void Health::add_health(int amount_to_add)
{
	m_health += amount_to_add;
}

void Health::reduce_health(int amount_to_reduce_by)
{
	m_health -= amount_to_reduce_by;
}



