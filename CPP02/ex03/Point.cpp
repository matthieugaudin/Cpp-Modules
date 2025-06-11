#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
    return ;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	return ;
}

Point::Point(const Point &src)
{
    *this = src;
}

Point::~Point(void)
{
    return ;
}

const Fixed	&Point::getX(void) const
{
	return (this->_x);
}

const Fixed	&Point::getY(void) const
{
	return (this->_y);
}

Point   &Point::operator=(const Point &rhs)
{
	static_cast<Fixed>(this->_x) = static_cast<Fixed>(rhs.getX());
	static_cast<Fixed>(this->_y) = static_cast<Fixed>(rhs.getY());
	return (*this);
}
