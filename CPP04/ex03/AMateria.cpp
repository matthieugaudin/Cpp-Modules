#include "AMateria.hpp"

AMateria::AMateria(void)
	: _type("Default")
{
	return ;
}

AMateria::AMateria(std::string const & type)
	: _type(type)
{
	return ;
}

AMateria::AMateria(const AMateria &src)
{
	return ;
	*this = src;
}

AMateria::~AMateria(void)
{
	return ;
}

AMateria	&AMateria::operator=(const AMateria &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout	<< "* "
				<< this->_type
				<< " materia use on "
				<<  target.getName()
				<< " *"
				<< std::endl;
}
