#include <iostream>
#include <fstream>

int main() {
	std::ifstream in ("in.txt");
	int size1 = 0;
	int size2 = 0;

	//Читаем
	in >> size1;
	std::cout << size1 << std::endl;
	int* arr = new int[size1 + 1]();
	for (int i = 0; i < size1; ++i) {
		in >> arr[i];
	}

	in >> size2;
	std::cout << size2 << std::endl;
	int* arr2 = new int[size2 + 1]();
	for (int i = 0; i < size2; ++i) {
		in >> arr2[i];
	}

	in.close();

	//Записываем
	std::ofstream fout("out.txt");
	fout << size2 << std::endl;
	std::cout << size2 << std::endl;
	for (int i = size2 - 1; i >= 0; --i) {
		fout << arr2[i] << " ";
	}
	fout << std::endl;
	std::cout << std::endl;

	fout << size1 << std::endl;
	std::cout << size1 << std::endl;
	for (int i = size1 - 1; i >= 0; --i) {
		fout << arr[i] << " ";
	}
	std::cout << std::endl;

	fout.close();

	delete[] arr;
	delete[] arr2;
}