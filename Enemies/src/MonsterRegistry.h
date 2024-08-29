#pragma once
#include <map>

#include "Enemy.h"
#include "Map.h"

class MonsterRegistry
{
public:
	explicit MonsterRegistry(const std::string& json_load_data_file_path);
	~MonsterRegistry();

	// We ask for the region name to force the user to know the region
	// It is a wanted behaviour to know it, as we shall only get enemies from the region we are currently in
	[[nodiscard]] Enemy
	get_enemy_instance_from_region_and_name(const std::string& region_name,
											const std::string& monster_name) const;

private:
	std::map<std::string, std::map<std::string, Enemy>> m_enemies;

	void load_json_data(const std::string& json_load_data_file_path);
};
