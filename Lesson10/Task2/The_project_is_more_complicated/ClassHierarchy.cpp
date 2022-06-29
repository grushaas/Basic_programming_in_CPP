#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

void print(Figure& figure)
{
    figure.print();
    std::cout << std::endl;
    std::cout << std::endl;
}

int main()
{
    Triangle trian(10, 20, 30, 50, 60, 70);
    Right right(10, 20, 30, 50, 60);
    Isosceles isos(10, 20, 50, 60);
    Equilateral equil(10);
    Quadrilateral quad(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rect(10, 20);
    Square square(20);
    Parallelogram parall(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    print(trian);
    print(right);
    print(isos);
    print(equil);
    print(quad);
    print(rect);
    print(square);
    print(parall);
    print(rhombus);

    return 0;
}