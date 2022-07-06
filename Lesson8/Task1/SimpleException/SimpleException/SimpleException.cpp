#include <iostream>
#include <string>
#include "Exception.h"

int verification(std::string str, int forbiddenLength)
{
	if (str.length() == forbiddenLength)
	{
		std::string message = "Encoutered a word " + str + " with forbidden length = " + std::to_string(forbiddenLength);
		throw ForbiddenWordLength(message);
	}
	return str.length();
}

int main()
{
	setlocale(LC_ALL, "Russian");

	std::string str;
	int forbiddenLength = 0;

	std::cout << "Введите запретную длину: ";
	std::cin >> forbiddenLength;
	while (true)
	{
		std::cout << "Введите слово: ";
		std::cin >> str;
		try
		{
			std::cout << "Длина слова " << str << " равна " << verification(str, forbiddenLength) << std::endl;
		}
		catch (const ForbiddenWordLength& forbidden)
		{
			std::cout << forbidden.what() << std::endl;
		}
		catch (...)
		{
			std::cout << "Неизвестная ошибка" << std::endl;
		}
	}
	return 0;
}