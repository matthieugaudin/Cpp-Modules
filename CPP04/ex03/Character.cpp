#include "Character.hpp"

Character::Character(void)
	: _name("Default"), _materias()
{
	return ;
}

Character::Character(const std::string name)
	: _name(name), _materias()
{
	return ;
}

Character::Character(const Character &src)
	: _materias()
{
	*this = src;
}

Character::~Character(void)
{
	for (size_t i = 0; i < 4; ++i) {
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
	}
}

Character	&Character::operator=(const Character &rhs)
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
	this->_name = rhs._name;
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for (size_t i = 0; i < 4; ++i) {
		if (this->_materias[i] == NULL) {
			this->_materias[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if ((idx >= 0 && idx <= 3) && this->_materias[idx] != NULL) {
		this->_materias[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if ((idx >= 0 && idx <= 3) && this->_materias[idx] != NULL) {
		this->_materias[idx]->use(target);
	}
}
