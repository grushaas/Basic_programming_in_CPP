#pragma once
#include "Ground-transport.h"
#include <string>

class Camel : public Ground_transport
{
public:
	RACINGDYNAMICLIBRARY_API Camel(int speed, int dtbr, int duration, std::string name_transport);
};
