#include "Map.h"
#include <fstream>
#include <nlohmann/json.hpp>

Map::Map(const std::string& json_load_data_file_path)
	: m_world(load_world(json_load_data_file_path))
{ }

Map::~Map() = default;

World Map::load_world(const std::string& json_load_data_file_path)
{
	nlohmann::json world_data;

	std::ifstream input_file(json_load_data_file_path);
	if(!input_file.is_open())
	{
		throw std::runtime_error("Failed to open file: " + json_load_data_file_path);
	}

	input_file >> world_data;
	return World(world_data);
}