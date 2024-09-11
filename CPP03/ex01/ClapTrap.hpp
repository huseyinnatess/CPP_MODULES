#ifndef CLAPTRAP
#define CLAPTRAP

#include "../Print/Print.hpp"

class ClapTrap
{
protected:
    std::string _name;
    std::string _className;
    int _hitPoint;
    int _energyPoint;
    int _attackDamage;
    void printHitPoint();
    void printEnergyPoint();
public:
    ClapTrap();
    ClapTrap(std::string name, std::string className = "ClapTrap");
    ClapTrap(std::string className, std::string name, int hitPoint, int energyPoint, int attackDamage);
    ClapTrap(const ClapTrap& oth);
    ClapTrap& operator=(const ClapTrap& oth);
    virtual ~ClapTrap();
    virtual void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
};

#endif