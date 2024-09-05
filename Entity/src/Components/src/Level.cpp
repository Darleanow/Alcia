#include "Level.h"
#include <cmath>

Level::Level(const int base_level)
	: m_level(base_level)
	, m_experience(0)
	, m_experience_to_next_level(compute_experience_to_next_level())
{ }

Level::~Level() = default;

void Level::add_experience(const int experience)
{
	m_experience += experience;
	check_level_up();
}

void Level::level_up()
{
	m_level++;
}

bool Level::check_level_up()
{
	bool leveled_up = false;

	while(m_experience >= m_experience_to_next_level)
	{
		m_experience -= m_experience_to_next_level;
		level_up();
		leveled_up = true;
		m_experience_to_next_level = compute_experience_to_next_level();
	}

	return leveled_up;
}

// Formula taken from the Pokemon game! I used the "slow" type rate
// https://bulbapedia.bulbagarden.net/wiki/Experience
int Level::compute_experience_to_next_level() const
{
	return std::floor(5 * std::pow(m_level, 3) / 4);
}
