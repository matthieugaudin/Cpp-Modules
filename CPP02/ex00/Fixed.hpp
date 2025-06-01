#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    public:
        // Default constructor
        Fixed(void);
        // Copy constructor
        Fixed(const Fixed &src);
        // Copy assignment operator overload
        Fixed	&operator=(const Fixed &rhs);
        // Destructor
        ~Fixed(void);
		// Members methods
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
    private:
		int					      _rawValue;
		static const int	_fractionalPart;
};

#endif /* FIXED_HPP */