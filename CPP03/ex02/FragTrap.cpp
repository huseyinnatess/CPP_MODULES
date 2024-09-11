#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    _name = "default";
    _className = "FragTrap";
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 100;
    print("FragTrap default constructor is worked!", GREEN);
}

FragTrap::FragTrap(std::string name, std::string className) : ClapTrap(name, className)
{
    _name = name;
    _className = className;
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 100;
    print("FragTrap " + _name + " constructor is worked!", GREEN);
}

FragTrap::FragTrap(const FragTrap& oth) : ClapTrap(oth)
{
     _name = oth._name;
    _className = oth._className;
    _hitPoint = oth._hitPoint;
    _energyPoint = oth._energyPoint;
    _attackDamage = oth._attackDamage;
    *this = oth;
}

FragTrap& FragTrap::operator=(const FragTrap& oth)
{
     _name = oth._name;
    _className = oth._className;
    _hitPoint = oth._hitPoint;
    _energyPoint = oth._energyPoint;
    _attackDamage = oth._attackDamage;
    return *this;
}

FragTrap::~FragTrap()
{
    print("FragTrap " + _name + " destructor is worked!", GREEN);
}

void FragTrap::highFivesGuys()
{
    if (_hitPoint > 0)
        print("FragTrap " + _name + " says HIGH FIVE EVERYONE!", TURQUISE);
    else
        print("Cannot high five because: FragTrap " + _name + " is dead", TURQUISE);
}