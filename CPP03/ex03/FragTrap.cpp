#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	_hitPoints = 100;
	this->_FragHitPoints = _hitPoints;
	_energyPoints = 100;
	this->_FragEnergyPoints = _energyPoints;
	_attackDamage = 30;
	this->_FragAttackDamage = _attackDamage;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << _name << "'s FragTrap constructor called" << std::endl;
	_hitPoints = 100;
	this->_FragHitPoints = _hitPoints;
	_energyPoints = 100;
	this->_FragEnergyPoints = _energyPoints;
	_attackDamage = 30;
	this->_FragAttackDamage = _attackDamage;
	return ;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << _name << "'s FragTrap destructor called" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (_energyPoints > 0 && _hitPoints > 0) {
		std::cout	<< "FragTrap "
					<< _name
					<< " has given you a high fives !"
					<< std::endl;
	} else {
		std::cout	<< "ScavTrap "
		<< _name
		<< " can't do a high fives since he has no more hit points / energy points"
		<< std::endl;
	}
}
