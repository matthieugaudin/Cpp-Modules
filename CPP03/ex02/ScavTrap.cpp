#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << _name << "'s ScavTrap constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << _name << "'s ScavTrap destructor called" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0) {
		_energyPoints--;
		std::cout	<< "ScavTrap " << target << " has been attacked by ScavTrap " << _name
					<< ", causing " << _attackDamage << " points of damage!"
					<< std::endl;
	} else {
		std::cout	<< "ScavTrap "
					<< _name
					<< " can't attack since he has no more hit points / energy points"
					<< std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	if (_energyPoints > 0 && _hitPoints > 0) {
		std::cout	<< "ScavTrap "
					<< _name
					<< " is now in Gate keeper mode."
					<< std::endl;
	} else {
		std::cout	<< "ScavTrap "
		<< _name
		<< " can't be in guarde gate mod since he has no more hit points / energy points"
		<< std::endl;
	}
}
