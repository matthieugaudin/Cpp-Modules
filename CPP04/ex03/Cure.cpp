#include "Cure.hpp"

Cure::Cure(void)
    : AMateria()
{
    this->_type = "cure";
}

Cure::Cure(const Cure &src)
	: AMateria(src)
{
	*this = src;
}

Cure::~Cure(void)
{
	return ;
}

Cure	&Cure::operator=(const Cure &rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout	<< "* shoots an ice bolt at "
				<<  target.getName()
				<< " *"
				<< std::endl;
}
