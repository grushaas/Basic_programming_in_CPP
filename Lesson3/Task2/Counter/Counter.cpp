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

	std::cout << "Вы хотите указать начальное значение счетчика? Введите yes или no: ";
	std::cin >> answer;

	while (true) {
		if (answer == "yes") {
			std::cout << "Введите начальное значение счетчика: ";
			std::cin >> number;
			answerBool = true;
			break;
		}
		else if (answer == "no") {
			std::cout << "Начальное значение счетчика будет выставленно по умолчанию\nЗначение счетчика = 1" << std::endl;
			number = 1;
			answerBool = false;
			break;
		}
		else {
			std::cout << "Введите пожалуйста либо yes, либо no: ";
			std::cin >> answer;
		}
	}

	Counter count = answerBool ? Counter(number) : Counter();

	while (true) {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> symbol;

		Command comm = static_cast<Command>(symbol);
		if(comm == Command::exit) {
			break;
		}

		switch (comm) {
			case Command::increase:
				count.increment();
				break;

			case Command::decrease:
				count.decrement();
				break;
			
			case Command::meaning:
				std::cout << count.presentValue() << std::endl;
				break;

			default:
				std::cout << "Такой команды не существует" << std::endl;
				break;
		}
	}
	std::cout << count.presentValue() << std::endl;
	
	std::cout << "До свидания!" << std::endl;

	return 0;
}
