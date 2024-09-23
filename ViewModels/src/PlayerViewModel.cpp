#include "PlayerViewModel.h"

PlayerViewModel::PlayerViewModel(Entity &player)
    : m_player(player) {
}

PlayerViewModel::~PlayerViewModel() = default;

std::string PlayerViewModel::get_name() const {
    return m_player.get_component<CharacterData>("Character Data").get_name();
}

std::string PlayerViewModel::get_health() const {
    return m_player.get_component<Health>("Health").get_health_amount<std::string>();
}

std::string PlayerViewModel::get_max_health() const {
    return m_player.get_component<Health>("Health").get_max_health_amount<std::string>();
}

std::string PlayerViewModel::get_mana() const {
    return m_player.get_component<Mana>("Mana").get_mana_amount<std::string>();
}

std::string PlayerViewModel::get_max_mana() const {
    return m_player.get_component<Mana>("Mana").get_max_mana_amount<std::string>();
}

std::string PlayerViewModel::get_level() const {
    return m_player.get_component<Level>("Level").get_level<std::string>();
}

std::string PlayerViewModel::get_strength() const {
    return m_player.get_component<Strength>("Strength").get_strength<std::string>();
}

std::string PlayerViewModel::get_defense() const {
    return m_player.get_component<Defense>("Defense").get_defense<std::string>();
}
