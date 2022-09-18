#include "Transport.h"

Transport::Transport(std::string type, int speed, int dtbr, int duration) 
	: type(type), speed(speed), dtbr(dtbr), duration(duration) {}

Transport::~Transport()
{
	type = "";
	speed = 0;
	dtbr = 0;
	duration = 0;
}