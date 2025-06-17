#include "Dog.hpp"

Dog::Dog(void)
	: Animal()
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src)
	: Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	Animal::operator=(rhs);
    return (*this);
}

void    Dog::makeSound(void) const
{
	std::cout << "Whouf Whouf" << std::endl;
}
