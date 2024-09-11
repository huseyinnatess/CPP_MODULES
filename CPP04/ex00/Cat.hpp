#ifndef CAT
#define CAT

#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat& oth);
    Cat& operator=(const Cat& oth);
    ~Cat();
    std::string getType() const;
    void makeSound() const;
};

#endif