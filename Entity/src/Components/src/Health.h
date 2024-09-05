#pragma once
#include <string>

class Health
{
public:
	explicit Health(int value);
	~Health();

	template <typename T>
	[[nodiscard]] T get_health_amount() const;

	template <typename T>
	[[nodiscard]] T get_max_health_amount() const;

	void set_health_amount(int amount);

private:
	int m_health;
	int m_max_health;
};

template <typename T>
T Health::get_health_amount() const
{
	return std::to_string(m_health);
}

template <>
inline int Health::get_health_amount() const
{
	return m_health;
}

template <typename T>
T Health::get_max_health_amount() const
{
	return std::to_string(m_max_health);
}

template <>
inline int Health::get_max_health_amount() const
{
	return m_max_health;
}