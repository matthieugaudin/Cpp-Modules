#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc == 1) {
		std::cout << "Nothing to complain about" << std::endl;
	} else if (argc != 2) {
		std::cout << "Can't complain about several things at the same time !" << std::endl;
	} else {
		Harl		harl;
		std::string	complaint = argv[1];

		harl.complain(complaint);
	}
}
