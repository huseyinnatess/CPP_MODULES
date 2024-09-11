#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    print("Animal constructor is worked!", YELLOW);
}

Animal::Animal(const Animal& oth)
{
    type = oth.type;
    *this = oth;
    print("Animal copy constructor is worked!", YELLOW);
}

Animal& Animal::operator=(const Animal& oth)
{
    type = oth.type;
    return *this;
}

Animal::~Animal()
{
    print("Animal destructor is worked!", YELLOW);
}

std::string Animal::getType() const
{
    return (type);
}

void Animal::makeSound() const
{
    print("Error: Type is unkown", RED);
}