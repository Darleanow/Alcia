#include <fstream>

#include "MonsterRegistry.h"
#include "nlohmann/json.hpp"

MonsterRegistry::MonsterRegistry(const std::string& json_load_data_file_path)
{
	load_json_data(json_load_data_file_path);
}

MonsterRegistry::~MonsterRegistry() = default;

void MonsterRegistry::load_json_data(const std::string& json_load_data_file_path)
{
	nlohmann::json world_data;

	std::ifstream input_file(json_load_data_file_path);
	if(!input_file.is_open())
	{
		throw std::runtime_error("Failed to open file: " + json_load_data_file_path);
	}

	input_file >> world_data;

	for(const auto& region : world_data["regions"])
	{
		for(const auto& subregion : region["subregions"])
		{
			for(const auto& monster : subregion["monsters"])
			{
				const Enemy enemy(monster["name"],
								  monster["description"],
								  monster["health"],
								  monster["strength"],
								  monster["level"],
								  monster["rewards"]["experience"]);

				const auto& subregion_name = subregion["name"];
				const auto& monster_name = monster["name"];

				m_enemies[subregion_name].emplace(monster_name, enemy);
			}
		}
	}
}

[[nodiscard]] Enemy
MonsterRegistry::get_enemy_instance_from_region_and_name(const std::string& region_name,
														 const std::string& monster_name) const
{
	return m_enemies.at(region_name).at(monster_name);
}
