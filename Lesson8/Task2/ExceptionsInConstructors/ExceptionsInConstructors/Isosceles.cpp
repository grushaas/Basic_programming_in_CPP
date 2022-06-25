#include "Isosceles.h"
#include <iostream>

Isosceles::Isosceles(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC) : Figure("Isosceles Triangle")
{
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;

    this->angleA = angleA;
    this->angleB = angleB;
    this->angleC = angleC;
}

void Isosceles::print_sides()
{
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
}

void Isosceles::print_angles()
{
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
}