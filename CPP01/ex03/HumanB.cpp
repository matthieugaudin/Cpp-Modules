#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
	return ;
}

HumanB::~HumanB(void) {
	return ;
}

void	HumanB::attack(void) const {

	if (this->_weapon == NULL) {
		std::cout << this->_name << " has no weapon and can't attack " << std::endl;
	} else {
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	}

}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}
