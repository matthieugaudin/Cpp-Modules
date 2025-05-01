#include "Zombie.hpp"

int	main(void) {

    Zombie	*horde;
	int		nb = 10;

	horde = zombieHorde(nb, "hordeMember");
	for (int i = 0; i < nb; i++) {
		horde[i].announce();
	}

	delete[] horde;
}
