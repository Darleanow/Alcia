#include "PlayerViewModel.h"

PlayerViewModel::PlayerViewModel(Entity& player)
	: m_player(player)
{ }

PlayerViewModel::~PlayerViewModel() = default;

std::string PlayerViewModel::get_name_text() const
{
	const auto name = m_player.get_component<CharacterData>("Character Data").get_name();
	return "Player: " + name;
}

std::string PlayerViewModel::get_health_text() const
{
	const auto current_health =
		m_player.get_component<Health>("Health").get_health_amount<std::string>();
	const auto max_health =
		m_player.get_component<Health>("Health").get_max_health_amount<std::string>();

	return "Health: " + current_health + " / " + max_health;
}
std::string PlayerViewModel::get_mana_text() const
{
	const auto current_mana = m_player.get_component<Mana>("Mana").get_mana_amount<std::string>();
	const auto max_mana = m_player.get_component<Mana>("Mana").get_max_mana_amount<std::string>();

	return "Mana: " + current_mana + " / " + max_mana;
}

std::string PlayerViewModel::get_level_text() const
{
	const auto level = m_player.get_component<Level>("Level").get_level<std::string>();

	return "Level: " + level;
}

std::string PlayerViewModel::get_strength_text() const
{
	const auto strength = m_player.get_component<Strength>("Strength").get_strength<std::string>();

	return "Strength: " + strength;
}

// todo(Enzo): Maybe display with the defense value the percentage of damage reduced
std::string PlayerViewModel::get_defense_text() const
{
	const auto defense = m_player.get_component<Defense>("Defense").get_defense<std::string>();

	return "Defense: " + defense;
}
