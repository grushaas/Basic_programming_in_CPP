#include "MathFunctions.h"
#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 0;
    int operation = 0;

    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    cout << "Выберете операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    cin >> operation;

    if(operation == 1) {
        cout << a << " + " << b << " = " << addition(a, b) << endl;
    }
    else if(operation == 2) {
        cout << a << " - " << b << " = " << subtraction(a, b) << endl;
    }
    else if(operation == 3) {
        cout << a << " * " << b << " = " << multiplication(a, b) << endl;
    }
    else if(operation == 4) {
        cout << a << " / " << b << " = " << division(a, b) << endl;
    }
    else if(operation == 5) {
        cout << a << " в степени " << b << " = " << degree(a, b) << endl;
    }
    else {
        cout << "Такой операции не существует!" << endl;
    }


    return 0;
}