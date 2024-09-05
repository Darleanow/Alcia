#include "Entity.h"
#include <any>
#include <cmath>
#include <stdexcept>

Entity::Entity() = default;

Entity::~Entity() = default;

//todo(Enzo): Remove this, introduces logic in entities, this shall be part of the existing components, and be handled by a manager.
// We use a logarithmic function to determine the amount of damage an entity shall take
// We use the defense as k, I wanted to have around 40% damage reduction with 100 defense
// When we solve for k :
// 40 = log(100+1) / log(k) * 100
// 0.4 = log(101) / log(k)
// log(k) = log(101)/0.40
// log(k) = 2.004 / 0.40 ~= 5.01
// k = pow(10,5.01) ~= 102324
void Entity::take_damage(Entity& attacker)
{
	const auto& receiver_defense_value = get_component<Defense>("Defense").get_defense<int>();
	auto& receiver_health = get_component<Health>("Health");

	int attacker_strength = attacker.get_component<Strength>("Strength").get_strength<int>();

	const auto damage_reduction = std::log(receiver_defense_value + 1) / std::log(102324);

	attacker_strength = static_cast<int>(std::floor(attacker_strength * damage_reduction));

	receiver_health.set_health_amount(receiver_health.get_health_amount<int>() - attacker_strength);
}