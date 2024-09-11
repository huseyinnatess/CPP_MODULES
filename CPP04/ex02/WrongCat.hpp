#ifndef WrongCAT
#define WrongCAT

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat& oth);
    WrongCat& operator=(const WrongCat& oth);
    ~WrongCat();
    std::string getType() const;
    void makeSound() const;
};

#endif