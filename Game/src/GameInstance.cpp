#include "GameInstance.h"

//TODO(Enzo): Remove this disgusting thing
std::string world_data = "./Data/Location.json";
std::string enemies_data = "./Data/Enemies.json";

GameInstance::GameInstance(const std::optional<Player> &player)
    : m_player(player)
      , m_map(world_data)
      , m_monster_registry(enemies_data) {
}

GameInstance::~GameInstance() = default;

PlayerViewModel GameInstance::get_player_view_model() {
    if (m_player.has_value()) {
        PlayerViewModel model(m_player.value());
        return model;
    }

    throw std::runtime_error("Player aint set !");
}


EnemyRegistry &GameInstance::get_enemies_registry() {
    return m_monster_registry;
}
