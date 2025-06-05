#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
    ScavTrap scavBob("Scavbob");
    ScavTrap ok = scavBob;

    ok.attack("bob");
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
