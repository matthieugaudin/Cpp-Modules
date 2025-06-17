#include "Cat.hpp"

Cat::Cat(void)
	: Animal()
{
	std::cout << "Cat constructor called" << std::endl;
    this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &src)
	: Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete (this->_brain);
}

Cat &Cat::operator=(const Cat &rhs)
{
	Animal::operator=(rhs);
	this->_brain = new Brain();
	*(this->_brain) = *(rhs._brain);
    return (*this);
}

void    Cat::makeSound(void) const
{
	std::cout << "Miaou Miaou" << std::endl;
}
