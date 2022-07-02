#include <iostream>
#include <string>

class ForbiddenWordLength : public std::exception
{
public:
	
	const char* what() const override { return "Запретная длина слова"; }
};

int function(std::string str, int forbiddenLength)
{
	if (str.length() == forbiddenLength) throw ForbiddenWordLength();
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
			std::cout << "Длина слова " << str << " равна " << function(str, forbiddenLength) << std::endl;
		}
		catch (const ForbiddenWordLength& forbidden)
		{
			std::cout << forbidden.what() << "\nДлина слова равна - " << forbiddenLength << " Значение слова - " << str << std::endl;
		}
		catch (...)
		{
			std::cout << "Неизвестная ошибка" << std::endl;
		}
	}


	return 0;
}