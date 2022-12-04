#pragma once
#include "Transport.h"

class Air_transport : public Transport
{
protected:
	RACINGDYNAMICLIBRARY_API Air_transport(int speed, std::string name_transport);
};