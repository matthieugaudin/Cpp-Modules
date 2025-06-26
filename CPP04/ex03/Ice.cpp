#include "Ice.hpp"

Ice::Ice(void)
    : AMateria()
{
    this->_type = "ice";
}

Ice::Ice(const Ice &src)
	: AMateria(src)
{
	*this = src;
}

Ice::~Ice(void)
{
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
