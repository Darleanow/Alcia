#include "GameEngine.h"
#include <nlohmann/json.hpp>
#include "PlayerViewModel.h"

GameEngine::GameEngine() = default;

GameEngine::~GameEngine() = default;

void GameEngine::expose_methods(saucer::smartview<> &smartview) {
    // Title Screen methods
    smartview.expose("create_player", [this](const std::string &name, const saucer::executor<std::string> &exec) {
        const auto &[resolve, reject] = exec;

        if (name.empty()) {
            return reject("Name can't be empty");
        }

        const Player player(name, "No description", "Nox Kingdom", 100, 50, 20, 10);
        m_game_instance = GameInstance(player);
        resolve("Success");
    });

    //todo(enzo): Load game

    smartview.expose("exit_game", [&smartview]() {
        smartview.close();
        exit(0);
    });

    // In game methods
    smartview.expose("get_player_stats", [this, &smartview](const saucer::executor<std::string> &exec) {
        const auto &[resolve, reject] = exec;

        const auto &player_view = m_game_instance->get_player_view_model();

        nlohmann::json json_player_data;

        json_player_data["Name"] = player_view.get_name();
        json_player_data["Health"] = player_view.get_health();
        json_player_data["Max Health"] = player_view.get_max_health();
        json_player_data["Mana"] = player_view.get_mana();
        json_player_data["Max Mana"] = player_view.get_max_mana();
        json_player_data["Level"] = player_view.get_level();
        json_player_data["Strength"] = player_view.get_strength();
        json_player_data["Defense"] = player_view.get_defense();

        resolve(to_string(json_player_data));
    }, saucer::launch::async);
}
