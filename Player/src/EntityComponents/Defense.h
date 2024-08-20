#pragma once

class Defense {
public:
  explicit Defense(int starting_defense);
  ~Defense();

  [[nodiscard]] int get_defense() const;
  void set_defense(int defense_value);

private:
  int m_defense;
};
