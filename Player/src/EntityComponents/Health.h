#pragma once

class Health
{
public:
	explicit Health(int health);
	~Health();

	[[nodiscard]] int get_health() const;
	void reduce_health(int amount_to_reduce_by);
	void add_health(int amount_to_add);

private:
	int m_health;
};
