#include "Animal.hpp"

Animal::Animal(void)
	: _type("Default")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
	: _type("Default")
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void    Animal::makeSound(void) const
{
	std::cout << "AAAAHhhhh" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}
