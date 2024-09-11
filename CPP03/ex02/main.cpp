#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap clapTrap("Huseyin");
	FragTrap fragTrap("Mehmet");

	fragTrap.attack("Yahya");

	fragTrap.highFivesGuys();
}