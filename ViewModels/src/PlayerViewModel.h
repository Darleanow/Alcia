#pragma once
#include "Entity.h"

class PlayerViewModel
{
public:
	explicit PlayerViewModel(Entity& player);

	~PlayerViewModel();

	[[nodiscard]] std::string get_name_text() const;
	[[nodiscard]] std::string get_health_text() const;
	[[nodiscard]] std::string get_mana_text() const;
	[[nodiscard]] std::string get_level_text() const;
	[[nodiscard]] std::string get_strength_text() const;
	[[nodiscard]] std::string get_defense_text() const;

private:
	Entity& m_player;
};