#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << this->_name << "'s ScavTrap constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->_name << "'s ScavTrap destructor called" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		this->_energyPoints--;
		std::cout	<< "ScavTrap " << target << " has been attacked by ClapTrap " << this->_name
					<< ", causing " << this->_attackDamage << " points of damage!"
					<< std::endl;
	} else {
		std::cout	<< "ScavTrap "
					<< this->_name
					<< " can't attack since he has no more hit points / energy points"
					<< std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout	<< "ScavTrap "
				<< this->_name
				<< " is now in Gate keeper mode."
				<< std::endl;
}
