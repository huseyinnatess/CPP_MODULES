#ifndef HUMANA
#define HUMANA

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon& weapon);
	void attack();
private:
	std::string _name;
	Weapon& weapon;
};

#endif