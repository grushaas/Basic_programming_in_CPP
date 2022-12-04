#pragma once
#include "Ground-transport.h"

class Centaur : public Ground_transport
{
public:
	RACINGDYNAMICLIBRARY_API Centaur(int speed, int dtbr, int duration, std::string name_transport);
};
