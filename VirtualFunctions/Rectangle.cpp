#include "Rectangle.h"

Rectangle::Rectangle(Point p, double length, double width) : Square(p, length), width(width)
{
}

void Rectangle::print() const
{

	std::cout << "Start point: " << leftTop.x << "|" << leftTop.y << "\nWidth: " << width << "\nHeight: " << length << std::endl;
}

double Rectangle::getSquare() const
{
	return length * width;
}
