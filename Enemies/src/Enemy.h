#pragma once
#include <string>

// todo(Enzo): Maybe move the logic into an entity folder with player
// todo(Enzo): Also use components made for player, as it would be better modular

class Enemy
{
public:
	Enemy(std::string name, std::string description, int health, int strength, int level);
	~Enemy();

private:
	std::string m_name;
	std::string m_description;
	int m_health;
	int m_strength;
	int m_level;
	// todo(Enzo): Add loots here
};