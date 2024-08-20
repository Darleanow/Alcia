#include "Defense.h"

Defense::Defense(const int starting_defense)
	: m_defense(starting_defense)
{ }

Defense::~Defense() = default;

int Defense::get_defense() const
{
	return m_defense;
}

void Defense::set_defense(const int defense_value)
{
	m_defense = defense_value;
}
