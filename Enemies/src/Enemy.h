#pragma once
#include <string>

// todo(Enzo): Maybe move the logic into an entity folder with player
// todo(Enzo): Also use components made for player, as it would be better modular

class Enemy
{
public:
	Enemy(std::string name,
		  std::string description,
		  int health,
		  int strength,
		  int level,
		  int experience_reward);
	~Enemy();

	[[nodiscard]] const std::string& get_name() const;
	[[nodiscard]] const std::string& get_description() const;
	[[nodiscard]] int get_health() const;
	[[nodiscard]] int get_strength() const;
	[[nodiscard]] int get_level() const;

private:
	std::string m_name;
	std::string m_description;
	int m_health;
	int m_strength;
	int m_level;
	int m_experience_reward;
	// todo(Enzo): Add loots here
};