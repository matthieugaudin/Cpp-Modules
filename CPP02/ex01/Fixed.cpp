#include "Fixed.hpp"
#include <cmath>

const int	Fixed::_fractionalPart = 8;

Fixed::Fixed(void) : _rawValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawValue = (value << _fractionalPart);
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawValue = roundf(value * static_cast<float>(1 << _fractionalPart));
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	return (this->_rawValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawValue = raw;
}

float 	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_rawValue) / static_cast<float>(1 << _fractionalPart));
}

int   	Fixed::toInt(void) const
{
	return (this->_rawValue >> _fractionalPart);
}

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawValue = rhs.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed &rhs)
{
	os << rhs.toFloat();
	return (os);
}