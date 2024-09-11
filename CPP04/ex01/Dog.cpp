#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    print("Dog constructor is worked!", GREEN);
    brain = new Brain();
}

Dog::Dog(const Dog& oth) : Animal(oth)
{
    type = oth.type;
    brain = new Brain(*oth.brain);
    print("Dog copy constructor is worked!", GREEN);
}

Dog& Dog::operator=(const Dog& oth)
{
    type = oth.type;
    delete brain;
    brain = new Brain(*oth.brain);
    return *this;
}

Dog::~Dog()
{
    delete brain;
    print("Dog destructor is worked!", GREEN);
}

std::string Dog::getType() const
{
    return (type);
}

void Dog::makeSound() const
{
    print("Hav Hav", GREEN);
}

Brain *Dog::getBrain() const
{
    return brain;
}