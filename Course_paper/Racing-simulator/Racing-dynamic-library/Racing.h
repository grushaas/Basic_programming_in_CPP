#pragma once
#include <memory>
#include <iostream>
#include "Camel.h"
#include "Camel-fast.h"
#include "Centaur.h"
#include "All-terrain-boots.h"
#include "Magic-carpet.h"
#include "Eagle.h"
#include "Broomstick.h"
#include <vector>

class Racing
{
private:
	std::vector<std::unique_ptr<Camel>> Ground;
	std::vector<std::unique_ptr<Magic_carpet>> Air;

public:
	int type_race;
	int distance;
	
	
	Racing(int distance);

	void Transport_registration();
	void Beginning();
};
