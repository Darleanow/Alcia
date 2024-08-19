#pragma once

class Mana
{
public:
	explicit Mana(int starting_mana);
	~Mana();

	void consume_mana(int amount_to_consume);
	void add_mana(int amount_to_add);

	[[nodiscard]] int get_mana_amount() const;
	[[nodiscard]] int get_max_mana_amount() const;

private:
	int m_max_mana;
	int m_mana_amount;
};