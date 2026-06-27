#include "Circle.h"

Circle::Circle(Point c, int r) : center(c), radius(r)
{
}

void Circle::print() const
{
	std::cout << "Circle: " << center.x << "|" << center.y << "\nRadius: " << radius << std::endl;
}

double Circle::getSquare() const
{
	return Pi * radius * radius;
}
