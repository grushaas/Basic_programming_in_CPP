#pragma once
#include "Ground-transport.h"

class Boots : public Ground_transport
{
public:
	RACINGDYNAMICLIBRARY_API Boots(int speed, int dtbr, int duration, std::string name_transport);
};
