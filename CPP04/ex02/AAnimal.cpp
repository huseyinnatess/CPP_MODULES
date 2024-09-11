#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    print("AAnimal constructor is worked!", YELLOW);
}

AAnimal::AAnimal(const AAnimal& oth)
{
    *this = oth;
    print("AAnimal copy constructor is worked!", YELLOW);
}

AAnimal& AAnimal::operator=(const AAnimal& oth)
{
    (void)oth;
    return *this;
}

AAnimal::~AAnimal()
{
    print("AAnimal destructor is worked!", YELLOW);
}