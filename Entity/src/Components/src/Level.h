#pragma once
#include <string>

class Level
{
public:
	explicit Level(int base_level = 1);
	~Level();

	template <typename T>
	[[nodiscard]] T get_level() const;

	template <typename T>
	[[nodiscard]] T get_current_experience() const;

	void add_experience(int experience);

private:
	int m_level;
	int m_experience;

	int m_experience_to_next_level;

	void level_up();

	bool check_level_up();
	[[nodiscard]] int compute_experience_to_next_level() const;
};

template <typename T>
T Level::get_level() const
{
	return std::to_string(m_experience);
}

template <>
inline int Level::get_level() const
{
	return m_level;
}

template <typename T>
T Level::get_current_experience() const
{
	return std::to_string(m_experience);
}

template <>
inline int Level::get_current_experience() const
{
	return m_experience;
}