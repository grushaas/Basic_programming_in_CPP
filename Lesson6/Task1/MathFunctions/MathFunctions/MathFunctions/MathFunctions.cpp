#include <iostream>
#include <cmath>
#include "Header.h"

int main() {
    setlocale(LC_ALL, "Russian");
    int a = 0, b = 0;
    int operation = 0;
    bool divis = false;

    std::cout << "Введите первой число: ";
    std::cin >> a;

    std::cout << "Введите второе число: ";
    std::cin >> b;

    if (b == 0) {
        std::cout << "Деление будет невозможно! Остальные функции разрешены" << std::endl;
        divis = true;
    }

    if (divis == false)
    {
        std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
        std::cin >> operation;
    }
    else
    {
        std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - возведение в степень): ";
        std::cin >> operation;
    }

    if (operation <= 0) {
        std::cout << "Такой операции не существует!" << std::endl;
    }
    else if (operation > 5) {
        std::cout << "Такой операции не существует!" << std::endl;
    }
    else {
        switch (operation) {
        case 1:
            std::cout << a << " + " << b << " = " << addition(a, b) << std::endl;
            break;

        case 2:
            std::cout << a << " - " << b << " = " << subtraction(a, b) << std::endl;
            break;

        case 3:
            std::cout << a << " * " << b << " = " << multiplication(a, b) << std::endl;
            break;

        case 4:
            if (divis == true)
            {
                std::cout << a << " в степени " << b << " = " << exponentiation(a, b) << std::endl;
                break;
            }
            else
            {
                std::cout << a << " / " << b << " = " << division(a, b) << std::endl;
                break;
            }
        case 5:
            std::cout << a << " в степени " << b << " = " << exponentiation(a, b) << std::endl;

        default:
            break;
        }
    }
}

