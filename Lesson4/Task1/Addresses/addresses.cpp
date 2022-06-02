#include <iostream>
#include <fstream>
#include <string>

class Address {
private:
	std::string townName;
	std::string streetName;
	int houseNum;
	int apartmentNum;

public:
	Address(std::string townName, std::string streetName, int houseNum, int apartmentNum) {
		this->townName = townName;
		this->streetName = streetName;
		this->houseNum = houseNum;
		this->apartmentNum = apartmentNum;
	}

	std::string collectString() {
		std::string string = townName + ", " + streetName + ", " + std::to_string(houseNum) + ", " + std::to_string(apartmentNum);

		return string;
	}
};

int main() {
	std::ifstream in("in.txt");
	int size;
	in >> size;
	int count = size;

	std::string* stringArr = new std::string[size];
	if(in.is_open()) {
		while(!in.eof()) {
			std::string townName;
			std::string streetName;
			int houseNumber = 0;
			int apartmentNumber = 0;

			in >> townName >> streetName >> houseNumber >> apartmentNumber;

			Address addr(townName, streetName, houseNumber, apartmentNumber);
			std::string address = addr.collectString();

			stringArr[size - count] = address;
			--count;
		}
	}
	else {
		std::cout << "Не удалось открыть файл!" << std::endl;
	}
	in.close();

	std::ofstream out("out.txt");
	out << size << std::endl;
	for(int i = size - 1; i >= 0; --i) {
		std::string string = stringArr[i];
		out << string << std::endl;
	}
	out.close();

	delete[] stringArr;

	return 0;
}