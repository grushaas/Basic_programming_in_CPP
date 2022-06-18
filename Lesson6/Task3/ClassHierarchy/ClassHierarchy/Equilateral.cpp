#include "Equilateral.h"
#include <iostream>

Equilateral::Equilateral(int sideA) : Figure("Equilateral Triangle")
{
    this->sideA = sideA;
    sideB = sideA;
    sideC = sideA;

    angleA = 60;
    angleB = 60;
    angleC = 60;
}

void Equilateral::print_sides()
{
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
}

void Equilateral::print_angles()
{
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
}