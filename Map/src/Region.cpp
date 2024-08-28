#include "Region.h"

Region::Region(const nlohmann::json& region_data)
	: m_name(region_data["name"])
	, m_region_type(region_data["type"])
	, m_description(region_data["description"])
	, m_climate(region_data["climate"])
	, m_terrain(region_data["terrain"])
{

	const auto& json_object_subregions = region_data["subregions"];
	for(const auto& json_object_subregion : json_object_subregions)
	{
		SubRegion subregion(json_object_subregion);
		m_subregions.push_back(subregion);
	}
}

Region::~Region() = default;
