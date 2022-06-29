#include "IsoscelesTriangle.h"
#include <iostream>

Isosceles::Isosceles(int sideA, int sideB, int angleA, int angleB) : Figure("Isosceles Triangle")
{
    this->sideA = sideA;
    this->sideB = sideB;
    sideC = sideA;

    this->angleA = angleA;
    this->angleB = angleB;
    angleC = angleA;
}

void Isosceles::print_sides()
{
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
}

void Isosceles::print_angles()
{
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
}