#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
    : ClapTrap("DefaultName_clap_name"), ScavTrap(), FragTrap(), _name("DefaultName")
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
    _hitPoints = FragTrap::_FragHitPoints;
    _energyPoints = ScavTrap::_ScavEnergyPoints;
    _attackDamage = FragTrap::_FragAttackDamage;
	return ;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
    _hitPoints = FragTrap::_FragHitPoints;
    _energyPoints = ScavTrap::_ScavEnergyPoints;
    _attackDamage = FragTrap::_FragAttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << _name << "'s DiamondTrap destructor called" << std::endl;
	return ;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &rhs)
{
    ClapTrap::operator=(rhs);
    ScavTrap::operator=(rhs);
    FragTrap::operator=(rhs);
    return (*this);
}

void		DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void		DiamondTrap::whoAmI(void)
{  
    std::cout   << "My DiamondTrap name is : "
                << this->_name
                << " and my ClapTrap name is : "
                << ClapTrap::_name
                << std::endl;
}
