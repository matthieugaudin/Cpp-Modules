#include "PhoneBook.hpp"

bool	onlySpaces(const std::string &input)
{
	for (int i = 0; input[i]; i++) {
		if (!((input[i] <= 9 && input[i] >= 13) || input[i] == 32))
			return (false);
	}
	return (true);
}
