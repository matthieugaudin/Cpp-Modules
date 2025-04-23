#include <iostream>

class Contact {
    public:
        Contact(void);
        ~Contact(void);

        // setters
        void setFirstName(const std::string firstName);
        void setLastName(const std::string lastName);
        void setNickName(const std::string nickName);
        void setPhoneNumber(const std::string phoneNumber);
        void setDarkestSecret(const std::string darkestSecret);

        // getters
        std::string getFirstName(void) const;
        std::string getLastName(void) const;
        std::string getNickName(void) const;
        std::string getPhoneNumber(void) const;
        std::string getDarkestSecret(void) const;
    private:
        std::string	_firstName;
        std::string	_lastName;
        std::string	_nickName;
        std::string	_phoneNumber;
		std::string	_darkestSecret;
}
