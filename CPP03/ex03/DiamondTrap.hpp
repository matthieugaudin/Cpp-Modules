#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &src);
		~DiamondTrap(void);
		DiamondTrap	&operator=(const DiamondTrap &rhs);
		void		attack(const std::string& target);
		void		whoAmI(void);
    private:
        std::string _name;
};

#endif /* DIAMOND_TRAP_HPP */