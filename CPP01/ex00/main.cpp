#include "Zombie.hpp"

int main()
{
	Zombie* zombie = new Zombie("Huseyin");

	zombie->announce();

	Zombie* newZombiee = newZombie("Zombiee");

	newZombiee->announce();

	randomChump("Random Zombie");
	
	delete newZombiee;
	delete zombie;
}