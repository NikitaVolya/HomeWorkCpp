#pragma once
#include "Shape.h"

#define Pi 3.14159265


class Circle final : public Shape
{
private:
    Point center;
    int radius;

public:
    Circle(Point c, int r);

    void print() const override;
    double getSquare() const override;
};