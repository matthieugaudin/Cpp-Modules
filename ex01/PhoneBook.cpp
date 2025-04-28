#include "PhoneBook.hpp"

int	PhoneBook::_contactsNumber = 0;

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

int	PhoneBook::getContactsNumber(void) const
{
	return (PhoneBook::_contactsNumber);
}

void	PhoneBook::_setContactField(
	const std::string &prompt,
	void (Contact::*setter)(const std::string value),
	Contact &contact
)
{
	std::string input;

	std::cout << prompt;
	std::cin >> input;
	std::cout << std::endl;
	(contact.*setter)(input);
}

void	PhoneBook::addContact(void)
{
	Contact	contact;

	if (PhoneBook::_contactsNumber < 8)
		PhoneBook::_contactsNumber++;

	_setContactField("First Name : ", &Contact::setFirstName, contact);
	_setContactField("Last Name : ", &Contact::setLastName, contact);
	_setContactField("Nick Name : ", &Contact::setNickName, contact);
	_setContactField("Phone Number : ", &Contact::setPhoneNumber, contact);
	_setContactField("Darkeset secret : ", &Contact::setDarkestSecret, contact);

	this->_contacts[PhoneBook::_contactsNumber - 1] = contact;
	return ;
}

void	PhoneBook::searchContact(void)
{
	char	index;

	// show all contact well formatted
	for (int i = 0; i < PhoneBook::_contactsNumber; i++) {
		std::cout << i;
		std::cout << this->_contacts[i].getFirstName();
		std::cout << this->_contacts[i].getLastName();
		std::cout << this->_contacts[i].getNickName();
		std::cout << std::endl;
	}
	// ask for index
	std::cout << std::endl << "Enter an index : ";
	std::cin >> index;
	// show contact infos
	if (true) { // check index + convert it
		std::cout << "First Name : " << this->_contacts[index].getFirstName() << std::endl;
		std::cout << "Last Name : " << this->_contacts[index].getLastName() << std::endl;
		std::cout << "Nick Name : " << this->_contacts[index].getNickName() << std::endl;
		std::cout << "Phone Number : " << this->_contacts[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret : " << this->_contacts[index].getDarkestSecret() << std::endl;
	} else {
		std::cerr << "Please enter a valid index" << std::endl;
	}
	return ;
}

void	PhoneBook::exitProgram(void)
{
	exit(0);
}
