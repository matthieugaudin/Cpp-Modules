#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <sstream>
# include <string>
# include <cstdlib>
# include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void 		addContact(void);
		void 		searchContact(void);
		std::string	formatField(const std::string &field);
	private:
		Contact		_contacts[8];
		int			_contactIndex;
		int			_contactNumber;
		static bool	only_spaces(const std::string &input);
		void		_setContactField(
			const std::string &prompt,
			void (Contact::*setter)(const std::string value),
			Contact &contact
		);
};

#endif /* PHONE_BOOK_HPP */