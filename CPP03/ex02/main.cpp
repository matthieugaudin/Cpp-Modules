#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
    FragTrap fragBob("Fragbob");
    FragTrap ok = fragBob;
    ScavTrap scavBob("Scavbob");
    ScavTrap okBob = scavBob;

    okBob.attack("bob");
    scavBob.attack("Someone");
    scavBob.attack("Someone");
    scavBob.beRepaired(10);
    scavBob.takeDamage(50);
    scavBob.takeDamage(65);
    scavBob.attack("Someone");
    scavBob.beRepaired(10);
    scavBob.guardGate();

    ok.attack("bob");
    fragBob.attack("Someone");
    fragBob.attack("Someone");
    fragBob.beRepaired(10);
    fragBob.highFivesGuys();
    fragBob.takeDamage(50);
    fragBob.takeDamage(65);
    fragBob.attack("Someone");
    fragBob.beRepaired(10);
    return (0);
}
