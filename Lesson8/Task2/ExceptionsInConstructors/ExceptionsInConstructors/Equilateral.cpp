#include "Equilateral.h"
#include "Exception.h"
#include <iostream>


Equilateral::Equilateral(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC, std::string nameTriangle) : Isosceles(sideA, sideB, sideC, angleA, angleB, angleC, nameTriangle)
{
    if (sideA != sideB || sideB != sideC) throw Except("Не все стороны равны");
    if (angleA != 60 || angleB != 60 || angleC != 60) throw Except("какой-то из углов не равен 60");
}

void Equilateral::print_sides()
{
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
}

void Equilateral::print_angles()
{
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
}