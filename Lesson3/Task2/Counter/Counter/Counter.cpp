#include <iostream>
#include <string>
#include <windows.h>

class Counter {
public:
	char increase = '+';
	char decrease = '-';
	char meaning = '=';
	char exit = 'x';
	int number = 1;

	Counter(int number) {
		this->number = number;
	}
	
	void increment() {
		number += 1;
	}

	void decrement() {
		number -= 1;
	}

	int presentValue() {
		return number;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int number;
	std::string answer;
	char symbol = 's';

	std::cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: ";
	std::cin >> answer;

	while (true) {
		if (answer == "да") {
			std::cout << "Введите начальное значение счетчика: ";
			std::cin >> number;
			break;
		}
		else if (answer == "нет") {
			std::cout << "Начальное значение счетчика будет выставленно по умолчанию\nЗначение счетчика = 1" << std::endl;
			number = 1;
			break;
		}
		else {
			std::cout << "Введите пожалуйста либо да, либо нет: ";
			std::cin >> answer;
		}
	}

	Counter count(number);

	while (symbol != count.exit) {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> symbol;

		if (symbol == count.increase) {
			count.increment();
		}
		else if (symbol == count.decrease) {
			count.decrement();
		}
		else if (symbol == count.meaning) {
			std::cout << count.presentValue() << std::endl;
		}
		else if (symbol == count.exit) {
			continue;
		}
		else {
			std::cout << "Такой команды нет!" << std::endl;
		}
	}
	
	std::cout << "До свидания!" << std::endl;

	return 0;
}
