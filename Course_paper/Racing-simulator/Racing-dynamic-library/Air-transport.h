#pragma once
#include "Transport.h"

class Air_transport : public Transport
{
protected:
	Air_transport(int speed, std::string name_transport);
};