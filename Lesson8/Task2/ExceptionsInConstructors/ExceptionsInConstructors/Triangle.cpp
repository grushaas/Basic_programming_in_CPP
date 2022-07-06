#include "Triangle.h"
#include "Exception.h"
#include <iostream>

Triangle::Triangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC) : Figure("Triangle")
{
    if (angleA + angleB + angleC != 180) throw Except("сумма углов не равна 180");

    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;

    this->angleA = angleA;
    this->angleB = angleB;
    this->angleC = angleC;
}

void Triangle::print_sides()
{
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
}

void Triangle::print_angles()
{
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
}