#include <iostream>
#include <string>
#include <windows.h>

//Структура адресов
struct address {
	std::string country = "Россия";
	std::string town = "Тюмень";
	std::string street = "Дмитрия Менделеева";
	int houseNumber = 19;
	int apartmentNumber = 151;
	int index = 611251;
};

void outputStruct(address& addr) {
	//Вывод структуры
	std::cout << "Страна: " << addr.country << std::endl;
	std::cout << "Город: " << addr.town << std::endl;
	std::cout << "Улица: " << addr.street << std::endl;
	std::cout << "Номер дома: " << addr.houseNumber << std::endl;
	std::cout << "Номер квартиры: " << addr.apartmentNumber << std::endl;
	std::cout << "Индекс: " << addr.index << std::endl;
}

int main() {
	//Руссификатор
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	address addr;
	outputStruct(addr);
}
