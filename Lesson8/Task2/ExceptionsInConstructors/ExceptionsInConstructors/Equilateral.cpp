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
        if (sideA != sideB || sideA != sideC || sideB != sideC) throw Except("�� ��� ������� �����");
        if (angleA != 60 || angleB != 60 || angleC != 60) throw Except("�����-�� �� ����� �� ����� 60");
    }
    catch (const Except& ex) 
    { 
        std::cout << "�������������� ����������� (�������: " << sideA << ", " << sideB << ", " << sideC << "; ���� " << angleA << ", " << angleB << ", " << angleC << ") �� ��� ������. �������: " << ex.what() << std::endl;
    }
    catch (...) 
    { 
        std::cout << "����������� ������!" << std::endl;
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