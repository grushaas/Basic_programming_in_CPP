#include <iostream>
#include <string>

class Triangle {
protected:
    int a;
    int b;
    int c;

    int A;
    int B;
    int C;

    std::string name = "";

public:
    Triangle(int a, int b, int c, int A, int B, int C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;

        name = "Треугольник";
    }
    Triangle() {

    }

    virtual void getInfoTrian() {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    }
};

class RightTriangle : public Triangle {
public:
    RightTriangle(int a, int b, int c, int A, int B) : Triangle(){
        C = 90;

        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;

        name = "Прямоугольный треугольник";
    }

    void getInfoTrian() override {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    }
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(int b, int c, int C, int B) : Triangle() {
        this->b = b;
        this->c = c;
        a = c;

        this->C = C;
        this->B = B;
        A = C;

        name = "Равнобедренный треугольник";
    }

    void getInfoTrian() override {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    }
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(int b) : Triangle() {
        this->b = b;
        a = b;
        c = b;
        A = 60;
        B = 60;
        C = 60;

        name = "Равносторонний треугольник";
    }

    void getInfoTrian() override {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    }
};

class Quadrilateral {
protected:
    int a;
    int b;
    int c;
    int d;

    int A;
    int B;
    int C;
    int D;

    std::string name = "";

public:
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;

        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;

        name = "Четырехугольник";
    }
    Quadrilateral() {

    }

    virtual void getInfo() {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
};

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(int a, int d, int A, int D) {
        this->a = a;
        this->d = d;
        c = a;
        b = d;
        
        this->A = A;
        this->D = D;
        C = A;
        B = D;

        name = "Параллелограмм";
    }
    Parallelogram() {

    }

    virtual void getInfo() override {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
};

class Rectangle : public Parallelogram {
public:
    Rectangle(int a, int d) {
        this->a = a;
        this->d = d;
        c = a;
        b = d;

        A = 90;
        B = 90;
        C = 90;
        D = 90;

        name = "Прямоугольник";
    }

    void getInfo() override {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
};

class Rhombus : public Parallelogram {
public:
    Rhombus(int a, int A, int D) {
        this->a = a;
        b = a;
        c = a;
        d = a;

        this->A = A;
        this->D = D;
        C = A;
        B = D;

        name = "Ромб";
    }
    Rhombus() {

    }

    virtual void getInfo() override {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
};

class Square : public Rhombus {
public:
    Square(int a) {
        this->a = a;
        b = a;
        c = a;
        d = a;

        A = 90;
        B = 90;
        C = 90;
        D = 90;

        name = "Квадрат";
    }

    void getInfo() override {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Triangle trian(10, 20, 30, 50, 60, 70);
    trian.getInfoTrian();

    RightTriangle rightTrian(10, 20, 30, 50, 60);
    IsoscelesTriangle isoscelesTrian(20, 10, 50, 60);
    EquilateralTriangle equilateralTrian(30);

    Triangle* par_rightTrian = &rightTrian;
    Triangle* par_isoscelesTrian = &isoscelesTrian;
    Triangle* par_equilateralTrian = &equilateralTrian;

    std::cout << std::endl;
    par_rightTrian->getInfoTrian();

    std::cout << std::endl;
    par_isoscelesTrian->getInfoTrian();

    std::cout << std::endl;
    par_equilateralTrian->getInfoTrian();

    Quadrilateral quad(10, 20, 30, 40, 50, 60, 70, 80);
    
    std::cout << std::endl;
    quad.getInfo();

    Rectangle rect(10, 20);
    Parallelogram parall(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);
    Square square(20);

    Quadrilateral* par_parall = &parall;
    Parallelogram* par_rect = &rect;
    Parallelogram* par_rhombus = &rhombus;
    Rhombus* par_square = &square;

    std::cout << std::endl;
    par_rect->getInfo();

    std::cout << std::endl;
    par_square->getInfo();

    std::cout << std::endl;
    par_parall->getInfo();

    std::cout << std::endl;
    par_rhombus->getInfo();

    return 0;
}