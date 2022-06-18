#include <iostream>

#define MODE 1

void add()
{
	int num1, num2;

	std::cout << "Введите число 1: ";
	std::cin >> num1;

	std::cout << "Введите число 2: ";
	std::cin >> num2;

	std::cout << "Результат сложения: " << num1 + num2 << std::endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");

#if !defined MODE
#error Undefined constant
#elif MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
	std::cout << "Работаю в боевом режиме" << std::endl;
	add();
#else
	std::cout << "Неизвестный режим. Завершение работы..." << std::endl;
#endif
}