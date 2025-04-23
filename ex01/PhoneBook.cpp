PhoneBook::PhoneBook(void) {
	this->_contactsNumber = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

void	PhoneBook::addContact(
	const int index,
	const std::string firstName,
	const std::string lastName,
	const std::string nickName,
	const std::string phoneNumber,
	const std::string darkestSecret
) {
	if (this->_contactsNumber < 8)
		this->_contactsNumber++;
	this->_contacts[index].setFirstName(firstName);
	this->_contacts[index].setLastName(lastName);
	this->_contacts[index].setNickName(nickName);
	this->_contacts[index].setPhoneNumber(phoneNumber);
	this->_contacts[index].setDarkestSecret(darkestSecret);
	return ;
}

void	PhoneBook::searchContact(void) {
	char	index;

	// show all contact well formatted
	for (int i = 0; i < this->_contactsNumber; i++) {
		std::cout << i;
		std::cout << this->_contacts[i].getFirstName;
		std::cout << this->_contacts[i].getLastName;
		std::cout << this->_contacts[i].getNickName;
		std::cout << std::endl;
	}
	// ask for index
	std::cout << std::endl << "Enter an index : ";
	std::cin >> index;
	// show contact infos
	if (true) { // check index + convert it
		std::cout << "First Name : " << this->_contacts[index].getFirstName << std::endl;
		std::cout << "Last Name : " << this->_contacts[index].getLastName << std::endl;
		std::cout << "Nick Name : " << this->_contacts[index].getNickName << std::endl;
		std::cout << "Phone Number : " << this->_contacts[index].getPhoneNumber << std::endl;
		std::cout << "Darkest Secret : " << this->_contacts[index].getDarkestSecret << std::endl;
	} else {
		std::cerr << "Please enter a valid index" << std::endl;
	}
	return ;
}

void	PhoneBook::exitProgram(void) {
	exit(0);
}
