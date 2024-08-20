#pragma once

class Strength
{
public:
	explicit Strength(int starting_strength);
	~Strength();

	void set_strength(int new_value);
	[[nodiscard]] int get_strength() const;

private:
	int m_strength;
};