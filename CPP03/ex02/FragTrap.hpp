#ifndef FRAG
#define FRAG

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name, std::string className = "FlagTrap");
    FragTrap(const FragTrap& oth);
    FragTrap& operator=(const FragTrap& oth);
    ~FragTrap();
    void highFivesGuys();
};
#endif