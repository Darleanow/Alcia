#pragma once
#include "Enemy.h"

struct EnemyInstance
{
	Enemy enemy;
	std::string name;
	Region region;
	SubRegion subregion;
};

class EnemyRegistry
{
public:
	explicit EnemyRegistry(const std::string& json_load_data_file_path);
	~EnemyRegistry();

	// Clone is intentionnal here, we want to keep instances clean.
	[[nodiscard]] Enemy search_monster_by_name(const std::string& search_name);
	[[nodiscard]] std::vector<Enemy> search_by_subregion(const SubRegion& search_subregion);
	// [[nodiscard]] std::vector<std::map<std::string, Enemy>> search_by_region(Region region); //todo(Enzo): Remove if unneeded

	void add_enemy(const EnemyInstance& enemy_instance);

private:
	std::vector<EnemyInstance> m_enemies;

	void load_monsters(const std::string& json_load_data_file_path);
};