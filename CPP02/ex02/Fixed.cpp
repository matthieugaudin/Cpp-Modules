#include "Fixed.hpp"

const int	Fixed::_fractionalPart = 8;

Fixed::Fixed(void) : _rawValue(0)
{
	return ;
}

/*
value << _fractionalPart == value * 2 ^ _fractionalPart
5 << 6 == 5 * 2 ^ 6 
*/
Fixed::Fixed(const int value)
{
	this->_rawValue = (value << _fractionalPart);
}

Fixed::Fixed(const float value)
{
	this->_rawValue = roundf(value * static_cast<float>(1 << _fractionalPart));
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
}

Fixed::~Fixed(void)
{
	return ;
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

// =, >, <, >=, <=, == and != comparaison operators
Fixed	&Fixed::operator=(const Fixed &rhs)
{
	this->_rawValue = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	return (this->_rawValue > rhs.getRawBits());
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return (this->_rawValue < rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return (this->_rawValue >= rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return (this->_rawValue <= rhs.getRawBits());
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return (this->_rawValue == rhs.getRawBits());
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return (this->_rawValue != rhs.getRawBits());
}

// +, -, *, and / arithmetic operator
Fixed   Fixed::operator+(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed   Fixed::operator-(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed   Fixed::operator*(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed   Fixed::operator/(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

/*
increment/decrement operators

By convention, post-increment and pre-increment are differentiated with
the int paramter for post-increment. Post-increment operation makes a copy
of the current instance, which can be significant for performance.
*/
Fixed	&Fixed::operator++(void)
{
	++this->_rawValue;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	--this->_rawValue;
	return (*this);
}

Fixed	Fixed::operator++(int) const
{
	Fixed result = *this;
	++result._rawValue;
	return (result);
}

Fixed	Fixed::operator--(int) const
{
	Fixed result = *this;
	--result._rawValue;
	return (*this);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

std::ostream &operator<<(std::ostream &os, const Fixed &rhs)
{
	os << rhs.toFloat();
	return (os);
}