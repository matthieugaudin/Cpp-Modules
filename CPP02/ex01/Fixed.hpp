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
        // Copy assignment operator overload
        Fixed	&operator=(const Fixed &rhs);
        // Destructor
        ~Fixed(void);
        // Members methods
        int		getRawBits(void) const;
        void	setRawBits(int const raw);
        float 	toFloat(void) const;
        int   	toInt( void ) const;

    private:
		int					_rawValue;
		static const int	_fractionalPart;
};

std::ostream &operator<<(std::ostream & os, const Fixed &rhs);

#endif /* FIXED_HPP */