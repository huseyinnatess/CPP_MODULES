#ifndef ANIMAL
#define ANIMAL

#include "../Print/Print.hpp"

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal& oth);
    Animal& operator=(const Animal& oth);
    virtual ~Animal();
    virtual std::string getType() const;
    virtual void makeSound() const;
};

#endif