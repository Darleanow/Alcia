#include "Strength.h"

Strength::Strength(const int starting_strength)
	: m_strength(starting_strength)
{ }

Strength::~Strength() = default;

void Strength::set_strength(const int new_value)
{
	m_strength = new_value;
}

int Strength::get_strength() const
{
	return m_strength;
}
