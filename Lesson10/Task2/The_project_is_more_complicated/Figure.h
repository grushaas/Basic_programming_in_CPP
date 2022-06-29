#pragma once
#include <string>

class Figure
{
public:
	void print();

protected:
	Figure(std::string name);

	virtual void print_sides();

	virtual void print_angles();

private:
	std::string name;
};