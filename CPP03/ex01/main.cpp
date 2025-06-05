#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
    ScavTrap scavBob("Scavbob");

    scavBob.attack("Someone");
    scavBob.attack("Someone");
    scavBob.beRepaired(10);
    scavBob.takeDamage(50);
    scavBob.takeDamage(65);
    scavBob.attack("Someone");
    scavBob.beRepaired(10);
    scavBob.guardGate();
    return (0);
}
