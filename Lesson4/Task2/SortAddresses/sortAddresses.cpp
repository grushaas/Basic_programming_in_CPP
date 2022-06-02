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
    Address() {

    }

	std::string collectString() {
		std::string string = townName + ", " + streetName + ", " + std::to_string(houseNum) + ", " + std::to_string(apartmentNum);

		return string;
	}

    void sort(std::string* stringArr, int size ) {
        for(int i = 0; i < size; ++i) {
            for(int j = i + 1; j < size; ++j) {
                if(stringArr[i] > stringArr[j]) {
                    std::string tempStorage = stringArr[i];
                    stringArr[i] = stringArr[j];
                    stringArr[j] = tempStorage;
                }
            }
        }
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

    Address addr;
    addr.sort(stringArr, size);

	std::ofstream out("out.txt");
	out << size << std::endl;
	for(int i = 0; i < size; ++i) {
		std::string string = stringArr[i];
		out << string << std::endl;
	}
	out.close();

	delete[] stringArr;

	return 0;
}