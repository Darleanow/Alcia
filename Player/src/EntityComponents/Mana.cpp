#include "Mana.h"

#include <algorithm>

Mana::Mana(const int starting_mana)
	: m_current_mana(starting_mana)
	, m_max_mana(starting_mana)
{ }

Mana::~Mana() = default;

void Mana::consume_mana(const int amount_to_consume)
{
	m_current_mana = std::max(m_current_mana - amount_to_consume, 0);
}

void Mana::add_mana(const int amount_to_add)
{
	m_current_mana = std::min(m_current_mana + amount_to_add, m_max_mana);
}

int Mana::get_mana_amount() const
{
	return m_current_mana;
}

int Mana::get_max_mana_amount() const
{
	return m_max_mana;
}
