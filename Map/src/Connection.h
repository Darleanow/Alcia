#pragma once
#include "nlohmann/json.hpp"
#include <string>

class Connection
{
public:
	explicit Connection(const nlohmann::json& connection_data);
	~Connection();

private:
	std::string m_to;
	std::string m_type;
	std::string m_description;
};