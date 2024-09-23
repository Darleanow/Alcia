#include "EnemyViewModel.h"

EnemyViewModel::EnemyViewModel(Entity& enemy)
	: m_enemy(enemy)
{ }

EnemyViewModel::~EnemyViewModel() = default;

std::string EnemyViewModel::get_name() const {
	return m_enemy.get_component<CharacterData>("Character Data").get_name();
}

std::string EnemyViewModel::get_health() const {
	return m_enemy.get_component<Health>("Health").get_health_amount<std::string>();
}

std::string EnemyViewModel::get_max_health() const {
	return m_enemy.get_component<Health>("Health").get_max_health_amount<std::string>();
}

std::string EnemyViewModel::get_mana() const {
	return m_enemy.get_component<Mana>("Mana").get_mana_amount<std::string>();
}

std::string EnemyViewModel::get_max_mana() const {
	return m_enemy.get_component<Mana>("Mana").get_max_mana_amount<std::string>();
}

std::string EnemyViewModel::get_level() const {
	return m_enemy.get_component<Level>("Level").get_level<std::string>();
}

std::string EnemyViewModel::get_strength() const {
	return m_enemy.get_component<Strength>("Strength").get_strength<std::string>();
}

std::string EnemyViewModel::get_defense() const {
	return m_enemy.get_component<Defense>("Defense").get_defense<std::string>();
}