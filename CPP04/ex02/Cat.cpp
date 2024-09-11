#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    brain = new Brain();
    print("Cat constructor is worked!", PURPLE);
}

Cat::Cat(const Cat& oth) : Animal(oth), AAnimal(oth)
{
    type = oth.type;
    brain = new Brain(*oth.brain);
    print("Cat copy constructor is worked!", PURPLE);
}

Cat& Cat::operator=(const Cat& oth)
{
    type = oth.type;
    delete brain;
    brain = new Brain(*oth.brain);
    return *this;
}

Cat::~Cat()
{
    delete brain;
    print("Cat destructor is worked!", PURPLE);
}

std::string Cat::getType() const
{
    return (type);
}

void Cat::makeSound() const
{
    print("Miav Miav", GREEN);
}

Brain *Cat::getBrain() const
{
    return brain;
}