#include "Racing.h"
#include <iostream>
#include <string>
#include <cstdlib>

void Racing::Beginning()
{
	int value = 1;
	std::cout << "Welcome to the racing simulator!" << std::endl;
	std::cout << "1. Race for ground transport" << std::endl;
	std::cout << "2. Race for air transport" << std::endl;
	std::cout << "3. Race for ground and air transport" << std::endl;
	std::cout << "Choose the type of race: ";
	std::cin >> type_race;

	std::cout << "Specify the distance length (Must be positive): ";
	std::cin >> distance;

	system("cls");

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
	int ending = 1;

	while (ending != 0)
	{
		if (type_race == 1)
		{
			std::cout << "Race for a ground vehicle. Distance: " << distance << std::endl;
			
			for (int i = 0; i < vehicles.size(); ++i)
			{
				std::cout << i + 1 << ". " << vehicles[i] << std::endl;
			}
		}
		else if (type_race == 2)
		{
			// Воздушная гонка
		}
		else if (type_race == 3)
		{
			// Смешанная гонка
		}
	}
}

void Racing::Ending()
{

}

void Racing::Race_results()
{

}