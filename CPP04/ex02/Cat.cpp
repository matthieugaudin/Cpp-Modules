#include "Cat.hpp"

Cat::Cat(void)
	: AAnimal()
{
	std::cout << "Cat constructor called" << std::endl;
    this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &src)
	: AAnimal(src)
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
	AAnimal::operator=(rhs);
	this->_brain = new Brain();
	*(this->_brain) = *(rhs._brain);
    return (*this);
}

void    Cat::makeSound(void) const
{
	std::cout << "Miaou Miaou" << std::endl;
}
