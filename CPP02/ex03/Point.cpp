#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
    return ;
}

Point::Point(const float x, const float y) : x(x), y(y)
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
	return (this->x);
}

const Fixed	&Point::getY(void) const
{
	return (this->y);
}

Point   &Point::operator=(const Point &rhs)
{
	static_cast<Fixed>(this->x) = static_cast<Fixed>(rhs.getX());
	static_cast<Fixed>(this->y) = static_cast<Fixed>(rhs.getY());
	return (*this);
}
