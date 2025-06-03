#include "Point.hpp"

float	getAbsoluteValue(float x)
{
	return (x < 0.0f ? -x : x);
}

float	calcArea(float x1, float y1, float x2, float y2, float x3, float y3)
{
	return (getAbsoluteValue((x1 * (y2-y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float areaTotal = calcArea(
		a.getX().toFloat(), a.getY().toFloat(),
		b.getX().toFloat(), b.getY().toFloat(),
		c.getX().toFloat(), c.getY().toFloat()
	);
	float areaA = calcArea(
		point.getX().toFloat(), point.getY().toFloat(),
		b.getX().toFloat(), b.getY().toFloat(),
		c.getX().toFloat(), c.getY().toFloat()
	);
	float areaB = calcArea(
		a.getX().toFloat(), a.getY().toFloat(),
		point.getX().toFloat(), point.getY().toFloat(),
		c.getX().toFloat(), c.getY().toFloat()
	);
	float areaC = calcArea(
		a.getX().toFloat(), a.getY().toFloat(),
		b.getX().toFloat(), b.getY().toFloat(),
		point.getX().toFloat(), point.getY().toFloat()
	);

	float res = areaTotal - (areaA + areaB + areaC);
	if (getAbsoluteValue(res) < 0.0001 && !(areaA < 0.0001 || areaB < 0.0001 || areaC < 0.0001))
		return (true);
	else
		return (false);
}