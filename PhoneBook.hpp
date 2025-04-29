#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <cstdlib>
# include <string>
# include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void addContact(void);
		void searchContact(void);
		void exitProgram(void);
	private:
		Contact	_contacts[8];
		int		_contactIndex;
		void	_setContactField(
			const std::string &prompt,
			void (Contact::*setter)(const std::string value),
			Contact &contact
		);
};

#endif /* PHONE_BOOK_HPP */