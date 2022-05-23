#include <iostream>
#include <fstream>

int main() {
	std::ifstream in ("in.txt");
	int size1 = 0;
	int size2 = 0;

	in >> size1;

	int* arr = new int[size1]();
	for (int i = 0; i < size1; ++i) {
		int value = 0;
		in >> value;
		arr[i] = value;
	}

	in >> size2;
	std::cout << size2 << std::endl;
	int* arr2 = new int[size2]();
	for (int i = 0; i < size2; ++i) {
		int value = 0;
		in >> value;
		arr2[i] = value;
	}

	in.close();

	std::ofstream fout("out.txt");
	fout << size2 << std::endl;
	for (int i = size2; size2 > 0; --i) {
		int value = 0;
		value = arr2[i];
		fout << value;
	}
	std::cout << std::endl;

	fout << size1 << std::endl;
	for (int i = size1; size1 > 0; --i) {
		int value = 0;
		value = arr[i];
		fout << value;
	}
	std::cout << std::endl;

	fout.close();

	delete[] arr;
	delete[] arr2;
}