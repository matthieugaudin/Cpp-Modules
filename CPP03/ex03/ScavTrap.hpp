#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &src);
		~ScavTrap(void);
		ScavTrap	&operator=(const ScavTrap &rhs);
		void		attack(const std::string& target);
		void		guardGate(void);
	protected:
		int		_ScavEnergyPoints;
		int		_ScavHitPoints;
		int		_ScavAttackDamage;
};

#endif /* SCAV_TRAP_HPP */