#pragma once
#include "Figure.h"

class Rectangle : public Figure
{
public:
	Rectangle(int sideA, int sideB);

protected:
	void print_sides();

	void print_angles();

private:
	int sideA, sideB, sideC, sideD;
	int angleA, angleB, angleC, angleD;
};