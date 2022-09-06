#pragma once
#include <string>

class Magic_carpet
{
protected:
	int type;
	int speed;
	std::string nameTV;

public:
	Magic_carpet(int type, int speed, std::string nameTV);
};