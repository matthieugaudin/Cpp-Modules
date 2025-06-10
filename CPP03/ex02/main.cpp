#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
    FragTrap fragBob("Fragbob");
    FragTrap ok = fragBob;

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
