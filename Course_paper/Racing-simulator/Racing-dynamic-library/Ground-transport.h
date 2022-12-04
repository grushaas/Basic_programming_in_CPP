#pragma once
#include "Transport.h"

class Ground_transport : public Transport
{
protected:
	RACINGDYNAMICLIBRARY_API Ground_transport(int speed, int dtbr, int duration, std::string name_transport);
};