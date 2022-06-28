#include "Equilateral.h"
#include "Exception.h"
#include <iostream>


Equilateral::Equilateral(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC) : Figure("Equilateral Triangle")
{
    try
    {
        this->sideA = sideA;
        this->sideB = sideB;
        this->sideC = sideC;

        this->angleA = angleA;
        this->angleB = angleB;
        this->angleC = angleC;
        if (sideA != sideB || sideA != sideC || sideB != sideC) throw Except("Не все стороны равны");
        if (angleA != 60 || angleB != 60 || angleC != 60) throw Except("какой-то из углов не равен 60");
    }
    catch (const Except& ex) 
    { 
        std::cout << "Равносторонний треугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << "; углы " << angleA << ", " << angleB << ", " << angleC << ") не был создан. Причина: " << ex.what() << std::endl;
    }
    catch (...) 
    { 
        std::cout << "Неизвестная ошибка!" << std::endl;
    }
}

void Equilateral::print_sides()
{
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
}

void Equilateral::print_angles()
{
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
}