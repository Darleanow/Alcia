#include "Mana.h"
#include <algorithm>

Mana::Mana(const int amount)
	: m_mana(amount)
	, m_max_mana(amount)
{ }

Mana::~Mana() = default;

void Mana::set_mana_amound(const int amount)
{
	m_mana = std::max(0, amount);
}
