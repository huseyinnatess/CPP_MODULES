#ifndef ZOMBIE
#define ZOMBIE

#include "../Print/Print.hpp"

class Zombie
{
public:
	void announce(void);
	Zombie();
	Zombie(std::string name);
	~Zombie();
private:
	std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
