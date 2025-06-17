#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    Animal  *animals[10];

    for (size_t i = 0; i < 5; ++i) {
        animals[i] = new Dog();
    }
    for (size_t i = 5; i < 10; ++i) {
        animals[i] = new Cat();
    }
    for (size_t i = 0; i < 10; ++i) {
        delete animals[i];
    }

    return 0;
}
