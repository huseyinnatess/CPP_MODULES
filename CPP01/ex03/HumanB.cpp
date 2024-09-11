#include "HumanB.hpp"

HumanB::HumanB()
{
	this->_name = "defualt";
	this->weapon = NULL;
};

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->weapon = NULL;
};

void    HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

void    HumanB::attack()
{
	if (this -> weapon)
		print(this->_name + " " + this->weapon->getType() + " ile saldirdi", GREEN);
	else
		print(this->_name + " saldiramiyor silahi yok", GREEN);
}