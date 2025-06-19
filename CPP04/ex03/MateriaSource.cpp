#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
}

MateriaSource  &MateriaSource::operator=(const MateriaSource &rhs)
{
	// other args
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	// delete allocated memory
	return ;
}

void MateriaSource::learnMateria(AMateria*)
{

}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	
}