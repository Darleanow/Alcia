#include "Level.h"
#include <cmath>

Level::Level()
	: m_level(1)
	, m_current_experience(0)
{ }

Level::~Level() = default;

void Level::add_experience(const int amount)
{
	m_current_experience += amount;

	level_up();
}

bool Level::level_up()
{
	const int experience_needed = sum_experience_needed_to_level_up();
	if(m_current_experience < experience_needed)
	{
		return false;
	}

	m_level++;
	m_current_experience -= experience_needed;
	return true;
}

// Simple function fetched from pokemon, the formula needed for pokemons with the trait 'slow'
// https://bulbapedia.bulbagarden.net/wiki/Experience
[[nodiscard]] int Level::sum_experience_needed_to_level_up() const
{
	return floor(5 * std::pow(m_level, 3) / 4);
}

[[nodiscard]] int Level::get_level() const
{
	return m_level;
}

[[nodiscard]] int Level::get_current_experience() const
{
	return m_current_experience;
}

