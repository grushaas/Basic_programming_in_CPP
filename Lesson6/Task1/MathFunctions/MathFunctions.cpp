#include "MathFunctions.h"

//Сложение
int addition(int a, int b) {
    return a + b;
}

//Вычитание
int subtraction(int a, int b) {
    return a - b;
}

//Умножение
int multiplication(int a, int b) {
    return a * b;
}

//Деление
int division(int a, int b) {
    return a / b;
}

//Возведение в степень
int degree(int a, int b) {
    int tmp = a;
    if(a == 0) {
        return 0;
    }

    for(int i = 1; i < b; ++i) {
        a *= tmp;
    }

    return a;
}
