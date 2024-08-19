#include "Health.h"

#include <algorithm>

Health::Health(const int starting_health)
	: m_health_amount(starting_health)
	, m_max_health(starting_health)
{ }

Health::~Health() = default;

void Health::consume_health(const int amount_to_consume)
{
	m_health_amount = std::max(m_health_amount - amount_to_consume, 0);
}

void Health::add_health(const int amount_to_add)
{
	m_health_amount = std::min(m_health_amount + amount_to_add, m_max_health);
}

int Health::get_health_amount() const
{
	return m_health_amount;
}

int Health::get_max_health_amount() const
{
	return m_max_health;
}
