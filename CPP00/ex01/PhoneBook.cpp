#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->_contactNumber = 0;
	this->_contactIndex = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

void	PhoneBook::addContact(void) {
	if (this->_contactNumber < 8)
		this->_contactNumber++;

	_setContactField("First Name : ", &Contact::setFirstName, this->_contacts[this->_contactIndex]);
	_setContactField("Last Name : ", &Contact::setLastName, this->_contacts[this->_contactIndex]);
	_setContactField("Nick Name : ", &Contact::setNickName, this->_contacts[this->_contactIndex]);
	_setContactField("Phone Number : ", &Contact::setPhoneNumber, this->_contacts[this->_contactIndex]);
	_setContactField("Darkeset secret : ", &Contact::setDarkestSecret, this->_contacts[this->_contactIndex]);

	if (this->_contactIndex < 7) {
		this->_contactIndex++;
	} else {
		this->_contactIndex = 0;
	}
	return ;
}

void	PhoneBook::searchContact(void) {
	std::ostringstream	str_i;
	std::string			buffer;
	int					index;

	if (this->_contactNumber == 0) {
		std::cout << "You don't have any contact yet" << std::endl;
	} else {
		for (int i = 0; i < this->_contactNumber; i++) {
			str_i << i;
			std::cout << std::string(9, ' ') + str_i.str();
			str_i.str("");
			str_i.clear();
			std::cout << "|";
			std::cout << formatField(this->_contacts[i].getFirstName());
			std::cout << "|";
			std::cout << formatField(this->_contacts[i].getLastName());
			std::cout << "|";
			std::cout << formatField(this->_contacts[i].getNickName());
			std::cout << std::endl;
		}
			std::cout << "Enter an index : ";
			std::getline(std::cin, buffer);
			index = buffer[0] - '0';
			if (buffer.length() == 1 && (0 <= index && index <= this->_contactNumber - 1)) {
				std::cout << "First Name : " << this->_contacts[index].getFirstName() << std::endl;
				std::cout << "Last Name : " << this->_contacts[index].getLastName() << std::endl;
				std::cout << "Nick Name : " << this->_contacts[index].getNickName() << std::endl;
				std::cout << "Phone Number : " << this->_contacts[index].getPhoneNumber() << std::endl;
				std::cout << "Darkest Secret : " << this->_contacts[index].getDarkestSecret() << std::endl;
			} else {
				std::cerr << "This contact doesn't exist" << std::endl;
			}
	}
	return ;
}

std::string	PhoneBook::formatField(const std::string &field) {
	if (field.length() > 10)
		return (field.substr(0, 9) + ".");
	else
		return (std::string(10 -  field.length(), ' ') + field);
}

bool	PhoneBook::only_spaces(const std::string &input)
{
	for (int i = 0; input[i]; i++) {
		if (!((input[i] <= 9 && input[i] >= 13) || input[i] == 32))
			return (false);
	}
	return (true);
}

void	PhoneBook::_setContactField(
	const std::string &prompt,
	void (Contact::*setter)(const std::string value),
	Contact &contact
) {
	std::string input;

	std::cout << prompt;
	std::getline(std::cin, input);
	while (input.length() == 0 || only_spaces(input)) {
		std::cerr << "Contact Fields cannot be empty or only composed of withespaces" << std::endl;
		std::cout << prompt;
		std::getline(std::cin, input);
	}
	(contact.*setter)(input);
}