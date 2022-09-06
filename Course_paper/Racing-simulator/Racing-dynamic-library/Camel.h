#pragma once
#include <string>

class Camel
{
protected:
	int type;
	int speed;
	int driving_time;
	int duration;
	std::string nameTV;


public:
	Camel(int type, int speed, int driving_time, int duration, std::string nameTV);
};
