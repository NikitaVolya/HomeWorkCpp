#include <iostream>
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

int main()
{
    Shape* shapes[]
    {
        new Square({0,0}, 5),
        new Rectangle({1,1}, 6, 4),
        new Circle({3,3}, 7),
        new Triangle({0,0}, {1,5}, {4,2}, 6, 4)
    };

    for (Shape* shape : shapes)
    {
        shape->print();
        std::cout << "Area = " << shape->getSquare() << "\n\n";
    }

    for (Shape* shape : shapes)
        delete shape;
}