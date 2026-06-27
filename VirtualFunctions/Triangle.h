#pragma once
#include "Shape.h"

class Triangle final : public Shape
{
private:
    Point p1;
    Point p2;
    Point p3;

    double side;
    double height;

public:
    Triangle(Point a, Point b, Point c, double side, double height);

    void print() const override;
    double getSquare() const override;
};