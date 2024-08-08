#pragma once
#include "EntityComponents/Health.h"

// TODO(Darleanow): Use strong types for members

class Player
{
public:
  Player(int health, int defense, int attack);
  ~Player();
private:
  Health m_health;
  int m_defense;
  int m_attack;
  int m_experience;
};
