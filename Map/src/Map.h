#pragma once
#include "World.h"

class Map
{
public:
	explicit Map(const std::string& json_load_data_file_path);
	~Map();
	static World load_world(const std::string& json_load_data_file_path);

private:
	World m_world;
};