#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_contactIndex = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::_setContactField(
	const std::string &prompt,
	void (Contact::*setter)(const std::string value),
	Contact &contact
)
{
	std::string input;

	std::cout << prompt;
	std::getline(std::cin, input);
	while (input.length() == 0) {
		std::cerr << "Contact Fields cannot be empty" << std::endl;
		std::cout << prompt;
		std::getline(std::cin, input);
	}
	(contact.*setter)(input);
}

void	PhoneBook::addContact(void)
{
	_setContactField("First Name : ", &Contact::setFirstName, this->_contacts[this->_contactIndex]);
	_setContactField("Last Name : ", &Contact::setLastName, this->_contacts[this->_contactIndex]);
	_setContactField("Nick Name : ", &Contact::setNickName, this->_contacts[this->_contactIndex]);
	_setContactField("Phone Number : ", &Contact::setPhoneNumber, this->_contacts[this->_contactIndex]);
	_setContactField("Darkeset secret : ", &Contact::setDarkestSecret, this->_contacts[this->_contactIndex]);

	this->_contactIndex++;
	return ;
}

void	PhoneBook::searchContact(void)
{
	std::string	buffer;
	int			index;

	// display all contact
	for (int i = 0; i < this->_contactIndex; i++) {
		std::cout << i + 1;
		std::cout << this->_contacts[i].getFirstName();
		std::cout << this->_contacts[i].getLastName();
		std::cout << this->_contacts[i].getNickName();
		std::cout << std::endl;
	}

	if (this->_contactIndex == 0) {
		std::cout << "You don't have any contact yet" << std::endl;
	}
	else {
		// ask for contact's index
		std::cout << std::endl << "Enter an index : ";
		std::getline(std::cin, buffer);
		index = buffer[0] - '0';
		// display contact infos
		if (buffer.length() == 1 && (1 <= index && index <= this->_contactIndex)) {
			std::cout << "First Name : " << this->_contacts[index - 1].getFirstName() << std::endl;
			std::cout << "Last Name : " << this->_contacts[index - 1].getLastName() << std::endl;
			std::cout << "Nick Name : " << this->_contacts[index - 1].getNickName() << std::endl;
			std::cout << "Phone Number : " << this->_contacts[index - 1].getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret : " << this->_contacts[index - 1].getDarkestSecret() << std::endl;
		} else {
			std::cerr << "This contact doesn't exist" << std::endl;
		}
	}
	return ;
}

void	PhoneBook::exitProgram(void)
{
	exit(0);
}
