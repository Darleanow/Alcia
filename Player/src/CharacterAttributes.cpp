#include "CharacterAttributes.h"

CharacterAttributes::CharacterAttributes(const Health& health,
										 const Mana& mana,
										 const Strength& strength,
										 const Defense& defense)
	: m_health(health)
	, m_mana(mana)
	, m_strength(strength)
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

int CharacterAttributes::get_strength() const
{
	return m_strength.get_strength();
}

int CharacterAttributes::get_defense() const
{
	return m_defense.get_defense();
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
