#include "Racing.h"

Racing::Racing(int distance) : distance(distance){}

void Racing::Beginning()
{
	int value;
	std::cout << "Welcome to the racing simulator!" << std::endl;
	std::cout << "1. Race for ground transport" << std::endl;
	std::cout << "2. Race for air transport" << std::endl;
	std::cout << "3. Race for ground and air transport" << std::endl;
	std::cout << "Choose the type of race: ";
	std::cin >> type_race;

	std::cout << "Specify the distance length (Must be positive): ";
	std::cin >> distance;

	std::cout << "At least 2 vehicles must be registered" << std::endl;
	std::cout << "1. Register a transport" << std::endl;
	std::cout << "2. Exit" << std::endl;
	std::cin >> value;

	switch (value)
	{
	case 1:
		Transport_registration();

	case 2:
		break;

	default:
		break;
	}
}

void Racing::Transport_registration()
{
	int value;
	do
	{
		if (type_race == 1)
		{
			//TODO: оптимизировать список транспортов, которые печатаются в консоль
			std::cout << "Race for ground transport. ";
			std::cout << "Distance: " << distance << std::endl;
			std::cout << "1. Boots" << std::endl;
			std::cout << "2. Camel" << std::endl;
			std::cout << "3. Centaur" << std::endl;
			std::cout << "4. Camel-fast" << std::endl;
			std::cout << "Select transport or 0 to end the registration process: ";
			std::cin >> value;
			switch (value)
			{
			case 0:
				break;
			case 1:
				Ground.push_back(std::make_unique<Boots>());
				std::cout << "Boots successfully registered!" << std::endl;
			case 2:
				Ground.push_back(std::make_unique<Camel>());
				std::cout << "Camel successfully registered!" << std::endl;
			case 3:
				Ground.push_back(std::make_unique<Centaur>());
				std::cout << "Centaur successfully registered!" << std::endl;
			case 4:
				Ground.push_back(std::make_unique<Camel_fast>());
				std::cout << "Camel-fast successfully registered!" << std::endl;
			default:
				break;
			}
		}
		else if (type_race == 2)
		{
			//TODO: оптимизировать список транспортов, которые печатаются в консоль
			std::cout << "Race for air transport" << std::endl;
			std::cout << "Distance: " << distance << std::endl;
			std::cout << "1. Broomstick" << std::endl;
			std::cout << "2. Eagle" << std::endl;
			std::cout << "3. Magic-carpet" << std::endl;
			std::cout << "Select transport or 0 to end the registration process: ";
			std::cin >> value;
			switch (value)
			{
			case 0:
				break;
			case 1:
				Air.push_back(std::make_unique<Broomstick>());
				std::cout << "Broomstick successfully registered!" << std::endl;
			case 2:
				Air.push_back(std::make_unique<Eagle>());
				std::cout << "Eagle successfully registered!" << std::endl;
			case 3:
				Air.push_back(std::make_unique<Magic_carpet>());
				std::cout << "Magic_carpet successfully registered!" << std::endl;
			default:
				break;
			}
		}
		else if (type_race == 3)
		{
			//TODO: оптимизировать список транспортов, которые печатаются в консоль
			std::cout << "Race for ground and air transport" << std::endl;
			std::cout << "Distance: " << distance << std::endl;
			std::cout << "1. Boots" << std::endl;
			std::cout << "2. Broomstick" << std::endl;
			std::cout << "3. Camel" << std::endl;
			std::cout << "4. Centaur" << std::endl;
			std::cout << "5. Eagle" << std::endl;
			std::cout << "6. Camel-fast" << std::endl;
			std::cout << "7. Magic-carpet" << std::endl;
			std::cout << "Select transport or 0 to end the registration process: ";
			std::cin >> value;
			switch (value)
			{
			case 0:
				break;
			case 1:
				Ground.push_back(std::make_unique<Boots>());
				std::cout << "Boots successfully registered!" << std::endl;
			case 2:
				Air.push_back(std::make_unique<Broomstick>());
				std::cout << "Broomstick successfully registered!" << std::endl;
			case 3:
				Ground.push_back(std::make_unique<Camel>());
				std::cout << "Camel successfully registered!" << std::endl;
			case 4:
				Ground.push_back(std::make_unique<Centaur>());
				std::cout << "Centaur successfully registered!" << std::endl;
			case 5:
				Air.push_back(std::make_unique<Eagle>());
				std::cout << "Eagle successfully registered!" << std::endl;
			case 6:
				Ground.push_back(std::make_unique<Camel_fast>());
				std::cout << "Camel-fast successfully registered!" << std::endl;
			case 7:
				Air.push_back(std::make_unique<Magic_carpet>());
				std::cout << "Magic_carpet successfully registered!" << std::endl;
			default:
				break;
			}
		}
		else
		{
			std::cout << "Error";
		}

	} while (value != 0);
}