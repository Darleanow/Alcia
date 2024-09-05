#pragma once
#include <string>

class Defense
{
public:
	explicit Defense(int amount);
	~Defense();

	template <typename T>
	[[nodiscard]] T get_defense() const;

private:
	int m_defense;
};

template <typename T>
T Defense::get_defense() const
{
	return std::to_string(m_defense);
}

template <>
inline int Defense::get_defense() const
{
	return m_defense;
}