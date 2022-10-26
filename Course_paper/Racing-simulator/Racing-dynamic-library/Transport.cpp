#include "Transport.h"

Transport::Transport() {}

Transport::Transport(std::string type, int speed, int dtbr, int duration) 
	: type(type), speed(speed), dtbr(dtbr), duration(duration) {}