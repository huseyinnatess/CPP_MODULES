#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _hitPoint = 10;
    _energyPoint = 10;
    _attackDamage = 0;
    _name = "Default";
    _className = "ClapTrap";
    print("ClapTrap default constructor is worked!", YELLOW);
}

ClapTrap::ClapTrap(std::string name, std::string className)
{
    _hitPoint = 10;
    _energyPoint = 10;
    _attackDamage = 0;
    _name = name;
    _className = className;
    print("ClapTrap " + _name + " constructor is worked!", YELLOW);
}

ClapTrap::ClapTrap(std::string className, std::string name, int hitPoint, int energyPoint, int attackDamage)
{
    _hitPoint = hitPoint;
    _energyPoint = energyPoint;
    _attackDamage = attackDamage;
    _name = name;
    _className = className;
    print("ClapTrap " + _name + " constructor is worked!", YELLOW);
}

ClapTrap::ClapTrap(const ClapTrap& oth)
{
     _name = oth._name;
    _className = oth._className;
    _hitPoint = oth._hitPoint;
    _energyPoint = oth._energyPoint;
    _attackDamage = oth._attackDamage;
}

ClapTrap::~ClapTrap()
{
    print("ClapTrap " + _name + " destructor is worked!", YELLOW);
}

ClapTrap& ClapTrap::operator=(const ClapTrap& oth)
{
    _name = oth._name;
    _hitPoint = oth._hitPoint;
    _energyPoint = oth._energyPoint;
    _attackDamage = oth._attackDamage;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoint > 0 && _hitPoint > 0)
    {
        print("ClapTrap " + _name + " attacks " + target + ", causing " + to_String(_attackDamage) + " points of damage", PURPLE);
        _energyPoint--;
        printEnergyPoint();
    }
    else
    {
        print("Insufficient energy points or hitpoints", BLUE);
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoint > 0)
    {
        print(_className + " " + _name + " took " + to_String(amount) + " points of damage", RED);
        _hitPoint -= amount;
        printHitPoint();
        if (_hitPoint <= 0)
        {
            _hitPoint = 0;
            print(_className + " " + _name + " is dead");
        }
    }
    else
        print(_className + " " + _name + " is already dead", TURQUISE);
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoint > 0)
    {
        print(_className + " " + _name + " renewed " + to_String(amount) + " health", GREEN);
        _hitPoint += amount;
        _energyPoint--;
        printHitPoint();
        printEnergyPoint();
    }
    else
    {
        print("Insufficient energy points", BLUE);
    }
}

void ClapTrap::printHitPoint()
{
    print(_className + " " + _name + " new hitpoint " + to_String(_hitPoint));
}

void ClapTrap::printEnergyPoint()
{
    print(_className + " " + _name + " new energypoint " + to_String(_energyPoint));
}