#pragma once
#include "Entity.h"

class EnemyViewModel
{
public:
  explicit EnemyViewModel(Entity& enemy);

  ~EnemyViewModel();

  [[nodiscard]] std::string get_name() const;
  [[nodiscard]] std::string get_health() const;
  [[nodiscard]] std::string get_max_health() const;
  [[nodiscard]] std::string get_mana() const;
  [[nodiscard]] std::string get_max_mana() const;
  [[nodiscard]] std::string get_level() const;
  [[nodiscard]] std::string get_strength() const;
  [[nodiscard]] std::string get_defense() const;

private:
  Entity& m_enemy;
};