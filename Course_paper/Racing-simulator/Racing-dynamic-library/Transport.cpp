#include "Transport.h"

Transport::Transport(std::string type, int speed, int dtbr, int duration, std::string name_transport) 
	: type(type), speed(speed), dtbr(dtbr), duration(duration), name_transport(name_transport) {}

std::string Transport::name() const
{
	return name_transport;
}