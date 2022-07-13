#include <iostream>
#include "Exception.h"
#include "Figure.h"
#include "Triangle.h"
#include "Right.h"
#include "Isosceles.h"
#include "Equilateral.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

enum class figure
{
    Triangle = 1,
    RightTriangle,
    IsoscelesTriangle,
    EquilateralTriangle,
    Quadrilateral,
    Rectangle,
    Square,
    Parallelogram,
    Rhombus
};

void Set_values_triangle(int& sideA, int& sideB, int& sideC, int& angleA, int& angleB, int& angleC)
{
    std::cout << "Введите стороны по порядку" << std::endl;
    std::cout << "sideA - ";
    std::cin >> sideA;
    std::cout << "sideB - ";
    std::cin >> sideB;
    std::cout << "sideC - ";
    std::cin >> sideC;

    std::cout << std::endl;

    std::cout << "Введите углы по порядку" << std::endl;
    std::cout << "angleA - ";
    std::cin >> angleA;
    std::cout << "angleB - ";
    std::cin >> angleB;
    std::cout << "angleC - ";
    std::cin >> angleC;
}

void Set_values_quadrilateral(int& sideA, int& sideB, int& sideC, int& sideD, int& angleA, int& angleB, int& angleC, int& angleD)
{
    std::cout << "Введите стороны по порядку" << std::endl;
    std::cout << "sideA - ";
    std::cin >> sideA;
    std::cout << "sideB - ";
    std::cin >> sideB;
    std::cout << "sideC - ";
    std::cin >> sideC;
    std::cout << "sideD - ";
    std::cin >> sideD;

    std::cout << std::endl;

    std::cout << "Введите углы по порядку" << std::endl;
    std::cout << "angleA - ";
    std::cin >> angleA;
    std::cout << "angleB - ";
    std::cin >> angleB;
    std::cout << "angleC - ";
    std::cin >> angleC;
    std::cout << "angleD - ";
    std::cin >> angleD;
}

void InstanceVerification()
{
    int number = 0;

    std::cout << "Какую фигуру хотите создать\n Triangle-1, RightTriangle-2, IsoscelesTriangle-3, EquilateralTriangle-4, Quadrilateral-5, Rectangle-6, Square-7, Parallelogram-8, Rhombus-9: ";
    std::cin >> number;

    switch (static_cast<figure>(number))
    {
        case figure::Triangle:
        {
            int sideA = 0, sideB = 0, sideC = 0;
            int angleA = 0, angleB = 0, angleC = 0;

            Set_values_triangle(sideA, sideB, sideC, angleA, angleB, angleC);
            try
            {
                Triangle trian(sideA, sideB, sideC, angleA, angleB, angleC, "Triangle");
                std::cout << "Треугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << "; углы " << angleA << ", " << angleB << ", " << angleC << ") создан " << std::endl;
            }
            catch (Except& ex) 
            { 
                std::cout << "Треугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << "; углы " << angleA << ", " << angleB << ", " << angleC << ") не был создан. Причина: " << ex.what() << std::endl; 
            }
            catch (...)
            {
                std::cout << "Неизвестная ошибка!" << std::endl;
            }
            break;

        }

        case figure::RightTriangle:
        {
            int sideA = 0, sideB = 0, sideC = 0;
            int angleA = 0, angleB = 0, angleC = 0;

            Set_values_triangle(sideA, sideB, sideC, angleA, angleB, angleC);

            try
            {
                Right right(sideA, sideB, sideC, angleA, angleB, angleC, "Right Triangle");
                std::cout << "Прямоугольный треугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << "; углы " << angleA << ", " << angleB << ", " << angleC << ") создан" << std::endl;
            }
            catch (const Except& ex) 
            { 
                std::cout << "Прямоугольный треугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << "; углы " << angleA << ", " << angleB << ", " << angleC << ") не был создан. Причина: " << ex.what() << std::endl; 
            }
            catch (...) 
            { 
                std::cout << "Неизвестная ошибка!" << std::endl; 
            }
            break;

        }

        case figure::IsoscelesTriangle:
        {
            int sideA = 0, sideB = 0, sideC = 0;
            int angleA = 0, angleB = 0, angleC = 0;

            Set_values_triangle(sideA, sideB, sideC, angleA, angleB, angleC);

            try
            {
                Isosceles isos(sideA, sideB, sideC, angleA, angleB, angleC, "Isosceles Triangle");
                std::cout << "Равнобедренный треугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << "; углы " << angleA << ", " << angleB << ", " << angleC << ") создан" << std::endl;
            }
            catch (const Except& ex)
            {
                std::cout << "Равнобедренный треугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << "; углы " << angleA << ", " << angleB << ", " << angleC << ") не был создан. Причина: " << ex.what() << std::endl;
            }
            catch (...)
            {
                std::cout << "Неизвестная ошибка!" << std::endl;
            }
            break;

        }

        case figure::EquilateralTriangle:
        {
            int sideA = 0, sideB = 0, sideC = 0;
            int angleA = 0, angleB = 0, angleC = 0;

            Set_values_triangle(sideA, sideB, sideC, angleA, angleB, angleC);

            try
            {
                Equilateral equil(sideA, sideB, sideC, angleA, angleB, angleC, "Equilateral Triangle");
                std::cout << "Равносторонний треугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << "; углы " << angleA << ", " << angleB << ", " << angleC << ") создан" << std::endl;
            }
            catch (const Except& ex)
            {
                std::cout << "Равносторонний треугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << "; углы " << angleA << ", " << angleB << ", " << angleC << ") не был создан. Причина: " << ex.what() << std::endl;
            }
            catch (...)
            {
                std::cout << "Неизвестная ошибка!" << std::endl;
            }
            break;

        }

        case figure::Quadrilateral:
        {
            int sideA = 0, sideB = 0, sideC = 0, sideD = 0;
            int angleA = 0, angleB = 0, angleC = 0, angleD = 0;

            Set_values_quadrilateral(sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD);

            try
            {
                Quadrilateral quad(sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD, "Quadrilateral");
                std::cout << "Четырехугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << "; углы " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << ") создан" << std::endl;
            }
            catch (const Except& ex)
            {
                std::cout << "Равносторонний треугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << "; углы " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << ") не был создан. Причина: " << ex.what() << std::endl;
            }
            catch (...)
            {
                std::cout << "Неизвестная ошибка!" << std::endl;
            }
            break;

        }

        case figure::Rectangle:
        {
            int sideA = 0, sideB = 0, sideC = 0, sideD = 0;
            int angleA = 0, angleB = 0, angleC = 0, angleD = 0;

            Set_values_quadrilateral(sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD);

            try
            {
                Rectangle rect(sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD, "Rectangle");
                std::cout << "Прямоугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << "; углы " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << ") создан" << std::endl;
            }
            catch (const Except& ex)
            {
                std::cout << "Прямоугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << "; углы " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << ") не был создан. Причина: " << ex.what() << std::endl;
            }
            catch (...)
            {
                std::cout << "Неизвестная ошибка!" << std::endl;
            }
            break;

        }

        case figure::Square:
        {
            int sideA = 0, sideB = 0, sideC = 0, sideD = 0;
            int angleA = 0, angleB = 0, angleC = 0, angleD = 0;

            Set_values_quadrilateral(sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD);

            try
            {
                Square square(sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD, "Square");
                std::cout << "Квадрат (Стороны: " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << "; углы " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << ") создан" << std::endl;
            }
            catch (const Except& ex)
            {
                std::cout << "Квадрат (Стороны: " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << "; углы " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << ") не был создан. Причина: " << ex.what() << std::endl;
            }
            catch (...)
            {
                std::cout << "Неизвестная ошибка!" << std::endl;
            }
            break;

        }

        case figure::Parallelogram:
        {
            int sideA = 0, sideB = 0, sideC = 0, sideD = 0;
            int angleA = 0, angleB = 0, angleC = 0, angleD = 0;

            Set_values_quadrilateral(sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD);

            try
            {
                Parallelogram parall(sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD, "Parallelogram");
                std::cout << "Параллелограмм (Стороны: " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << "; углы " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << ") создан" << std::endl;
            }
            catch (const Except& ex)
            {
                std::cout << "Параллелограмм (Стороны: " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << "; углы " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << ") не был создан. Причина: " << ex.what() << std::endl;
            }
            catch (...)
            {
                std::cout << "Неизвестная ошибка!" << std::endl;
            }
            break;

        }

        case figure::Rhombus:
        {
            int sideA = 0, sideB = 0, sideC = 0, sideD = 0;
            int angleA = 0, angleB = 0, angleC = 0, angleD = 0;

            Set_values_quadrilateral(sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD);

            try
            {
                Rhombus rhomb(sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD, "Rhombus");
                std::cout << "Квадрат (Стороны: " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << "; углы " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << ") создан" << std::endl;
            }
            catch (const Except& ex)
            {
                std::cout << "Квадрат (Стороны: " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << "; углы " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << ") не был создан. Причина: " << ex.what() << std::endl;
            }
            catch (...)
            {
                std::cout << "Неизвестная ошибка!" << std::endl;
            }
            break;

        }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    InstanceVerification();
    return 0;
}
