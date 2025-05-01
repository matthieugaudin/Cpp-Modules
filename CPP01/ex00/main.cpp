#include "Zombie.hpp"

int	main(void) {

	Zombie	*heapZombie;

	randomChump("theo");
	heapZombie = newZombie("nathan");

	heapZombie->announce();
	delete heapZombie;
}
