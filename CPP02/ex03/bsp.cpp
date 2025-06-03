#include "Point.hpp"

float		calcDistance(float x1, float y1, float x2, float y2)
{
	return (sqrtf(powf(x2 - x1, 2) + powf(y2 - y1, 2)));
}

float		calcArea(float a, float b, float c)
{
	float	s;

	s = (a + b + c) / 2.0;
	return (sqrt(s * (s - a) * (s - b) * (s - c)));
}

bool	isVertex(Point const &a, Point const &b, Point const &c, Point const &point)
{
	if ((a.getX().toFloat() == point.getX().toFloat() && a.getY().toFloat() == point.getY().toFloat()) ||
	(b.getX().toFloat() == point.getX().toFloat() && b.getY().toFloat() == point.getY().toFloat()) ||
	(c.getX().toFloat() == point.getX().toFloat() && c.getY().toFloat() == point.getY().toFloat()))
		return (true);
	else
		return (false);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (isVertex(a, b, c, point))
		return (false);

	float distA = calcDistance(a.getX().toFloat(), a.getY().toFloat(), b.getX().toFloat(), b.getY().toFloat());
	float distB = calcDistance(b.getX().toFloat(), b.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat());
	float distC = calcDistance(c.getX().toFloat(), c.getY().toFloat(), a.getX().toFloat(), a.getY().toFloat());
	
	float distD = calcDistance(a.getX().toFloat(), a.getY().toFloat(), point.getX().toFloat(), point.getY().toFloat());
	float distE = calcDistance(b.getX().toFloat(), b.getY().toFloat(), point.getX().toFloat(), point.getY().toFloat());
	float distF = calcDistance(c.getX().toFloat(), c.getY().toFloat(), point.getX().toFloat(), point.getY().toFloat());
	
	float areaTotal = calcArea(distA, distB, distC);
	float areaA = calcArea(distD, distA, distE);
	float areaB = calcArea(distE, distB, distF);
	float areaC = calcArea(distF, distC, distD);

	float res = areaTotal - (areaA + areaB + areaC);
	if (fabs(res) < 0.0001 && !(areaA < 0.0001 || areaB < 0.0001 || areaC < 0.0001))
		return (true);
	else
		return (false);

}