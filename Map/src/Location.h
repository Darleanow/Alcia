//TODO(Enzo): Implement Locations (important city parts where we can do actions

#pragma once
#include "Connection.h"
#include <vector>

class Location
{
public:
private:
	std::string m_name;
	std::string m_type;
	std::string m_description;

	std::vector<Connection> connections;
};