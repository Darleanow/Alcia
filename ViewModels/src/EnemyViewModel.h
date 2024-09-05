#pragma once
#include "Entity.h"

class EnemyViewModel
{
public:
  explicit EnemyViewModel(Entity& enemy);

  ~EnemyViewModel();

  [[nodiscard]] std::string get_name_text() const;
  [[nodiscard]] std::string get_health_text() const;
  [[nodiscard]] std::string get_mana_text() const;
  [[nodiscard]] std::string get_level_text() const;
  [[nodiscard]] std::string get_strength_text() const;
  [[nodiscard]] std::string get_defense_text() const;

private:
  Entity& m_enemy;
};