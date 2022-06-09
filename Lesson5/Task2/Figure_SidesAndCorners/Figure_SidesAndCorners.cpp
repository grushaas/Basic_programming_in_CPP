#include <iostream>
#include <string>

class Figure {
protected:
    std::string name = "";

};

class Triangle : public Figure {
protected:
    int a;
    int b;
    int c;

    int A;
    int B;
    int C;
public:
    Triangle(int a, int b, int c, int A, int B, int C, std::string name) : Figure() {
        this->a = a;
        this->b = b;
        this->c = c;

        this->A = A;
        this->B = B;
        this->C = C;

        this->name = name;
    }

    virtual void getInfoTrian() {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
    }
};

class RightTriangle : public Triangle {
public:
    RightTriangle(int a, int b, int c, int A, int B, std::string name) : Triangle(a, b, c, A, B, 90, name) {
        this->name = name;
    }

    void getInfoTrian() override {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
    }
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(int a, int b, int A, int B, std::string name) : Triangle(a, b, c, A, B, C, name) {
        c = a;
        C = A;
        this->name = name;
    }

    void getInfoTrian() override {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
    }
};

class EqualTriangle : public Triangle {
public:
    EqualTriangle(int a, std::string name) : Triangle(a, b, c, 90, 90, 90, name) {
        this->a = a;
        b = a;
        c = a;

        this->name = name;
    }

    void getInfoTrian() override {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
    }
};


class Quadrilateral : public Figure {
protected:
    int a;
    int b;
    int c;
    int d;

    int A;
    int B;
    int C;
    int D;

public:
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;

        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;

        this->name = name;
    }

    virtual void getInfoQuad() {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
};

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(int a, int b, int A, int B, std::string name) : Quadrilateral(a, b, c, d, A, B, C, D, name) {
        c = a;
        d = b;

        C = A;
        D = B;

        this->name = name;
    }

    void getInfoQuad() override {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
};

class Rectangle : public Parallelogram {
public:
    Rectangle(int a, int b, std::string name) : Parallelogram(a, b, 90, 90, name) {
        c = a;
        d = b;

        this->name = name;
    }

    void getInfoQuad() override {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
};

class Rhombus : public Parallelogram {
public:
    Rhombus(int a, int A, int B, std::string name) : Parallelogram(a, b, A, B, name) {
        b = a;
        c = a;
        d = a;

        C = A;
        D = B;

        this->name = name;
    }

    void getInfoQuad() override {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
};

class Square : public Rhombus {
public:
    Square(int a, std::string name) : Rhombus(a, 90, 90, name) {
        b = a;
        c = a;
        d = a;

        this->name = name;
    }

    void getInfoQuad() override {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
};

void getInfoTrian(Triangle* trian) {
    trian->getInfoTrian();
}

void getInfoQuad(Quadrilateral* quad) {
    quad->getInfoQuad();
}

int main() {
    setlocale(LC_ALL, "Russian");

    Figure figure;
    Triangle trian(10, 20, 30, 50, 60, 70, "Треугольник");
    RightTriangle rightTrian(10, 20, 30, 50, 60, "Прямоугольный треугольник");
    IsoscelesTriangle isoscelesTrian(10, 20, 50, 60, "Равнобедренный треугольник");
    EqualTriangle qualTrian(30, "Равносторонний треугольник");

    Quadrilateral quad(10, 20, 30, 40, 50, 60, 70, 80, "Четырехугольник");
    Parallelogram paral(20, 30, 30, 40, "Параллелограмм");
    Rectangle rect(10, 20, "Прямоугольник");
    Rhombus rhombus(30, 30, 40, "Ромб");
    Square square(20, "Квадрат");

    //Треугольники
    trian.getInfoTrian();
    std::cout << std::endl;
    getInfoTrian(&rightTrian);
    std::cout << std::endl;
    getInfoTrian(&isoscelesTrian);
    std::cout << std::endl;
    getInfoTrian(&qualTrian);

    std::cout << std::endl;

    //Четырехугольники
    quad.getInfoQuad();
    std::cout << std::endl;
    getInfoQuad(&paral);
    std::cout << std::endl;
    getInfoQuad(&rect);
    std::cout << std::endl;
    getInfoQuad(&rhombus);
    std::cout << std::endl;
    getInfoQuad(&square);


    return 0;
}
