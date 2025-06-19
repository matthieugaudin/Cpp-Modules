#include "Ice.hpp"

Ice::Ice(void)
    : AMateria()
{
	std::cout << "Ice constructor called" << std::endl;
    this->_type = "Ice";
}

Ice::Ice(const Ice &src)
	: AMateria(src)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice	&Ice::operator=(const Ice &rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout	<< "* heals "
				<< target.getName()
				<< "’s wounds *"
				<< std::endl;
}
