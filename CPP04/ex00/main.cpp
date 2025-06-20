#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    
    delete meta;
    delete j;
    delete i;
    
    const WrongAnimal *wrongMeta = new WrongAnimal();
    const WrongAnimal *wrongI = new WrongCat();
    wrongMeta->makeSound();
    wrongI->makeSound();

    delete wrongMeta;
    delete wrongI;

    return 0;
}
