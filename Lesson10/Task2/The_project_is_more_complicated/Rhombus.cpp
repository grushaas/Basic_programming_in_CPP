#include "Rhombus.h"
#include <iostream>

Rhombus::Rhombus(int sideA, int angleA, int angleB) : Figure("Rhombus")
{
    this->sideA = sideA;
    sideB = sideA;
    sideC = sideA;
    sideD = sideA;

    this->angleA = angleA;
    this->angleB = angleB;
    angleC = angleA;
    angleD = angleB;
}

void Rhombus::print_sides()
{
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
}

void Rhombus::print_angles()
{
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
}