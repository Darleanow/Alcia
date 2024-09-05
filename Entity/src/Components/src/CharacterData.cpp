#include "CharacterData.h"

#include <utility>

CharacterData::CharacterData(std::string name, std::string description, const Region& origin_region)
	: m_name(std::move(name))
	, m_description(std::move(description))
	, m_region(origin_region)
{ }

CharacterData::~CharacterData() = default;

std::string CharacterData::get_name() const
{
	return m_name;
}

std::string CharacterData::get_description() const
{
	return m_description;
}

std::string CharacterData::get_region_name() const
{
	return m_region.get_name();
}