#pragma once
#include <string>

class Strength
{
public:
	explicit Strength(int amount);
	~Strength();

	template <typename T>
	[[nodiscard]] T get_strength() const;

private:
	int m_strength;
};

template <typename T>
T Strength::get_strength() const
{
	return std::to_string(m_strength);
}

template <>
inline int Strength::get_strength() const
{
	return m_strength;
}
