#include "Connection.h"

Connection::Connection(const nlohmann::json& connection_data)
	: m_to(connection_data["to"])
	, m_type(connection_data["type"])
	, m_description(connection_data["description"])
{ }

Connection::~Connection() = default;
