#pragma once
#include "Figure.h"

class Square : public Figure
{
public:
	Square(int sideA);

protected:
	void print_sides();

	void print_angles();

private:
	int sideA, sideB, sideC, sideD;
	int angleA, angleB, angleC, angleD;
};