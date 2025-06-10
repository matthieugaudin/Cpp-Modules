#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <sstream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		bool 		addContact(void);
		bool 		searchContact(void) const;

	private:
		Contact		_contacts[8];
		int			_contactIndex;
		int			_contactNumber;
		bool		_setContactField(
			const std::string &prompt,
			void (Contact::*setter)(const std::string value),
			Contact &contact
		) const;
		void	_displayContacts(void) const;
		bool	_displayContactInfos(void) const;
	};
	
bool		onlySpaces(const std::string &input);
std::string	formatField(const std::string &field);

#endif /* PHONE_BOOK_HPP */