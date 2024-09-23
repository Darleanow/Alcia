#pragma once
#include <saucer/smartview.hpp>
#include "GameInstance.h"

class GameEngine {
public:
    GameEngine();

    ~GameEngine();

    void expose_methods(saucer::smartview<> &smartview);

private:
    std::optional<GameInstance> m_game_instance;
    saucer::smartview<> m_smartview;
};
