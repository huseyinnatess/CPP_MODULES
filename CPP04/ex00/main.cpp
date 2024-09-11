#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    print("Type: " + j->getType(), BLUE);
    print("Type: " + i->getType(), BLUE);
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    WrongAnimal *animal = new WrongCat();
    print("Type: " + animal->getType(), BLUE);
    animal->makeSound();

    delete i;
    delete j;
    delete meta;
    delete animal;
}