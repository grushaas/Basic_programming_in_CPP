#include <iostream>
#include <string>
#include "Farewell.h"

int main()
{
	std::string your_name;
	Leaver leave;

	std::cout << "Enter your name: ";
	std::cin >> your_name;

	leave.leave(your_name);
}
