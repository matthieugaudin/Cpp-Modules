#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <Contact.hpp>
# include <iostream>
# include <cstdlib>

class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);

		// make it reading on stdin to get the data
		void addContact(
			const std::string firstName,
			const std::string lastName,
			const std::string nickName,
			const std::string phoneNumber,
			const std::string darkestSecret
		);
		void searchContact(void);
		void exitProgram(void);
	private:
		Contact	_contacts[8];
		int _contactsNumber;
}

#endif /* PHONE_BOOK_HPP */