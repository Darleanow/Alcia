#pragma once
#include "Location.h"

class SubRegion
{
public:
	explicit SubRegion(const nlohmann::json& subregion_data);
	~SubRegion();

private:
	std::string m_name;
	std::string m_type;
	std::string m_description;
	int m_population_count;
	std::vector<Connection> m_connections;
	std::vector<Location> m_locations;
};