#include "PhoneBook.hpp"

std::string	formatField(const std::string &field)
{
	if (field.length() > 10)
		return (field.substr(0, 9) + ".");
	else
		return (std::string(10 -  field.length(), ' ') + field);
}
