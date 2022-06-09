#include <iostream>
#include <string>
#include <windows.h>

enum class Command {
	exit = 'x',
	increase = '+',
	decrease = '-',
	meaning = '='
};

class Counter {
private:
	int number = 1;

public:

	Counter(int number = 1) : number(number) {
		
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

	int number;
	std::string answer;
	bool answerBool;
	char symbol = 's';
	Command comm;

	std::cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: ";
	std::cin >> answer;

	while (true) {
		if (answer == "да") {
			std::cout << "Введите начальное значение счетчика: ";
			std::cin >> number;
			answerBool = true;
			break;
		}
		else if (answer == "нет") {
			std::cout << "Начальное значение счетчика будет выставленно по умолчанию\nЗначение счетчика = 1" << std::endl;
			number = 1;
			answerBool = false;
			break;
		}
		else {
			std::cout << "Введите пожалуйста либо да, либо нет: ";
			std::cin >> answer;
		}
	}

	Counter count = answerBool ? Counter(number) : Counter();

	while (symbol != 'x') {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> symbol;

		switch (static_cast<Command>(symbol)) {
			case Command::increase:
				count.increment();
				break;

			case Command::decrease:
				count.decrement();
				break;
			
			case Command::meaning:
				count.presentValue();
				break;

			case Command::exit:
				break;

			default:
				std::cout << "Такой команды не существует" << std::endl;
				break;
		}
	}
	count.presentValue();
	
	std::cout << "До свидания!" << std::endl;

	return 0;
}
