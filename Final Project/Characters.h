#ifndef _CHARACTERS
#define _CHARACTERS

#include <string>

class Character
{
public:
	Character();
	Character(std::string Name, int health, int attack);

	std::string getName();
	int getAttack();
	int getHealth();

	void Fight();
	void Damage(int Damage);

	
private:
	std::string CharName;
	int Health;
	int Attack;
	
};

class Knight: public Character
{
public:
	Knight();
	Knight(std::string Name);

	void Fight();
	
private:

	
};

#endif
