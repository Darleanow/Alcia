#include "EnemyRegistry.h"
#include <fstream>

EnemyRegistry::EnemyRegistry(const std::string& json_load_data_file_path)
{
	load_monsters(json_load_data_file_path);
}

EnemyRegistry::~EnemyRegistry() = default;

Enemy EnemyRegistry::search_monster_by_name(const std::string& search_name)
{
	// for(auto& [enemy, name, _region, _subregion] : m_enemies)
	// {
	// 	if(name == search_name)
	// 	{
	// 		return enemy;
	// 	}
	// }

	for(const auto& elem : m_enemies)
	{
		if(elem.name == search_name)
		{
			return elem.enemy;
		}
	}

	throw std::runtime_error("Monster doesn't exists");
}

std::vector<Enemy> EnemyRegistry::search_by_subregion(const SubRegion& search_subregion)
{
	std::vector<Enemy> enemies_found;
	for(auto& [enemy, name, region, subregion] : m_enemies)
	{
		if(subregion == search_subregion)
		{
			enemies_found.push_back(enemy);
		}
	}

	if(enemies_found.empty())
	{
		throw std::runtime_error(
			"SubRegion is probably not implemented yet, check it, no enemy was found");
	}

	return enemies_found;
}

void EnemyRegistry::add_enemy(const EnemyInstance& enemy_instance)
{
	m_enemies.push_back(enemy_instance);
}

void EnemyRegistry::load_monsters(const std::string& json_load_data_file_path)
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
				const std::string& monster_name = monster["name"];
				const std::string& region_name = region["name"];
				const std::string& subregion_name = subregion["name"];

				std::vector<std::string> loot_names;

				for(const auto& loot_item : monster["rewards"]["loot"])
				{
					loot_names.push_back(loot_item["name"]);
				}

				Enemy enemy(monster["name"],
							monster["description"],
							subregion["name"],
							monster["health"],
							0,
							monster["level"],
							monster["strength"],
							monster["defense"],
							monster["rewards"]["experience"],
							loot_names);

				EnemyInstance instance(
					enemy, monster_name, Region(region_name), SubRegion(subregion_name));

				m_enemies.push_back(instance);
			}
		}
	}
}