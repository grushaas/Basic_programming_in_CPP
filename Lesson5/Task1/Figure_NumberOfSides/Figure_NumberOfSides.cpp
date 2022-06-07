#include <iostream>
#include <string>

class Figure {
protected:
    int sides_count = 0;
    std::string name = "";
public:
    Figure(int sides_count) {
        this->sides_count = sides_count;
    }

    virtual void getSidesCount() {
        std::cout << name << ": " << sides_count << std::endl;
    }
    virtual void getName(std::string nameFigure) {
        name = nameFigure;
    }
};

class Triangle : public Figure {
public:
    Triangle(int sides_count) : Figure(0) {
        this->sides_count = sides_count;
    }

    void getSidesCount() override {
        std::cout << name << ": " << sides_count << std::endl;
    }
    void getName(std::string nameFigure) override {
        name = nameFigure;
    }
};

class Quadrangle : public Figure {
public:
    Quadrangle(int sides_count) : Figure(0) {
        this->sides_count = sides_count;
    }

    void getSidesCount() override {
        std::cout << name << ": " << sides_count << std::endl;
    }
    void getName(std::string nameFigure) override {
        name = nameFigure;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    std::string namefigure = "Фигура";
    std::string nameTriangle = "Треугольник";
    std::string nameQuadrangle = "Четырехугольник";

    std::cout << "Количество сторон:" << std::endl;

    Figure fig(0);
    fig.getName(namefigure);
    fig.getSidesCount();

    Triangle trian(3);
    Figure* par_trian = &trian;
    par_trian->getName(nameTriangle);
    par_trian->getSidesCount();

    Quadrangle quad(4);
    Figure* par_quad = &quad;
    par_quad->getName(nameQuadrangle);
    par_quad->getSidesCount();
}