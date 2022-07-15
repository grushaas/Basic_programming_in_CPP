#include "Parallelogram.h"
#include "Exception.h"
#include <iostream>

Parallelogram::Parallelogram(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD, std::string nameQuadrilateral) : Quadrilateral(sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD, nameQuadrilateral)
{
    if (sideA != sideC) throw Except("Стороны A и C не равны");
    if (sideB != sideD) throw Except("Стороны B и D не равны");
    if (angleA != angleC) throw Except("Углы A и C не равны");
    if (angleB != angleD) throw Except("Углы B и D не равны");
}

void Parallelogram::print_sides()
{
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
}

void Parallelogram::print_angles()
{
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
}