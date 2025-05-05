#include "FileReplacer.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4) {
		std::cout << "Program takes 3 arguments : " << std::endl << std::endl;
		std::cout << "1 - filename" << std::endl;
		std::cout << "1 - string to find" << std::endl;
		std::cout << "1 - string to replace with" << std::endl;
	} else {
		std::string	fileName = argv[1];
		std::string	toFind = argv[2];
		std::string	toReplace = argv[3];
		FileReplacer	file(fileName, toFind, toReplace);
		file.run();
	}
}
