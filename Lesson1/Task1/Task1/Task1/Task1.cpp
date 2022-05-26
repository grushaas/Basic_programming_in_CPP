#include <iostream>
#include <fstream>

int main() {
	setlocale(LC_ALL, "Russian");

	std::ifstream in ("in.txt");
	int size1 = 0;
	int size2 = 0;
	int value = 0;

	//Читаем
	//Первый массив
	in >> size1;
	int* arr = 0;
	if (size1 > 0) {
		arr = new int[size1]();
		int count = 0;
		for (int i = 0; i < size1; ++i) {
			in >> arr[i];
			++count;
		}
		/*if (count != size1) {
			std::cout << "Количество чисел превышает размер массива - arr[]." << std::endl;
			delete[] arr;
			return 1;
		}*/
	}
	else {
		std::cout << "Размер массива не должен быть равен нулю. Измените файл входных данных - " << std::endl;
	}

	//Второй массив
	in >> size2;
	int* arr2 = 0;
	if (size2 > 0) {
		arr2 = new int[size2]();
		int count = 0;
		for (int i = 0; i < size2; ++i) {
			++count;
			in >> arr2[i];
		}
		/*if (count != size2) {
			std::cout << "Количество чисел превышает размер массива - arr2[]." << std::endl;
			delete[] arr2;
			return 1;
		}*/
	}
	else {
		std::cout << "Размер массива не должен быть равен нулю. Измените файл входных данных - " << std::endl;
	}


	in.close();

	//Записываем
	std::ofstream fout("out.txt");
	fout << size2 << std::endl;

	//Второй массив
	for (int i = 5; i < size2; ++i) {
		value = arr2[i];
	}
	fout << value << " ";
	for (int i = 0; i < size2 - 1; ++i) {
		value = arr2[i];
		fout << value << " ";
	}
	fout << std::endl;

	fout << size1 << std::endl;
	
	//Первый массив
	for (int i = 1; i < size1; ++i) {
		value = arr[i];
		fout << value << " ";
	}
	value = arr[0];
	fout << value << std::endl;

	fout.close();

	std::cout << "Запись файла прошла успешно!" << std::endl;

	delete[] arr;
	delete[] arr2;
}