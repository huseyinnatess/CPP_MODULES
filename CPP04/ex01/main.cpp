#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    size_t animalCount = 100;
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
    
    print("******************* IDEA ******************", RED);
    print("Dog Idea: " + dog.getBrain()->ideas[1]);
    print("Cat Idea: " + cat.getBrain()->ideas[1]);
    print("******************* IDEA ******************", RED);
    
    for (size_t i = 0; i < animalCount; i++)
    {
        delete animals[i];
    }
    
} 