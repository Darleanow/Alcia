#pragma once
#include "Region.h"
#include <string>

class CharacterData
{
public:
	CharacterData(std::string name, std::string description, const Region& origin_region);
	~CharacterData();

	std::string get_name() const;
	std::string get_description() const;
	std::string get_region_name() const;

private:
	std::string m_name;
	std::string m_description;
	Region m_region;
};