#pragma once
#include "Components/src/Component.h"
#include <string>
#include <unordered_map>

class Entity
{
public:
	Entity();
	virtual ~Entity() = 0;

	template <typename T>
	void add_component(const std::string& name, T component)
	{
		m_components[name].emplace<T>(std::move(component));
	}

	template <typename T>
	T& get_component(const std::string& name)
	{
		if(const auto& component = m_components.find(name); component != m_components.end())
		{
			return std::get<T>(component->second);
		}

		throw std::runtime_error("No component was found");
	}

	void take_damage(Entity& attacker);

private:
	std::unordered_map<std::string, Component> m_components;
};