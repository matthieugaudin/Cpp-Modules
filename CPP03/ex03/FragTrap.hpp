#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &src);
		~FragTrap(void);
		FragTrap	&operator=(const FragTrap &rhs);
		void		highFivesGuys(void);
	protected:
		int		_FragEnergyPoints;
		int		_FragHitPoints;
		int		_FragAttackDamage;
};

#endif /* FRAG_TRAP_HPP */