#pragma once
#include "Region.h"

class World
{
public:
	explicit World(const nlohmann::json& world_data);
	~World();

private:
	std::string m_name;
	std::string m_description;
	std::vector<Region> m_regions;
};