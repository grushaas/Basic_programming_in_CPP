#include <iostream>
#include <string>

class Figure {
public:
    void print() {
        std::cout << name << ":" << std::endl;
        std::cout << "Sides: ";
        print_sides();
        std::cout << std::endl;
        std::cout << "Angles: ";
        print_angles();
    }

protected:
    Figure(std::string name) {
        this->name = name;
    }

    virtual void print_sides() {

    }

    virtual void print_angles() {

    }

private:
    std::string name;
};

class Triangle : public Figure {
public:
    Triangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC, std::string nameTriangle) : Figure(nameTriangle) {
        this->sideA = sideA;
        this->sideB = sideB;
        this->sideC = sideC;

        this->angleA = angleA;
        this->angleB = angleB;
        this->angleC = angleC;
    }

protected:
    void print_sides() override {
        std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
    }

    void print_angles() override {
        std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
    }

    int sideA, sideB, sideC;
    int angleA, angleB, angleC;
};

class RightTriangle : public Triangle {
public:
    RightTriangle(int sideA, int sideB, int sideC, int angleA, int angleB, std::string nameTriangle) : Triangle(sideA, sideB, sideC, angleA, angleB, angleC, nameTriangle) {
        angleC = 90;
        
    }

protected:
    void print_sides() override{
        std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
    }

    void print_angles() override {
        std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
    }

};

class Isosceles : public Triangle {
public:
    Isosceles(int sideA, int sideB, int angleA, int angleB, std::string nameTriangle) : Triangle(sideA, sideB, sideC, angleA, angleB, angleC, nameTriangle) {
        sideC = sideA;

        angleC = angleA;
        
    }

protected:
    void print_sides() override {
        std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
    }

    void print_angles() override {
        std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
    }
};

class Equilateral : public Triangle {
public:
    Equilateral(int sideA, std::string nameTriangle) : Triangle(sideA, sideB, sideC, angleA, angleB, angleC, nameTriangle) {
        sideB = sideA;
        sideC = sideA;

        angleA = 60;
        angleB = 60;
        angleC = 60;
    }

protected:
    void print_sides() override {
        std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
    }

    void print_angles() override {
        std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
    }

};

class Quadrilateral : public Figure {
public:
    Quadrilateral(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD) : Figure("Quadrilateral") {
        this->sideA = sideA;
        this->sideB = sideB;
        this->sideC = sideC;
        this->sideD = sideD;

        this->angleA = angleA;
        this->angleB = angleB;
        this->angleC = angleC;
        this->angleD = angleD;
    }

protected:
    void print_sides() override {
        std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
    }

    void print_angles() override {
        std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
    }

private:
    int sideA, sideB, sideC, sideD;
    int angleA, angleB, angleC, angleD;
};

class Rectangle : public Figure {
public:
    Rectangle(int sideA, int sideB) : Figure("Rectangle") {
        this->sideA = sideA;
        this->sideB = sideB;
        sideC = sideA;
        sideD = sideB;

        angleA = 90;
        angleB = 90;
        angleC = 90;
        angleD = 90;
    }

protected:
    void print_sides() override {
        std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
    }

    void print_angles() override {
        std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
    }

private:
    int sideA, sideB, sideC, sideD;
    int angleA, angleB, angleC, angleD;
};

class Square : public Figure {
public:
    Square(int sideA) : Figure("Square") {
        this->sideA = sideA;
        sideB = sideA;
        sideC = sideA;
        sideD = sideA;

        angleA = 90;
        angleB = 90;
        angleC = 90;
        angleD = 90;
    }

protected:
    void print_sides() override {
        std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
    }

    void print_angles() override {
        std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
    }

private:
    int sideA, sideB, sideC, sideD;
    int angleA, angleB, angleC, angleD;
};

class Parallelogram : public Figure {
public:
    Parallelogram(int sideA, int sideB, int angleA, int angleB) : Figure("Parallelogram") {
        this->sideA = sideA;
        this->sideB = sideB;
        sideC = sideA;
        sideD = sideB;

        this->angleA = angleA;
        this->angleB = angleB;
        angleC = angleA;
        angleD = angleB;
    }

protected:
    void print_sides() override {
        std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
    }

    void print_angles() override {
        std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
    }

private:
    int sideA, sideB, sideC, sideD;
    int angleA, angleB, angleC, angleD;
};

class Rhombus : public Figure {
public:
    Rhombus(int sideA, int angleA, int angleB) : Figure("Rhombus") {
        this->sideA = sideA;
        sideB = sideA;
        sideC = sideA;
        sideD = sideA;

        this->angleA = angleA;
        this->angleB = angleB;
        angleC = angleA;
        angleD = angleB;
    }

protected:
    void print_sides() override {
        std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
    }

    void print_angles() override {
        std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
    }

private:
    int sideA, sideB, sideC, sideD;
    int angleA, angleB, angleC, angleD;
};

void print(Figure& figure) {
    figure.print();
    std::cout << std::endl;
    std::cout << std::endl;
}

int main() {
    //setlocale(LC_ALL, "Russian");
    Triangle trian(10, 20, 30, 50, 60, 70, "Triangle");
    RightTriangle right(10, 20, 30, 50, 60, "Right Triangle");
    Isosceles isos(10, 20, 50, 60, "Isosceles Triangle");
    Equilateral equil(10, "Equilateral Triangle");
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

    int exit;
    std::cout << "To exit, press any button and then 'enter'." << std::endl;
    std::cin >> exit;
    return 0;
}