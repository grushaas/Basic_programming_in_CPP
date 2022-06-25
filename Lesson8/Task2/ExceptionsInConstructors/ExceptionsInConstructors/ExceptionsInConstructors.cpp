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

//void print(Figure& figure)
//{
//    figure.print();
//    std::cout << std::endl;
//    std::cout << std::endl;
//}

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

            try
            {
                if (angleA + angleB + angleC != 180) throw Except("сумма углов не равна 180");
                Triangle trian(sideA, sideB, sideC, angleA, angleB, angleC);
                std::cout << "Треугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << "; углы " << angleA << ", " << angleB << ", " << angleC << ") создан" << std::endl;
            }
            catch (const Except& ex) { std::cout << "Треугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << "; углы " << angleA << ", " << angleB << ", " << angleC << ") не был создан. Причина: " << ex.what() << std::endl; }
            catch (...) { std::cout << "Неизвестная ошибка!" << std::endl; }
            break;

        }

        case figure::RightTriangle:
        {
            int sideA = 0, sideB = 0, sideC = 0;
            int angleA = 0, angleB = 0, angleC = 0;

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

            try
            {
                if (angleA + angleB + angleC != 180) throw Except("сумма углов не равна 180");
                if (angleC != 90) throw Except("угол C не равен 90");
                Right right(sideA, sideB, sideC, angleA, angleB, angleC);
                std::cout << "Прямоугольный треугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << "; углы " << angleA << ", " << angleB << ", " << angleC << ") создан" << std::endl;
            }
            catch (const Except& ex) { std::cout << "Прямоугольный треугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << "; углы " << angleA << ", " << angleB << ", " << angleC << ") не был создан. Причина: " << ex.what() << std::endl; }
            catch (...) { std::cout << "Неизвестная ошибка!" << std::endl; }
            break;

        }

        case figure::IsoscelesTriangle:
        {
            int sideA = 0, sideB = 0, sideC = 0;
            int angleA = 0, angleB = 0, angleC = 0;

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

            try
            {
                if (sideA != sideC) throw Except("стороны A и C не равны");
                if (angleA != angleC) throw Except("углы A и C не равны");
                Isosceles isos(sideA, sideB, sideC, angleA, angleB, angleC);
                std::cout << "Равнобедренный треугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << "; углы " << angleA << ", " << angleB << ", " << angleC << ") создан" << std::endl;
            }
            catch (const Except& ex) { std::cout << "Равнобедренный треугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << "; углы " << angleA << ", " << angleB << ", " << angleC << ") не был создан. Причина: " << ex.what() << std::endl; }
            catch (...) { std::cout << "Неизвестная ошибка!" << std::endl; }
            break;

        }

        case figure::EquilateralTriangle:
        {
            int sideA = 0, sideB = 0, sideC = 0;
            int angleA = 0, angleB = 0, angleC = 0;

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

            try
            {
                if (sideA != sideB || sideA != sideC || sideB != sideC) throw Except("все стороны не равны");
                if (angleA != 60 || angleB != 60 || angleC != 60) throw Except("какой-то из углов не равен 60");
                Equilateral equil(sideA, sideB, sideC, angleA, angleB, angleC);
                std::cout << "Равносторонний треугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << "; углы " << angleA << ", " << angleB << ", " << angleC << ") создан" << std::endl;
            }
            catch (const Except& ex) { std::cout << "Равносторонний треугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << "; углы " << angleA << ", " << angleB << ", " << angleC << ") не был создан. Причина: " << ex.what() << std::endl; }
            catch (...) { std::cout << "Неизвестная ошибка!" << std::endl; }
            break;

        }

        case figure::Quadrilateral:
        {
            int sideA = 0, sideB = 0, sideC = 0, sideD = 0;
            int angleA = 0, angleB = 0, angleC = 0, angleD = 0;

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

            try
            {
                if (angleA + angleB + angleC + angleD != 360) throw Except("сумма углов не равен 360");
                Quadrilateral quad(sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD);
                std::cout << "Четырехугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << "; углы " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << ") создан" << std::endl;
            }
            catch (const Except& ex) { std::cout << "Равносторонний треугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << "; углы " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << ") не был создан. Причина: " << ex.what() << std::endl; }
            catch (...) { std::cout << "Неизвестная ошибка!" << std::endl; }
            break;

        }

        case figure::Rectangle:
        {
            int sideA = 0, sideB = 0, sideC = 0, sideD = 0;
            int angleA = 0, angleB = 0, angleC = 0, angleD = 0;

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

            try
            {
                if (sideA != sideC) throw Except("стороны A и C не равны");
                if (sideB != sideD) throw Except("стороны B и D не равны");
                if (angleA != 90 || angleB != 90 || angleC != 90 || angleD != 90) throw Except("какой-то из углов не равен 90");
                Rectangle rect(sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD);
                std::cout << "Прямоугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << "; углы " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << ") создан" << std::endl;
            }
            catch (const Except& ex) { std::cout << "Прямоугольник (Стороны: " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << "; углы " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << ") не был создан. Причина: " << ex.what() << std::endl; }
            catch (...) { std::cout << "Неизвестная ошибка!" << std::endl; }
            break;

        }

        case figure::Square:
        {
            int sideA = 0, sideB = 0, sideC = 0, sideD = 0;
            int angleA = 0, angleB = 0, angleC = 0, angleD = 0;

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

            try
            {
                if (sideA != sideB || sideA != sideC || sideA != sideD || sideB != sideC || sideB != sideD || sideC != sideD) throw Except("стороны не равны");
                if (angleA != 90 || angleB != 90 || angleC != 90 || angleD != 90) throw Except("какой-то из углов не равен 90");
                Square square(sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD);
                std::cout << "Квадрат (Стороны: " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << "; углы " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << ") создан" << std::endl;
            }
            catch (const Except& ex) { std::cout << "Квадрат (Стороны: " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << "; углы " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << ") не был создан. Причина: " << ex.what() << std::endl; }
            catch (...) { std::cout << "Неизвестная ошибка!" << std::endl; }
            break;

        }

        case figure::Parallelogram:
        {
            int sideA = 0, sideB = 0, sideC = 0, sideD = 0;
            int angleA = 0, angleB = 0, angleC = 0, angleD = 0;

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

            try
            {
                if (sideA != sideC) throw Except("стороны A и C не равны");
                if (sideB != sideD) throw Except("стороны B и D не равны");
                if (angleA != angleC) throw Except("углы A и C не равны");
                if (angleB != angleD) throw Except("углы B и D не равны");
                Parallelogram parall(sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD);
                std::cout << "Параллелограмм (Стороны: " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << "; углы " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << ") создан" << std::endl;
            }
            catch (const Except& ex) { std::cout << "Параллелограмм (Стороны: " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << "; углы " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << ") не был создан. Причина: " << ex.what() << std::endl; }
            catch (...) { std::cout << "Неизвестная ошибка!" << std::endl; }
            break;

        }

        case figure::Rhombus:
        {
            int sideA = 0, sideB = 0, sideC = 0, sideD = 0;
            int angleA = 0, angleB = 0, angleC = 0, angleD = 0;

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

            try
            {
                if (sideA != sideB || sideA != sideC || sideA != sideD || sideB != sideC || sideB != sideD || sideC != sideD) throw Except("стороны не равны");
                if (angleA != 90 || angleB != 90 || angleC != 90 || angleD != 90) throw Except("какой-то из углов не равен 90");
                Rhombus rhomb(sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD);
                std::cout << "Квадрат (Стороны: " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << "; углы " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << ") создан" << std::endl;
            }
            catch (const Except& ex) { std::cout << "Квадрат (Стороны: " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << "; углы " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << ") не был создан. Причина: " << ex.what() << std::endl; }
            catch (...) { std::cout << "Неизвестная ошибка!" << std::endl; }
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
