#include "Equilateral.h"
#include <iostream>

Equilateral::Equilateral(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC) : Figure("Equilateral Triangle")
{
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;

    this->angleA = angleA;
    this->angleB = angleB;
    this->angleC = angleC;
}

void Equilateral::print_sides()
{
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
}

void Equilateral::print_angles()
{
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
}