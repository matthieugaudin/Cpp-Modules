#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
	: _materias()
{
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &src)
	: _materias()
{
	*this = src;
}

MateriaSource  &MateriaSource::operator=(const MateriaSource &rhs)
{
	for (size_t i = 0; i < 4; ++i) {
		if (this->_materias[i] != NULL) {
			delete this->_materias[i];
			this->_materias[i] = NULL;
		}
		if (rhs._materias[i] != NULL) {
			this->_materias[i] = rhs._materias[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (size_t i = 0; i < 4; ++i) {
		if (this->_materias[i] != NULL)
			delete (this->_materias[i]);
	}
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (size_t i = 0; i < 4; ++i) {
		if (this->_materias[i] == NULL) {
			this->_materias[i] = materia;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < 4; ++i) {
		if (this->_materias[i] && this->_materias[i]->getType() == type)
			return (this->_materias[i]->clone());
	}
	return (0);
}