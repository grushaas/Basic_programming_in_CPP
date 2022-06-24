#pragma once
#include "Figure.h"

class Quadrilateral : public Figure
{
public:
	Quadrilateral(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD) : Figure("Quadrilateral");

protected:
	void print_sides();

	void print_angles();

private:
	int sideA, sideB, sideC, sideD;
	int angleA, angleB, angleC, angleD;
};
