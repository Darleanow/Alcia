#include "SubRegion.h"

SubRegion::SubRegion(const nlohmann::json& subregion_data)
	: m_name(subregion_data["name"])
	, m_type(subregion_data["type"])
	, m_description(subregion_data["description"])
	, m_population_count(subregion_data["population"])
{

	const auto& json_object_connections = subregion_data["connections"];
	for(const auto& json_object_connection : json_object_connections)
	{
		Connection connection(json_object_connection);
		m_connections.push_back(connection);
	}
}

SubRegion::~SubRegion() = default;
