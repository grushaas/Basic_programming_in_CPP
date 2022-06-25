#pragma once
#include <string>

class Figure
{
public:
	void print();
	std::string name;

protected:
	Figure(std::string name);

	virtual void print_sides();

	virtual void print_angles();
	
};