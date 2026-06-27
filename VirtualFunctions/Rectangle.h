#pragma once
#include "Square.h"


class Rectangle final : public Square
{
protected:
    double width;

public:
    Rectangle(Point p, double length, double width);

    void print() const override;
    double getSquare() const override;
};