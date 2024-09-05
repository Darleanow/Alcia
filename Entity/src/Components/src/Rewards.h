#pragma once
#include <string>
#include <vector>

class Rewards
{
public:
	Rewards(int experience_reward, const std::vector<std::string>& loots);
	~Rewards();

	template <typename T>
	[[nodiscard]] T get_experience_amount() const;

	//todo(Enzo): Add logic for loots (items)
private:
	int m_experience_reward;
	std::vector<std::string> m_loot_rewards;
};

template <typename T>
T Rewards::get_experience_amount() const
{
	return std::to_string(m_experience_reward);
}

template <>
inline int Rewards::get_experience_amount() const
{
	return m_experience_reward;
}
