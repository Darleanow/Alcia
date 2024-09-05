#include "SubRegion.h"

SubRegion::SubRegion(const nlohmann::json& subregion_data)
	: m_name(subregion_data["name"])
	, m_type(subregion_data["type"])
	, m_description(subregion_data["description"])
	, m_population_count(subregion_data["population"])
{
	for(const auto& json_object_connection : subregion_data["connections"])
	{
		Connection connection(json_object_connection);
		m_connections.push_back(connection);
	}
}

SubRegion::SubRegion(const std::string& subregion_name)
	: m_name(subregion_name)
	, m_type("nil")
	, m_description("nil")
	, m_population_count(0)
{ }

SubRegion::~SubRegion() = default;

// Todo(Enzo): Might wanna enforce checks if this becomes used in other code parts besides the EnemyRegistry
bool SubRegion::operator==(const SubRegion& rhs) const
{
	return m_name == rhs.m_name;
}
