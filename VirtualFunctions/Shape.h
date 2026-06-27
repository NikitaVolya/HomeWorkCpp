#pragma once
#include <iostream>

#ifndef _SHAPE_H_
#define _SHAPE_H_

struct Point
{
    double x;
    double y;
};


class Shape
{
public:
    virtual void print() const = 0;
    virtual double getSquare() const = 0;

    virtual ~Shape() = default;
};

#endif /* _SHAPE_H_ */