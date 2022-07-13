#include "Right.h"
#include "Exception.h"
#include <string>
#include <iostream>

Right::Right(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC, std::string nameTriangle) : Triangle(sideA, sideB, sideC, angleA, angleB, angleC, nameTriangle)
{
    if (angleC != 90) throw Except("Угол C не равен 90 градусов");
    if (angleA + angleB + angleC != 180) throw Except("Сумма углов не равна 180 градусов");
}

void Right::print_sides()
{
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
}

void Right::print_angles()
{
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
}