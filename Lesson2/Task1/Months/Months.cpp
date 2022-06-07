#include <iostream>

enum class Seasons {
    
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main() {
    int value = 1;

    while (value != 0) {
        std::cout << "Enter month number: ";
        std::cin >> value;

        Seasons season = static_cast<Seasons>(value);

        if (value > 12) {
            std::cout << "Wrong number!" << std::endl;
        }
        else if (value < 0) {
            std::cout << "Wrong number!" << std::endl;
        }

        switch (static_cast<Seasons>(value)) {
        case Seasons::January:
            std::cout << "January" << std::endl;
            break;
        case Seasons::February:
            std::cout << "February" << std::endl;
            break;
        case Seasons::March:
            std::cout << "March" << std::endl;
            break;
        case Seasons::April:
            std::cout << "April" << std::endl;
            break;
        case Seasons::May:
            std::cout << "May" << std::endl;
            break;
        case Seasons::June:
            std::cout << "June" << std::endl;
            break;
        case Seasons::July:
            std::cout << "July" << std::endl;
            break;
        case Seasons::August:
            std::cout << "August" << std::endl;
            break;
        case Seasons::September:
            std::cout << "September" << std::endl;
            break;
        case Seasons::October:
            std::cout << "October" << std::endl;
            break;
        case Seasons::November:
            std::cout << "November" << std::endl;
            break;
        case Seasons::December:
            std::cout << "December" << std::endl;
            break;
        }
    }

    std::cout << "До свидания" << std::endl;
}


