#include <iostream>
#include <windows.h>
#include <string>

//Счет
struct Account {
	int NumberAccount = 0;
	std::string name;
	double bank = 0;
};

void accountUpdate(Account& ac) {
	//Функция для изменения баланса
	
	int bank = 0;
	std::cout << "Введите новый баланс: ";
	std::cin >> bank;
	
	ac.bank = bank;
}

int main() {
	//Русификатор
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int numAc = 0;
	std::string name;
	double bank = 0;

	//Данные счета
	std::cout << "Введите номер счета: ";
	std::cin >> numAc;
	std::cout << "Введите имя владельца: ";
	std::cin >> name;
	std::cout << "Введите баланс: ";
	std::cin >> bank;
	
	//Заполнение структуры
	Account p;
	Account* p_p = &p;
	p_p->NumberAccount = numAc;
	p_p->name = name;
	p_p->bank = bank;

	accountUpdate(p);

	//Вывод структуры
	std::cout << "Ваш счет: " << p.name << ", " << p.NumberAccount << ", " << p.bank;
}