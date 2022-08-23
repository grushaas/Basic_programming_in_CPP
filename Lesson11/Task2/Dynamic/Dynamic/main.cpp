#include <iostream>
#include "Leave.h"

int main()
{
	std::string name;
	std::cout << "Enter your name: ";
	std::cin >> name;

	auto lave = new Leaver;
	lave->leave(name);
}