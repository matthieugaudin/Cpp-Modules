#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: _name("DefaultName"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << this->_name << "'s ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->_name << "'s ClapTrap destructor called" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		this->_energyPoints--;
		std::cout	<< "ClapTrap " << target << " has been attacked by ClapTrap " << this->_name
					<< ", causing " << this->_attackDamage << " points of damage!"
					<< std::endl;
	} else {
		std::cout	<< "ClapTrap "
					<< this->_name
					<< " can't attack since he has no more hit points / energy points"
					<< std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0) {
		this->_hitPoints += amount;	
		this->_energyPoints--;
		std::cout	<< "ClapTrap " << this->_name
					<< " has been repaired with " << amount << " hit points"
					<< std::endl;
	} else {
		std::cout	<< "ClapTrap " << this->_name	
					<< " can't be repaired since he has no more hit points / energy points"
					<< std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0) {
		this->_hitPoints -= amount;
		if (this->_hitPoints < 0)
			this->_hitPoints = 0;
		std::cout	<< "ClapTrap " << this->_name
					<< " has been attacked with " << amount << " points of damage"
					<< std::endl;
	} else {
		std::cout	<< "ClapTrap " << this->_name
					<< " can't take damage since he has no more hit points / energy points"
					<< std::endl;
	}
}
