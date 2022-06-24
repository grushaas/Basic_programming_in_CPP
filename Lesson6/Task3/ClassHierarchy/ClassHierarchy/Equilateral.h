#pragma once
#include "Figure.h"

class Equilateral : public Figure
{
public:
	Equilateral(int sideA);

protected:
	void print_sides();

	void print_angles();

private:
	int sideA, sideB, sideC;
	int angleA, angleB, angleC;
};
