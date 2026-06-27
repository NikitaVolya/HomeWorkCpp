#include "Square.h"


Square::Square(Point p, double l) : leftTop(p), length(l) 
{

}

void Square::print() const 
{
    std::cout << "Start point: " << leftTop.x << "|" << leftTop.y << "\nLength: " << length << std::endl;
}

double Square::getSquare() const
{
    return length * length;
}