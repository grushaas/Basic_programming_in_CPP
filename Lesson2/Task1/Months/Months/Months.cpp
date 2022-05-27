#include <iostream>

enum class Seasons {
    
    Январь = 1,
    Февраль,
    Март,
    Апрель,
    Май,
    Июнь,
    Июль,
    Август,
    Сентябрь,
    Октябрь,
    Ноябрь,
    Декабрь
};

int main() {
    setlocale(LC_ALL, "Russian");

    int value = 1;

    while (value != 0) {
        std::cout << "Введите номер месяца: ";
        std::cin >> value;

        Seasons season = static_cast<Seasons>(value);

        if (value > 12) {
            std::cout << "Неправильный номер!" << std::endl;
        }
        else if (value < 0) {
            std::cout << "Неправильный номер!" << std::endl;
        }

        switch (static_cast<int>(season)) {
        case 1:
            std::cout << "Январь" << std::endl;
            break;
        case 2:
            std::cout << "Февраль" << std::endl;
            break;
        case 3:
            std::cout << "Март" << std::endl;
            break;
        case 4:
            std::cout << "Апрель" << std::endl;
            break;
        case 5:
            std::cout << "Май" << std::endl;
            break;
        case 6:
            std::cout << "Июнь" << std::endl;
            break;
        case 7:
            std::cout << "Июль" << std::endl;
            break;
        case 8:
            std::cout << "Август" << std::endl;
            break;
        case 9:
            std::cout << "Сентябрь" << std::endl;
            break;
        case 10:
            std::cout << "Октябрь" << std::endl;
            break;
        case 11:
            std::cout << "Ноябрь" << std::endl;
            break;
        case 12:
            std::cout << "Декабрь" << std::endl;
            break;
        }
    }

    std::cout << "До свидания" << std::endl;
}


