#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(int sideA, int sideB) : Figure("Rectangle")
{
    this->sideA = sideA;
    this->sideB = sideB;
    sideC = sideA;
    sideD = sideB;

    angleA = 90;
    angleB = 90;
    angleC = 90;
    angleD = 90;
}

void Rectangle::print_sides()
{
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
}

void Rectangle::print_angles()
{
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
}