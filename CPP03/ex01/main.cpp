#include "ScavTrap.hpp"

int main()
{
	ClapTrap clapTrap("Huseyin");
	ScavTrap scavTrap("Yahya");

	clapTrap.attack("Mehmet");
	scavTrap.attack("Huseyin");

	scavTrap.guardGate();
}