#pragma once
#ifdef RACINGDYNAMICLIBRARY_EXPORTS
#define RACINGDYNAMICLIBRARY_API __declspec(dllexport)
#else
#define RACINGDYNAMICLIBRARY_API __declspec(dllimport)
#endif // RACINGDYNAMICLIBRARY_EXPORTS

#include "Transport.h"
#include "Ground-transport.h"
#include "Air-transport.h"
#include "Camel.h"
#include "Camel-fast.h"
#include "Centaur.h"
#include "All-terrain-boots.h"
#include "Magic-carpet.h"
#include "Eagle.h"
#include "Broomstick.h"
#include <memory>
#include <iostream>
#include <vector>

class Racing
{
private:
	std::vector<std::shared_ptr<Transport>> vehicles = {
		std::make_shared<Boots>(6, 60, 10, "Boots"),
		std::make_shared<Camel>(10, 30, 5, "Camel"),
		std::make_shared<Camel_fast>(40, 10, 5, "Camel-fast"),
		std::make_shared<Centaur>(15, 8, 2, "Centaur"),
		std::make_shared<Eagle>(8, "Eagle"),
		std::make_shared<Broomstick>(20, "Broomstick"),
		std::make_shared<Magic_carpet>(10, "Magic-carpet"),
	};

	std::vector<std::shared_ptr<Transport>> regTransport;

	int type_race;
	int distance;

	void OutputRegisteredTransport();
	void OutputTransport(bool isAirVehicle);
public:
	void Transport_registration();
	RACINGDYNAMICLIBRARY_API void Beginning();
	void Race_results();
};
