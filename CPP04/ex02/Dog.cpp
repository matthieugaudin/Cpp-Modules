#include "Dog.hpp"

Dog::Dog(void)
	: AAnimal()
{
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &src)
	: AAnimal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete (this->_brain);
}

Dog &Dog::operator=(const Dog &rhs)
{
	AAnimal::operator=(rhs);
	this->_brain = new Brain();
	*(this->_brain) = *(rhs._brain);
    return (*this);
}

void    Dog::makeSound(void) const
{
	std::cout << "Whouf Whouf" << std::endl;
}
