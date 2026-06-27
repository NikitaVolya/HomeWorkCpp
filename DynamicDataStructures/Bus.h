#pragma once
#include <string>


class Bus
{
public:

    int number;
    std::string driver;
    int route;
    int seats;

    Bus() : number(0), driver("None"), route(0), seats(0) {

    }
    Bus(int number, std::string driver, int route, int seats) : number(number), driver(driver), route(route), seats(seats) {

    }
};

