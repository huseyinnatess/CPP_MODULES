#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    print("Dog constructor is worked!", YELLOW);
}

Dog::Dog(const Dog& oth) : Animal(oth)
{
    type = oth.type;
    *this = oth;
    print("Dog copy constructor is worked!", YELLOW);
}

Dog& Dog::operator=(const Dog& oth)
{
    type = oth.type;
    return *this;
}

Dog::~Dog()
{
    print("Dog destructor is worked!", YELLOW);
}

std::string Dog::getType() const
{
    return (type);
}

void Dog::makeSound() const
{
    print("Hav Hav", GREEN);
}