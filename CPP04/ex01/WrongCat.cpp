#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    print("WrongCat constructor is worked!", YELLOW);
}

WrongCat::WrongCat(const WrongCat& oth) : WrongAnimal(oth)
{
    type = oth.type;
    *this = oth;
    print("WrongCat copy constructor is worked!", YELLOW);
}

WrongCat& WrongCat::operator=(const WrongCat& oth)
{
    type = oth.type;
    return *this;
}

WrongCat::~WrongCat()
{
    print("WrongCat destructor is worked!", YELLOW);
}

std::string WrongCat::getType() const
{
    return (type);
}

void WrongCat::makeSound() const
{
    print("Fake Miav Miav", GREEN);
}