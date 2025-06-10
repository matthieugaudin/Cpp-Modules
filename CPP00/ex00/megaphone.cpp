#include <iostream>
#include <iterator>

int main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	} else {
		for (size_t i = 1; i < static_cast<size_t>(argc); ++i) {
			const std::string arg = argv[i];
			for (std::string::const_iterator it = arg.begin(); it != arg.end(); ++it) {
				std::cout << static_cast<unsigned char>(std::toupper(*it));
			}
		}
		std::cout << std::endl;
	}
}
