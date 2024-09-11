#ifndef SCAV
#define SCAV

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& oth);
    ScavTrap& operator=(const ScavTrap& oth);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();
};

#endif