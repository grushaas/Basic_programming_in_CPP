#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string name;

	cout << "Введите имя: ";
	cin >> name;

	cout << "Здравствуйте, " << name << endl;
}