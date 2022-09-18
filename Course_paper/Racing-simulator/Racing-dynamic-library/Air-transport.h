#pragma once
#include "Transport.h"

class Air_transport : public Transport
{
protected:
	std::string name_transport;

	Air_transport(int speed, std::string name_transport);
};