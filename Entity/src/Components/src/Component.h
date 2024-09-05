#pragma once
#include "CharacterData.h"
#include "Defense.h"
#include "Health.h"
#include "Level.h"
#include "Mana.h"
#include "Rewards.h"
#include "Strength.h"
#include <variant>

// This file is mostly used to provide an interface to Entity
struct EmptyComponent
{ };
using Component =
	std::variant<EmptyComponent, CharacterData, Defense, Health, Level, Mana, Rewards, Strength>;