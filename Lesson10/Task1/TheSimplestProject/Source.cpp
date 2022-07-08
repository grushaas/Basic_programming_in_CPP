#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string name;

	cout << "¬ведите им¤: ";
	cin >> name;

	cout << "«дравствуйте, " << name << endl;
}