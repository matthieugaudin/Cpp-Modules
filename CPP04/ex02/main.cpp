#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    // AAnimal  *animal = new AAnimal();
    AAnimal  *dog = new Dog();
    AAnimal  *cat = new Cat();
    dog->makeSound();
    cat->makeSound();

    delete cat;
    delete dog;

    return 0;
}
