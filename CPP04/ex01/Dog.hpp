#ifndef DOG
#define DOG

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog& oth);
    Dog& operator=(const Dog& oth);
    ~Dog();
    std::string getType() const;
    void makeSound() const;
    Brain* getBrain() const;
private:
    Brain *brain;
};

#endif