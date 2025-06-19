#include "Cure.hpp"

Cure::Cure(void)
    : AMateria()
{
	std::cout << "Cure constructor called" << std::endl;
    this->_type = "cure";
}

Cure::Cure(const Cure &src)
	: AMateria(src)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
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
