#include "Square.h"
#include "Exception.h"
#include <iostream>

Square::Square(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD) : Figure("Square")
{
    if (sideA != sideB) throw Except("������� A � B �� �����");
    if (sideA != sideC) throw Except("������� A � C �� �����");
    if (sideA != sideD) throw Except("������� A � D �� �����");
    if (sideB != sideC) throw Except("������� B � C �� �����");
    if (sideB != sideD) throw Except("������� B � D �� �����");
    if (sideC != sideD) throw Except("������� C � D �� �����");
    if (angleA != 90) throw Except("���� A �� ����� 90 ��������");
    if (angleB != 90) throw Except("���� B �� ����� 90 ��������");
    if (angleC != 90) throw Except("���� C �� ����� 90 ��������");
    if (angleD != 90) throw Except("���� D �� ����� 90 ��������");
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

void Square::print_sides()
{
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
}

void Square::print_angles()
{
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
}