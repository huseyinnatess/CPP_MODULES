#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    print("WrongAnimal constructor is worked!", YELLOW);
}

WrongAnimal::WrongAnimal(const WrongAnimal& oth)
{
    type = oth.type;
    *this = oth;
    print("WrongAnimal copy constructor is worked!", YELLOW);
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& oth)
{
    type = oth.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    print("WrongAnimal destructor is worked!", YELLOW);
}

std::string WrongAnimal::getType() const
{
    return (type);
}

void WrongAnimal::makeSound() const
{
    print("WrongAnimal class Error: Type is unkown", RED);
}