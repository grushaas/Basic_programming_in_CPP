#pragma once
#include "Ground-transport.h"

class Camel_fast : public Ground_transport
{
public:
	Camel_fast(int speed, int dtbr, int duration, std::string name_transport);
};