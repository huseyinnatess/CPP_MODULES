#ifndef CAT
#define CAT

#include "Animal.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public Animal, public AAnimal
{
private:
    Brain *brain;
public:
    Cat();
    Cat(const Cat& oth);
    Cat& operator=(const Cat& oth);
    ~Cat();
    std::string getType() const;
    void makeSound() const;
    Brain* getBrain() const;
};

#endif