#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    public:
        // Default constructor
        Fixed(void);
        // Int constructor
        Fixed(const int value);
        // Float constructor
        Fixed(const float value);
        // Copy constructor
        Fixed(const Fixed &src);
        // Destructor
        ~Fixed(void);
        // Members methods
        int					getRawBits(void) const;
        void				setRawBits(int const raw);
        float 				toFloat(void) const;
        int   				toInt( void ) const;
        // =, >, <, >=, <=, == and != comparaison operators
        Fixed				&operator=(const Fixed &rhs);
        bool				operator>(const Fixed &rhs);
        bool				operator<(const Fixed &rhs);
        bool				operator>=(const Fixed &rhs);
        bool				operator<=(const Fixed &rhs);
        bool				operator==(const Fixed &rhs);
        bool				operator!=(const Fixed &rhs);
        // +, -, *, and / arithmetic operator
        Fixed				operator+(const Fixed &rhs);
        Fixed				operator-(const Fixed &rhs);
        Fixed				operator*(const Fixed &rhs);
        Fixed				operator/(const Fixed &rhs);
        // increment/decrement operators
        Fixed				&operator++(void);
        Fixed				&operator--(void);
        Fixed				operator++(int);
        Fixed				operator--(int);
        // four overloaded member function
        static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed    	&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
    private:
		int					_rawValue;
		static const int	_fractionalPart;
};

std::ostream &operator<<(std::ostream & os, const Fixed &rhs);

#endif /* FIXED_HPP */