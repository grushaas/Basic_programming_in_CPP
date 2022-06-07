#include <iostream>
#include <string>

using namespace std;

class Figure {
protected:
    int a;
    int b;
    int c;
    int d;

    int A;
    int B;
    int C;
    int D;

    int sidesCount = 0;
    string name = "";

    virtual bool check() {
        if(sidesCount == 0) {
            return true;
        }
        return false;
    }

public:
    Figure(int sidesCount) {
        this->sidesCount = sidesCount;
        name = "Фигура";
    }
    Figure() {

    }

    virtual void printInfo() {
        cout << name << ":" << endl;
        if(check()) {
            cout << "Правильная" << endl;
        }
        else {
            cout << "Неправильная" << endl;
        }
        cout << "Количество сторон: " << sidesCount << endl;

    }
};

class Triangle : public Figure {
public:
    Triangle(int a, int b, int c, int A, int B, int C, int sidesCount) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;

        name = "Треугольник";
        this->sidesCount = sidesCount;
    }

    void printInfo() override {
        cout << name << ":" << endl;
        if(check()) {
            cout << "Правильная" << endl;
        }
        else {
            cout << "Неправильная" << endl;
        }
        cout << "Количество сторон: " << sidesCount << endl;
        cout << "Стороны: a=" << a << " b=" << b << " c=" << c << endl;
        cout << "Углы: A=" << A << " B=" << B << " C=" << C << endl;
    }
protected:

    bool check() override {
        if(sidesCount == 3 && A + B + C == 180) {
            return true;
        }
        return false;
    }
};

class RightTriangle : public Figure {
public:
    RightTriangle(int a, int b, int c, int A, int B, int C, int sidesCount) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;

        name = "Прямоугольный треугольник";
        this->sidesCount = sidesCount;
    }

    void printInfo() override {
        cout << name << ":" << endl;
        if(check()) {
            cout << "Правильная" << endl;
        }
        else {
            cout << "Неправильная" << endl;
        }
        cout << "Количество сторон: " << sidesCount << endl;
        cout << "Стороны: a=" << a << " b=" << b << " c=" << c << endl;
        cout << "Углы: A=" << A << " B=" << B << " C=" << C << endl;
    }
protected:

    bool check() override {
        if(C == 90) {
            return true;
        }
        return false;
    }
};

class IsoscelesTriangle : public Figure {
public:
    IsoscelesTriangle(int a, int b, int c, int A, int C, int B, int sidesCount) {
        this->b = b;
        this->c = c;
        this->a = a;

        this->C = C;
        this->B = B;
        this->A = A;

        name = "Равнобедренный треугольник";
        this->sidesCount = sidesCount;
    }

    void printInfo() override {
        cout << name << ":" << endl;
        if(check()) {
            cout << "Правильная" << endl;
        }
        else {
            cout << "Неправильная" << endl;
        }
        cout << "Количество сторон: " << sidesCount << endl;
        cout << "Стороны: a=" << a << " b=" << b << " c=" << c << endl;
        cout << "Углы: A=" << A << " B=" << B << " C=" << C << endl;
    }
protected:

    bool check() override {
        if(a == c && A == C) {
            return true;
        }
        return false;
    }
};

class EquilateralTriangle : public Figure {
public:
    EquilateralTriangle(int b, int A, int sidesCount) {
        this->b = b;
        a = b;
        c = b;

        this->A = A;
        B = A;
        C = A;

        name = "Равносторонний треугольник";
        this->sidesCount = sidesCount;
    }

    void printInfo() override {
        cout << name << ":" << endl;
        if(check()) {
            cout << "Правильная" << endl;
        }
        else {
            cout << "Неправильная" << endl;
        }
        cout << "Количество сторон: " << sidesCount << endl;
        cout << "Стороны: a=" << a << " b=" << b << " c=" << c << endl;
        cout << "Углы: A=" << A << " B=" << B << " C=" << C << endl;
    }
protected:

    bool check() override {
        if(a == b == c && A + B + C == 60) {
            return true;
        }
        return false;
    }
};

class Quadrilateral : public Figure {
public:
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, int sidesCount) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;

        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;

        name = "Четырехугольник";

        this->sidesCount = sidesCount;
    }

    void printInfo() override {
        cout << name << ":" << endl;
        if(check()) {
            cout << "Правильная" << endl;
        }
        else {
            cout << "Неправильная" << endl;
        }
        cout << "Количество сторон: " << sidesCount << endl;
        cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
        cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
    }
protected:

    bool check() override {
        if(sidesCount == 4 && A + B + C + D == 360) {
            return true;
        }
        return false;
    }
};

class Parallelogram : public Figure {
public:
    Parallelogram(int a, int d, int A, int D, int sidesCount) {
        this->a = a;
        this->d = d;
        c = a;
        b = d;
        
        this->A = A;
        this->D = D;
        C = A;
        B = D;

        name = "Параллелограмм";
        this->sidesCount = sidesCount;
    }

    void printInfo() override {
        cout << name << ":" << endl;
        if(check()) {
            cout << "Правильная" << endl;
        }
        else {
            cout << "Неправильная" << endl;
        }
        cout << "Количество сторон: " << sidesCount << endl;
        cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
        cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
    }
protected:

    bool check() override {
        if(a == c && b == d && A == C && B == D) {
            return true;
        }
        return false;
    }
};

class Rectangle : public Figure {
public:
    Rectangle(int sidesCount, int a, int d) {
        this->a = a;
        this->d = d;
        c = a;
        b = d;

        A = 90;
        B = 90;
        C = 90;
        D = 90;

        name = "Прямоугольник";
        this->sidesCount = sidesCount;
    }

    void printInfo() override {
        cout << name << ":" << endl;
        if(check()) {
            cout << "Правильная" << endl;
        }
        else {
            cout << "Неправильная" << endl;
        }
        cout << "Количество сторон: " << sidesCount << endl;
        cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
        cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
    }
protected:

    bool check() override {
        if(a == c && b == d && A == B == C == D == 90) {
            return true;
        }
        return false;
    }
};

class Rhombus : public Figure {
public:
    Rhombus(int a, int A, int D, int sidesCount) {
        this->a = a;
        b = a;
        c = a;
        d = a;

        this->A = A;
        this->D = D;
        C = A;
        B = D;

        name = "Ромб";
        this->sidesCount = sidesCount;
    }

    void printInfo() override {
        cout << name << ":" << endl;
        if(check()) {
            cout << "Правильная" << endl;
        }
        else {
            cout << "Неправильная" << endl;
        }
        cout << "Количество сторон: " << sidesCount << endl;
        cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
        cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
    }
protected:

    bool check() override {
        if(a == c == b == d && A == C && B == D) {
            return true;
        }
        return false;
    }
};

class Square : public Figure {
public:
    Square(int a, int sidesCount) {
        this->a = a;
        b = a;
        c = a;
        d = a;

        A = 90;
        B = 90;
        C = 90;
        D = 90;

        name = "Квадрат";
        this->sidesCount = sidesCount;
    }

    void printInfo() override {
        cout << name << ":" << endl;
        if(check()) {
            cout << "Правильная" << endl;
        }
        else {
            cout << "Неправильная" << endl;
        }
        cout << "Количество сторон: " << sidesCount << endl;
        cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
        cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
    }
protected:

    bool check() override {
        if(a == c == b == d && A == B == C == D == 90) {
            return true;
        }
        return false;
    }
};

void printInfo(Figure* figure) {
    figure->printInfo();
}

int main() {
    Figure figure(0);
    Triangle trian(10, 20, 30, 50, 60, 70, 3);
    RightTriangle rightTrian(10, 20, 30, 50, 60, 90, 3);
    RightTriangle rightTrian2(10, 20, 30, 50, 40, 90, 3);
    IsoscelesTriangle isoscelesTrian(10, 20, 10, 50, 60, 50, 3);
    EquilateralTriangle equilateralTrian(30, 60, 3);
    Quadrilateral quad(10, 20, 30, 40, 50, 60, 70, 80, 4);
    Rectangle rect(4, 10, 20);
    Square square(20, 4);
    Parallelogram parall(20, 30, 30, 40, 4);
    Rhombus rhombus(30, 30, 40, 4);

    printInfo(&figure);
    cout << endl;
    printInfo(&trian);
    cout << endl;
    printInfo(&rightTrian);
    cout << endl;
    printInfo(&rightTrian2);
    cout << endl;
    printInfo(&isoscelesTrian);
    cout << endl;
    printInfo(&equilateralTrian);
    cout << endl;
    printInfo(&quad);
    cout << endl;
    printInfo(&rect);
    cout << endl;
    printInfo(&square);
    cout << endl;
    printInfo(&parall);
    cout << endl;
    printInfo(&rhombus);
    cout << endl;

    return 0;
}