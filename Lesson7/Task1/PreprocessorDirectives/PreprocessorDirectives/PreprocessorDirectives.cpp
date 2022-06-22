#include <iostream>

#define MODE 0

#if !defined MODE
#error Undefined constant
#elif MODE == 1
void add()
{
	int num1 = 0, num2 = 0;

	std::cout << "Введите число 1: ";
	std::cin >> num1;

	std::cout << "Введите число 2: ";
	std::cin >> num2;

	std::cout << "Результат сложения: " << num1 + num2 << std::endl;
}
#endif

int main()
{
	setlocale(LC_ALL, "Russian");

#if MODE == 1
	std::cout << "Работаю в боевом режиме" << std::endl;
	add();
#elif MODE == 0
	std::cout << "Работаю в режиме тренировки";
#else
	std::cout << "Неизвестный режим. Завершение работы...";

#endif
}