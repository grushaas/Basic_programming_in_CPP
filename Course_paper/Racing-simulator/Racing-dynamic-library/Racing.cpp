#include "Racing.h"
#include <iostream>
#include <string>

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
	int value = 1;

	if (type_race == 1)
	{
		do
		{
			//TODO: оптимизировать список транспортов, которые печатаются в консоль
			std::cout << "Race for ground transport. ";
			std::cout << "Distance: " << distance << std::endl;

			// Список зарегестрированных траспортных средств
			if (Ground.empty())
			{
				std::cout << "Registered vehicles: empty" << std::endl;
			}
			else
			{
				if (Ground.size() == 1)
				{
					std::cout << "Registered vehicles: ";
					auto const test = Ground[0].name_transport;
					std::cout << test << std::endl;
				}
				else
				{
					std::cout << "Registered vehicles: ";
					for (int i = Ground.size(); i > 0; --i)
					{
						std::cout << ", " << Ground[i].name_transport;
					}
				}
			}

			std::cout << std::endl;
			std::cout << "1. Boots" << std::endl;
			std::cout << "2. Camel" << std::endl;
			std::cout << "3. Centaur" << std::endl;
			std::cout << "4. Camel-fast" << std::endl;
			std::cout << "0. Exit from transport registration" << std::endl;
			std::cout << "Select transport or 0 to end the registration process: ";
			std::cin >> value;
			switch (value)
			{
			case 0:
				break;
			case 1:
				Ground.push_back(Boots(6, 60, 10, "Boots"));
				std::cout << "Boots successfully registered!" << std::endl;
				break;
			case 2:
				Ground.push_back(Camel(10, 30, 5, "Camel"));
				std::cout << "Camel successfully registered!" << std::endl;
				break;
			case 3:
				Ground.push_back(Centaur(15, 8, 2, "Centaur"));
				std::cout << "Centaur successfully registered!" << std::endl;
				break;
			case 4:
				Ground.push_back(Camel_fast(40, 10, 5, "Camel fast"));
				std::cout << "Camel-fast successfully registered!" << std::endl;
				break;
			default:
				break;
			}

		} while (value != 0);
	}
	else if (type_race == 2)
	{
		do
		{
			//TODO: оптимизировать список транспортов, которые печатаются в консоль
			std::cout << "Race for air transport" << std::endl;
			std::cout << "Distance: " << distance << std::endl;

			// Список зарегестрированных траспортных средств
			if (Air.empty())
			{
				std::cout << "Registered vehicles: empty" << std::endl;
			}
			else
			{
				if (Air.size() == 1)
				{
					std::cout << "Registered vehicles: ";
					for (const auto& elem : Air)
					{
						//std::cout << elem;
					}
				}
				else
				{
					std::cout << "Registered vehicles: ";
					for (const auto& elem : Air)
					{
						//std::cout << ", " << elem;
					}
				}
			}

			std::cout << "1. Broomstick" << std::endl;
			std::cout << "2. Eagle" << std::endl;
			std::cout << "3. Magic-carpet" << std::endl;
			std::cout << "0. Exit from transport registration" << std::endl;
			std::cout << "Select transport or 0 to end the registration process: ";
			std::cin >> value;
			switch (value)
			{
			case 0:
				break;
			case 1:
				Air.push_back(Broomstick(20, "Broomstick"));
				std::cout << "Broomstick successfully registered!" << std::endl;
				break;
			case 2:
				Air.push_back(Eagle(8, "Eagle"));
				std::cout << "Eagle successfully registered!" << std::endl;
				break;
			case 3:
				Air.push_back(Magic_carpet(10, "Magic carpet"));
				std::cout << "Magic_carpet successfully registered!" << std::endl;
				break;
			default:
				break;
			}

		} while (value != 0);
	}
	else if (type_race == 3)
	{
		do
		{
			//TODO: оптимизировать список транспортов, которые печатаются в консоль
			std::cout << "Race for ground and air transport" << std::endl;
			std::cout << "Distance: " << distance << std::endl;

			// Список зарегестрированных траспортных средств
			//TODO: Переписать проверку на уже зарегестрированных транспортных средств
			if (Air.empty())
			{
				std::cout << "Registered vehicles: empty" << std::endl;
			}
			else
			{
				if (Air.size() == 1)
				{
					std::cout << "Registered vehicles: ";
					for (const auto& elem : Air)
					{
						//std::cout << elem;
					}
				}
				else
				{
					std::cout << "Registered vehicles: ";
					for (const auto& elem : Air)
					{
						//std::cout << ", " << elem;
					}
				}
			}
			//-------------------------
			if (Ground.empty())
			{
				continue;
			}
			else
			{
				if (Ground.size() == 1)
				{
					std::cout << "Registered vehicles: ";
					for (const auto& elem : Ground)
					{
						//std::cout << elem;
					}
				}
				else
				{
					std::cout << "Registered vehicles: ";
					for (const auto& elem : Ground)
					{
						//std::cout << ", " << elem;
					}
				}
			}

			std::cout << "1. Boots" << std::endl;
			std::cout << "2. Broomstick" << std::endl;
			std::cout << "3. Camel" << std::endl;
			std::cout << "4. Centaur" << std::endl;
			std::cout << "5. Eagle" << std::endl;
			std::cout << "6. Camel-fast" << std::endl;
			std::cout << "7. Magic-carpet" << std::endl;
			std::cout << "0. Exit from transport registration" << std::endl;
			std::cout << "Select transport or 0 to end the registration process: ";
			std::cin >> value;
			switch (value)
			{
			case 0:
				break;
			case 1:
				Ground.push_back(Boots(6, 60, 10, "Boots"));
				std::cout << "Boots successfully registered!" << std::endl;
				break;
			case 2:
				Air.push_back(Broomstick(20, "Broomstick"));
				std::cout << "Broomstick successfully registered!" << std::endl;
				break;
			case 3:
				Ground.push_back(Camel(10, 30, 5, "Camel"));
				std::cout << "Camel successfully registered!" << std::endl;
				break;
			case 4:
				Ground.push_back(Centaur(15, 8, 2, "Centaur"));
				break;
				std::cout << "Centaur successfully registered!" << std::endl;
			case 5:
				Air.push_back(Eagle(8, "Eagle"));
				std::cout << "Eagle successfully registered!" << std::endl;
				break;
			case 6:
				Ground.push_back(Camel_fast(40, 10, 5, "Camel fast"));
				std::cout << "Camel-fast successfully registered!" << std::endl;
				break;
			case 7:
				Air.push_back(Magic_carpet(10, "Magic carpet"));
				std::cout << "Magic_carpet successfully registered!" << std::endl;
				break;
			default:
				break;
			}

		} while (value != 0);
	}
	else
	{
		std::cout << "Error";
	}

}

void Racing::Ending()
{
	if (type_race == 1)
	{
		for (int i = 0; i < Ground.size(); ++i)
		{
			
		}
	}
	else if (type_race == 2)
	{
		//air
	}
	else if (type_race == 3)
	{
		//ground and air
	}
	else
	{
		//error
	}
}

void Racing::Race_results()
{

}