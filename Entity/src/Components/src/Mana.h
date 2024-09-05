#pragma once
#include <string>

class Mana
{
public:
	explicit Mana(int amount);
	~Mana();

	template <typename T>
	[[nodiscard]] T get_mana_amount() const;

	template <typename T>
	[[nodiscard]] T get_max_mana_amount() const;

	void set_mana_amound(int amount);

private:
	int m_mana;
	int m_max_mana;
};

template <typename T>
T Mana::get_mana_amount() const
{
	return std::to_string(m_mana);
}
template <typename T>
T Mana::get_max_mana_amount() const
{
	return std::to_string(m_max_mana);
}

template <>
inline int Mana::get_mana_amount() const
{
	return m_mana;
}

template <>
inline int Mana::get_max_mana_amount() const
{
	return m_max_mana;
}