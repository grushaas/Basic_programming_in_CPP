#include "HeaderGreeter.h"
#include <iostream>
#include <string>

namespace Greeter
{
	std::string Greeter::greet(std::string str)
	{
		std::string greetings = "Hello, " + str + "!";

		return greetings;
	}
}