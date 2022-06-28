#include "Isosceles.h"
#include "Exception.h"
#include <iostream>

Isosceles::Isosceles(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC) : Figure("Isosceles Triangle")
{
    if (sideA != sideC) throw Except("Стороны A и B не равны");
    if (angleA != angleC) throw Except("Углы A и B не равны");
    if (angleA + angleB + angleC != 180) throw Except("сумма углов не равна 180");

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