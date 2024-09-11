#ifndef DOG
#define DOG

#include "Animal.hpp"
#include "Brain.hpp"
#include "AAnimal.hpp"

class Dog : public Animal, public AAnimal
{
private:
    Brain *brain;
public:
    Dog();
    Dog(const Dog& oth);
    Dog& operator=(const Dog& oth);
    ~Dog();
    std::string getType() const;
    void makeSound() const;
    Brain* getBrain() const;
};

#endif