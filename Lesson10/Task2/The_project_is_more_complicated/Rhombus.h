#pragma once
#include "Figure.h"

class Rhombus : public Figure
{
public:
	Rhombus(int sideA, int angleA, int angleB);

protected:
	void print_sides();

	void print_angles();

private:
	int sideA, sideB, sideC, sideD;
	int angleA, angleB, angleC, angleD;
};
