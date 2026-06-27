#pragma once
#include "Shape.h"

class Square : public Shape
{
protected:
    Point leftTop;
    double length;

public:
    Square(Point p, double l);

    void print() const override;
    double getSquare() const override;
};