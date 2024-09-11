#ifndef WEAPON
#define WEAPON

#include "../Print/Print.hpp"

class Weapon
{
private:
	std::string _type;
public:
	Weapon();
	Weapon(std::string type);
	std::string getType() const;
	void setType(std::string type);

};

#endif