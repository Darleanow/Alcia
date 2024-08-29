#include "World.h"

World::World(const nlohmann::json& world_data)
{
	m_name = world_data["world"]["name"];
	m_description = world_data["world"]["name"];

	for(const auto& json_object_region : world_data["world"]["regions"])
	{
		Region region(json_object_region);
		m_regions.push_back(region);
	}
}

World::~World() = default;