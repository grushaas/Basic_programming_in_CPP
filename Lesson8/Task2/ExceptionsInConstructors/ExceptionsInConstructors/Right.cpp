#include "Right.h"
#include "Exception.h"
#include <iostream>

Right::Right(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC) : Figure("Right Triangle")
{
    if (angleC != 90) throw Except("���� C �� ����� 90 ��������");
    if (angleA + angleB + angleC != 180) throw Except("����� ����� �� ����� 180 ��������");
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;

    this->angleA = angleA;
    this->angleB = angleB;
    this->angleC = angleC;
}

void Right::print_sides()
{
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
}

void Right::print_angles()
{
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
}