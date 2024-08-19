#pragma once

class Health
{
public:
	explicit Health(int starting_health);
	~Health();

	void consume_health(int amount_to_consume);
	void add_health(int amount_to_add);

	[[nodiscard]] int get_health_amount() const;
	[[nodiscard]] int get_max_health_amount() const;

private:
	int m_health_amount;
	int m_max_health;
};
