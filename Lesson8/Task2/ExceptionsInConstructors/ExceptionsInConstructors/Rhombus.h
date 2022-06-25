#pragma once
#include "Figure.h"

class Rhombus : public Figure
{
public:
	Rhombus(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD);

protected:
	void print_sides();

	void print_angles();

private:
	int sideA, sideB, sideC, sideD;
	int angleA, angleB, angleC, angleD;
};
