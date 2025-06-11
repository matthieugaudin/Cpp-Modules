#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point &src);
		~Point(void);
		Point	&operator=(const Point &rhs);
		// anything else useful
		const Fixed	&getX(void) const;
		const Fixed	&getY(void) const;
	private:
		const Fixed	_x;
		const Fixed	_y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif /* POINT_HPP */