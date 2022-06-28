#include "Parallelogram.h"
#include "Exception.h"
#include <iostream>

Parallelogram::Parallelogram(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD) : Figure("Parallelogram")
{
    if (sideA != sideC) throw Except("������� A � C �� �����");
    if (sideB != sideD) throw Except("������� B � D �� �����");
    if (angleA != angleC) throw Except("���� A � C �� �����");
    if (angleB != angleD) throw Except("���� B � D �� �����");
    if (angleA + angleB + angleC + angleD != 360) throw Except("����� ����� �� ��� 360 ��������");
    
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;
    this->sideD = sideD;

    this->angleA = angleA;
    this->angleB = angleB;
    this->angleC = angleC;
    this->angleD = angleD;
}

void Parallelogram::print_sides()
{
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
}

void Parallelogram::print_angles()
{
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
}