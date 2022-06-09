#include <iostream>
#include <string>

class Figure {
protected:
    std::string name = "";
    int sidesCount = 0;

    virtual bool check() {
        if(sidesCount == 0) {
            return true;
        }
        return false;
    }
public:
    Figure(std::string name) {
        this->name = name;
    }

    virtual void printInfo() {
        std::cout << name << ":" << std::endl;
        if(check()) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << sidesCount << std::endl;
    }
};

class Triangle : public Figure {
protected:
    int a;
    int b;
    int c;

    int A;
    int B;
    int C;

    bool check() override {
        if(sidesCount == 3 && A + B + C == 180) {
            return true;
        }
        return false;
    }

public:
    Triangle(int a, int b, int c, int A, int B, int C, std::string name, int sidesCount) : Figure(name) {
        this->a = a;
        this->b = b;
        this->c = c;

        this->A = A;
        this->B = B;
        this->C = C;

        this->name = name;
        this->sidesCount = sidesCount;
    }

    void printInfo() override {
        std::cout << name << ":" << std::endl;
        if(check()) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << sidesCount << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
    }
};

class RightTriangle : public Triangle {
protected:
    bool check() override {
        if(C == 90) {
            return true;
        }
        return false;
    }

public:
    RightTriangle(int a, int b, int c, int A, int B, std::string name, int sidesCount) : Triangle(a, b, c, A, B, 90, name, sidesCount) {
        this->name = name;
    }

    void printInfo() override {
        std::cout << name << ":" << std::endl;
        if(check()) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << sidesCount << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
    }
};

class IsoscelesTriangle : public Triangle {
protected:
    bool check() override {
        if(a == c && A == C) {
            return true;
        }
        return false;
    }

public:
    IsoscelesTriangle(int a, int b, int A, int B, std::string name, int sidesCount) : Triangle(a, b, c, A, B, C, name, sidesCount) {
        c = a;
        C = A;
        this->name = name;
    }

    void printInfo() override {
        std::cout << name << ":" << std::endl;
        if(check()) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << sidesCount << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
    }
};

class EqualTriangle : public Triangle {
protected:
    bool check() override {
        if(a == b && b == c && a == c && A == 60 && B == 60 && C == 60) {
            return true;
        }
        return false;
    }

public:
    EqualTriangle(int a, std::string name, int sidesCount) : Triangle(a, b, c, 60, 60, 60, name, sidesCount) {
        this->a = a;
        b = a;
        c = a;

        this->name = name;
    }

    void printInfo() override {
        std::cout << name << ":" << std::endl;
        if(check()) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << sidesCount << std::endl;
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

    bool check() override {
        if(sidesCount == 4 && A + B + C + D == 360) {
            return true;
        }
        return false;
    }

public:
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, std::string name, int sidesCount) : Figure(name) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;

        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;

        this->name = name;
        this->sidesCount = sidesCount;
    }

    void printInfo() override {
        std::cout << name << ":" << std::endl;
        if(check()) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << sidesCount << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
};

class Parallelogram : public Quadrilateral {
protected:
    bool check() override {
        if(a == c && b == d && A == C && B == D) {
            return true;
        }
        return false;
    }

public:
    Parallelogram(int a, int b, int A, int B, std::string name, int sidesCount) : Quadrilateral(a, b, c, d, A, B, C, D, name, sidesCount) {
        c = a;
        d = b;

        C = A;
        D = B;

        this->name = name;
    }

    void printInfo() override {
        std::cout << name << ":" << std::endl;
        if(check()) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << sidesCount << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
};

class Rectangle : public Parallelogram {
protected:
    bool check() override {
        if(a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90) {
            return true;
        }
        return false;
    }

public:
    Rectangle(int a, int b, std::string name, int sidesCount) : Parallelogram(a, b, 90, 90, name, sidesCount) {
        c = a;
        d = b;

        this->name = name;
    }

    void printInfo() override {
        std::cout << name << ":" << std::endl;
        if(check()) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << sidesCount << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
};

class Rhombus : public Parallelogram {
protected:
    bool check() override {
        if(a == b && a == c && a == d && b == c && b == d && c == d && A == C && B == D) {
            return true;
        }
        return false;
    }

public:
    Rhombus(int a, int A, int B, std::string name, int sidesCount) : Parallelogram(a, b, A, B, name, sidesCount) {
        b = a;
        c = a;
        d = a;

        C = A;
        D = B;

        this->name = name;
    }

    void printInfo() override {
        std::cout << name << ":" << std::endl;
        if(check()) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << sidesCount << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
};

class Square : public Rhombus {
protected:
    bool check() override {
        if(a == b && a == c && a == d && b == c && b == d && c == d && A == 90 && B == 90 && C == 90 && D == 90) {
            return true;
        }
        return false;
    }

public:
    Square(int a, std::string name, int sidesCount) : Rhombus(a, 90, 90, name, sidesCount) {
        b = a;
        c = a;
        d = a;

        this->name = name;
    }

    void printInfo() override {
        std::cout << name << ":" << std::endl;
        if(check()) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << sidesCount << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
};

void getInfo(Figure* figure) {
    figure->printInfo();
    std::cout << std::endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    //*Треугольники
    Figure figure("Фигура");
    Triangle trian(10, 20, 30, 50, 60, 70, "Треугольник", 3);
    RightTriangle rightTrian(10, 20, 30, 50, 60, "Прямоугольный треугольник", 3);
    IsoscelesTriangle isoscelesTrian(10, 20, 50, 60, "Равнобедренный треугольник", 3);
    EqualTriangle equalTrian(30, "Равносторонний треугольник", 3);

    //*Четырехугольники
    Quadrilateral quad(10, 20, 30, 40, 50, 60, 70, 80, "Четырехугольник", 4);
    Rectangle rect(10, 20, "Прямоугольник", 4);
    Square square(20, "Квадрат", 4);
    Parallelogram parall(20, 30, 30, 40, "Параллелограмм", 4);
    Rhombus rhombus(30, 30, 40, "Ромб", 4);

    getInfo(&figure);
    getInfo(&trian);
    getInfo(&rightTrian);
    getInfo(&isoscelesTrian);
    getInfo(&equalTrian);
    getInfo(&quad);
    getInfo(&rect);
    getInfo(&square);
    getInfo(&parall);
    getInfo(&rhombus);

    return 0;
}