#pragma once

class Level
{
public:
	Level();
	~Level();

	void add_experience(int amount);

	[[nodiscard]] int get_level() const;
	[[nodiscard]] int get_current_experience() const;
private:
	int m_level;
	int m_current_experience;

	bool level_up();
	[[nodiscard]] int sum_experience_needed_to_level_up() const;
};
