#include "Zombie.hpp"

Zombie::Zombie()
{
	this->_name = "Default";
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	print(this->_name + " destructor is worked", YELLOW);
}

void Zombie::announce(void)
{
	print(this->_name + ": BraiiiiiiinnnzzzZ...", GREEN);
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}