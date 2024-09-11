#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* zombieArray = new Zombie[N];
	int i = 0;

	for (; i < N; i++)
	{
		zombieArray[i].setName(name);
	}
	return zombieArray;
}