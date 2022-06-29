#include <iostream>
#include <string>
#include "HeaderGreeter.h"

using namespace std;

int main()
{
	Greeter::Greeter gret;

	string name;
	cout << "Enter your name: ";
	cin >> name;

	cout << gret.greet(name) << endl;

}