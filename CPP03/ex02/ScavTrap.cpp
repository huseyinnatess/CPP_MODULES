#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
     _hitPoint = 100;
    _energyPoint = 50;
    _attackDamage = 20;
    _name = "default";
    _className = "ScavTrap";
    print("ScavTrap default constructor is worked!");
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitPoint = 100;
    _energyPoint = 50;
    _attackDamage = 20;
    print("ScavTrap " + _name + " constructor is worked!", GREEN);
}

ScavTrap& ScavTrap::operator=(const ScavTrap& oth)
{
    _name = oth._name;
    _className = oth._className;
    _hitPoint = oth._hitPoint;
    _energyPoint = oth._energyPoint;
    _attackDamage = oth._attackDamage;
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap& oth) : ClapTrap(oth)
{
    _name = oth._name;
    _className = oth._className;
    _hitPoint = oth._hitPoint;
    _energyPoint = oth._energyPoint;
    _attackDamage = oth._attackDamage;
}

ScavTrap::~ScavTrap()
{
    print("ScavTrap " + _name + " destructor is worked", GREEN);
}

void ScavTrap::attack(const std::string& target)
{
    if (_energyPoint > 0)
    {
        print("ScavTrap " + _name + " attacks " + target + ", causing " + to_String(_attackDamage) + " points of damage", PURPLE);
        _energyPoint--;
        printEnergyPoint();
    }
    else
    {
        print("Insufficient energy points", BLUE);
    }
}

void ScavTrap::guardGate()
{
    print("ScavTrap " + _name + "is now in Gatekeeper mode.", TURQUISE);
}