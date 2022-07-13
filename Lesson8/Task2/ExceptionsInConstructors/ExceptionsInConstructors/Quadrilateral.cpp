#include "Quadrilateral.h"
#include "Exception.h"
#include <iostream>

Quadrilateral::Quadrilateral(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD, std::string nameQuadrilateral) : Figure(nameQuadrilateral)
{
    if (angleA + angleB + angleC + angleD != 360) throw Except("—умма углов не равен 360 градусов");

    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;
    this->sideD = sideD;

    this->angleA = angleA;
    this->angleB = angleB;
    this->angleC = angleC;
    this->angleD = angleD;
}

void Quadrilateral::print_sides()
{
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
}

void Quadrilateral::print_angles()
{
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
}