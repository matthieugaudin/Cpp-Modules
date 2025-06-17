#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(const Dog &src)
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
