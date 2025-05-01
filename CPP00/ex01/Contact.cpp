#include "Contact.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

void	Contact::setFirstName(const std::string firstName) {
	this->_firstName = firstName;
}

void	Contact::setLastName(const std::string lastName) {
	this->_lastName = lastName;
}

void	Contact::setNickName(const std::string nickName) {
	this->_nickName = nickName;
}

void	Contact::setPhoneNumber(const std::string phoneNumber) {
	this->_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(const std::string darkestSecret) {
	this->_darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName(void) const {
	return (this->_firstName);
}

std::string	Contact::getLastName(void) const {
	return (this->_lastName);
}

std::string	Contact::getNickName(void) const {
	return (this->_nickName);
}

std::string	Contact::getPhoneNumber(void) const {
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const {
	return (this->_darkestSecret);
}
