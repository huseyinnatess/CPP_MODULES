#ifndef AANIMAL
#define AANIMAL

#include "../Print/Print.hpp"

class AAnimal
{
public:
    AAnimal();
    AAnimal(const AAnimal& oth);
    AAnimal& operator=(const AAnimal& oth);
    virtual ~AAnimal();
    virtual std::string getType() const = 0;
    virtual void makeSound() const = 0;
};

#endif