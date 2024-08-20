#include "CharacterAttributes.h"

CharacterAttributes::CharacterAttributes(const Health& health,
										 const Mana& mana,
										 const int attack,
										 const int defense)
	: m_health(health)
	, m_mana(mana)
	, m_attack(attack)
	, m_defense(defense)
{ }

 CharacterAttributes::~CharacterAttributes() = default;

int CharacterAttributes::get_current_health() const
{
	return m_health.get_health_amount();
}

int CharacterAttributes::get_max_health() const
{
	return m_health.get_max_health_amount();
}

int CharacterAttributes::get_attack() const
{
	return m_attack;
}

int CharacterAttributes::get_defense() const
{
	return m_defense;
}

int CharacterAttributes::get_current_mana() const
{
	return m_mana.get_mana_amount();
}

int CharacterAttributes::get_max_mana() const
{
	return m_mana.get_max_mana_amount();
}

int CharacterAttributes::get_experience() const
{
	return m_level.get_current_experience();
}

int CharacterAttributes::get_level() const
{
	return m_level.get_level();
}
