#include "ClapTrap.hpp"

int	main(void)
{
    ClapTrap    bob_cpy;
    ClapTrap    bob("bob");
    
    bob_cpy = bob;
    ClapTrap    bob_cpy2(bob_cpy);

    bob.attack("alice");
    bob.takeDamage(11);
    bob.takeDamage(3);
    bob.attack("alice");
    bob.beRepaired(11);
    bob.beRepaired(4);
    bob.beRepaired(3);
    bob.takeDamage(10);

    bob.attack("alice");
    bob.takeDamage(5);
    bob.beRepaired(5);

    bob_cpy.attack("alice");
    bob_cpy.attack("alice");
    bob_cpy.attack("alice");
    bob_cpy.attack("alice");
    bob_cpy.attack("alice");
    bob_cpy.attack("alice");
    bob_cpy.attack("alice");
    bob_cpy.attack("alice");
    bob_cpy.attack("alice");
    bob_cpy.attack("alice");

    bob_cpy.attack("alice");
    bob_cpy.takeDamage(5);
    bob_cpy.beRepaired(0);

    return (0);
}
