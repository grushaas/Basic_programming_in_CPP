#pragma once
#include "Figure.h"

class Isosceles : public Figure
{
public:
	Isosceles(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC);

protected:
	void print_sides();

	void print_angles();

private:
	int sideA, sideB, sideC;
	int angleA, angleB, angleC;
};
