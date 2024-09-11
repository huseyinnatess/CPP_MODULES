#include "Zombie.hpp"

int main()
{
	Zombie* array;
	size_t i = 0;
	array = zombieHorde(5, "Zombies");

	for (; i < 5; i++)
	{
		array[i].announce();
	}

	delete[] array;
}