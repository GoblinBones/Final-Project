#include "Characters.h"

Character::Character(): CharName("default"), Health(0), Attack(0) {}
Character::Character(std::string Name, int health, int attack): CharName(Name), Health(health), Attack(attack) {}

std::string Character::getName()
{
	return CharName;
}

Knight::Knight(): Character("Knight: default", 10, 10) {}
Knight::Knight(std::string Name): Character("Knight: " + Name, 10, 10) {}


