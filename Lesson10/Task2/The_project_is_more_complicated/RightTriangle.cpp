#include "RightTriangle.h"
#include <iostream>

Right::Right(int sideA, int sideB, int sideC, int angleA, int angleB) : Figure("Right Triangle")
{
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;

    this->angleA = angleA;
    this->angleB = angleB;
    angleC = 90;
}

void Right::print_sides()
{
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
}

void Right::print_angles()
{
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
}