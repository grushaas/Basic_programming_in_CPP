#include "Square.h"
#include <iostream>

Square::Square(int sideA) : Figure("Square")
{
    this->sideA = sideA;
    sideB = sideA;
    sideC = sideA;
    sideD = sideA;

    angleA = 90;
    angleB = 90;
    angleC = 90;
    angleD = 90;
}

void Square::print_sides()
{
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
}

void Square::print_angles()
{
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
}