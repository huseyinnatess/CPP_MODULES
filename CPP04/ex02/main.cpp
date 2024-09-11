#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    size_t animalCount = 6;

    print("*------------------------ Animal Class ------------------------*", GREEN);
    Animal *animals[animalCount];

    Dog dog;
    Cat cat;
    for (size_t i = 0; i < animalCount; i++)
    {
        if (i < animalCount / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    print("Dog Idea: " + dog.getBrain()->ideas[1]);
    print("Cat Idea: " + cat.getBrain()->ideas[1]);

    for (size_t i = 0; i < animalCount; i++)
    {
        delete animals[i];
    }
    
    print("*------------------------ AAnimal Class -----------------------*", GREEN);
    AAnimal *aanimals[animalCount];

    Dog dog2;
    Cat cat2;
    for (size_t i = 0; i < animalCount; i++)
    {
        if (i < animalCount / 2)
            aanimals[i] = new Dog();
        else
            aanimals[i] = new Cat();
    }

    print("Dog Idea: " + dog2.getBrain()->ideas[1]);
    print("Cat Idea: " + cat2.getBrain()->ideas[1]);

    for (size_t i = 0; i < animalCount; i++)
    {
        delete aanimals[i];
    }
} 