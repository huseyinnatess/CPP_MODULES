#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    print("Cat constructor is worked!", YELLOW);
}

Cat::Cat(const Cat& oth) : Animal(oth)
{
    type = oth.type;
    *this = oth;
    print("Cat copy constructor is worked!", YELLOW);
}

Cat& Cat::operator=(const Cat& oth)
{
    type = oth.type;
    return *this;
}

Cat::~Cat()
{
    print("Cat destructor is worked!", YELLOW);
}

std::string Cat::getType() const
{
    return (type);
}

void Cat::makeSound() const
{
    print("Miav Miav", GREEN);
}