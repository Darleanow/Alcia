#include "Player.h"

Player::Player(const int health,const int defense,const  int attack)
	: m_health(health)
	, m_defense(defense)
	, m_attack(attack)
	, m_experience(0)
{ }

 Player::~Player() = default;
