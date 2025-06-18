#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
	: _type("Default")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
	: _type("Default")
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void    WrongAnimal::makeSound(void) const
{
	std::cout << "WROOONGAAAAHhhhh" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}
