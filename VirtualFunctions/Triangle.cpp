#include "Triangle.h"

Triangle::Triangle(Point a, Point b, Point c, double side, double height) : p1(a), p2(b), p3(c), side(side), height(height)
{
}

void Triangle::print() const
{
	std::cout << "Triangle : (" << p1.x << "|" << p1.y << ") (" << p2.x << "|" << p2.y << ") (" << p3.x << "|" << p3.y << ")\nHeight: " << height << "\nSide: " << side << std::endl;
}

double Triangle::getSquare() const
{
	return side * height / 2.0;
}
