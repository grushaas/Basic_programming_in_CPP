#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	system("chcp 1251");
	string name;

	cout << "Введите имя: ";
	cin >> name;

	cout << "Здравствуйте, " << name << endl;
}