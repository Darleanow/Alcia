#pragma once
#include <PlayerViewModel.h>

#include "EnemyRegistry.h"
#include "Map.h"
#include "Player.h"

class GameInstance {
public:
    explicit GameInstance(const std::optional<Player> &player);

    ~GameInstance();

    [[nodiscard]] PlayerViewModel get_player_view_model();

    [[nodiscard]] EnemyRegistry &get_enemies_registry();

private:
    std::optional<Player> m_player;
    Map m_map;
    EnemyRegistry m_monster_registry;
};
