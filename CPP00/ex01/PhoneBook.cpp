#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_contactNumber = 0;
	this->_contactIndex = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::addContact(void) {
	if (this->_contactNumber < 8)
		this->_contactNumber++;

	this->_setContactField("First Name : ", &Contact::setFirstName, this->_contacts[this->_contactIndex]);
	this->_setContactField("Last Name : ", &Contact::setLastName, this->_contacts[this->_contactIndex]);
	this->_setContactField("Nick Name : ", &Contact::setNickName, this->_contacts[this->_contactIndex]);
	this->_setContactField("Phone Number : ", &Contact::setPhoneNumber, this->_contacts[this->_contactIndex]);
	this->_setContactField("Darkeset secret : ", &Contact::setDarkestSecret, this->_contacts[this->_contactIndex]);

	if (this->_contactIndex < 7) {
		this->_contactIndex++;
	} else {
		this->_contactIndex = 0;
	}
	return ;
}

void	PhoneBook::_setContactField(
	const std::string &prompt,
	void (Contact::*setter)(const std::string value),
	Contact &contact
) const {
	std::string input;

	while (true)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if (std::cin.eof()) {
			std::cout << std::endl;
			throw std::runtime_error("end-of-file reached");
		} else if (input.length() == 0 || onlySpaces(input)) {
			std::cerr << "Contact Fields cannot be empty or only composed of withespaces\n" << std::endl;
		} else {
			(contact.*setter)(input);
			return ;
		}
	}
}

void	PhoneBook::searchContact(void) const
{
	if (this->_contactNumber == 0) {
		std::cout << "You don't have any contact yet" << std::endl;
	} else {
		this->_displayContacts();
		this->_displayContactInfos();
	}
}

void	PhoneBook::_displayContacts(void) const
{
	std::ostringstream	str_i;

	for (int i = 0; i < this->_contactNumber; i++) {
		str_i << i;
		std::cout << std::string(9, ' ') + str_i.str();
		str_i.str("");
		str_i.clear();
		std::cout	<< "|" << std::setw(10) << formatField(this->_contacts[i].getFirstName())
					<< "|" << std::setw(10) << formatField(this->_contacts[i].getLastName())
					<< "|" << std::setw(10) << formatField(this->_contacts[i].getNickName())
					<< std::endl;
	}
}

void	PhoneBook::_displayContactInfos(void) const 
{
	std::string			buffer;
	int					index;

	std::cout << "Enter an index : ";
	std::getline(std::cin, buffer);
	if (std::cin.eof()) {
		std::cout << std::endl;
		throw std::runtime_error("end-of-file reached");
	}
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