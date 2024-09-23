#pragma once
#include "Entity.h"

class PlayerViewModel
{
public:
	explicit PlayerViewModel(Entity& player);

	~PlayerViewModel();

	[[nodiscard]] std::string get_name() const;
	[[nodiscard]] std::string get_health() const;
	[[nodiscard]] std::string get_max_health() const;
	[[nodiscard]] std::string get_mana() const;
	[[nodiscard]] std::string get_max_mana() const;
	[[nodiscard]] std::string get_level() const;
	[[nodiscard]] std::string get_strength() const;
	[[nodiscard]] std::string get_defense() const;

private:
	Entity& m_player;
};