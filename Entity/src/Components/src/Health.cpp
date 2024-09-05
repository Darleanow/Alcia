#include "Health.h"
#include <algorithm>

Health::Health(const int value)
	: m_health(value)
	, m_max_health(value)
{ }

Health::~Health() = default;

void Health::set_health_amount(const int amount)
{
	m_health = std::max(0, amount);
}