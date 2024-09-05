#include "EnemyViewModel.h"

EnemyViewModel::EnemyViewModel(Entity& enemy)
	: m_enemy(enemy)
{ }

EnemyViewModel::~EnemyViewModel() = default;

std::string EnemyViewModel::get_name_text() const
{
	const auto name = m_enemy.get_component<CharacterData>("Character Data").get_name();
	return "Enemy: " + name;
}

std::string EnemyViewModel::get_health_text() const
{
	const auto current_health =
		m_enemy.get_component<Health>("Health").get_health_amount<std::string>();
	const auto max_health =
		m_enemy.get_component<Health>("Health").get_max_health_amount<std::string>();

	return "Health: " + current_health + " / " + max_health;
}
std::string EnemyViewModel::get_mana_text() const
{
	const auto current_mana = m_enemy.get_component<Mana>("Health").get_mana_amount<std::string>();
	const auto max_mana = m_enemy.get_component<Mana>("Health").get_max_mana_amount<std::string>();

	return "Mana: " + current_mana + " / " + max_mana;
}

std::string EnemyViewModel::get_level_text() const
{
	const auto level = m_enemy.get_component<Level>("Level").get_level<std::string>();

	return "Level: " + level;
}

std::string EnemyViewModel::get_strength_text() const
{
	const auto strength = m_enemy.get_component<Strength>("Strength").get_strength<std::string>();

	return "Strength: " + strength;
}

// todo(Enzo): Maybe display with the defense value the percentage of damage reduced
std::string EnemyViewModel::get_defense_text() const
{
	const auto defense = m_enemy.get_component<Defense>("Defense").get_defense<std::string>();

	return "Defense: " + defense;
}
