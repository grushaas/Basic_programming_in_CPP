#include "Rhombus.h"
#include "Exception.h"
#include <iostream>

Rhombus::Rhombus(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD, std::string nameQuadrilateral) : Parallelogram(sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD, nameQuadrilateral)
{
    if (sideA != sideB) throw Except("Стороны A и B не равны");
    if (sideA != sideC) throw Except("Стороны A и C не равны");
    if (sideA != sideD) throw Except("Стороны A и D не равны");
    if (sideB != sideC) throw Except("Стороны B и C не равны");
    if (sideB != sideD) throw Except("Стороны B и D не равны");
    if (sideC != sideD) throw Except("Стороны C и D не равны");
    if (angleA != angleC) throw Except("Углы A и C не равны");
    if (angleB != angleD) throw Except("Углы B и D не равны");
    if (angleA + angleB + angleC + angleD != 360) throw Except("Сумма углов не рав 360 градусов");
}

void Rhombus::print_sides()
{
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
}

void Rhombus::print_angles()
{
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
}