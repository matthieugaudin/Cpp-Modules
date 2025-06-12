#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
    DiamondTrap bob("bob");
    bob.attack("someone");
    bob.highFivesGuys();
    bob.guardGate();
    bob.whoAmI();
    bob.beRepaired(50);
    bob.takeDamage(150);
    bob.attack("someone");
    bob.beRepaired(50);

    DiamondTrap alice;

    alice = bob;
    alice.guardGate();
    DiamondTrap alice1(bob);

    alice1.attack("someone");
    alice1.highFivesGuys();
    return (0);
}
