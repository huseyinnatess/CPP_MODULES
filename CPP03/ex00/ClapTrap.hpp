#ifndef CLAPTRAP
#define CLAPTRAP

#include "../Print/Print.hpp"

class ClapTrap
{
private:
    std::string _name;
    int _hitPoint;
    int _energyPoint;
    int _attackDamage;
    void printHitPoint();
    void printEnergyPoint();
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& oth);
    ClapTrap& operator=(const ClapTrap& oth);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
};

#endif