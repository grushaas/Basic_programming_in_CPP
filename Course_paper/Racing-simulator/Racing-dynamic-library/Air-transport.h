#pragma once
#include "Transport.h"

class Air_transport : public Transport
{
public:
	std::string name_transport;

protected:
	Air_transport(int speed, std::string name_transport);
};