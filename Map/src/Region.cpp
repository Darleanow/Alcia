#include "Region.h"

#include <utility>

Region::Region(const nlohmann::json& region_data)
	: m_name(region_data["name"])
	, m_region_type(region_data["type"])
	, m_description(region_data["description"])
	, m_climate(region_data["climate"])
	, m_terrain(region_data["terrain"])
{
	for(const auto& json_object_subregion : region_data["subregions"])
	{
		SubRegion subregion(json_object_subregion);
		m_subregions.push_back(subregion);
	}
}

//TODO(Enzo): Enforce constraints for building a region object
Region::Region(std::string name)
	: m_name(std::move(name))
	, m_region_type("nil")
	, m_description("nil")
	, m_climate("nil")
	, m_terrain("nil")
{ }

Region::~Region() = default;

std::string Region::get_name() const
{
	return m_name;
}
