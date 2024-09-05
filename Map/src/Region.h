#pragma once
#include "SubRegion.h"

class Region
{
public:
	explicit Region(const nlohmann::json& region_data);
	explicit Region(std::string name);
	~Region();

	std::string get_name() const;

private:
	std::string m_name;
	std::string m_region_type;
	std::string m_description;
	std::string m_climate;
	std::string m_terrain;

	std::vector<SubRegion> m_subregions;
};