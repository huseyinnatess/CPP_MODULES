#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon club("crude spiked club");
	club.setType("some other type of club");

	HumanA bob("Bob", club);
	bob.attack();
	bob.attack();


	Weapon weapon2 = Weapon("Sopa");
	HumanB jim("Jim");
	
	jim.attack();

	jim.setWeapon(weapon2);
	jim.attack();

	weapon2.setType("gurz");
	jim.attack();

	return 0;
}
