#include "Racing.h"
#include <iostream>
#include <string>
#include <cstdlib>

void Racing::OutputRegisteredTransport()
{
	std::cout << "Registered vehicles: ";
	for (int i = 0; i < regTransport.size(); ++i)
	{
		std::cout << regTransport[i].get()->name() << (i < regTransport.size() - 1 ? ", " : "");
	}
	std::cout << std::endl;
}

void Racing::OutputTransport(bool isAirVehicle)
{
	if (isAirVehicle)
	{
		for (int i = 4; i < vehicles.size(); ++i)
		{
			std::cout << i - 3 << ". " << vehicles[i].get()->name() << std::endl;
		}
	}
	else
	{
		for (int i = 0; i < vehicles.size() - 3; ++i)
		{
			std::cout << i + 1 << ". " << vehicles[i].get()->name() << std::endl;
		}
	}
}

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

	system("CLS");

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
	//Наземная гонка
	if (type_race == 1)
	{
		int value = 1;
		while (value != 0)
		{
			std::cout << "Race for a ground vehicle. Distance: " << distance << std::endl;

			//Вывод зарегистрированного транспорта
			if (regTransport.size() != 0)
			{
				OutputRegisteredTransport();
			}

			//Вывод траснпорта
			OutputTransport(false);
			std::cout << "Select transport or 0 to end the registration process: ";
			std::cin >> value;

			system("CLS");

			//Занесение транспорта в массив регистрации
			switch (value)
			{
			case 1:
				regTransport.push_back(vehicles[0]);
				break;

			case 2:
				regTransport.push_back(vehicles[1]);
				break;

			case 3:
				regTransport.push_back(vehicles[2]);
				break;

			case 4:
				regTransport.push_back(vehicles[3]);
				break;

			case 0:
				break;

			default:
				break;
			}

			if (value != 0)
			{
				std::cout << regTransport.back().get()->name() << " successfully registered!" << std::endl;
			}

		}
	}
	else if (type_race == 2)
	{
		int value = 1;
		while (value != 0)
		{
			std::cout << "Race for a air vehicle. Distance: " << distance << std::endl;

			//Вывод зарегистрированного транспорта
			if (regTransport.size() != 0)
			{
				OutputRegisteredTransport();
			}

			//Вывод траснпорта
			OutputTransport(true);

			std::cout << "Select transport or 0 to end the registration process: ";
			std::cin >> value;

			system("CLS");

			//Занесение транспорта в массив регистрации
			switch (value)
			{
			case 1:
				regTransport.push_back(vehicles[4]);
				break;

			case 2:
				regTransport.push_back(vehicles[5]);
				break;

			case 3:
				regTransport.push_back(vehicles[6]);
				break;

			case 0:
				break;

			default:
				break;
			}

			if (value != 0)
			{
				std::cout << regTransport.back().get()->name() << " successfully registered!" << std::endl;
			}
		}
	}
	else if (type_race == 3)
	{
		int value = 1;
		while (value != 0)
		{
			std::cout << "Race for a ground and air vehicle. Distance: " << distance << std::endl;

			//Вывод зарегистрированного транспорта
			if (regTransport.size() != 0)
			{
				OutputRegisteredTransport();
			}

			//Вывод траснпорта
			for (int i = 0; i < vehicles.size(); ++i)
			{
				std::cout << i + 1 << ". " << vehicles[i].get()->name() << std::endl;
			}
			std::cout << "Select transport or 0 to end the registration process: ";
			std::cin >> value;

			system("CLS");

			//Занесение транспорта в массив регистрации
			switch (value)
			{
			case 1:
				regTransport.push_back(vehicles[0]);
				break;

			case 2:
				regTransport.push_back(vehicles[1]);
				break;

			case 3:
				regTransport.push_back(vehicles[2]);
				break;

			case 4:
				regTransport.push_back(vehicles[3]);
				break;

			case 5:
				regTransport.push_back(vehicles[4]);
				break;

			case 6:
				regTransport.push_back(vehicles[5]);
				break;

			case 7:
				regTransport.push_back(vehicles[6]);
				break;

			case 0:
				break;

			default:
				break;
			}

			if (value != 0)
			{
				std::cout << regTransport.back().get()->name() << " successfully registered!" << std::endl;
			}
		}
	}
	int choice = 0;
	std::cout << "1. Register a transport" << std::endl;
	std::cout << "2. Start the race" << std::endl;
	std::cout << "3. Exit" << std::endl;
	std::cout << "Select an action: ";
	std::cin >> choice;

	system("CLS");

	switch (choice)
	{
	case 1:
		Transport_registration();
		break;

	case 2:
		Race_results();
		break;

	case 3:
		break;

	default:
		break;
	}
}

void Racing::Race_results()
{

}