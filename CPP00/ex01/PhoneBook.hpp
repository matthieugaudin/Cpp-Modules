#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <sstream>
# include <string>
# include <stdexcept>
# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void 		addContact(void);
		void 		searchContact(void) const;

	private:
		Contact		_contacts[8];
		int			_contactIndex;
		int			_contactNumber;
		void		_setContactField(
			const std::string &prompt,
			void (Contact::*setter)(const std::string value),
			Contact &contact
		) const;
		void	_displayContacts(void) const;
		void	_displayContactInfos(void) const;
	};
	
bool		onlySpaces(const std::string &input);
std::string	formatField(const std::string &field);

#endif /* PHONE_BOOK_HPP */