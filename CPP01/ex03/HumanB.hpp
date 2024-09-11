#ifndef HUMANB
#define HUMANB

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB();
	HumanB(std::string name);
	void    setWeapon(Weapon& weapon);
	void    attack();

private:
	std::string _name;
	Weapon* weapon;
};

#endif