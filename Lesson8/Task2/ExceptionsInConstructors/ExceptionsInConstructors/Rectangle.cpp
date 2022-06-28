#include "Rectangle.h"
#include "Exception.h"
#include <iostream>

Rectangle::Rectangle(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD) : Figure("Rectangle")
{
    if (sideA != sideC) throw Except("Стороны A и C не равны");
    if (sideB != sideD) throw Except("Стороны B и D не равны");
    if (angleA != 90) throw Except("Угол A не равен 90 градусов");
    if (angleB != 90) throw Except("Угол B не равен 90 градусов");
    if (angleC != 90) throw Except("Угол C не равен 90 градусов");
    if (angleD != 90) throw Except("Угол D не равен 90 градусов");
    if (angleA + angleB + angleC + angleD != 360) throw Except("Сумма углов не рав 360 градусов");

    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;
    this->sideD = sideD;

    this->angleA = angleA;
    this->angleB = angleB;
    this->angleC = angleC;
    this->angleD = angleD;
}

void Rectangle::print_sides()
{
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
}

void Rectangle::print_angles()
{
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
}