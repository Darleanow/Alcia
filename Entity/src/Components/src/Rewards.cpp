#include "Rewards.h"

Rewards::Rewards(const int experience_reward, const std::vector<std::string>& loots)
	: m_experience_reward(experience_reward)
	, m_loot_rewards(loots)
{ }

Rewards::~Rewards() = default;