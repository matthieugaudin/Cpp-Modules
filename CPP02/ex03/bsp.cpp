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

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float distA;
	float distB;
	float distC;
	float distD;
	float distE;
	float distF;
	float areaTotal;
	float	areaA;
	float	areaB;
	float	areaC;

	if ((a.getX().toFloat() == point.getX().toFloat() && a.getY().toFloat() == point.getY().toFloat()) ||
		(b.getX().toFloat() == point.getX().toFloat() && b.getY().toFloat() == point.getY().toFloat()) ||
		(c.getX().toFloat() == point.getX().toFloat() && c.getY().toFloat() == point.getY().toFloat()))
		return (false);

	distA = calcDistance(a.getX().toFloat(), a.getY().toFloat(), b.getX().toFloat(), b.getY().toFloat());
	distB = calcDistance(b.getX().toFloat(), b.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat());
	distC = calcDistance(c.getX().toFloat(), c.getY().toFloat(), a.getX().toFloat(), a.getY().toFloat());
	
	distD = calcDistance(a.getX().toFloat(), a.getY().toFloat(), point.getX().toFloat(), point.getY().toFloat());
	distE = calcDistance(b.getX().toFloat(), b.getY().toFloat(), point.getX().toFloat(), point.getY().toFloat());
	distF = calcDistance(c.getX().toFloat(), c.getY().toFloat(), point.getX().toFloat(), point.getY().toFloat());
	
	areaTotal = calcArea(distA, distB, distC);
	areaA = calcArea(distD, distA, distE);
	areaB = calcArea(distE, distB, distF);
	areaC = calcArea(distF, distC, distD);

	float res = areaTotal - (areaA + areaB + areaC);
	if (fabs(res) < 0.0001)
		return (true);
	else
		return (false);

}

// faire un main de test
// implement edges
// better bsp code
// ask if math authorized
// equal operator
// executables names